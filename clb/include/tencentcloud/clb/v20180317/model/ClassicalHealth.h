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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CLASSICALHEALTH_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CLASSICALHEALTH_H_

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
                * 传统型负载均衡后端服务的健康状态
                */
                class ClassicalHealth : public AbstractModel
                {
                public:
                    ClassicalHealth();
                    ~ClassicalHealth() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取后端服务的内网 IP
                     * @return IP 后端服务的内网 IP
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置后端服务的内网 IP
                     * @param _iP 后端服务的内网 IP
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取后端服务的端口
                     * @return Port 后端服务的端口
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置后端服务的端口
                     * @param _port 后端服务的端口
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取负载均衡的监听端口
                     * @return ListenerPort 负载均衡的监听端口
                     * 
                     */
                    int64_t GetListenerPort() const;

                    /**
                     * 设置负载均衡的监听端口
                     * @param _listenerPort 负载均衡的监听端口
                     * 
                     */
                    void SetListenerPort(const int64_t& _listenerPort);

                    /**
                     * 判断参数 ListenerPort 是否已赋值
                     * @return ListenerPort 是否已赋值
                     * 
                     */
                    bool ListenerPortHasBeenSet() const;

                    /**
                     * 获取转发协议
                     * @return Protocol 转发协议
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置转发协议
                     * @param _protocol 转发协议
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
                     * 获取健康检查结果，1 表示健康，0 表示不健康
                     * @return HealthStatus 健康检查结果，1 表示健康，0 表示不健康
                     * 
                     */
                    int64_t GetHealthStatus() const;

                    /**
                     * 设置健康检查结果，1 表示健康，0 表示不健康
                     * @param _healthStatus 健康检查结果，1 表示健康，0 表示不健康
                     * 
                     */
                    void SetHealthStatus(const int64_t& _healthStatus);

                    /**
                     * 判断参数 HealthStatus 是否已赋值
                     * @return HealthStatus 是否已赋值
                     * 
                     */
                    bool HealthStatusHasBeenSet() const;

                private:

                    /**
                     * 后端服务的内网 IP
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * 后端服务的端口
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 负载均衡的监听端口
                     */
                    int64_t m_listenerPort;
                    bool m_listenerPortHasBeenSet;

                    /**
                     * 转发协议
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 健康检查结果，1 表示健康，0 表示不健康
                     */
                    int64_t m_healthStatus;
                    bool m_healthStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CLASSICALHEALTH_H_
