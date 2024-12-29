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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_AUDITPOLICY_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_AUDITPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 审计策略
                */
                class AuditPolicy : public AbstractModel
                {
                public:
                    AuditPolicy();
                    ~AuditPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取审计策略 ID。
                     * @return PolicyId 审计策略 ID。
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置审计策略 ID。
                     * @param _policyId 审计策略 ID。
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取审计策略的状态。可能返回的值为：
"creating" - 创建中;
"running" - 运行中;
"paused" - 暂停中;
"failed" - 创建失败。
                     * @return Status 审计策略的状态。可能返回的值为：
"creating" - 创建中;
"running" - 运行中;
"paused" - 暂停中;
"failed" - 创建失败。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置审计策略的状态。可能返回的值为：
"creating" - 创建中;
"running" - 运行中;
"paused" - 暂停中;
"failed" - 创建失败。
                     * @param _status 审计策略的状态。可能返回的值为：
"creating" - 创建中;
"running" - 运行中;
"paused" - 暂停中;
"failed" - 创建失败。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取数据库实例 ID。
                     * @return InstanceId 数据库实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置数据库实例 ID。
                     * @param _instanceId 数据库实例 ID。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取审计策略创建时间。格式为 : "2019-03-20 17:09:13"。
                     * @return CreateTime 审计策略创建时间。格式为 : "2019-03-20 17:09:13"。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置审计策略创建时间。格式为 : "2019-03-20 17:09:13"。
                     * @param _createTime 审计策略创建时间。格式为 : "2019-03-20 17:09:13"。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取审计策略最后修改时间。格式为 : "2019-03-20 17:09:13"。
                     * @return ModifyTime 审计策略最后修改时间。格式为 : "2019-03-20 17:09:13"。
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置审计策略最后修改时间。格式为 : "2019-03-20 17:09:13"。
                     * @param _modifyTime 审计策略最后修改时间。格式为 : "2019-03-20 17:09:13"。
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取审计策略名称。
                     * @return PolicyName 审计策略名称。
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置审计策略名称。
                     * @param _policyName 审计策略名称。
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取审计规则 ID。
                     * @return RuleId 审计规则 ID。
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置审计规则 ID。
                     * @param _ruleId 审计规则 ID。
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取审计规则名称。
                     * @return RuleName 审计规则名称。
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置审计规则名称。
                     * @param _ruleName 审计规则名称。
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取数据库实例名称
                     * @return InstanceName 数据库实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置数据库实例名称
                     * @param _instanceName 数据库实例名称
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                private:

                    /**
                     * 审计策略 ID。
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 审计策略的状态。可能返回的值为：
"creating" - 创建中;
"running" - 运行中;
"paused" - 暂停中;
"failed" - 创建失败。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 数据库实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 审计策略创建时间。格式为 : "2019-03-20 17:09:13"。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 审计策略最后修改时间。格式为 : "2019-03-20 17:09:13"。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 审计策略名称。
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 审计规则 ID。
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 审计规则名称。
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 数据库实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_AUDITPOLICY_H_
