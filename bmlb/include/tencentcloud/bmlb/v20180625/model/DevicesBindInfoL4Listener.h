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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_DEVICESBINDINFOL4LISTENER_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_DEVICESBINDINFOL4LISTENER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmlb/v20180625/model/DevicesBindInfoBackend.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * 获取设备绑定信息时返回的四层监听器信息。
                */
                class DevicesBindInfoL4Listener : public AbstractModel
                {
                public:
                    DevicesBindInfoL4Listener();
                    ~DevicesBindInfoL4Listener() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取七层监听器实例ID。
                     * @return ListenerId 七层监听器实例ID。
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置七层监听器实例ID。
                     * @param _listenerId 七层监听器实例ID。
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
                     * 获取七层监听器协议类型，可选值：http,https。
                     * @return Protocol 七层监听器协议类型，可选值：http,https。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置七层监听器协议类型，可选值：http,https。
                     * @param _protocol 七层监听器协议类型，可选值：http,https。
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
                     * 获取七层监听器的监听端口。
                     * @return LoadBalancerPort 七层监听器的监听端口。
                     * 
                     */
                    int64_t GetLoadBalancerPort() const;

                    /**
                     * 设置七层监听器的监听端口。
                     * @param _loadBalancerPort 七层监听器的监听端口。
                     * 
                     */
                    void SetLoadBalancerPort(const int64_t& _loadBalancerPort);

                    /**
                     * 判断参数 LoadBalancerPort 是否已赋值
                     * @return LoadBalancerPort 是否已赋值
                     * 
                     */
                    bool LoadBalancerPortHasBeenSet() const;

                    /**
                     * 获取该转发路径所绑定的主机列表。
                     * @return BackendSet 该转发路径所绑定的主机列表。
                     * 
                     */
                    std::vector<DevicesBindInfoBackend> GetBackendSet() const;

                    /**
                     * 设置该转发路径所绑定的主机列表。
                     * @param _backendSet 该转发路径所绑定的主机列表。
                     * 
                     */
                    void SetBackendSet(const std::vector<DevicesBindInfoBackend>& _backendSet);

                    /**
                     * 判断参数 BackendSet 是否已赋值
                     * @return BackendSet 是否已赋值
                     * 
                     */
                    bool BackendSetHasBeenSet() const;

                private:

                    /**
                     * 七层监听器实例ID。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 七层监听器协议类型，可选值：http,https。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 七层监听器的监听端口。
                     */
                    int64_t m_loadBalancerPort;
                    bool m_loadBalancerPortHasBeenSet;

                    /**
                     * 该转发路径所绑定的主机列表。
                     */
                    std::vector<DevicesBindInfoBackend> m_backendSet;
                    bool m_backendSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_DEVICESBINDINFOL4LISTENER_H_
