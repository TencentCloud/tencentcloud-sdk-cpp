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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_NETWORKCONFIG_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_NETWORKCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 独享实例网络配置
                */
                class NetworkConfig : public AbstractModel
                {
                public:
                    NetworkConfig();
                    ~NetworkConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取最大出带宽
                     * @return InternetMaxBandwidthOut 最大出带宽
                     * 
                     */
                    int64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置最大出带宽
                     * @param _internetMaxBandwidthOut 最大出带宽
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取EnableInternetInbound信息
                     * @return EnableInternetInbound EnableInternetInbound信息
                     * 
                     */
                    bool GetEnableInternetInbound() const;

                    /**
                     * 设置EnableInternetInbound信息
                     * @param _enableInternetInbound EnableInternetInbound信息
                     * 
                     */
                    void SetEnableInternetInbound(const bool& _enableInternetInbound);

                    /**
                     * 判断参数 EnableInternetInbound 是否已赋值
                     * @return EnableInternetInbound 是否已赋值
                     * 
                     */
                    bool EnableInternetInboundHasBeenSet() const;

                    /**
                     * 获取EnableInternetOutbound信息
                     * @return EnableInternetOutbound EnableInternetOutbound信息
                     * 
                     */
                    bool GetEnableInternetOutbound() const;

                    /**
                     * 设置EnableInternetOutbound信息
                     * @param _enableInternetOutbound EnableInternetOutbound信息
                     * 
                     */
                    void SetEnableInternetOutbound(const bool& _enableInternetOutbound);

                    /**
                     * 判断参数 EnableInternetOutbound 是否已赋值
                     * @return EnableInternetOutbound 是否已赋值
                     * 
                     */
                    bool EnableInternetOutboundHasBeenSet() const;

                    /**
                     * 获取InboundIpAddresses信息
                     * @return InboundIpAddresses InboundIpAddresses信息
                     * 
                     */
                    std::vector<std::string> GetInboundIpAddresses() const;

                    /**
                     * 设置InboundIpAddresses信息
                     * @param _inboundIpAddresses InboundIpAddresses信息
                     * 
                     */
                    void SetInboundIpAddresses(const std::vector<std::string>& _inboundIpAddresses);

                    /**
                     * 判断参数 InboundIpAddresses 是否已赋值
                     * @return InboundIpAddresses 是否已赋值
                     * 
                     */
                    bool InboundIpAddressesHasBeenSet() const;

                    /**
                     * 获取OutboundIpAddresses信息
                     * @return OutboundIpAddresses OutboundIpAddresses信息
                     * 
                     */
                    std::vector<std::string> GetOutboundIpAddresses() const;

                    /**
                     * 设置OutboundIpAddresses信息
                     * @param _outboundIpAddresses OutboundIpAddresses信息
                     * 
                     */
                    void SetOutboundIpAddresses(const std::vector<std::string>& _outboundIpAddresses);

                    /**
                     * 判断参数 OutboundIpAddresses 是否已赋值
                     * @return OutboundIpAddresses 是否已赋值
                     * 
                     */
                    bool OutboundIpAddressesHasBeenSet() const;

                private:

                    /**
                     * 最大出带宽
                     */
                    int64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * EnableInternetInbound信息
                     */
                    bool m_enableInternetInbound;
                    bool m_enableInternetInboundHasBeenSet;

                    /**
                     * EnableInternetOutbound信息
                     */
                    bool m_enableInternetOutbound;
                    bool m_enableInternetOutboundHasBeenSet;

                    /**
                     * InboundIpAddresses信息
                     */
                    std::vector<std::string> m_inboundIpAddresses;
                    bool m_inboundIpAddressesHasBeenSet;

                    /**
                     * OutboundIpAddresses信息
                     */
                    std::vector<std::string> m_outboundIpAddresses;
                    bool m_outboundIpAddressesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_NETWORKCONFIG_H_
