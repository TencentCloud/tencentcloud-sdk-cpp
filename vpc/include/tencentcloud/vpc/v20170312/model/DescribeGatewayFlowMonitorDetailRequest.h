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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEGATEWAYFLOWMONITORDETAILREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEGATEWAYFLOWMONITORDETAILREQUEST_H_

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
                * DescribeGatewayFlowMonitorDetail请求参数结构体
                */
                class DescribeGatewayFlowMonitorDetailRequest : public AbstractModel
                {
                public:
                    DescribeGatewayFlowMonitorDetailRequest();
                    ~DescribeGatewayFlowMonitorDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取时间点。表示要查询这分钟内的明细。如：`2019-02-28 18:15:20`，将查询 `18:15` 这一分钟内的明细。
                     * @return TimePoint 时间点。表示要查询这分钟内的明细。如：`2019-02-28 18:15:20`，将查询 `18:15` 这一分钟内的明细。
                     * 
                     */
                    std::string GetTimePoint() const;

                    /**
                     * 设置时间点。表示要查询这分钟内的明细。如：`2019-02-28 18:15:20`，将查询 `18:15` 这一分钟内的明细。
                     * @param _timePoint 时间点。表示要查询这分钟内的明细。如：`2019-02-28 18:15:20`，将查询 `18:15` 这一分钟内的明细。
                     * 
                     */
                    void SetTimePoint(const std::string& _timePoint);

                    /**
                     * 判断参数 TimePoint 是否已赋值
                     * @return TimePoint 是否已赋值
                     * 
                     */
                    bool TimePointHasBeenSet() const;

                    /**
                     * 获取VPN网关实例ID，形如：`vpn-ltjahce6`。
                     * @return VpnId VPN网关实例ID，形如：`vpn-ltjahce6`。
                     * 
                     */
                    std::string GetVpnId() const;

                    /**
                     * 设置VPN网关实例ID，形如：`vpn-ltjahce6`。
                     * @param _vpnId VPN网关实例ID，形如：`vpn-ltjahce6`。
                     * 
                     */
                    void SetVpnId(const std::string& _vpnId);

                    /**
                     * 判断参数 VpnId 是否已赋值
                     * @return VpnId 是否已赋值
                     * 
                     */
                    bool VpnIdHasBeenSet() const;

                    /**
                     * 获取专线网关实例ID，形如：`dcg-ltjahce6`。
                     * @return DirectConnectGatewayId 专线网关实例ID，形如：`dcg-ltjahce6`。
                     * 
                     */
                    std::string GetDirectConnectGatewayId() const;

                    /**
                     * 设置专线网关实例ID，形如：`dcg-ltjahce6`。
                     * @param _directConnectGatewayId 专线网关实例ID，形如：`dcg-ltjahce6`。
                     * 
                     */
                    void SetDirectConnectGatewayId(const std::string& _directConnectGatewayId);

                    /**
                     * 判断参数 DirectConnectGatewayId 是否已赋值
                     * @return DirectConnectGatewayId 是否已赋值
                     * 
                     */
                    bool DirectConnectGatewayIdHasBeenSet() const;

                    /**
                     * 获取对等连接实例ID，形如：`pcx-ltjahce6`。
                     * @return PeeringConnectionId 对等连接实例ID，形如：`pcx-ltjahce6`。
                     * 
                     */
                    std::string GetPeeringConnectionId() const;

                    /**
                     * 设置对等连接实例ID，形如：`pcx-ltjahce6`。
                     * @param _peeringConnectionId 对等连接实例ID，形如：`pcx-ltjahce6`。
                     * 
                     */
                    void SetPeeringConnectionId(const std::string& _peeringConnectionId);

                    /**
                     * 判断参数 PeeringConnectionId 是否已赋值
                     * @return PeeringConnectionId 是否已赋值
                     * 
                     */
                    bool PeeringConnectionIdHasBeenSet() const;

                    /**
                     * 获取NAT网关实例ID，形如：`nat-ltjahce6`。
                     * @return NatId NAT网关实例ID，形如：`nat-ltjahce6`。
                     * 
                     */
                    std::string GetNatId() const;

                    /**
                     * 设置NAT网关实例ID，形如：`nat-ltjahce6`。
                     * @param _natId NAT网关实例ID，形如：`nat-ltjahce6`。
                     * 
                     */
                    void SetNatId(const std::string& _natId);

                    /**
                     * 判断参数 NatId 是否已赋值
                     * @return NatId 是否已赋值
                     * 
                     */
                    bool NatIdHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为20，最大值为100。
                     * @return Limit 返回数量，默认为20，最大值为100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。
                     * @param _limit 返回数量，默认为20，最大值为100。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取排序字段。支持 `InPkg` `OutPkg` `InTraffic` `OutTraffic`，标准型nat额外支持 并发连接数`ConcurrentConnectionCount` 、新建连接速率`NewConnectionRate`。默认值`OutTraffic`。
                     * @return OrderField 排序字段。支持 `InPkg` `OutPkg` `InTraffic` `OutTraffic`，标准型nat额外支持 并发连接数`ConcurrentConnectionCount` 、新建连接速率`NewConnectionRate`。默认值`OutTraffic`。
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置排序字段。支持 `InPkg` `OutPkg` `InTraffic` `OutTraffic`，标准型nat额外支持 并发连接数`ConcurrentConnectionCount` 、新建连接速率`NewConnectionRate`。默认值`OutTraffic`。
                     * @param _orderField 排序字段。支持 `InPkg` `OutPkg` `InTraffic` `OutTraffic`，标准型nat额外支持 并发连接数`ConcurrentConnectionCount` 、新建连接速率`NewConnectionRate`。默认值`OutTraffic`。
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取排序方法。顺序：`ASC`，倒序：`DESC`。默认值`DESC`。
                     * @return OrderDirection 排序方法。顺序：`ASC`，倒序：`DESC`。默认值`DESC`。
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置排序方法。顺序：`ASC`，倒序：`DESC`。默认值`DESC`。
                     * @param _orderDirection 排序方法。顺序：`ASC`，倒序：`DESC`。默认值`DESC`。
                     * 
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     * 
                     */
                    bool OrderDirectionHasBeenSet() const;

                    /**
                     * 获取VPC内部IPv4地址，精确匹配
                     * @return PrivateIpAddress VPC内部IPv4地址，精确匹配
                     * 
                     */
                    std::string GetPrivateIpAddress() const;

                    /**
                     * 设置VPC内部IPv4地址，精确匹配
                     * @param _privateIpAddress VPC内部IPv4地址，精确匹配
                     * 
                     */
                    void SetPrivateIpAddress(const std::string& _privateIpAddress);

                    /**
                     * 判断参数 PrivateIpAddress 是否已赋值
                     * @return PrivateIpAddress 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressHasBeenSet() const;

                private:

                    /**
                     * 时间点。表示要查询这分钟内的明细。如：`2019-02-28 18:15:20`，将查询 `18:15` 这一分钟内的明细。
                     */
                    std::string m_timePoint;
                    bool m_timePointHasBeenSet;

                    /**
                     * VPN网关实例ID，形如：`vpn-ltjahce6`。
                     */
                    std::string m_vpnId;
                    bool m_vpnIdHasBeenSet;

                    /**
                     * 专线网关实例ID，形如：`dcg-ltjahce6`。
                     */
                    std::string m_directConnectGatewayId;
                    bool m_directConnectGatewayIdHasBeenSet;

                    /**
                     * 对等连接实例ID，形如：`pcx-ltjahce6`。
                     */
                    std::string m_peeringConnectionId;
                    bool m_peeringConnectionIdHasBeenSet;

                    /**
                     * NAT网关实例ID，形如：`nat-ltjahce6`。
                     */
                    std::string m_natId;
                    bool m_natIdHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序字段。支持 `InPkg` `OutPkg` `InTraffic` `OutTraffic`，标准型nat额外支持 并发连接数`ConcurrentConnectionCount` 、新建连接速率`NewConnectionRate`。默认值`OutTraffic`。
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 排序方法。顺序：`ASC`，倒序：`DESC`。默认值`DESC`。
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                    /**
                     * VPC内部IPv4地址，精确匹配
                     */
                    std::string m_privateIpAddress;
                    bool m_privateIpAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEGATEWAYFLOWMONITORDETAILREQUEST_H_
