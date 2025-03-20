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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBENETWORKFIREWALLPOLICYDETAILRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBENETWORKFIREWALLPOLICYDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/NetworkCustomPolicy.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeNetworkFirewallPolicyDetail返回参数结构体
                */
                class DescribeNetworkFirewallPolicyDetailResponse : public AbstractModel
                {
                public:
                    DescribeNetworkFirewallPolicyDetailResponse();
                    ~DescribeNetworkFirewallPolicyDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群Id
                     * @return ClusterId 集群Id
                     * 
                     */
                    std::string GetClusterId() const;

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
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取命名空间
                     * @return Namespace 命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取入站类型
                     * @return FromPolicyRule 入站类型
                     * 
                     */
                    int64_t GetFromPolicyRule() const;

                    /**
                     * 判断参数 FromPolicyRule 是否已赋值
                     * @return FromPolicyRule 是否已赋值
                     * 
                     */
                    bool FromPolicyRuleHasBeenSet() const;

                    /**
                     * 获取出站类型
                     * @return ToPolicyRule 出站类型
                     * 
                     */
                    int64_t GetToPolicyRule() const;

                    /**
                     * 判断参数 ToPolicyRule 是否已赋值
                     * @return ToPolicyRule 是否已赋值
                     * 
                     */
                    bool ToPolicyRuleHasBeenSet() const;

                    /**
                     * 获取自定义规则
                     * @return CustomPolicy 自定义规则
                     * 
                     */
                    std::vector<NetworkCustomPolicy> GetCustomPolicy() const;

                    /**
                     * 判断参数 CustomPolicy 是否已赋值
                     * @return CustomPolicy 是否已赋值
                     * 
                     */
                    bool CustomPolicyHasBeenSet() const;

                    /**
                     * 获取pod选择器
                     * @return PodSelector pod选择器
                     * 
                     */
                    std::string GetPodSelector() const;

                    /**
                     * 判断参数 PodSelector 是否已赋值
                     * @return PodSelector 是否已赋值
                     * 
                     */
                    bool PodSelectorHasBeenSet() const;

                    /**
                     * 获取策略描述
                     * @return Description 策略描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取策略创建时间
                     * @return PolicyCreateTime 策略创建时间
                     * 
                     */
                    std::string GetPolicyCreateTime() const;

                    /**
                     * 判断参数 PolicyCreateTime 是否已赋值
                     * @return PolicyCreateTime 是否已赋值
                     * 
                     */
                    bool PolicyCreateTimeHasBeenSet() const;

                    /**
                     * 获取策略源类型，分为System和Manual，分别代表手动和系统添加
                     * @return PolicySourceType 策略源类型，分为System和Manual，分别代表手动和系统添加
                     * 
                     */
                    std::string GetPolicySourceType() const;

                    /**
                     * 判断参数 PolicySourceType 是否已赋值
                     * @return PolicySourceType 是否已赋值
                     * 
                     */
                    bool PolicySourceTypeHasBeenSet() const;

                    /**
                     * 获取网络策略对应的网络插件
                     * @return NetworkPolicyPlugin 网络策略对应的网络插件
                     * 
                     */
                    std::string GetNetworkPolicyPlugin() const;

                    /**
                     * 判断参数 NetworkPolicyPlugin 是否已赋值
                     * @return NetworkPolicyPlugin 是否已赋值
                     * 
                     */
                    bool NetworkPolicyPluginHasBeenSet() const;

                    /**
                     * 获取网络策略状态
                     * @return PublishStatus 网络策略状态
                     * 
                     */
                    std::string GetPublishStatus() const;

                    /**
                     * 判断参数 PublishStatus 是否已赋值
                     * @return PublishStatus 是否已赋值
                     * 
                     */
                    bool PublishStatusHasBeenSet() const;

                    /**
                     * 获取网络发布结果
                     * @return PublishResult 网络发布结果
                     * 
                     */
                    std::string GetPublishResult() const;

                    /**
                     * 判断参数 PublishResult 是否已赋值
                     * @return PublishResult 是否已赋值
                     * 
                     */
                    bool PublishResultHasBeenSet() const;

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
                     * 命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 入站类型
                     */
                    int64_t m_fromPolicyRule;
                    bool m_fromPolicyRuleHasBeenSet;

                    /**
                     * 出站类型
                     */
                    int64_t m_toPolicyRule;
                    bool m_toPolicyRuleHasBeenSet;

                    /**
                     * 自定义规则
                     */
                    std::vector<NetworkCustomPolicy> m_customPolicy;
                    bool m_customPolicyHasBeenSet;

                    /**
                     * pod选择器
                     */
                    std::string m_podSelector;
                    bool m_podSelectorHasBeenSet;

                    /**
                     * 策略描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 策略创建时间
                     */
                    std::string m_policyCreateTime;
                    bool m_policyCreateTimeHasBeenSet;

                    /**
                     * 策略源类型，分为System和Manual，分别代表手动和系统添加
                     */
                    std::string m_policySourceType;
                    bool m_policySourceTypeHasBeenSet;

                    /**
                     * 网络策略对应的网络插件
                     */
                    std::string m_networkPolicyPlugin;
                    bool m_networkPolicyPluginHasBeenSet;

                    /**
                     * 网络策略状态
                     */
                    std::string m_publishStatus;
                    bool m_publishStatusHasBeenSet;

                    /**
                     * 网络发布结果
                     */
                    std::string m_publishResult;
                    bool m_publishResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBENETWORKFIREWALLPOLICYDETAILRESPONSE_H_
