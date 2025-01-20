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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ASSOCIATENATGATEWAYADDRESSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ASSOCIATENATGATEWAYADDRESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * AssociateNatGatewayAddress请求参数结构体
                */
                class AssociateNatGatewayAddressRequest : public AbstractModel
                {
                public:
                    AssociateNatGatewayAddressRequest();
                    ~AssociateNatGatewayAddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取NAT网关的ID，形如：`nat-df45454`。
                     * @return NatGatewayId NAT网关的ID，形如：`nat-df45454`。
                     * 
                     */
                    std::string GetNatGatewayId() const;

                    /**
                     * 设置NAT网关的ID，形如：`nat-df45454`。
                     * @param _natGatewayId NAT网关的ID，形如：`nat-df45454`。
                     * 
                     */
                    void SetNatGatewayId(const std::string& _natGatewayId);

                    /**
                     * 判断参数 NatGatewayId 是否已赋值
                     * @return NatGatewayId 是否已赋值
                     * 
                     */
                    bool NatGatewayIdHasBeenSet() const;

                    /**
                     * 获取需要申请的弹性IP个数，系统会按您的要求生产N个弹性IP, 其中AddressCount和PublicAddresses至少传递一个。
                     * @return AddressCount 需要申请的弹性IP个数，系统会按您的要求生产N个弹性IP, 其中AddressCount和PublicAddresses至少传递一个。
                     * 
                     */
                    uint64_t GetAddressCount() const;

                    /**
                     * 设置需要申请的弹性IP个数，系统会按您的要求生产N个弹性IP, 其中AddressCount和PublicAddresses至少传递一个。
                     * @param _addressCount 需要申请的弹性IP个数，系统会按您的要求生产N个弹性IP, 其中AddressCount和PublicAddresses至少传递一个。
                     * 
                     */
                    void SetAddressCount(const uint64_t& _addressCount);

                    /**
                     * 判断参数 AddressCount 是否已赋值
                     * @return AddressCount 是否已赋值
                     * 
                     */
                    bool AddressCountHasBeenSet() const;

                    /**
                     * 获取绑定NAT网关的弹性IP数组，其中AddressCount和PublicAddresses至少传递一个。
                     * @return PublicIpAddresses 绑定NAT网关的弹性IP数组，其中AddressCount和PublicAddresses至少传递一个。
                     * 
                     */
                    std::vector<std::string> GetPublicIpAddresses() const;

                    /**
                     * 设置绑定NAT网关的弹性IP数组，其中AddressCount和PublicAddresses至少传递一个。
                     * @param _publicIpAddresses 绑定NAT网关的弹性IP数组，其中AddressCount和PublicAddresses至少传递一个。
                     * 
                     */
                    void SetPublicIpAddresses(const std::vector<std::string>& _publicIpAddresses);

                    /**
                     * 判断参数 PublicIpAddresses 是否已赋值
                     * @return PublicIpAddresses 是否已赋值
                     * 
                     */
                    bool PublicIpAddressesHasBeenSet() const;

                    /**
                     * 获取弹性IP可用区，自动分配弹性IP时传递。
                     * @return Zone 弹性IP可用区，自动分配弹性IP时传递。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置弹性IP可用区，自动分配弹性IP时传递。
                     * @param _zone 弹性IP可用区，自动分配弹性IP时传递。
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取绑定NAT网关的弹性IP带宽大小（单位Mbps），默认为当前用户类型所能使用的最大值。
                     * @return StockPublicIpAddressesBandwidthOut 绑定NAT网关的弹性IP带宽大小（单位Mbps），默认为当前用户类型所能使用的最大值。
                     * 
                     */
                    uint64_t GetStockPublicIpAddressesBandwidthOut() const;

                    /**
                     * 设置绑定NAT网关的弹性IP带宽大小（单位Mbps），默认为当前用户类型所能使用的最大值。
                     * @param _stockPublicIpAddressesBandwidthOut 绑定NAT网关的弹性IP带宽大小（单位Mbps），默认为当前用户类型所能使用的最大值。
                     * 
                     */
                    void SetStockPublicIpAddressesBandwidthOut(const uint64_t& _stockPublicIpAddressesBandwidthOut);

                    /**
                     * 判断参数 StockPublicIpAddressesBandwidthOut 是否已赋值
                     * @return StockPublicIpAddressesBandwidthOut 是否已赋值
                     * 
                     */
                    bool StockPublicIpAddressesBandwidthOutHasBeenSet() const;

                    /**
                     * 获取需要申请公网IP带宽大小（单位Mbps），默认为当前用户类型所能使用的最大值。
                     * @return PublicIpAddressesBandwidthOut 需要申请公网IP带宽大小（单位Mbps），默认为当前用户类型所能使用的最大值。
                     * 
                     */
                    uint64_t GetPublicIpAddressesBandwidthOut() const;

                    /**
                     * 设置需要申请公网IP带宽大小（单位Mbps），默认为当前用户类型所能使用的最大值。
                     * @param _publicIpAddressesBandwidthOut 需要申请公网IP带宽大小（单位Mbps），默认为当前用户类型所能使用的最大值。
                     * 
                     */
                    void SetPublicIpAddressesBandwidthOut(const uint64_t& _publicIpAddressesBandwidthOut);

                    /**
                     * 判断参数 PublicIpAddressesBandwidthOut 是否已赋值
                     * @return PublicIpAddressesBandwidthOut 是否已赋值
                     * 
                     */
                    bool PublicIpAddressesBandwidthOutHasBeenSet() const;

                    /**
                     * 获取公网IP是否强制与NAT网关来自同可用区，true表示需要与NAT网关同可用区；false表示可与NAT网关不是同一个可用区。此参数只有当参数Zone存在时才能生效。
                     * @return PublicIpFromSameZone 公网IP是否强制与NAT网关来自同可用区，true表示需要与NAT网关同可用区；false表示可与NAT网关不是同一个可用区。此参数只有当参数Zone存在时才能生效。
                     * 
                     */
                    bool GetPublicIpFromSameZone() const;

                    /**
                     * 设置公网IP是否强制与NAT网关来自同可用区，true表示需要与NAT网关同可用区；false表示可与NAT网关不是同一个可用区。此参数只有当参数Zone存在时才能生效。
                     * @param _publicIpFromSameZone 公网IP是否强制与NAT网关来自同可用区，true表示需要与NAT网关同可用区；false表示可与NAT网关不是同一个可用区。此参数只有当参数Zone存在时才能生效。
                     * 
                     */
                    void SetPublicIpFromSameZone(const bool& _publicIpFromSameZone);

                    /**
                     * 判断参数 PublicIpFromSameZone 是否已赋值
                     * @return PublicIpFromSameZone 是否已赋值
                     * 
                     */
                    bool PublicIpFromSameZoneHasBeenSet() const;

                private:

                    /**
                     * NAT网关的ID，形如：`nat-df45454`。
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * 需要申请的弹性IP个数，系统会按您的要求生产N个弹性IP, 其中AddressCount和PublicAddresses至少传递一个。
                     */
                    uint64_t m_addressCount;
                    bool m_addressCountHasBeenSet;

                    /**
                     * 绑定NAT网关的弹性IP数组，其中AddressCount和PublicAddresses至少传递一个。
                     */
                    std::vector<std::string> m_publicIpAddresses;
                    bool m_publicIpAddressesHasBeenSet;

                    /**
                     * 弹性IP可用区，自动分配弹性IP时传递。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 绑定NAT网关的弹性IP带宽大小（单位Mbps），默认为当前用户类型所能使用的最大值。
                     */
                    uint64_t m_stockPublicIpAddressesBandwidthOut;
                    bool m_stockPublicIpAddressesBandwidthOutHasBeenSet;

                    /**
                     * 需要申请公网IP带宽大小（单位Mbps），默认为当前用户类型所能使用的最大值。
                     */
                    uint64_t m_publicIpAddressesBandwidthOut;
                    bool m_publicIpAddressesBandwidthOutHasBeenSet;

                    /**
                     * 公网IP是否强制与NAT网关来自同可用区，true表示需要与NAT网关同可用区；false表示可与NAT网关不是同一个可用区。此参数只有当参数Zone存在时才能生效。
                     */
                    bool m_publicIpFromSameZone;
                    bool m_publicIpFromSameZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ASSOCIATENATGATEWAYADDRESSREQUEST_H_
