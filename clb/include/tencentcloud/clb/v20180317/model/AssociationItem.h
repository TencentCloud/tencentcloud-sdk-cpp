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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_ASSOCIATIONITEM_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_ASSOCIATIONITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 目标组关联到的规则
                */
                class AssociationItem : public AbstractModel
                {
                public:
                    AssociationItem();
                    ~AssociationItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取关联到的负载均衡ID
                     * @return LoadBalancerId 关联到的负载均衡ID
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置关联到的负载均衡ID
                     * @param _loadBalancerId 关联到的负载均衡ID
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取关联到的监听器ID
                     * @return ListenerId 关联到的监听器ID
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置关联到的监听器ID
                     * @param _listenerId 关联到的监听器ID
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取关联到的转发规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LocationId 关联到的转发规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置关联到的转发规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _locationId 关联到的转发规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLocationId(const std::string& _locationId);

                    /**
                     * 判断参数 LocationId 是否已赋值
                     * @return LocationId 是否已赋值
                     * 
                     */
                    bool LocationIdHasBeenSet() const;

                    /**
                     * 获取关联到的监听器协议类型，如HTTP,TCP,
                     * @return Protocol 关联到的监听器协议类型，如HTTP,TCP,
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置关联到的监听器协议类型，如HTTP,TCP,
                     * @param _protocol 关联到的监听器协议类型，如HTTP,TCP,
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取关联到的监听器端口
                     * @return Port 关联到的监听器端口
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置关联到的监听器端口
                     * @param _port 关联到的监听器端口
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取关联到的转发规则域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Domain 关联到的转发规则域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置关联到的转发规则域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domain 关联到的转发规则域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取关联到的转发规则URL
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Url 关联到的转发规则URL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置关联到的转发规则URL
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _url 关联到的转发规则URL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取负载均衡名称
                     * @return LoadBalancerName 负载均衡名称
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置负载均衡名称
                     * @param _loadBalancerName 负载均衡名称
                     * 
                     */
                    void SetLoadBalancerName(const std::string& _loadBalancerName);

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     * 
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                    /**
                     * 获取监听器名称
                     * @return ListenerName 监听器名称
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置监听器名称
                     * @param _listenerName 监听器名称
                     * 
                     */
                    void SetListenerName(const std::string& _listenerName);

                    /**
                     * 判断参数 ListenerName 是否已赋值
                     * @return ListenerName 是否已赋值
                     * 
                     */
                    bool ListenerNameHasBeenSet() const;

                    /**
                     * 获取关联目标组的权重， 该参数只有v2新版目标组生效。
                     * @return Weight 关联目标组的权重， 该参数只有v2新版目标组生效。
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置关联目标组的权重， 该参数只有v2新版目标组生效。
                     * @param _weight 关联目标组的权重， 该参数只有v2新版目标组生效。
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                private:

                    /**
                     * 关联到的负载均衡ID
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 关联到的监听器ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 关联到的转发规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * 关联到的监听器协议类型，如HTTP,TCP,
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 关联到的监听器端口
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 关联到的转发规则域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 关联到的转发规则URL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 负载均衡名称
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * 监听器名称
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * 关联目标组的权重， 该参数只有v2新版目标组生效。
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_ASSOCIATIONITEM_H_
