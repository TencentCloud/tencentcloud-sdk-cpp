/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_INDEX_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_INDEX_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 索引结构
                */
                class Index : public AbstractModel
                {
                public:
                    Index();
                    ~Index() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字段键值类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 字段键值类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置字段键值类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 字段键值类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FieldNames 字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetFieldNames() const;

                    /**
                     * 设置字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fieldNames 字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFieldNames(const std::vector<std::string>& _fieldNames);

                    /**
                     * 判断参数 FieldNames 是否已赋值
                     * @return FieldNames 是否已赋值
                     * 
                     */
                    bool FieldNamesHasBeenSet() const;

                    /**
                     * 获取字段键值类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexType 字段键值类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexType() const;

                    /**
                     * 设置字段键值类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexType 字段键值类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexType(const std::string& _indexType);

                    /**
                     * 判断参数 IndexType 是否已赋值
                     * @return IndexType 是否已赋值
                     * 
                     */
                    bool IndexTypeHasBeenSet() const;

                private:

                    /**
                     * 字段键值类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_fieldNames;
                    bool m_fieldNamesHasBeenSet;

                    /**
                     * 字段键值类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexType;
                    bool m_indexTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_INDEX_H_
