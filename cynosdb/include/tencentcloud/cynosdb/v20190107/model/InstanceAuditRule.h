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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCEAUDITRULE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCEAUDITRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/AuditRuleFilters.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 实例的审计规则详情，DescribeAuditRuleWithInstanceIds接口的出参。
                */
                class InstanceAuditRule : public AbstractModel
                {
                public:
                    InstanceAuditRule();
                    ~InstanceAuditRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID。
                     * @return InstanceId 实例ID。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param InstanceId 实例ID。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取是否是规则审计。true-规则审计，false-全审计。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuditRule 是否是规则审计。true-规则审计，false-全审计。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetAuditRule() const;

                    /**
                     * 设置是否是规则审计。true-规则审计，false-全审计。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AuditRule 是否是规则审计。true-规则审计，false-全审计。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAuditRule(const bool& _auditRule);

                    /**
                     * 判断参数 AuditRule 是否已赋值
                     * @return AuditRule 是否已赋值
                     */
                    bool AuditRuleHasBeenSet() const;

                    /**
                     * 获取审计规则详情。仅当AuditRule=true时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuditRuleFilters 审计规则详情。仅当AuditRule=true时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AuditRuleFilters> GetAuditRuleFilters() const;

                    /**
                     * 设置审计规则详情。仅当AuditRule=true时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AuditRuleFilters 审计规则详情。仅当AuditRule=true时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAuditRuleFilters(const std::vector<AuditRuleFilters>& _auditRuleFilters);

                    /**
                     * 判断参数 AuditRuleFilters 是否已赋值
                     * @return AuditRuleFilters 是否已赋值
                     */
                    bool AuditRuleFiltersHasBeenSet() const;

                private:

                    /**
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 是否是规则审计。true-规则审计，false-全审计。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_auditRule;
                    bool m_auditRuleHasBeenSet;

                    /**
                     * 审计规则详情。仅当AuditRule=true时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AuditRuleFilters> m_auditRuleFilters;
                    bool m_auditRuleFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCEAUDITRULE_H_
