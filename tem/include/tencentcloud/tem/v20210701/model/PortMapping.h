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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_PORTMAPPING_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_PORTMAPPING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * 服务端口映射
                */
                class PortMapping : public AbstractModel
                {
                public:
                    PortMapping();
                    ~PortMapping() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取端口
                     * @return Port 端口
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置端口
                     * @param _port 端口
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
                     * 获取映射端口
                     * @return TargetPort 映射端口
                     * 
                     */
                    int64_t GetTargetPort() const;

                    /**
                     * 设置映射端口
                     * @param _targetPort 映射端口
                     * 
                     */
                    void SetTargetPort(const int64_t& _targetPort);

                    /**
                     * 判断参数 TargetPort 是否已赋值
                     * @return TargetPort 是否已赋值
                     * 
                     */
                    bool TargetPortHasBeenSet() const;

                    /**
                     * 获取协议栈 TCP/UDP
                     * @return Protocol 协议栈 TCP/UDP
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议栈 TCP/UDP
                     * @param _protocol 协议栈 TCP/UDP
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
                     * 获取k8s service名称
                     * @return ServiceName k8s service名称
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置k8s service名称
                     * @param _serviceName k8s service名称
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                private:

                    /**
                     * 端口
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 映射端口
                     */
                    int64_t m_targetPort;
                    bool m_targetPortHasBeenSet;

                    /**
                     * 协议栈 TCP/UDP
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * k8s service名称
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_PORTMAPPING_H_
