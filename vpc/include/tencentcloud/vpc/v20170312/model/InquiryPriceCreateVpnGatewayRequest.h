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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_INQUIRYPRICECREATEVPNGATEWAYREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_INQUIRYPRICECREATEVPNGATEWAYREQUEST_H_

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
                * InquiryPriceCreateVpnGateway请求参数结构体
                */
                class InquiryPriceCreateVpnGatewayRequest : public AbstractModel
                {
                public:
                    InquiryPriceCreateVpnGatewayRequest();
                    ~InquiryPriceCreateVpnGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取公网带宽设置。可选带宽规格：5, 10, 20, 50, 100, 200, 500, 1000, 3000；单位：Mbps。
                     * @return InternetMaxBandwidthOut 公网带宽设置。可选带宽规格：5, 10, 20, 50, 100, 200, 500, 1000, 3000；单位：Mbps。
                     * 
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置公网带宽设置。可选带宽规格：5, 10, 20, 50, 100, 200, 500, 1000, 3000；单位：Mbps。
                     * @param _internetMaxBandwidthOut 公网带宽设置。可选带宽规格：5, 10, 20, 50, 100, 200, 500, 1000, 3000；单位：Mbps。
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
                     * 获取VPN网关计费模式，PREPAID：表示预付费，即包年包月，POSTPAID_BY_HOUR：表示后付费，即按量计费。默认：POSTPAID_BY_HOUR，如果指定预付费模式，参数InstanceChargePrepaid必填。
                     * @return InstanceChargeType VPN网关计费模式，PREPAID：表示预付费，即包年包月，POSTPAID_BY_HOUR：表示后付费，即按量计费。默认：POSTPAID_BY_HOUR，如果指定预付费模式，参数InstanceChargePrepaid必填。
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置VPN网关计费模式，PREPAID：表示预付费，即包年包月，POSTPAID_BY_HOUR：表示后付费，即按量计费。默认：POSTPAID_BY_HOUR，如果指定预付费模式，参数InstanceChargePrepaid必填。
                     * @param _instanceChargeType VPN网关计费模式，PREPAID：表示预付费，即包年包月，POSTPAID_BY_HOUR：表示后付费，即按量计费。默认：POSTPAID_BY_HOUR，如果指定预付费模式，参数InstanceChargePrepaid必填。
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     * @return InstanceChargePrepaid 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     * @param _instanceChargePrepaid 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     * 
                     */
                    void SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid);

                    /**
                     * 判断参数 InstanceChargePrepaid 是否已赋值
                     * @return InstanceChargePrepaid 是否已赋值
                     * 
                     */
                    bool InstanceChargePrepaidHasBeenSet() const;

                    /**
                     * 获取SSL VPN连接数设置，可选规格：5, 10, 20, 50, 100, 200, 500, 1000；单位：个。
                     * @return MaxConnection SSL VPN连接数设置，可选规格：5, 10, 20, 50, 100, 200, 500, 1000；单位：个。
                     * 
                     */
                    uint64_t GetMaxConnection() const;

                    /**
                     * 设置SSL VPN连接数设置，可选规格：5, 10, 20, 50, 100, 200, 500, 1000；单位：个。
                     * @param _maxConnection SSL VPN连接数设置，可选规格：5, 10, 20, 50, 100, 200, 500, 1000；单位：个。
                     * 
                     */
                    void SetMaxConnection(const uint64_t& _maxConnection);

                    /**
                     * 判断参数 MaxConnection 是否已赋值
                     * @return MaxConnection 是否已赋值
                     * 
                     */
                    bool MaxConnectionHasBeenSet() const;

                    /**
                     * 获取查询的VPN类型，支持IPSEC、SSL两种类型，为SSL类型时，MaxConnection参数必传。
                     * @return Type 查询的VPN类型，支持IPSEC、SSL两种类型，为SSL类型时，MaxConnection参数必传。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置查询的VPN类型，支持IPSEC、SSL两种类型，为SSL类型时，MaxConnection参数必传。
                     * @param _type 查询的VPN类型，支持IPSEC、SSL两种类型，为SSL类型时，MaxConnection参数必传。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 公网带宽设置。可选带宽规格：5, 10, 20, 50, 100, 200, 500, 1000, 3000；单位：Mbps。
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
                     * SSL VPN连接数设置，可选规格：5, 10, 20, 50, 100, 200, 500, 1000；单位：个。
                     */
                    uint64_t m_maxConnection;
                    bool m_maxConnectionHasBeenSet;

                    /**
                     * 查询的VPN类型，支持IPSEC、SSL两种类型，为SSL类型时，MaxConnection参数必传。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_INQUIRYPRICECREATEVPNGATEWAYREQUEST_H_
