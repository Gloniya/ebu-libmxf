/*
 * Avid data model extension definitions
 *
 * Copyright (C) 2006, British Broadcasting Corporation
 * All Rights Reserved.
 *
 * Author: Philip de Nier
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright notice,
 *       this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the British Broadcasting Corporation nor the names
 *       of its contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */



/* Note: defines are undefined at the end of the file, unless KEEP_DATA_MODEL_DEFS defined */


#if !defined (MXF_BASIC_TYPE_DEF)
#define MXF_BASIC_TYPE_DEF(typeId, name, size)
#endif
#if !defined (MXF_ARRAY_TYPE_DEF)
#define MXF_ARRAY_TYPE_DEF(typeId, name, elementTypeId, fixedSize)
#endif
#if !defined (MXF_COMPOUND_TYPE_DEF)
#define MXF_COMPOUND_TYPE_DEF(typeId, name)
#endif
#if !defined (MXF_COMPOUND_TYPE_MEMBER)
#define MXF_COMPOUND_TYPE_MEMBER(memberName, memberTypeId)
#endif
#if !defined (MXF_INTERPRETED_TYPE_DEF)
#define MXF_INTERPRETED_TYPE_DEF(typeId, name, interpretedTypeId, fixedSize)
#endif

#if !defined (MXF_LABEL)
#define MXF_LABEL(d0, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15)
#endif
#if !defined (MXF_SET_DEFINITION)
#define MXF_SET_DEFINITION(parentName, name, label)
#endif
#if !defined (MXF_ITEM_DEFINITION)
#define MXF_ITEM_DEFINITION(setName, name, label, localTag, typeId, isRequired)
#endif



/* types */

#define MXF_RGB_COLOR_TYPE  (MXF_EXTENSION_TYPE + 0)

MXF_COMPOUND_TYPE_DEF(MXF_RGB_COLOR_TYPE, "RGBColor");
MXF_COMPOUND_TYPE_MEMBER("Red", MXF_UINT16_TYPE);
MXF_COMPOUND_TYPE_MEMBER("Green", MXF_UINT16_TYPE);
MXF_COMPOUND_TYPE_MEMBER("Blue", MXF_UINT16_TYPE);




/* Meta-dictionary */


MXF_SET_DEFINITION(InterchangeObject, MetaDictionary,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x02, 0x25, 0x00, 0x00)
);

    MXF_ITEM_DEFINITION(MetaDictionary, ClassDefinitions,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x06, 0x01, 0x01, 0x07, 0x07, 0x00, 0x00, 0x00),
        0x0003,
        MXF_STRONGREFARRAY_TYPE,
        0
    );
    MXF_ITEM_DEFINITION(MetaDictionary, TypeDefinitions,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x06, 0x01, 0x01, 0x07, 0x08, 0x00, 0x00, 0x00),
        0x0004,
        MXF_STRONGREFARRAY_TYPE,
        0
    );


MXF_SET_DEFINITION(InterchangeObject, MetaDefinition,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x02, 0x24, 0x00, 0x00)
);

    MXF_ITEM_DEFINITION(MetaDefinition, Identification,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x06, 0x01, 0x01, 0x07, 0x13, 0x00, 0x00, 0x00),
        0x0005,
        MXF_UL_TYPE,
        1
    );
    MXF_ITEM_DEFINITION(MetaDefinition, Name,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x03, 0x02, 0x04, 0x01, 0x02, 0x01, 0x00, 0x00),
        0x0006,
        MXF_UTF16STRING_TYPE,
        1
    );
    MXF_ITEM_DEFINITION(MetaDefinition, Description,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x06, 0x01, 0x01, 0x07, 0x14, 0x01, 0x00, 0x00),
        0x0007,
        MXF_UTF16STRING_TYPE,
        0
    );


MXF_SET_DEFINITION(MetaDefinition, ClassDefinition,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x02, 0x01, 0x00, 0x00)
);

    MXF_ITEM_DEFINITION(ClassDefinition, ParentClass,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x06, 0x01, 0x01, 0x07, 0x01, 0x00, 0x00, 0x00),
        0x0008,
        MXF_WEAKREF_TYPE,
        1
    );
    MXF_ITEM_DEFINITION(ClassDefinition, Properties,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x06, 0x01, 0x01, 0x07, 0x02, 0x00, 0x00, 0x00),
        0x0009,
        MXF_STRONGREFARRAY_TYPE,
        0
    );
    MXF_ITEM_DEFINITION(ClassDefinition, IsConcrete,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x06, 0x01, 0x01, 0x07, 0x03, 0x00, 0x00, 0x00),
        0x000a,
        MXF_BOOLEAN_TYPE,
        1
    );


MXF_SET_DEFINITION(MetaDefinition, PropertyDefinition,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x02, 0x02, 0x00, 0x00)
);

    MXF_ITEM_DEFINITION(PropertyDefinition, Type,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x06, 0x01, 0x01, 0x07, 0x04, 0x00, 0x00, 0x00),
        0x000b,
        MXF_UL_TYPE,
        1
    );
    MXF_ITEM_DEFINITION(PropertyDefinition, IsOptional,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x03, 0x01, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00),
        0x000c,
        MXF_BOOLEAN_TYPE,
        1
    );
    MXF_ITEM_DEFINITION(PropertyDefinition, LocalIdentification,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x06, 0x01, 0x01, 0x07, 0x05, 0x00, 0x00, 0x00),
        0x000d,
        MXF_UINT16_TYPE,
        1
    );
    MXF_ITEM_DEFINITION(PropertyDefinition, IsUniqueIdentifier,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x06, 0x01, 0x01, 0x07, 0x06, 0x00, 0x00, 0x00),
        0x000e,
        MXF_BOOLEAN_TYPE,
        0
    );


MXF_SET_DEFINITION(MetaDefinition, TypeDefinition,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x02, 0x03, 0x00, 0x00)
);


MXF_SET_DEFINITION(TypeDefinition, TypeDefinitionCharacter,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x02, 0x23, 0x00, 0x00)
);


MXF_SET_DEFINITION(TypeDefinition, TypeDefinitionEnumeration,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x02, 0x07, 0x00, 0x00)
);

    MXF_ITEM_DEFINITION(TypeDefinitionEnumeration, Type,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x06, 0x01, 0x01, 0x07, 0x0b, 0x00, 0x00, 0x00),
        0x0014,
        MXF_WEAKREF_TYPE,
        1
    );
    MXF_ITEM_DEFINITION(TypeDefinitionEnumeration, Names,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x03, 0x01, 0x02, 0x03, 0x04, 0x00, 0x00, 0x00),
        0x0015,
        MXF_UTF16STRINGARRAY_TYPE,
        1
    );
    MXF_ITEM_DEFINITION(TypeDefinitionEnumeration, Values,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x03, 0x01, 0x02, 0x03, 0x05, 0x00, 0x00, 0x00),
        0x0016,
        MXF_INT64ARRAY_TYPE,
        1
    );


MXF_SET_DEFINITION(TypeDefinition, TypeDefinitionExtendibleEnumeration,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x02, 0x20, 0x00, 0x00)
);

    MXF_ITEM_DEFINITION(TypeDefinitionExtendibleEnumeration, Names,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x03, 0x01, 0x02, 0x03, 0x07, 0x00, 0x00, 0x00),
        0x001f,
        MXF_UTF16STRINGARRAY_TYPE,
        1
    );
    MXF_ITEM_DEFINITION(TypeDefinitionExtendibleEnumeration, Values,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x03, 0x01, 0x02, 0x03, 0x08, 0x00, 0x00, 0x00),
        0x0020,
        MXF_ULARRAY_TYPE,
        1
    );


MXF_SET_DEFINITION(TypeDefinition, TypeDefinitionFixedArray,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x02, 0x08, 0x00, 0x00)
);

    MXF_ITEM_DEFINITION(TypeDefinitionFixedArray, ElementType,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x06, 0x01, 0x01, 0x07, 0x0c, 0x00, 0x00, 0x00),
        0x0017,
        MXF_WEAKREF_TYPE,
        1
    );
    MXF_ITEM_DEFINITION(TypeDefinitionFixedArray, ElementCount,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x03, 0x01, 0x02, 0x03, 0x03, 0x00, 0x00, 0x00),
        0x0018,
        MXF_UINT32_TYPE,
        1
    );


MXF_SET_DEFINITION(TypeDefinition, TypeDefinitionInteger,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x02, 0x04, 0x00, 0x00)
);

    MXF_ITEM_DEFINITION(TypeDefinitionInteger, Size,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x03, 0x01, 0x02, 0x03, 0x01, 0x00, 0x00, 0x00),
        0x000f,
        MXF_UINT8_TYPE,
        1
    );
    MXF_ITEM_DEFINITION(TypeDefinitionInteger, IsSigned,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x03, 0x01, 0x02, 0x03, 0x02, 0x00, 0x00, 0x00),
        0x0010,
        MXF_BOOLEAN_TYPE,
        1
    );


MXF_SET_DEFINITION(TypeDefinition, TypeDefinitionIndirect,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x02, 0x21, 0x00, 0x00)
);


MXF_SET_DEFINITION(TypeDefinitionIndirect, TypeDefinitionOpaque,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x02, 0x22, 0x00, 0x00)
);


MXF_SET_DEFINITION(TypeDefinition, TypeDefinitionRecord,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x02, 0x0d, 0x00, 0x00)
);

    MXF_ITEM_DEFINITION(TypeDefinitionRecord, MemberTypes,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x06, 0x01, 0x01, 0x07, 0x11, 0x00, 0x00, 0x00),
        0x001c,
        MXF_WEAKREFARRAY_TYPE,
        1
    );
    MXF_ITEM_DEFINITION(TypeDefinitionRecord, MemberNames,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x03, 0x01, 0x02, 0x03, 0x06, 0x00, 0x00, 0x00),
        0x001d,
        MXF_UTF16STRINGARRAY_TYPE,
        1
    );


MXF_SET_DEFINITION(TypeDefinition, TypeDefinitionRename,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x02, 0x0e, 0x00, 0x00)
);

    MXF_ITEM_DEFINITION(TypeDefinitionRename, RenamedType,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x06, 0x01, 0x01, 0x07, 0x12, 0x00, 0x00, 0x00),
        0x001e,
        MXF_WEAKREF_TYPE,
        1
    );


MXF_SET_DEFINITION(TypeDefinition, TypeDefinitionSet,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x02, 0x0a, 0x00, 0x00)
);

    MXF_ITEM_DEFINITION(TypeDefinitionSet, ElementType,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x06, 0x01, 0x01, 0x07, 0x0e, 0x00, 0x00, 0x00),
        0x001a,
        MXF_WEAKREF_TYPE,
        1
    );


MXF_SET_DEFINITION(TypeDefinition, TypeDefinitionStream,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x02, 0x0c, 0x00, 0x00)
);


MXF_SET_DEFINITION(TypeDefinition, TypeDefinitionString,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x02, 0x0b, 0x00, 0x00)
);

    MXF_ITEM_DEFINITION(TypeDefinitionString, ElementType,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x06, 0x01, 0x01, 0x07, 0x0f, 0x00, 0x00, 0x00),
        0x001b,
        MXF_WEAKREF_TYPE,
        1
    );


MXF_SET_DEFINITION(TypeDefinition, TypeDefinitionStrongObjectReference,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x02, 0x05, 0x00, 0x00)
);

    MXF_ITEM_DEFINITION(TypeDefinitionStrongObjectReference, ReferencedType,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x06, 0x01, 0x01, 0x07, 0x09, 0x00, 0x00, 0x00),
        0x0011,
        MXF_WEAKREF_TYPE,
        1
    );


MXF_SET_DEFINITION(TypeDefinition, TypeDefinitionVariableArray,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x02, 0x09, 0x00, 0x00)
);

    MXF_ITEM_DEFINITION(TypeDefinitionVariableArray, ElementType,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x06, 0x01, 0x01, 0x07, 0x0d, 0x00, 0x00, 0x00),
        0x0019,
        MXF_WEAKREF_TYPE,
        1
    );


MXF_SET_DEFINITION(TypeDefinition, TypeDefinitionWeakObjectReference,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x02, 0x06, 0x00, 0x00)
);

    MXF_ITEM_DEFINITION(TypeDefinitionWeakObjectReference, ReferencedType,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x06, 0x01, 0x01, 0x07, 0x0a, 0x00, 0x00, 0x00),
        0x0012,
        MXF_WEAKREF_TYPE,
        1
    );
    MXF_ITEM_DEFINITION(TypeDefinitionWeakObjectReference, ReferenceTargetSet,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x03, 0x01, 0x02, 0x03, 0x0b, 0x00, 0x00, 0x00),
        0x0013,
        MXF_ULARRAY_TYPE,
        1
    );





/* Dictionary */


MXF_ITEM_DEFINITION(Preface, Dictionary,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x06, 0x01, 0x01, 0x04, 0x02, 0x02, 0x00, 0x00),
    0x3b04,
    MXF_STRONGREF_TYPE,
    0
);



MXF_SET_DEFINITION(InterchangeObject, Dictionary,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x01, 0x01, 0x22, 0x00)
);

    MXF_ITEM_DEFINITION(Dictionary, OperationDefinitions,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x06, 0x01, 0x01, 0x04, 0x05, 0x03, 0x00, 0x00),
        0x2603,
        MXF_STRONGREFARRAY_TYPE,
        0
    );
    MXF_ITEM_DEFINITION(Dictionary, ParameterDefinitions,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x06, 0x01, 0x01, 0x04, 0x05, 0x04, 0x00, 0x00),
        0x2604,
        MXF_STRONGREFARRAY_TYPE,
        0
    );
    MXF_ITEM_DEFINITION(Dictionary, DataDefinitions,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x06, 0x01, 0x01, 0x04, 0x05, 0x05, 0x00, 0x00),
        0x2605,
        MXF_STRONGREFARRAY_TYPE,
        0
    );
    MXF_ITEM_DEFINITION(Dictionary, PluginDefinitions,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x06, 0x01, 0x01, 0x04, 0x05, 0x06, 0x00, 0x00),
        0x2606,
        MXF_STRONGREFARRAY_TYPE,
        0
    );
    MXF_ITEM_DEFINITION(Dictionary, CodecDefinitions,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x06, 0x01, 0x01, 0x04, 0x05, 0x07, 0x00, 0x00),
        0x2607,
        MXF_STRONGREFARRAY_TYPE,
        0
    );
    MXF_ITEM_DEFINITION(Dictionary, ContainerDefinitions,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x06, 0x01, 0x01, 0x04, 0x05, 0x08, 0x00, 0x00),
        0x2608,
        MXF_STRONGREFARRAY_TYPE,
        0
    );
    MXF_ITEM_DEFINITION(Dictionary, InterpolationDefinitions,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x06, 0x01, 0x01, 0x04, 0x05, 0x09, 0x00, 0x00),
        0x2609,
        MXF_STRONGREFARRAY_TYPE,
        0
    );
    MXF_ITEM_DEFINITION(Dictionary, KLVDataDefinitions,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x07, 0x06, 0x01, 0x01, 0x04, 0x05, 0x0a, 0x00, 0x00),
        0x260a,
        MXF_STRONGREFARRAY_TYPE,
        0
    );
    MXF_ITEM_DEFINITION(Dictionary, TaggedValueDefinitions,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x07, 0x06, 0x01, 0x01, 0x04, 0x05, 0x0b, 0x00, 0x00),
        0x260b,
        MXF_STRONGREFARRAY_TYPE,
        0
    );




MXF_SET_DEFINITION(InterchangeObject, DefinitionObject,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x01, 0x01, 0x1a, 0x00)
);

    MXF_ITEM_DEFINITION(DefinitionObject, Identification,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x01, 0x01, 0x15, 0x03, 0x00, 0x00, 0x00, 0x00),
        0x1b01,
        MXF_UL_TYPE,
        1
    );
    MXF_ITEM_DEFINITION(DefinitionObject, Name,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x01, 0x07, 0x01, 0x02, 0x03, 0x01, 0x00, 0x00),
        0x1b02,
        MXF_UTF16STRING_TYPE,
        1
    );
    MXF_ITEM_DEFINITION(DefinitionObject, Description,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x03, 0x02, 0x03, 0x01, 0x02, 0x01, 0x00, 0x00),
        0x1b03,
        MXF_UTF16STRING_TYPE,
        0
    );


MXF_SET_DEFINITION(DefinitionObject, DataDefinition,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x01, 0x01, 0x1b, 0x00)
);


MXF_SET_DEFINITION(DefinitionObject, OperationDefinition,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x01, 0x01, 0x1c, 0x00)
);

    MXF_ITEM_DEFINITION(OperationDefinition, DataDefinition,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x05, 0x30, 0x05, 0x09, 0x00, 0x00, 0x00, 0x00),
        0x1e01,
        MXF_UL_TYPE,
        1
    );
    MXF_ITEM_DEFINITION(OperationDefinition, IsTimeWarp,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x01, 0x05, 0x30, 0x05, 0x03, 0x00, 0x00, 0x00, 0x00),
        0x1e02,
        MXF_BOOLEAN_TYPE,
        0
    );
    MXF_ITEM_DEFINITION(OperationDefinition, DegradeTo,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x06, 0x01, 0x01, 0x04, 0x04, 0x01, 0x00, 0x00),
        0x1e03,
        MXF_ULARRAY_TYPE,
        0
    );
    MXF_ITEM_DEFINITION(OperationDefinition, OperationCategory,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x05, 0x30, 0x05, 0x0a, 0x00, 0x00, 0x00, 0x00),
        0x1e06,
        MXF_UL_TYPE, /* extendible enumeration */
        0
    );
    MXF_ITEM_DEFINITION(OperationDefinition, NumberInputs,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x01, 0x05, 0x30, 0x05, 0x04, 0x00, 0x00, 0x00, 0x00),
        0x1e07,
        MXF_INT32_TYPE,
        1
    );
    MXF_ITEM_DEFINITION(OperationDefinition, Bypass,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x01, 0x05, 0x30, 0x05, 0x05, 0x00, 0x00, 0x00, 0x00),
        0x1e08,
        MXF_UINT32_TYPE,
        0
    );
    MXF_ITEM_DEFINITION(OperationDefinition, ParametersDefined,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x06, 0x01, 0x01, 0x04, 0x03, 0x02, 0x00, 0x00),
        0x1e09,
        MXF_ULBATCH_TYPE,
        0
    );


MXF_SET_DEFINITION(DefinitionObject, ParameterDefinition,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x01, 0x01, 0x1d, 0x00)
);

    MXF_ITEM_DEFINITION(ParameterDefinition, Type,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x06, 0x01, 0x01, 0x04, 0x01, 0x06, 0x00, 0x00),
        0x1f01,
        MXF_UL_TYPE,
        1
    );
    MXF_ITEM_DEFINITION(ParameterDefinition, DisplayUnits,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x05, 0x30, 0x05, 0x0b, 0x01, 0x00, 0x00, 0x00),
        0x1f03,
        MXF_UTF16STRING_TYPE,
        0
    );


MXF_SET_DEFINITION(DefinitionObject, PluginDefinition,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x01, 0x01, 0x1e, 0x00)
);

    MXF_ITEM_DEFINITION(PluginDefinition, PluginCategory,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x05, 0x20, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00),
        0x2203,
        MXF_UL_TYPE, /* extendible enumeration */
        1
    );
    MXF_ITEM_DEFINITION(PluginDefinition, VersionNumber,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x03, 0x03, 0x03, 0x01, 0x03, 0x00, 0x00, 0x00),
        0x2204,
        MXF_VERSIONTYPE_TYPE,
        1
    );
    MXF_ITEM_DEFINITION(PluginDefinition, VersionString,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x03, 0x03, 0x03, 0x01, 0x02, 0x01, 0x00, 0x00),
        0x2205,
        MXF_UTF16STRING_TYPE,
        0
    );
    MXF_ITEM_DEFINITION(PluginDefinition, Manufacturer,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x01, 0x0a, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00),
        0x2206,
        MXF_UTF16STRING_TYPE,
        0
    );
    MXF_ITEM_DEFINITION(PluginDefinition, ManufacturerInfo,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x06, 0x01, 0x01, 0x04, 0x02, 0x0b, 0x00, 0x00),
        0x2207,
        MXF_STRONGREF_TYPE,
        0
    );
    MXF_ITEM_DEFINITION(PluginDefinition, ManufacturerID,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x01, 0x0a, 0x01, 0x01, 0x03, 0x00, 0x00, 0x00),
        0x2208,
        MXF_UL_TYPE,
        0
    );
    MXF_ITEM_DEFINITION(PluginDefinition, Platform,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x05, 0x20, 0x09, 0x02, 0x00, 0x00, 0x00, 0x00),
        0x2209,
        MXF_UL_TYPE,
        0
    );
    MXF_ITEM_DEFINITION(PluginDefinition, MinPlatformVersion,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x05, 0x20, 0x09, 0x03, 0x00, 0x00, 0x00, 0x00),
        0x220a,
        MXF_VERSIONTYPE_TYPE,
        0
    );
    MXF_ITEM_DEFINITION(PluginDefinition, MaxPlatformVersion,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x05, 0x20, 0x09, 0x04, 0x00, 0x00, 0x00, 0x00),
        0x220b,
        MXF_VERSIONTYPE_TYPE,
        0
    );
    MXF_ITEM_DEFINITION(PluginDefinition, Engine,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x05, 0x20, 0x09, 0x05, 0x00, 0x00, 0x00, 0x00),
        0x220c,
        MXF_UL_TYPE,
        0
    );
    MXF_ITEM_DEFINITION(PluginDefinition, MinEngineVersion,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x05, 0x20, 0x09, 0x06, 0x00, 0x00, 0x00, 0x00),
        0x220d,
        MXF_VERSIONTYPE_TYPE,
        0
    );
    MXF_ITEM_DEFINITION(PluginDefinition, MaxEngineVersion,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x05, 0x20, 0x09, 0x07, 0x00, 0x00, 0x00, 0x00),
        0x220e,
        MXF_VERSIONTYPE_TYPE,
        0
    );
    MXF_ITEM_DEFINITION(PluginDefinition, PluginAPI,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x05, 0x20, 0x09, 0x08, 0x00, 0x00, 0x00, 0x00),
        0x220f,
        MXF_UL_TYPE,
        0
    );
    MXF_ITEM_DEFINITION(PluginDefinition, MinPluginAPI,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x05, 0x20, 0x09, 0x09, 0x00, 0x00, 0x00, 0x00),
        0x2210,
        MXF_VERSIONTYPE_TYPE,
        0
    );
    MXF_ITEM_DEFINITION(PluginDefinition, MaxPluginAPI,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x05, 0x20, 0x09, 0x0a, 0x00, 0x00, 0x00, 0x00),
        0x2211,
        MXF_VERSIONTYPE_TYPE,
        0
    );
    MXF_ITEM_DEFINITION(PluginDefinition, SoftwareOnly,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x05, 0x20, 0x09, 0x0b, 0x00, 0x00, 0x00, 0x00),
        0x2212,
        MXF_BOOLEAN_TYPE,
        0
    );
    MXF_ITEM_DEFINITION(PluginDefinition, Accelerator,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x05, 0x20, 0x09, 0x0c, 0x00, 0x00, 0x00, 0x00),
        0x2213,
        MXF_BOOLEAN_TYPE,
        0
    );
    MXF_ITEM_DEFINITION(PluginDefinition, Locators,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x05, 0x20, 0x09, 0x0d, 0x00, 0x00, 0x00, 0x00),
        0x2214,
        MXF_STRONGREFARRAY_TYPE,
        0
    );
    MXF_ITEM_DEFINITION(PluginDefinition, Authentication,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x05, 0x20, 0x09, 0x0e, 0x00, 0x00, 0x00, 0x00),
        0x2215,
        MXF_BOOLEAN_TYPE,
        0
    );
    MXF_ITEM_DEFINITION(PluginDefinition, DefinitionObject,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x05, 0x20, 0x09, 0x0f, 0x00, 0x00, 0x00, 0x00),
        0x2216,
        MXF_UL_TYPE,
        0
    );


MXF_SET_DEFINITION(DefinitionObject, CodecDefinition,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x01, 0x01, 0x1f, 0x00)
);

    MXF_ITEM_DEFINITION(CodecDefinition, FileDescriptorClass,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x06, 0x01, 0x01, 0x04, 0x01, 0x07, 0x00, 0x00),
        0x2301,
        MXF_UL_TYPE,
        1
    );
    MXF_ITEM_DEFINITION(CodecDefinition, DataDefinitions,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x06, 0x01, 0x01, 0x04, 0x03, 0x01, 0x00, 0x00),
        0x2302,
        MXF_ULARRAY_TYPE,
        1
    );


MXF_SET_DEFINITION(DefinitionObject, ContainerDefinition,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x01, 0x01, 0x20, 0x00)
);

    MXF_ITEM_DEFINITION(ContainerDefinition, EssenceIsIdentified,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x01, 0x03, 0x01, 0x02, 0x01, 0x03, 0x00, 0x00, 0x00),
        0x2401,
        MXF_BOOLEAN_TYPE,
        0
    );


MXF_SET_DEFINITION(DefinitionObject, InterpolationDefinition,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x01, 0x01, 0x21, 0x00)
);


MXF_SET_DEFINITION(DefinitionObject, TaggedValueDefinition,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x01, 0x01, 0x4c, 0x00)
);


MXF_SET_DEFINITION(DefinitionObject, KLVDataDefinition,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x01, 0x01, 0x4d, 0x00)
);




/* Miscellaneous */



MXF_ITEM_DEFINITION(Preface, ByteOrder,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x01, 0x03, 0x01, 0x02, 0x01, 0x02, 0x00, 0x00, 0x00),
    0x3b01,
    MXF_INT16_TYPE,
    0
);

MXF_ITEM_DEFINITION(Preface, ProjectName,
    MXF_LABEL(0xa5, 0xfb, 0x7b, 0x25, 0xf6, 0x15, 0x94, 0xb9, 0x62, 0xfc, 0x37, 0x17, 0x49, 0x2d, 0x42, 0xbf),
    0x0000,
    MXF_UTF16STRING_TYPE,
    0
);

MXF_ITEM_DEFINITION(Preface, ProjectEditRate,
    MXF_LABEL(0x8c, 0x70, 0xa7, 0x18, 0x46, 0x7a, 0xe4, 0x86, 0xf3, 0x65, 0x46, 0xb1, 0x38, 0x7c, 0x4e, 0xe9),
    0x0000,
    MXF_RATIONAL_TYPE,
    0
);

MXF_ITEM_DEFINITION(Preface, MasterMobID,
    MXF_LABEL(0xae, 0x58, 0x78, 0xe0, 0x41, 0x45, 0x41, 0x79, 0xff, 0xdd, 0x41, 0xe1, 0xae, 0x2c, 0x49, 0xc6),
    0x0000,
    MXF_UMID_TYPE,
    0
);

MXF_ITEM_DEFINITION(Preface, EssenceFileMobID,
    MXF_LABEL(0x8b, 0x2f, 0x68, 0xd, 0xff, 0x61, 0x13, 0x81, 0xab, 0xf1, 0xb7, 0x71, 0x8e, 0xfd, 0x48, 0x02),
    0x0000,
    MXF_UMID_TYPE,
    0
);



MXF_ITEM_DEFINITION(GenericPackage, ConvertFrameRate,
    MXF_LABEL(0xa8, 0xf3, 0xf2, 0xeb, 0xa5, 0x42, 0x44, 0xde, 0xd4, 0x24, 0x3b, 0xd4, 0x01, 0x42, 0x45, 0x95),
    0x0000,
    MXF_BOOLEAN_TYPE,
    0
);

MXF_ITEM_DEFINITION(GenericPackage, AppCode,
    MXF_LABEL(0xa0, 0x22, 0x0, 0x60, 0x94, 0xeb, 0x75, 0xcb, 0x96, 0xc4, 0x69, 0x92, 0x4f, 0x62, 0x11, 0xd3),
    0x0000,
    MXF_INT32_TYPE,
    0
);

MXF_ITEM_DEFINITION(GenericPackage, MobAttributeList,
    MXF_LABEL(0xa0, 0x1c, 0x00, 0x04, 0xac, 0x96, 0x9f, 0x50, 0x60, 0x95, 0x81, 0x83, 0x47, 0xb1, 0x11, 0xd4),
    0x0000,
    MXF_STRONGREFARRAY_TYPE,
    0
);



MXF_ITEM_DEFINITION(GenericPictureEssenceDescriptor, ResolutionID,
    MXF_LABEL(0xa0, 0x24, 0x0, 0x60, 0x94, 0xeb, 0x75, 0xcb, 0xce, 0x2a, 0xca, 0x4d, 0x51, 0xab, 0x11, 0xd3),
    0x0000,
    MXF_INT32_TYPE,
    0
);

MXF_ITEM_DEFINITION(GenericPictureEssenceDescriptor, FrameSampleSize,
    MXF_LABEL(0xa0, 0x24, 0x0, 0x60, 0x94, 0xeb, 0x75, 0xcb, 0xce, 0x2a, 0xca, 0x50, 0x51, 0xab, 0x11, 0xd3),
    0x0000,
    MXF_INT32_TYPE,
    0
);

MXF_ITEM_DEFINITION(GenericPictureEssenceDescriptor, ImageSize,
    MXF_LABEL(0xa0, 0x24, 0x0, 0x60, 0x94, 0xeb, 0x75, 0xcb, 0xce, 0x2a, 0xca, 0x4f, 0x51, 0xab, 0x11, 0xd3),
    0x0000,
    MXF_INT32_TYPE,
    0
);

MXF_ITEM_DEFINITION(GenericPictureEssenceDescriptor, FirstFrameOffset,
    MXF_LABEL(0xa0, 0x24, 0x0, 0x60, 0x94, 0xeb, 0x75, 0xcb, 0xce, 0x2a, 0xca, 0x4e, 0x51, 0xab, 0x11, 0xd3),
    0x0000,
    MXF_INT32_TYPE,
    0
);

MXF_ITEM_DEFINITION(TapeDescriptor, ColorFrame,
    MXF_LABEL(0xa0, 0x8f, 0x0, 0x60, 0x94, 0xeb, 0x75, 0xcb, 0x95, 0x48, 0xb0, 0x3a, 0x15, 0xfb, 0x11, 0xd4),
    0x0000,
    MXF_INT32_TYPE,
    0
);




MXF_ITEM_DEFINITION(DMSegment, CommentMarkerColor,
    MXF_LABEL(0xa0, 0x69, 0x00, 0x60, 0x94, 0xeb, 0x75, 0xcb, 0xe9, 0x6e, 0x6d, 0x44, 0xc3, 0x83, 0x11, 0xd3),
    0x0000,
    MXF_RGB_COLOR_TYPE,
    0
);


MXF_ITEM_DEFINITION(TaggedValue, TaggedValueAttributeList,
    MXF_LABEL(0xa0, 0x1c, 0x00, 0x04, 0xac, 0x96, 0x9f, 0x50, 0x60, 0x95, 0x81, 0x85, 0x47, 0xb1, 0x11, 0xd4),
    0x0000,
    MXF_STRONGREFARRAY_TYPE,
    0
);


MXF_ITEM_DEFINITION(EssenceGroup, EssenceGroupType,
    MXF_LABEL(0xa0, 0x83, 0x00, 0x60, 0x94, 0xeb, 0x75, 0xcb, 0xd9, 0xc9, 0xbf, 0x24, 0xf6, 0xb8, 0x11, 0xd3),
    0x0000,
    MXF_INT32_TYPE,
    0
);




#if !defined(KEEP_DATA_MODEL_DEFS)
#undef MXF_BASIC_TYPE_DEF
#undef MXF_ARRAY_TYPE_DEF
#undef MXF_COMPOUND_TYPE_DEF
#undef MXF_COMPOUND_TYPE_MEMBER
#undef MXF_INTERPRETED_TYPE_DEF
#undef MXF_LABEL
#undef MXF_SET_DEFINITION
#undef MXF_ITEM_DEFINITION
#endif


