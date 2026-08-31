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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DEVICENETWORKCARDBRIEF_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DEVICENETWORKCARDBRIEF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 多网卡MAC地址等列表数据
                */
                class DeviceNetworkCardBrief : public AbstractModel
                {
                public:
                    DeviceNetworkCardBrief();
                    ~DeviceNetworkCardBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>MAC地址</p>
                     * @return MacAddress <p>MAC地址</p>
                     * 
                     */
                    std::string GetMacAddress() const;

                    /**
                     * 设置<p>MAC地址</p>
                     * @param _macAddress <p>MAC地址</p>
                     * 
                     */
                    void SetMacAddress(const std::string& _macAddress);

                    /**
                     * 判断参数 MacAddress 是否已赋值
                     * @return MacAddress 是否已赋值
                     * 
                     */
                    bool MacAddressHasBeenSet() const;

                    /**
                     * 获取<p>网卡名称</p>
                     * @return NetworkCardName <p>网卡名称</p>
                     * 
                     */
                    std::string GetNetworkCardName() const;

                    /**
                     * 设置<p>网卡名称</p>
                     * @param _networkCardName <p>网卡名称</p>
                     * 
                     */
                    void SetNetworkCardName(const std::string& _networkCardName);

                    /**
                     * 判断参数 NetworkCardName 是否已赋值
                     * @return NetworkCardName 是否已赋值
                     * 
                     */
                    bool NetworkCardNameHasBeenSet() const;

                    /**
                     * 获取<p>网卡类型</p><p>枚举值：</p><ul><li>1： 物理网卡</li><li>2： 虚拟网卡</li></ul>
                     * @return NetworkCardType <p>网卡类型</p><p>枚举值：</p><ul><li>1： 物理网卡</li><li>2： 虚拟网卡</li></ul>
                     * 
                     */
                    int64_t GetNetworkCardType() const;

                    /**
                     * 设置<p>网卡类型</p><p>枚举值：</p><ul><li>1： 物理网卡</li><li>2： 虚拟网卡</li></ul>
                     * @param _networkCardType <p>网卡类型</p><p>枚举值：</p><ul><li>1： 物理网卡</li><li>2： 虚拟网卡</li></ul>
                     * 
                     */
                    void SetNetworkCardType(const int64_t& _networkCardType);

                    /**
                     * 判断参数 NetworkCardType 是否已赋值
                     * @return NetworkCardType 是否已赋值
                     * 
                     */
                    bool NetworkCardTypeHasBeenSet() const;

                    /**
                     * 获取<p>网卡状态</p><p>枚举值：</p><ul><li>1： 启用中</li><li>2： 未启用</li></ul>
                     * @return NetworkCardStatus <p>网卡状态</p><p>枚举值：</p><ul><li>1： 启用中</li><li>2： 未启用</li></ul>
                     * 
                     */
                    int64_t GetNetworkCardStatus() const;

                    /**
                     * 设置<p>网卡状态</p><p>枚举值：</p><ul><li>1： 启用中</li><li>2： 未启用</li></ul>
                     * @param _networkCardStatus <p>网卡状态</p><p>枚举值：</p><ul><li>1： 启用中</li><li>2： 未启用</li></ul>
                     * 
                     */
                    void SetNetworkCardStatus(const int64_t& _networkCardStatus);

                    /**
                     * 判断参数 NetworkCardStatus 是否已赋值
                     * @return NetworkCardStatus 是否已赋值
                     * 
                     */
                    bool NetworkCardStatusHasBeenSet() const;

                    /**
                     * 获取<p>IPv4地址</p>
                     * @return Ipv4Address <p>IPv4地址</p>
                     * 
                     */
                    std::string GetIpv4Address() const;

                    /**
                     * 设置<p>IPv4地址</p>
                     * @param _ipv4Address <p>IPv4地址</p>
                     * 
                     */
                    void SetIpv4Address(const std::string& _ipv4Address);

                    /**
                     * 判断参数 Ipv4Address 是否已赋值
                     * @return Ipv4Address 是否已赋值
                     * 
                     */
                    bool Ipv4AddressHasBeenSet() const;

                    /**
                     * 获取<p>IPv6地址</p>
                     * @return Ipv6Address <p>IPv6地址</p>
                     * 
                     */
                    std::string GetIpv6Address() const;

                    /**
                     * 设置<p>IPv6地址</p>
                     * @param _ipv6Address <p>IPv6地址</p>
                     * 
                     */
                    void SetIpv6Address(const std::string& _ipv6Address);

                    /**
                     * 判断参数 Ipv6Address 是否已赋值
                     * @return Ipv6Address 是否已赋值
                     * 
                     */
                    bool Ipv6AddressHasBeenSet() const;

                private:

                    /**
                     * <p>MAC地址</p>
                     */
                    std::string m_macAddress;
                    bool m_macAddressHasBeenSet;

                    /**
                     * <p>网卡名称</p>
                     */
                    std::string m_networkCardName;
                    bool m_networkCardNameHasBeenSet;

                    /**
                     * <p>网卡类型</p><p>枚举值：</p><ul><li>1： 物理网卡</li><li>2： 虚拟网卡</li></ul>
                     */
                    int64_t m_networkCardType;
                    bool m_networkCardTypeHasBeenSet;

                    /**
                     * <p>网卡状态</p><p>枚举值：</p><ul><li>1： 启用中</li><li>2： 未启用</li></ul>
                     */
                    int64_t m_networkCardStatus;
                    bool m_networkCardStatusHasBeenSet;

                    /**
                     * <p>IPv4地址</p>
                     */
                    std::string m_ipv4Address;
                    bool m_ipv4AddressHasBeenSet;

                    /**
                     * <p>IPv6地址</p>
                     */
                    std::string m_ipv6Address;
                    bool m_ipv6AddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DEVICENETWORKCARDBRIEF_H_
