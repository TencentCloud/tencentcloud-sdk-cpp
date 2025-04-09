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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_SECURITYGROUPPOLICYSET_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_SECURITYGROUPPOLICYSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/SecurityGroupPolicy.h>
#include <tencentcloud/vpc/v20170312/model/PolicyStatistics.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 安全组规则集合
                */
                class SecurityGroupPolicySet : public AbstractModel
                {
                public:
                    SecurityGroupPolicySet();
                    ~SecurityGroupPolicySet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取安全组规则当前版本。用户每次更新安全规则版本会自动加1，防止更新的路由规则已过期，不填不考虑冲突。
                     * @return Version 安全组规则当前版本。用户每次更新安全规则版本会自动加1，防止更新的路由规则已过期，不填不考虑冲突。
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置安全组规则当前版本。用户每次更新安全规则版本会自动加1，防止更新的路由规则已过期，不填不考虑冲突。
                     * @param _version 安全组规则当前版本。用户每次更新安全规则版本会自动加1，防止更新的路由规则已过期，不填不考虑冲突。
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取出站规则。
                     * @return Egress 出站规则。
                     * 
                     */
                    std::vector<SecurityGroupPolicy> GetEgress() const;

                    /**
                     * 设置出站规则。
                     * @param _egress 出站规则。
                     * 
                     */
                    void SetEgress(const std::vector<SecurityGroupPolicy>& _egress);

                    /**
                     * 判断参数 Egress 是否已赋值
                     * @return Egress 是否已赋值
                     * 
                     */
                    bool EgressHasBeenSet() const;

                    /**
                     * 获取入站规则。
                     * @return Ingress 入站规则。
                     * 
                     */
                    std::vector<SecurityGroupPolicy> GetIngress() const;

                    /**
                     * 设置入站规则。
                     * @param _ingress 入站规则。
                     * 
                     */
                    void SetIngress(const std::vector<SecurityGroupPolicy>& _ingress);

                    /**
                     * 判断参数 Ingress 是否已赋值
                     * @return Ingress 是否已赋值
                     * 
                     */
                    bool IngressHasBeenSet() const;

                    /**
                     * 获取安全组策略条目统计。只用于出参。
                     * @return PolicyStatistics 安全组策略条目统计。只用于出参。
                     * 
                     */
                    PolicyStatistics GetPolicyStatistics() const;

                    /**
                     * 设置安全组策略条目统计。只用于出参。
                     * @param _policyStatistics 安全组策略条目统计。只用于出参。
                     * 
                     */
                    void SetPolicyStatistics(const PolicyStatistics& _policyStatistics);

                    /**
                     * 判断参数 PolicyStatistics 是否已赋值
                     * @return PolicyStatistics 是否已赋值
                     * 
                     */
                    bool PolicyStatisticsHasBeenSet() const;

                private:

                    /**
                     * 安全组规则当前版本。用户每次更新安全规则版本会自动加1，防止更新的路由规则已过期，不填不考虑冲突。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 出站规则。
                     */
                    std::vector<SecurityGroupPolicy> m_egress;
                    bool m_egressHasBeenSet;

                    /**
                     * 入站规则。
                     */
                    std::vector<SecurityGroupPolicy> m_ingress;
                    bool m_ingressHasBeenSet;

                    /**
                     * 安全组策略条目统计。只用于出参。
                     */
                    PolicyStatistics m_policyStatistics;
                    bool m_policyStatisticsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_SECURITYGROUPPOLICYSET_H_
