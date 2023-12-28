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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYNETWORKBASICINFOREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYNETWORKBASICINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyNetworkBasicInfo请求参数结构体
                */
                class ModifyNetworkBasicInfoRequest : public AbstractModel
                {
                public:
                    ModifyNetworkBasicInfoRequest();
                    ~ModifyNetworkBasicInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云原生API网关实例ID。
                     * @return GatewayId 云原生API网关实例ID。
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置云原生API网关实例ID。
                     * @param _gatewayId 云原生API网关实例ID。
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取分组id
                     * @return GroupId 分组id
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置分组id
                     * @param _groupId 分组id
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取网络类型：
- Open 公网ipv4
- Open-IPv6 公网ipv6
- Internal 内网
                     * @return NetworkType 网络类型：
- Open 公网ipv4
- Open-IPv6 公网ipv6
- Internal 内网
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置网络类型：
- Open 公网ipv4
- Open-IPv6 公网ipv6
- Internal 内网
                     * @param _networkType 网络类型：
- Open 公网ipv4
- Open-IPv6 公网ipv6
- Internal 内网
                     * 
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * 
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取ip地址
                     * @return Vip ip地址
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置ip地址
                     * @param _vip ip地址
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取公网出流量带宽[1,2048]Mbps
                     * @return InternetMaxBandwidthOut 公网出流量带宽[1,2048]Mbps
                     * 
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置公网出流量带宽[1,2048]Mbps
                     * @param _internetMaxBandwidthOut 公网出流量带宽[1,2048]Mbps
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取负载均衡描述
                     * @return Description 负载均衡描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置负载均衡描述
                     * @param _description 负载均衡描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 云原生API网关实例ID。
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 分组id
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 网络类型：
- Open 公网ipv4
- Open-IPv6 公网ipv6
- Internal 内网
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * ip地址
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 公网出流量带宽[1,2048]Mbps
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * 负载均衡描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYNETWORKBASICINFOREQUEST_H_
