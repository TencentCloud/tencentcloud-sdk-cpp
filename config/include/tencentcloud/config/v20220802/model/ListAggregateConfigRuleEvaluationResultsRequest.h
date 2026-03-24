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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTAGGREGATECONFIGRULEEVALUATIONRESULTSREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTAGGREGATECONFIGRULEEVALUATIONRESULTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * ListAggregateConfigRuleEvaluationResults请求参数结构体
                */
                class ListAggregateConfigRuleEvaluationResultsRequest : public AbstractModel
                {
                public:
                    ListAggregateConfigRuleEvaluationResultsRequest();
                    ~ListAggregateConfigRuleEvaluationResultsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>规则ID</p>
                     * @return ConfigRuleId <p>规则ID</p>
                     * 
                     */
                    std::string GetConfigRuleId() const;

                    /**
                     * 设置<p>规则ID</p>
                     * @param _configRuleId <p>规则ID</p>
                     * 
                     */
                    void SetConfigRuleId(const std::string& _configRuleId);

                    /**
                     * 判断参数 ConfigRuleId 是否已赋值
                     * @return ConfigRuleId 是否已赋值
                     * 
                     */
                    bool ConfigRuleIdHasBeenSet() const;

                    /**
                     * 获取<p>偏移量</p>
                     * @return Limit <p>偏移量</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>偏移量</p>
                     * @param _limit <p>偏移量</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>当前页</p>
                     * @return Offset <p>当前页</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>当前页</p>
                     * @param _offset <p>当前页</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>账号组ID</p>
                     * @return AccountGroupId <p>账号组ID</p>
                     * 
                     */
                    std::string GetAccountGroupId() const;

                    /**
                     * 设置<p>账号组ID</p>
                     * @param _accountGroupId <p>账号组ID</p>
                     * 
                     */
                    void SetAccountGroupId(const std::string& _accountGroupId);

                    /**
                     * 判断参数 AccountGroupId 是否已赋值
                     * @return AccountGroupId 是否已赋值
                     * 
                     */
                    bool AccountGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>类型</p>
                     * @return ResourceType <p>类型</p>
                     * 
                     */
                    std::vector<std::string> GetResourceType() const;

                    /**
                     * 设置<p>类型</p>
                     * @param _resourceType <p>类型</p>
                     * 
                     */
                    void SetResourceType(const std::vector<std::string>& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>评估结果 COMPLIANT：合规   NON_COMPLIANT：不合规</p>
                     * @return ComplianceType <p>评估结果 COMPLIANT：合规   NON_COMPLIANT：不合规</p>
                     * 
                     */
                    std::vector<std::string> GetComplianceType() const;

                    /**
                     * 设置<p>评估结果 COMPLIANT：合规   NON_COMPLIANT：不合规</p>
                     * @param _complianceType <p>评估结果 COMPLIANT：合规   NON_COMPLIANT：不合规</p>
                     * 
                     */
                    void SetComplianceType(const std::vector<std::string>& _complianceType);

                    /**
                     * 判断参数 ComplianceType 是否已赋值
                     * @return ComplianceType 是否已赋值
                     * 
                     */
                    bool ComplianceTypeHasBeenSet() const;

                    /**
                     * 获取<p>资源所属用户ID</p>
                     * @return ResourceOwnerId <p>资源所属用户ID</p>
                     * 
                     */
                    uint64_t GetResourceOwnerId() const;

                    /**
                     * 设置<p>资源所属用户ID</p>
                     * @param _resourceOwnerId <p>资源所属用户ID</p>
                     * 
                     */
                    void SetResourceOwnerId(const uint64_t& _resourceOwnerId);

                    /**
                     * 判断参数 ResourceOwnerId 是否已赋值
                     * @return ResourceOwnerId 是否已赋值
                     * 
                     */
                    bool ResourceOwnerIdHasBeenSet() const;

                    /**
                     * 获取<p>筛选的资源拥有者uin集合</p>
                     * @return ResourceOwnerIds <p>筛选的资源拥有者uin集合</p>
                     * 
                     */
                    std::vector<uint64_t> GetResourceOwnerIds() const;

                    /**
                     * 设置<p>筛选的资源拥有者uin集合</p>
                     * @param _resourceOwnerIds <p>筛选的资源拥有者uin集合</p>
                     * 
                     */
                    void SetResourceOwnerIds(const std::vector<uint64_t>& _resourceOwnerIds);

                    /**
                     * 判断参数 ResourceOwnerIds 是否已赋值
                     * @return ResourceOwnerIds 是否已赋值
                     * 
                     */
                    bool ResourceOwnerIdsHasBeenSet() const;

                private:

                    /**
                     * <p>规则ID</p>
                     */
                    std::string m_configRuleId;
                    bool m_configRuleIdHasBeenSet;

                    /**
                     * <p>偏移量</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>当前页</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>账号组ID</p>
                     */
                    std::string m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                    /**
                     * <p>类型</p>
                     */
                    std::vector<std::string> m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>评估结果 COMPLIANT：合规   NON_COMPLIANT：不合规</p>
                     */
                    std::vector<std::string> m_complianceType;
                    bool m_complianceTypeHasBeenSet;

                    /**
                     * <p>资源所属用户ID</p>
                     */
                    uint64_t m_resourceOwnerId;
                    bool m_resourceOwnerIdHasBeenSet;

                    /**
                     * <p>筛选的资源拥有者uin集合</p>
                     */
                    std::vector<uint64_t> m_resourceOwnerIds;
                    bool m_resourceOwnerIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTAGGREGATECONFIGRULEEVALUATIONRESULTSREQUEST_H_
