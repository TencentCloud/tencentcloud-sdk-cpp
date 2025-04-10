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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_INSTANCEPORT_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_INSTANCEPORT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 实例监听端口信息
                */
                class InstancePort : public AbstractModel
                {
                public:
                    InstancePort();
                    ~InstancePort() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取监听的 http 端口范围。
                     * @return HttpPort 监听的 http 端口范围。
                     * 
                     */
                    std::string GetHttpPort() const;

                    /**
                     * 设置监听的 http 端口范围。
                     * @param _httpPort 监听的 http 端口范围。
                     * 
                     */
                    void SetHttpPort(const std::string& _httpPort);

                    /**
                     * 判断参数 HttpPort 是否已赋值
                     * @return HttpPort 是否已赋值
                     * 
                     */
                    bool HttpPortHasBeenSet() const;

                    /**
                     * 获取监听的 https 端口范围。
                     * @return HttpsPort 监听的 https 端口范围。
                     * 
                     */
                    std::string GetHttpsPort() const;

                    /**
                     * 设置监听的 https 端口范围。
                     * @param _httpsPort 监听的 https 端口范围。
                     * 
                     */
                    void SetHttpsPort(const std::string& _httpsPort);

                    /**
                     * 判断参数 HttpsPort 是否已赋值
                     * @return HttpsPort 是否已赋值
                     * 
                     */
                    bool HttpsPortHasBeenSet() const;

                    /**
                     * 获取监听的 tcp 端口范围。
                     * @return TcpPort 监听的 tcp 端口范围。
                     * 
                     */
                    std::string GetTcpPort() const;

                    /**
                     * 设置监听的 tcp 端口范围。
                     * @param _tcpPort 监听的 tcp 端口范围。
                     * 
                     */
                    void SetTcpPort(const std::string& _tcpPort);

                    /**
                     * 判断参数 TcpPort 是否已赋值
                     * @return TcpPort 是否已赋值
                     * 
                     */
                    bool TcpPortHasBeenSet() const;

                    /**
                     * 获取监听的 udp 端口范围。
                     * @return UdpPort 监听的 udp 端口范围。
                     * 
                     */
                    std::string GetUdpPort() const;

                    /**
                     * 设置监听的 udp 端口范围。
                     * @param _udpPort 监听的 udp 端口范围。
                     * 
                     */
                    void SetUdpPort(const std::string& _udpPort);

                    /**
                     * 判断参数 UdpPort 是否已赋值
                     * @return UdpPort 是否已赋值
                     * 
                     */
                    bool UdpPortHasBeenSet() const;

                private:

                    /**
                     * 监听的 http 端口范围。
                     */
                    std::string m_httpPort;
                    bool m_httpPortHasBeenSet;

                    /**
                     * 监听的 https 端口范围。
                     */
                    std::string m_httpsPort;
                    bool m_httpsPortHasBeenSet;

                    /**
                     * 监听的 tcp 端口范围。
                     */
                    std::string m_tcpPort;
                    bool m_tcpPortHasBeenSet;

                    /**
                     * 监听的 udp 端口范围。
                     */
                    std::string m_udpPort;
                    bool m_udpPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_INSTANCEPORT_H_
