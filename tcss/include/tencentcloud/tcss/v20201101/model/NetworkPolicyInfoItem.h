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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_NETWORKPOLICYINFOITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_NETWORKPOLICYINFOITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 网络集群策略返回的结构体
                */
                class NetworkPolicyInfoItem : public AbstractModel
                {
                public:
                    NetworkPolicyInfoItem();
                    ~NetworkPolicyInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网络策略名
                     * @return Name 网络策略名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置网络策略名
                     * @param _name 网络策略名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取网络策略描述
                     * @return Description 网络策略描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置网络策略描述
                     * @param _description 网络策略描述
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
                     * 获取发布状态：

开启待确认：PublishedNoConfirm

开启已确认：PublishedConfirmed

关闭中：unPublishing

开启中：Publishing

待开启：unPublishEdit
                     * @return PublishStatus 发布状态：

开启待确认：PublishedNoConfirm

开启已确认：PublishedConfirmed

关闭中：unPublishing

开启中：Publishing

待开启：unPublishEdit
                     * 
                     */
                    std::string GetPublishStatus() const;

                    /**
                     * 设置发布状态：

开启待确认：PublishedNoConfirm

开启已确认：PublishedConfirmed

关闭中：unPublishing

开启中：Publishing

待开启：unPublishEdit
                     * @param _publishStatus 发布状态：

开启待确认：PublishedNoConfirm

开启已确认：PublishedConfirmed

关闭中：unPublishing

开启中：Publishing

待开启：unPublishEdit
                     * 
                     */
                    void SetPublishStatus(const std::string& _publishStatus);

                    /**
                     * 判断参数 PublishStatus 是否已赋值
                     * @return PublishStatus 是否已赋值
                     * 
                     */
                    bool PublishStatusHasBeenSet() const;

                    /**
                     * 获取策略类型：

自动发现：System

手动添加：Manual
                     * @return PolicySourceType 策略类型：

自动发现：System

手动添加：Manual
                     * 
                     */
                    std::string GetPolicySourceType() const;

                    /**
                     * 设置策略类型：

自动发现：System

手动添加：Manual
                     * @param _policySourceType 策略类型：

自动发现：System

手动添加：Manual
                     * 
                     */
                    void SetPolicySourceType(const std::string& _policySourceType);

                    /**
                     * 判断参数 PolicySourceType 是否已赋值
                     * @return PolicySourceType 是否已赋值
                     * 
                     */
                    bool PolicySourceTypeHasBeenSet() const;

                    /**
                     * 获取策略空间
                     * @return Namespace 策略空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置策略空间
                     * @param _namespace 策略空间
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
                     * 获取策略创建日期
                     * @return PolicyCreateTime 策略创建日期
                     * 
                     */
                    std::string GetPolicyCreateTime() const;

                    /**
                     * 设置策略创建日期
                     * @param _policyCreateTime 策略创建日期
                     * 
                     */
                    void SetPolicyCreateTime(const std::string& _policyCreateTime);

                    /**
                     * 判断参数 PolicyCreateTime 是否已赋值
                     * @return PolicyCreateTime 是否已赋值
                     * 
                     */
                    bool PolicyCreateTimeHasBeenSet() const;

                    /**
                     * 获取策略类型

kube-router：KubeRouter

cilium：Cilium
                     * @return NetworkPolicyPlugin 策略类型

kube-router：KubeRouter

cilium：Cilium
                     * 
                     */
                    std::string GetNetworkPolicyPlugin() const;

                    /**
                     * 设置策略类型

kube-router：KubeRouter

cilium：Cilium
                     * @param _networkPolicyPlugin 策略类型

kube-router：KubeRouter

cilium：Cilium
                     * 
                     */
                    void SetNetworkPolicyPlugin(const std::string& _networkPolicyPlugin);

                    /**
                     * 判断参数 NetworkPolicyPlugin 是否已赋值
                     * @return NetworkPolicyPlugin 是否已赋值
                     * 
                     */
                    bool NetworkPolicyPluginHasBeenSet() const;

                    /**
                     * 获取策略发布结果
                     * @return PublishResult 策略发布结果
                     * 
                     */
                    std::string GetPublishResult() const;

                    /**
                     * 设置策略发布结果
                     * @param _publishResult 策略发布结果
                     * 
                     */
                    void SetPublishResult(const std::string& _publishResult);

                    /**
                     * 判断参数 PublishResult 是否已赋值
                     * @return PublishResult 是否已赋值
                     * 
                     */
                    bool PublishResultHasBeenSet() const;

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
                     * 获取入站规则

全部允许：1

全部拒绝 ：2

自定义：3
                     * @return ToPolicyRule 入站规则

全部允许：1

全部拒绝 ：2

自定义：3
                     * 
                     */
                    int64_t GetToPolicyRule() const;

                    /**
                     * 设置入站规则

全部允许：1

全部拒绝 ：2

自定义：3
                     * @param _toPolicyRule 入站规则

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
                     * 获取作用对象
                     * @return PodSelector 作用对象
                     * 
                     */
                    std::string GetPodSelector() const;

                    /**
                     * 设置作用对象
                     * @param _podSelector 作用对象
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
                     * 获取网络策略Id
                     * @return Id 网络策略Id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置网络策略Id
                     * @param _id 网络策略Id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 网络策略名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 网络策略描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 发布状态：

开启待确认：PublishedNoConfirm

开启已确认：PublishedConfirmed

关闭中：unPublishing

开启中：Publishing

待开启：unPublishEdit
                     */
                    std::string m_publishStatus;
                    bool m_publishStatusHasBeenSet;

                    /**
                     * 策略类型：

自动发现：System

手动添加：Manual
                     */
                    std::string m_policySourceType;
                    bool m_policySourceTypeHasBeenSet;

                    /**
                     * 策略空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 策略创建日期
                     */
                    std::string m_policyCreateTime;
                    bool m_policyCreateTimeHasBeenSet;

                    /**
                     * 策略类型

kube-router：KubeRouter

cilium：Cilium
                     */
                    std::string m_networkPolicyPlugin;
                    bool m_networkPolicyPluginHasBeenSet;

                    /**
                     * 策略发布结果
                     */
                    std::string m_publishResult;
                    bool m_publishResultHasBeenSet;

                    /**
                     * 入站规则

全部允许：1

全部拒绝 ：2

自定义：3
                     */
                    int64_t m_fromPolicyRule;
                    bool m_fromPolicyRuleHasBeenSet;

                    /**
                     * 入站规则

全部允许：1

全部拒绝 ：2

自定义：3
                     */
                    int64_t m_toPolicyRule;
                    bool m_toPolicyRuleHasBeenSet;

                    /**
                     * 作用对象
                     */
                    std::string m_podSelector;
                    bool m_podSelectorHasBeenSet;

                    /**
                     * 网络策略Id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_NETWORKPOLICYINFOITEM_H_
