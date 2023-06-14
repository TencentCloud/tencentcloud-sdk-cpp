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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CONTAINERNETWORK_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CONTAINERNETWORK_H_

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
                * 容器网络信息
                */
                class ContainerNetwork : public AbstractModel
                {
                public:
                    ContainerNetwork();
                    ~ContainerNetwork() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取endpoint id
                     * @return EndpointID endpoint id
                     * 
                     */
                    std::string GetEndpointID() const;

                    /**
                     * 设置endpoint id
                     * @param _endpointID endpoint id
                     * 
                     */
                    void SetEndpointID(const std::string& _endpointID);

                    /**
                     * 判断参数 EndpointID 是否已赋值
                     * @return EndpointID 是否已赋值
                     * 
                     */
                    bool EndpointIDHasBeenSet() const;

                    /**
                     * 获取模式:bridge
                     * @return Mode 模式:bridge
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置模式:bridge
                     * @param _mode 模式:bridge
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取网络名称
                     * @return Name 网络名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置网络名称
                     * @param _name 网络名称
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
                     * 获取网络ID
                     * @return NetworkID 网络ID
                     * 
                     */
                    std::string GetNetworkID() const;

                    /**
                     * 设置网络ID
                     * @param _networkID 网络ID
                     * 
                     */
                    void SetNetworkID(const std::string& _networkID);

                    /**
                     * 判断参数 NetworkID 是否已赋值
                     * @return NetworkID 是否已赋值
                     * 
                     */
                    bool NetworkIDHasBeenSet() const;

                    /**
                     * 获取网关
                     * @return Gateway 网关
                     * 
                     */
                    std::string GetGateway() const;

                    /**
                     * 设置网关
                     * @param _gateway 网关
                     * 
                     */
                    void SetGateway(const std::string& _gateway);

                    /**
                     * 判断参数 Gateway 是否已赋值
                     * @return Gateway 是否已赋值
                     * 
                     */
                    bool GatewayHasBeenSet() const;

                    /**
                     * 获取IPV4地址
                     * @return Ipv4 IPV4地址
                     * 
                     */
                    std::string GetIpv4() const;

                    /**
                     * 设置IPV4地址
                     * @param _ipv4 IPV4地址
                     * 
                     */
                    void SetIpv4(const std::string& _ipv4);

                    /**
                     * 判断参数 Ipv4 是否已赋值
                     * @return Ipv4 是否已赋值
                     * 
                     */
                    bool Ipv4HasBeenSet() const;

                    /**
                     * 获取IPV6地址
                     * @return Ipv6 IPV6地址
                     * 
                     */
                    std::string GetIpv6() const;

                    /**
                     * 设置IPV6地址
                     * @param _ipv6 IPV6地址
                     * 
                     */
                    void SetIpv6(const std::string& _ipv6);

                    /**
                     * 判断参数 Ipv6 是否已赋值
                     * @return Ipv6 是否已赋值
                     * 
                     */
                    bool Ipv6HasBeenSet() const;

                    /**
                     * 获取MAC 地址
                     * @return MAC MAC 地址
                     * 
                     */
                    std::string GetMAC() const;

                    /**
                     * 设置MAC 地址
                     * @param _mAC MAC 地址
                     * 
                     */
                    void SetMAC(const std::string& _mAC);

                    /**
                     * 判断参数 MAC 是否已赋值
                     * @return MAC 是否已赋值
                     * 
                     */
                    bool MACHasBeenSet() const;

                private:

                    /**
                     * endpoint id
                     */
                    std::string m_endpointID;
                    bool m_endpointIDHasBeenSet;

                    /**
                     * 模式:bridge
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 网络名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 网络ID
                     */
                    std::string m_networkID;
                    bool m_networkIDHasBeenSet;

                    /**
                     * 网关
                     */
                    std::string m_gateway;
                    bool m_gatewayHasBeenSet;

                    /**
                     * IPV4地址
                     */
                    std::string m_ipv4;
                    bool m_ipv4HasBeenSet;

                    /**
                     * IPV6地址
                     */
                    std::string m_ipv6;
                    bool m_ipv6HasBeenSet;

                    /**
                     * MAC 地址
                     */
                    std::string m_mAC;
                    bool m_mACHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CONTAINERNETWORK_H_
