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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_NETWORKPEER_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_NETWORKPEER_H_

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
                * 网络集群策略自定义规则
                */
                class NetworkPeer : public AbstractModel
                {
                public:
                    NetworkPeer();
                    ~NetworkPeer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对象类型：

命名空间：NamespaceSelector，代表NamespaceSelector有值

pod类型：PodSelector，代表NamespaceSelector和PodSelector都有值

ip类型：IPBlock，代表只有IPBlock有值
                     * @return PeerType 对象类型：

命名空间：NamespaceSelector，代表NamespaceSelector有值

pod类型：PodSelector，代表NamespaceSelector和PodSelector都有值

ip类型：IPBlock，代表只有IPBlock有值
                     * 
                     */
                    std::string GetPeerType() const;

                    /**
                     * 设置对象类型：

命名空间：NamespaceSelector，代表NamespaceSelector有值

pod类型：PodSelector，代表NamespaceSelector和PodSelector都有值

ip类型：IPBlock，代表只有IPBlock有值
                     * @param _peerType 对象类型：

命名空间：NamespaceSelector，代表NamespaceSelector有值

pod类型：PodSelector，代表NamespaceSelector和PodSelector都有值

ip类型：IPBlock，代表只有IPBlock有值
                     * 
                     */
                    void SetPeerType(const std::string& _peerType);

                    /**
                     * 判断参数 PeerType 是否已赋值
                     * @return PeerType 是否已赋值
                     * 
                     */
                    bool PeerTypeHasBeenSet() const;

                    /**
                     * 获取空间选择器
                     * @return NamespaceSelector 空间选择器
                     * 
                     */
                    std::string GetNamespaceSelector() const;

                    /**
                     * 设置空间选择器
                     * @param _namespaceSelector 空间选择器
                     * 
                     */
                    void SetNamespaceSelector(const std::string& _namespaceSelector);

                    /**
                     * 判断参数 NamespaceSelector 是否已赋值
                     * @return NamespaceSelector 是否已赋值
                     * 
                     */
                    bool NamespaceSelectorHasBeenSet() const;

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
                     * 获取Ip选择器
                     * @return IPBlock Ip选择器
                     * 
                     */
                    std::string GetIPBlock() const;

                    /**
                     * 设置Ip选择器
                     * @param _iPBlock Ip选择器
                     * 
                     */
                    void SetIPBlock(const std::string& _iPBlock);

                    /**
                     * 判断参数 IPBlock 是否已赋值
                     * @return IPBlock 是否已赋值
                     * 
                     */
                    bool IPBlockHasBeenSet() const;

                private:

                    /**
                     * 对象类型：

命名空间：NamespaceSelector，代表NamespaceSelector有值

pod类型：PodSelector，代表NamespaceSelector和PodSelector都有值

ip类型：IPBlock，代表只有IPBlock有值
                     */
                    std::string m_peerType;
                    bool m_peerTypeHasBeenSet;

                    /**
                     * 空间选择器
                     */
                    std::string m_namespaceSelector;
                    bool m_namespaceSelectorHasBeenSet;

                    /**
                     * pod选择器
                     */
                    std::string m_podSelector;
                    bool m_podSelectorHasBeenSet;

                    /**
                     * Ip选择器
                     */
                    std::string m_iPBlock;
                    bool m_iPBlockHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_NETWORKPEER_H_
