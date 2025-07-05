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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERENDPOINTSPREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERENDPOINTSPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * ModifyClusterEndpointSP请求参数结构体
                */
                class ModifyClusterEndpointSPRequest : public AbstractModel
                {
                public:
                    ModifyClusterEndpointSPRequest();
                    ~ModifyClusterEndpointSPRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取安全策略放通单个IP或CIDR(例如: "192.168.1.0/24",默认为拒绝所有)
                     * @return SecurityPolicies 安全策略放通单个IP或CIDR(例如: "192.168.1.0/24",默认为拒绝所有)
                     * 
                     */
                    std::vector<std::string> GetSecurityPolicies() const;

                    /**
                     * 设置安全策略放通单个IP或CIDR(例如: "192.168.1.0/24",默认为拒绝所有)
                     * @param _securityPolicies 安全策略放通单个IP或CIDR(例如: "192.168.1.0/24",默认为拒绝所有)
                     * 
                     */
                    void SetSecurityPolicies(const std::vector<std::string>& _securityPolicies);

                    /**
                     * 判断参数 SecurityPolicies 是否已赋值
                     * @return SecurityPolicies 是否已赋值
                     * 
                     */
                    bool SecurityPoliciesHasBeenSet() const;

                    /**
                     * 获取修改外网访问安全组
                     * @return SecurityGroup 修改外网访问安全组
                     * 
                     */
                    std::string GetSecurityGroup() const;

                    /**
                     * 设置修改外网访问安全组
                     * @param _securityGroup 修改外网访问安全组
                     * 
                     */
                    void SetSecurityGroup(const std::string& _securityGroup);

                    /**
                     * 判断参数 SecurityGroup 是否已赋值
                     * @return SecurityGroup 是否已赋值
                     * 
                     */
                    bool SecurityGroupHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 安全策略放通单个IP或CIDR(例如: "192.168.1.0/24",默认为拒绝所有)
                     */
                    std::vector<std::string> m_securityPolicies;
                    bool m_securityPoliciesHasBeenSet;

                    /**
                     * 修改外网访问安全组
                     */
                    std::string m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERENDPOINTSPREQUEST_H_
