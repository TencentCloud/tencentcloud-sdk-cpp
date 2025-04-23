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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_BINDDETAILITEM_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_BINDDETAILITEM_H_

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
                * 绑定关系，包含监听器名字、协议、url、vport。
                */
                class BindDetailItem : public AbstractModel
                {
                public:
                    BindDetailItem();
                    ~BindDetailItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置绑定的CLB ID
                     * @return LoadBalancerId 配置绑定的CLB ID
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置配置绑定的CLB ID
                     * @param _loadBalancerId 配置绑定的CLB ID
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
                     * 获取配置绑定的监听器ID
                     * @return ListenerId 配置绑定的监听器ID
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置配置绑定的监听器ID
                     * @param _listenerId 配置绑定的监听器ID
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
                     * 获取配置绑定的域名
                     * @return Domain 配置绑定的域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置配置绑定的域名
                     * @param _domain 配置绑定的域名
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
                     * 获取配置绑定的规则
                     * @return LocationId 配置绑定的规则
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置配置绑定的规则
                     * @param _locationId 配置绑定的规则
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
                     * 获取监听器名字
                     * @return ListenerName 监听器名字
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置监听器名字
                     * @param _listenerName 监听器名字
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
                     * 获取监听器协议
                     * @return Protocol 监听器协议
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置监听器协议
                     * @param _protocol 监听器协议
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
                     * 获取监听器端口
                     * @return Vport 监听器端口
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置监听器端口
                     * @param _vport 监听器端口
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取location的url
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Url location的url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置location的url
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _url location的url
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
                     * 获取配置ID
                     * @return UconfigId 配置ID
                     * 
                     */
                    std::string GetUconfigId() const;

                    /**
                     * 设置配置ID
                     * @param _uconfigId 配置ID
                     * 
                     */
                    void SetUconfigId(const std::string& _uconfigId);

                    /**
                     * 判断参数 UconfigId 是否已赋值
                     * @return UconfigId 是否已赋值
                     * 
                     */
                    bool UconfigIdHasBeenSet() const;

                private:

                    /**
                     * 配置绑定的CLB ID
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 配置绑定的监听器ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 配置绑定的域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 配置绑定的规则
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * 监听器名字
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * 监听器协议
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 监听器端口
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * location的url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 配置ID
                     */
                    std::string m_uconfigId;
                    bool m_uconfigIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_BINDDETAILITEM_H_
