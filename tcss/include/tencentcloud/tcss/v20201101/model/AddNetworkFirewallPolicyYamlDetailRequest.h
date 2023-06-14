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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ADDNETWORKFIREWALLPOLICYYAMLDETAILREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ADDNETWORKFIREWALLPOLICYYAMLDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * AddNetworkFirewallPolicyYamlDetail请求参数结构体
                */
                class AddNetworkFirewallPolicyYamlDetailRequest : public AbstractModel
                {
                public:
                    AddNetworkFirewallPolicyYamlDetailRequest();
                    ~AddNetworkFirewallPolicyYamlDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群Id
                     * @return ClusterId 集群Id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群Id
                     * @param _clusterId 集群Id
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
                     * 获取策略名
                     * @return PolicyName 策略名
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置策略名
                     * @param _policyName 策略名
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
                     * 获取base64编码的networkpolicy yaml字符串
                     * @return Yaml base64编码的networkpolicy yaml字符串
                     * 
                     */
                    std::string GetYaml() const;

                    /**
                     * 设置base64编码的networkpolicy yaml字符串
                     * @param _yaml base64编码的networkpolicy yaml字符串
                     * 
                     */
                    void SetYaml(const std::string& _yaml);

                    /**
                     * 判断参数 Yaml 是否已赋值
                     * @return Yaml 是否已赋值
                     * 
                     */
                    bool YamlHasBeenSet() const;

                    /**
                     * 获取策略描述
                     * @return Description 策略描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置策略描述
                     * @param _description 策略描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 集群Id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 策略名
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * base64编码的networkpolicy yaml字符串
                     */
                    std::string m_yaml;
                    bool m_yamlHasBeenSet;

                    /**
                     * 策略描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ADDNETWORKFIREWALLPOLICYYAMLDETAILREQUEST_H_
