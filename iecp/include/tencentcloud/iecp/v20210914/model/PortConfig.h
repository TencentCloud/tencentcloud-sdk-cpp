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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_PORTCONFIG_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_PORTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * 端口配置
                */
                class PortConfig : public AbstractModel
                {
                public:
                    PortConfig();
                    ~PortConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取协议类型(tcp|udp)
                     * @return Protocol 协议类型(tcp|udp)
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议类型(tcp|udp)
                     * @param _protocol 协议类型(tcp|udp)
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
                     * 获取源端口
                     * @return Port 源端口
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置源端口
                     * @param _port 源端口
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
                     * 获取目标端口
                     * @return TargetPort 目标端口
                     * 
                     */
                    int64_t GetTargetPort() const;

                    /**
                     * 设置目标端口
                     * @param _targetPort 目标端口
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
                     * 获取节点端口
                     * @return NodePort 节点端口
                     * 
                     */
                    int64_t GetNodePort() const;

                    /**
                     * 设置节点端口
                     * @param _nodePort 节点端口
                     * 
                     */
                    void SetNodePort(const int64_t& _nodePort);

                    /**
                     * 判断参数 NodePort 是否已赋值
                     * @return NodePort 是否已赋值
                     * 
                     */
                    bool NodePortHasBeenSet() const;

                private:

                    /**
                     * 协议类型(tcp|udp)
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 源端口
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 目标端口
                     */
                    int64_t m_targetPort;
                    bool m_targetPortHasBeenSet;

                    /**
                     * 节点端口
                     */
                    int64_t m_nodePort;
                    bool m_nodePortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_PORTCONFIG_H_
