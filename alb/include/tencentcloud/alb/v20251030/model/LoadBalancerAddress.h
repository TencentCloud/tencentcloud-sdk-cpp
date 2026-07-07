/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_LOADBALANCERADDRESS_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_LOADBALANCERADDRESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/IPAddressInfo.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * 应用型负载均衡可用区子网映射中的 IP 信息数据结构
                */
                class LoadBalancerAddress : public AbstractModel
                {
                public:
                    LoadBalancerAddress();
                    ~LoadBalancerAddress() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IPv4 地址列表
                     * @return IPv4Address IPv4 地址列表
                     * 
                     */
                    std::vector<IPAddressInfo> GetIPv4Address() const;

                    /**
                     * 设置IPv4 地址列表
                     * @param _iPv4Address IPv4 地址列表
                     * 
                     */
                    void SetIPv4Address(const std::vector<IPAddressInfo>& _iPv4Address);

                    /**
                     * 判断参数 IPv4Address 是否已赋值
                     * @return IPv4Address 是否已赋值
                     * 
                     */
                    bool IPv4AddressHasBeenSet() const;

                    /**
                     * 获取IPv6 地址列表
                     * @return IPv6Address IPv6 地址列表
                     * 
                     */
                    std::vector<IPAddressInfo> GetIPv6Address() const;

                    /**
                     * 设置IPv6 地址列表
                     * @param _iPv6Address IPv6 地址列表
                     * 
                     */
                    void SetIPv6Address(const std::vector<IPAddressInfo>& _iPv6Address);

                    /**
                     * 判断参数 IPv6Address 是否已赋值
                     * @return IPv6Address 是否已赋值
                     * 
                     */
                    bool IPv6AddressHasBeenSet() const;

                private:

                    /**
                     * IPv4 地址列表
                     */
                    std::vector<IPAddressInfo> m_iPv4Address;
                    bool m_iPv4AddressHasBeenSet;

                    /**
                     * IPv6 地址列表
                     */
                    std::vector<IPAddressInfo> m_iPv6Address;
                    bool m_iPv6AddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_LOADBALANCERADDRESS_H_
