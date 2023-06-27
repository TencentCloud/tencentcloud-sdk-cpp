/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SOURCEOBJECT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SOURCEOBJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 数据质量数据对象
                */
                class SourceObject : public AbstractModel
                {
                public:
                    SourceObject();
                    ~SourceObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源字段详细类型，int、string
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceObjectDataTypeName 源字段详细类型，int、string
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetSourceObjectDataTypeName() const;

                    /**
                     * 设置源字段详细类型，int、string
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceObjectDataTypeName 源字段详细类型，int、string
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetSourceObjectDataTypeName(const std::string& _sourceObjectDataTypeName);

                    /**
                     * 判断参数 SourceObjectDataTypeName 是否已赋值
                     * @return SourceObjectDataTypeName 是否已赋值
                     * @deprecated
                     */
                    bool SourceObjectDataTypeNameHasBeenSet() const;

                    /**
                     * 获取源字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceObjectValue 源字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetSourceObjectValue() const;

                    /**
                     * 设置源字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceObjectValue 源字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetSourceObjectValue(const std::string& _sourceObjectValue);

                    /**
                     * 判断参数 SourceObjectValue 是否已赋值
                     * @return SourceObjectValue 是否已赋值
                     * @deprecated
                     */
                    bool SourceObjectValueHasBeenSet() const;

                    /**
                     * 获取源字段详细类型，int、string
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ObjectDataTypeName 源字段详细类型，int、string
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetObjectDataTypeName() const;

                    /**
                     * 设置源字段详细类型，int、string
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _objectDataTypeName 源字段详细类型，int、string
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetObjectDataTypeName(const std::string& _objectDataTypeName);

                    /**
                     * 判断参数 ObjectDataTypeName 是否已赋值
                     * @return ObjectDataTypeName 是否已赋值
                     * 
                     */
                    bool ObjectDataTypeNameHasBeenSet() const;

                    /**
                     * 获取源字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ObjectValue 源字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetObjectValue() const;

                    /**
                     * 设置源字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _objectValue 源字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetObjectValue(const std::string& _objectValue);

                    /**
                     * 判断参数 ObjectValue 是否已赋值
                     * @return ObjectValue 是否已赋值
                     * 
                     */
                    bool ObjectValueHasBeenSet() const;

                    /**
                     * 获取对象类型 1.常量  2.离线表级   3.离线字段级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ObjectType 对象类型 1.常量  2.离线表级   3.离线字段级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetObjectType() const;

                    /**
                     * 设置对象类型 1.常量  2.离线表级   3.离线字段级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _objectType 对象类型 1.常量  2.离线表级   3.离线字段级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetObjectType(const uint64_t& _objectType);

                    /**
                     * 判断参数 ObjectType 是否已赋值
                     * @return ObjectType 是否已赋值
                     * 
                     */
                    bool ObjectTypeHasBeenSet() const;

                private:

                    /**
                     * 源字段详细类型，int、string
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceObjectDataTypeName;
                    bool m_sourceObjectDataTypeNameHasBeenSet;

                    /**
                     * 源字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceObjectValue;
                    bool m_sourceObjectValueHasBeenSet;

                    /**
                     * 源字段详细类型，int、string
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_objectDataTypeName;
                    bool m_objectDataTypeNameHasBeenSet;

                    /**
                     * 源字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_objectValue;
                    bool m_objectValueHasBeenSet;

                    /**
                     * 对象类型 1.常量  2.离线表级   3.离线字段级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_objectType;
                    bool m_objectTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SOURCEOBJECT_H_
