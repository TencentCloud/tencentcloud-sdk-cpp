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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_JOINRELATION_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_JOINRELATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/JoinRelationField.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * 多表关联原始表之间的关联信息
                */
                class JoinRelation : public AbstractModel
                {
                public:
                    JoinRelation();
                    ~JoinRelation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表关联关系id,前端使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JoinId 表关联关系id,前端使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJoinId() const;

                    /**
                     * 设置表关联关系id,前端使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _joinId 表关联关系id,前端使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJoinId(const std::string& _joinId);

                    /**
                     * 判断参数 JoinId 是否已赋值
                     * @return JoinId 是否已赋值
                     * 
                     */
                    bool JoinIdHasBeenSet() const;

                    /**
                     * 获取原表节点id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceTableNodeId 原表节点id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceTableNodeId() const;

                    /**
                     * 设置原表节点id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceTableNodeId 原表节点id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceTableNodeId(const std::string& _sourceTableNodeId);

                    /**
                     * 判断参数 SourceTableNodeId 是否已赋值
                     * @return SourceTableNodeId 是否已赋值
                     * 
                     */
                    bool SourceTableNodeIdHasBeenSet() const;

                    /**
                     * 获取目标表节点id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetTableNodeId 目标表节点id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetTableNodeId() const;

                    /**
                     * 设置目标表节点id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetTableNodeId 目标表节点id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetTableNodeId(const std::string& _targetTableNodeId);

                    /**
                     * 判断参数 TargetTableNodeId 是否已赋值
                     * @return TargetTableNodeId 是否已赋值
                     * 
                     */
                    bool TargetTableNodeIdHasBeenSet() const;

                    /**
                     * 获取多表关联的关联类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JoinType 多表关联的关联类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJoinType() const;

                    /**
                     * 设置多表关联的关联类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _joinType 多表关联的关联类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJoinType(const std::string& _joinType);

                    /**
                     * 判断参数 JoinType 是否已赋值
                     * @return JoinType 是否已赋值
                     * 
                     */
                    bool JoinTypeHasBeenSet() const;

                    /**
                     * 获取多表关联的字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Fields 多表关联的字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<JoinRelationField> GetFields() const;

                    /**
                     * 设置多表关联的字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fields 多表关联的字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFields(const std::vector<JoinRelationField>& _fields);

                    /**
                     * 判断参数 Fields 是否已赋值
                     * @return Fields 是否已赋值
                     * 
                     */
                    bool FieldsHasBeenSet() const;

                private:

                    /**
                     * 表关联关系id,前端使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_joinId;
                    bool m_joinIdHasBeenSet;

                    /**
                     * 原表节点id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceTableNodeId;
                    bool m_sourceTableNodeIdHasBeenSet;

                    /**
                     * 目标表节点id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetTableNodeId;
                    bool m_targetTableNodeIdHasBeenSet;

                    /**
                     * 多表关联的关联类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_joinType;
                    bool m_joinTypeHasBeenSet;

                    /**
                     * 多表关联的字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<JoinRelationField> m_fields;
                    bool m_fieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_JOINRELATION_H_
