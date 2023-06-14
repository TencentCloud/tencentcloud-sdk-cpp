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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_UPDATENETWORKFIREWALLPOLICYDETAILREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_UPDATENETWORKFIREWALLPOLICYDETAILREQUEST_H_

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
                * UpdateNetworkFirewallPolicyDetail请求参数结构体
                */
                class UpdateNetworkFirewallPolicyDetailRequest : public AbstractModel
                {
                public:
                    UpdateNetworkFirewallPolicyDetailRequest();
                    ~UpdateNetworkFirewallPolicyDetailRequest() = default;
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
                     * 获取策略Id
                     * @return Id 策略Id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置策略Id
                     * @param _id 策略Id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取入站规则

全部允许：1

全部拒绝 ：2

自定义：3
                     * @return FromPolicyRule 入站规则

全部允许：1

全部拒绝 ：2

自定义：3
                     * 
                     */
                    int64_t GetFromPolicyRule() const;

                    /**
                     * 设置入站规则

全部允许：1

全部拒绝 ：2

自定义：3
                     * @param _fromPolicyRule 入站规则

全部允许：1

全部拒绝 ：2

自定义：3
                     * 
                     */
                    void SetFromPolicyRule(const int64_t& _fromPolicyRule);

                    /**
                     * 判断参数 FromPolicyRule 是否已赋值
                     * @return FromPolicyRule 是否已赋值
                     * 
                     */
                    bool FromPolicyRuleHasBeenSet() const;

                    /**
                     * 获取出站规则

全部允许：1

全部拒绝 ：2

自定义：3
                     * @return ToPolicyRule 出站规则

全部允许：1

全部拒绝 ：2

自定义：3
                     * 
                     */
                    int64_t GetToPolicyRule() const;

                    /**
                     * 设置出站规则

全部允许：1

全部拒绝 ：2

自定义：3
                     * @param _toPolicyRule 出站规则

全部允许：1

全部拒绝 ：2

自定义：3
                     * 
                     */
                    void SetToPolicyRule(const int64_t& _toPolicyRule);

                    /**
                     * 判断参数 ToPolicyRule 是否已赋值
                     * @return ToPolicyRule 是否已赋值
                     * 
                     */
                    bool ToPolicyRuleHasBeenSet() const;

                    /**
                     * 获取pod选择器
                     * @return PodSelector pod选择器
                     * 
                     */
                    std::string GetPodSelector() const;

                    /**
                     * 设置pod选择器
                     * @param _podSelector pod选择器
                     * 
                     */
                    void SetPodSelector(const std::string& _podSelector);

                    /**
                     * 判断参数 PodSelector 是否已赋值
                     * @return PodSelector 是否已赋值
                     * 
                     */
                    bool PodSelectorHasBeenSet() const;

                    /**
                     * 获取命名空间
                     * @return Namespace 命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间
                     * @param _namespace 命名空间
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

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

                    /**
                     * 获取自定义规则
                     * @return CustomPolicy 自定义规则
                     * 
                     */
                    std::vector<NetworkCustomPolicy> GetCustomPolicy() const;

                    /**
                     * 设置自定义规则
                     * @param _customPolicy 自定义规则
                     * 
                     */
                    void SetCustomPolicy(const std::vector<NetworkCustomPolicy>& _customPolicy);

                    /**
                     * 判断参数 CustomPolicy 是否已赋值
                     * @return CustomPolicy 是否已赋值
                     * 
                     */
                    bool CustomPolicyHasBeenSet() const;

                private:

                    /**
                     * 集群Id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 策略Id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 入站规则

全部允许：1

全部拒绝 ：2

自定义：3
                     */
                    int64_t m_fromPolicyRule;
                    bool m_fromPolicyRuleHasBeenSet;

                    /**
                     * 出站规则

全部允许：1

全部拒绝 ：2

自定义：3
                     */
                    int64_t m_toPolicyRule;
                    bool m_toPolicyRuleHasBeenSet;

                    /**
                     * pod选择器
                     */
                    std::string m_podSelector;
                    bool m_podSelectorHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 策略描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 自定义规则
                     */
                    std::vector<NetworkCustomPolicy> m_customPolicy;
                    bool m_customPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_UPDATENETWORKFIREWALLPOLICYDETAILREQUEST_H_
