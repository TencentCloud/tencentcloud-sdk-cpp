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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_JOINRELATIONFIELD_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_JOINRELATIONFIELD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/TableField.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * 多表关联原始表之间使用的关联字段信息
                */
                class JoinRelationField : public AbstractModel
                {
                public:
                    JoinRelationField();
                    ~JoinRelationField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字段关联关系id,前端使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FieldJoinId 字段关联关系id,前端使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFieldJoinId() const;

                    /**
                     * 设置字段关联关系id,前端使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fieldJoinId 字段关联关系id,前端使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFieldJoinId(const std::string& _fieldJoinId);

                    /**
                     * 判断参数 FieldJoinId 是否已赋值
                     * @return FieldJoinId 是否已赋值
                     * 
                     */
                    bool FieldJoinIdHasBeenSet() const;

                    /**
                     * 获取原表字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceField 原表字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TableField GetSourceField() const;

                    /**
                     * 设置原表字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceField 原表字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceField(const TableField& _sourceField);

                    /**
                     * 判断参数 SourceField 是否已赋值
                     * @return SourceField 是否已赋值
                     * 
                     */
                    bool SourceFieldHasBeenSet() const;

                    /**
                     * 获取目标表字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetField 目标表字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TableField GetTargetField() const;

                    /**
                     * 设置目标表字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetField 目标表字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetField(const TableField& _targetField);

                    /**
                     * 判断参数 TargetField 是否已赋值
                     * @return TargetField 是否已赋值
                     * 
                     */
                    bool TargetFieldHasBeenSet() const;

                private:

                    /**
                     * 字段关联关系id,前端使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fieldJoinId;
                    bool m_fieldJoinIdHasBeenSet;

                    /**
                     * 原表字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TableField m_sourceField;
                    bool m_sourceFieldHasBeenSet;

                    /**
                     * 目标表字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TableField m_targetField;
                    bool m_targetFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_JOINRELATIONFIELD_H_
