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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPNGATEWAYREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPNGATEWAYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/InstanceChargePrepaid.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateVpnGateway请求参数结构体
                */
                class CreateVpnGatewayRequest : public AbstractModel
                {
                public:
                    CreateVpnGatewayRequest();
                    ~CreateVpnGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。
                     * @return VpcId VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。
                     * @param VpcId VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取VPN网关名称，最大长度不能超过60个字节。
                     * @return VpnGatewayName VPN网关名称，最大长度不能超过60个字节。
                     */
                    std::string GetVpnGatewayName() const;

                    /**
                     * 设置VPN网关名称，最大长度不能超过60个字节。
                     * @param VpnGatewayName VPN网关名称，最大长度不能超过60个字节。
                     */
                    void SetVpnGatewayName(const std::string& _vpnGatewayName);

                    /**
                     * 判断参数 VpnGatewayName 是否已赋值
                     * @return VpnGatewayName 是否已赋值
                     */
                    bool VpnGatewayNameHasBeenSet() const;

                    /**
                     * 获取公网带宽设置。可选带宽规格：5, 10, 20, 50, 100；单位：Mbps
                     * @return InternetMaxBandwidthOut 公网带宽设置。可选带宽规格：5, 10, 20, 50, 100；单位：Mbps
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置公网带宽设置。可选带宽规格：5, 10, 20, 50, 100；单位：Mbps
                     * @param InternetMaxBandwidthOut 公网带宽设置。可选带宽规格：5, 10, 20, 50, 100；单位：Mbps
                     */
                    void SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取VPN网关计费模式，PREPAID：表示预付费，即包年包月，POSTPAID_BY_HOUR：表示后付费，即按量计费。默认：POSTPAID_BY_HOUR，如果指定预付费模式，参数InstanceChargePrepaid必填。
                     * @return InstanceChargeType VPN网关计费模式，PREPAID：表示预付费，即包年包月，POSTPAID_BY_HOUR：表示后付费，即按量计费。默认：POSTPAID_BY_HOUR，如果指定预付费模式，参数InstanceChargePrepaid必填。
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置VPN网关计费模式，PREPAID：表示预付费，即包年包月，POSTPAID_BY_HOUR：表示后付费，即按量计费。默认：POSTPAID_BY_HOUR，如果指定预付费模式，参数InstanceChargePrepaid必填。
                     * @param InstanceChargeType VPN网关计费模式，PREPAID：表示预付费，即包年包月，POSTPAID_BY_HOUR：表示后付费，即按量计费。默认：POSTPAID_BY_HOUR，如果指定预付费模式，参数InstanceChargePrepaid必填。
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     * @return InstanceChargePrepaid 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     * @param InstanceChargePrepaid 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     */
                    void SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid);

                    /**
                     * 判断参数 InstanceChargePrepaid 是否已赋值
                     * @return InstanceChargePrepaid 是否已赋值
                     */
                    bool InstanceChargePrepaidHasBeenSet() const;

                    /**
                     * 获取可用区，如：ap-guangzhou-2。
                     * @return Zone 可用区，如：ap-guangzhou-2。
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区，如：ap-guangzhou-2。
                     * @param Zone 可用区，如：ap-guangzhou-2。
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取VPN网关类型。值“CCN”云联网类型VPN网关
                     * @return Type VPN网关类型。值“CCN”云联网类型VPN网关
                     */
                    std::string GetType() const;

                    /**
                     * 设置VPN网关类型。值“CCN”云联网类型VPN网关
                     * @param Type VPN网关类型。值“CCN”云联网类型VPN网关
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPN网关名称，最大长度不能超过60个字节。
                     */
                    std::string m_vpnGatewayName;
                    bool m_vpnGatewayNameHasBeenSet;

                    /**
                     * 公网带宽设置。可选带宽规格：5, 10, 20, 50, 100；单位：Mbps
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * VPN网关计费模式，PREPAID：表示预付费，即包年包月，POSTPAID_BY_HOUR：表示后付费，即按量计费。默认：POSTPAID_BY_HOUR，如果指定预付费模式，参数InstanceChargePrepaid必填。
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * 可用区，如：ap-guangzhou-2。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * VPN网关类型。值“CCN”云联网类型VPN网关
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPNGATEWAYREQUEST_H_
