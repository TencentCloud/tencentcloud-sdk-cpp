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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEAUDITPOLICIESREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEAUDITPOLICIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeAuditPolicies请求参数结构体
                */
                class DescribeAuditPoliciesRequest : public AbstractModel
                {
                public:
                    DescribeAuditPoliciesRequest();
                    ~DescribeAuditPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，格式如：cdb-c1nl9rpv 或者 cdbro-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * @return InstanceId 实例 ID，格式如：cdb-c1nl9rpv 或者 cdbro-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，格式如：cdb-c1nl9rpv 或者 cdbro-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * @param _instanceId 实例 ID，格式如：cdb-c1nl9rpv 或者 cdbro-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
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
                     * 获取审计策略名称。支持按审计策略名称进行模糊匹配查询。
                     * @return PolicyName 审计策略名称。支持按审计策略名称进行模糊匹配查询。
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置审计策略名称。支持按审计策略名称进行模糊匹配查询。
                     * @param _policyName 审计策略名称。支持按审计策略名称进行模糊匹配查询。
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
                     * 获取分页大小参数。默认值为 20，最小值为 1，最大值为 100。
                     * @return Limit 分页大小参数。默认值为 20，最小值为 1，最大值为 100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页大小参数。默认值为 20，最小值为 1，最大值为 100。
                     * @param _limit 分页大小参数。默认值为 20，最小值为 1，最大值为 100。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页偏移量。
                     * @return Offset 分页偏移量。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量。
                     * @param _offset 分页偏移量。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取审计规则 ID。可使用该审计规则 ID 查询到其关联的审计策略。
注意，参数 RuleId，InstanceId，PolicyId，PolicyName 必须至少传一个。
                     * @return RuleId 审计规则 ID。可使用该审计规则 ID 查询到其关联的审计策略。
注意，参数 RuleId，InstanceId，PolicyId，PolicyName 必须至少传一个。
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置审计规则 ID。可使用该审计规则 ID 查询到其关联的审计策略。
注意，参数 RuleId，InstanceId，PolicyId，PolicyName 必须至少传一个。
                     * @param _ruleId 审计规则 ID。可使用该审计规则 ID 查询到其关联的审计策略。
注意，参数 RuleId，InstanceId，PolicyId，PolicyName 必须至少传一个。
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
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param _instanceName 实例名称
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
                     * 实例 ID，格式如：cdb-c1nl9rpv 或者 cdbro-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 审计策略 ID。
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 审计策略名称。支持按审计策略名称进行模糊匹配查询。
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 分页大小参数。默认值为 20，最小值为 1，最大值为 100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移量。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 审计规则 ID。可使用该审计规则 ID 查询到其关联的审计策略。
注意，参数 RuleId，InstanceId，PolicyId，PolicyName 必须至少传一个。
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEAUDITPOLICIESREQUEST_H_
