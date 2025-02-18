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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DOCKERCONTAINERPUBLISHPORT_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DOCKERCONTAINERPUBLISHPORT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * Docker容器映射的端口
                */
                class DockerContainerPublishPort : public AbstractModel
                {
                public:
                    DockerContainerPublishPort();
                    ~DockerContainerPublishPort() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主机端口
                     * @return HostPort 主机端口
                     * 
                     */
                    int64_t GetHostPort() const;

                    /**
                     * 设置主机端口
                     * @param _hostPort 主机端口
                     * 
                     */
                    void SetHostPort(const int64_t& _hostPort);

                    /**
                     * 判断参数 HostPort 是否已赋值
                     * @return HostPort 是否已赋值
                     * 
                     */
                    bool HostPortHasBeenSet() const;

                    /**
                     * 获取容器端口
                     * @return ContainerPort 容器端口
                     * 
                     */
                    int64_t GetContainerPort() const;

                    /**
                     * 设置容器端口
                     * @param _containerPort 容器端口
                     * 
                     */
                    void SetContainerPort(const int64_t& _containerPort);

                    /**
                     * 判断参数 ContainerPort 是否已赋值
                     * @return ContainerPort 是否已赋值
                     * 
                     */
                    bool ContainerPortHasBeenSet() const;

                    /**
                     * 获取对外绑定IP，默认0.0.0.0
                     * @return Ip 对外绑定IP，默认0.0.0.0
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置对外绑定IP，默认0.0.0.0
                     * @param _ip 对外绑定IP，默认0.0.0.0
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取协议，默认tcp，支持tcp/udp/sctp
                     * @return Protocol 协议，默认tcp，支持tcp/udp/sctp
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议，默认tcp，支持tcp/udp/sctp
                     * @param _protocol 协议，默认tcp，支持tcp/udp/sctp
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                private:

                    /**
                     * 主机端口
                     */
                    int64_t m_hostPort;
                    bool m_hostPortHasBeenSet;

                    /**
                     * 容器端口
                     */
                    int64_t m_containerPort;
                    bool m_containerPortHasBeenSet;

                    /**
                     * 对外绑定IP，默认0.0.0.0
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 协议，默认tcp，支持tcp/udp/sctp
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DOCKERCONTAINERPUBLISHPORT_H_
