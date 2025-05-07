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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYADDRESSINTERNETCHARGETYPEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYADDRESSINTERNETCHARGETYPEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/AddressChargePrepaid.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyAddressInternetChargeType请求参数结构体
                */
                class ModifyAddressInternetChargeTypeRequest : public AbstractModel
                {
                public:
                    ModifyAddressInternetChargeTypeRequest();
                    ~ModifyAddressInternetChargeTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取弹性公网IP的唯一ID，形如eip-xxx，可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取AddressId。
                     * @return AddressId 弹性公网IP的唯一ID，形如eip-xxx，可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取AddressId。
                     * 
                     */
                    std::string GetAddressId() const;

                    /**
                     * 设置弹性公网IP的唯一ID，形如eip-xxx，可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取AddressId。
                     * @param _addressId 弹性公网IP的唯一ID，形如eip-xxx，可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取AddressId。
                     * 
                     */
                    void SetAddressId(const std::string& _addressId);

                    /**
                     * 判断参数 AddressId 是否已赋值
                     * @return AddressId 是否已赋值
                     * 
                     */
                    bool AddressIdHasBeenSet() const;

                    /**
                     * 获取弹性公网IP调整目标计费模式，支持：
BANDWIDTH_PREPAID_BY_MONTH：包月按带宽预付费
TRAFFIC_POSTPAID_BY_HOUR：流量按小时后付费
BANDWIDTH_POSTPAID_BY_HOUR：带宽按小时后付费
                     * @return InternetChargeType 弹性公网IP调整目标计费模式，支持：
BANDWIDTH_PREPAID_BY_MONTH：包月按带宽预付费
TRAFFIC_POSTPAID_BY_HOUR：流量按小时后付费
BANDWIDTH_POSTPAID_BY_HOUR：带宽按小时后付费
                     * 
                     */
                    std::string GetInternetChargeType() const;

                    /**
                     * 设置弹性公网IP调整目标计费模式，支持：
BANDWIDTH_PREPAID_BY_MONTH：包月按带宽预付费
TRAFFIC_POSTPAID_BY_HOUR：流量按小时后付费
BANDWIDTH_POSTPAID_BY_HOUR：带宽按小时后付费
                     * @param _internetChargeType 弹性公网IP调整目标计费模式，支持：
BANDWIDTH_PREPAID_BY_MONTH：包月按带宽预付费
TRAFFIC_POSTPAID_BY_HOUR：流量按小时后付费
BANDWIDTH_POSTPAID_BY_HOUR：带宽按小时后付费
                     * 
                     */
                    void SetInternetChargeType(const std::string& _internetChargeType);

                    /**
                     * 判断参数 InternetChargeType 是否已赋值
                     * @return InternetChargeType 是否已赋值
                     * 
                     */
                    bool InternetChargeTypeHasBeenSet() const;

                    /**
                     * 获取弹性公网IP调整目标带宽值，可调整的带宽上限值参考产品文档[带宽上限](https://cloud.tencent.com/document/product/1199/48333)。
                     * @return InternetMaxBandwidthOut 弹性公网IP调整目标带宽值，可调整的带宽上限值参考产品文档[带宽上限](https://cloud.tencent.com/document/product/1199/48333)。
                     * 
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置弹性公网IP调整目标带宽值，可调整的带宽上限值参考产品文档[带宽上限](https://cloud.tencent.com/document/product/1199/48333)。
                     * @param _internetMaxBandwidthOut 弹性公网IP调整目标带宽值，可调整的带宽上限值参考产品文档[带宽上限](https://cloud.tencent.com/document/product/1199/48333)。
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
                     * 获取包月带宽网络计费模式参数。弹性公网IP的调整目标计费模式是 BANDWIDTH_PREPAID_BY_MONTH（包月按带宽预付费）时，必传该参数。
                     * @return AddressChargePrepaid 包月带宽网络计费模式参数。弹性公网IP的调整目标计费模式是 BANDWIDTH_PREPAID_BY_MONTH（包月按带宽预付费）时，必传该参数。
                     * 
                     */
                    AddressChargePrepaid GetAddressChargePrepaid() const;

                    /**
                     * 设置包月带宽网络计费模式参数。弹性公网IP的调整目标计费模式是 BANDWIDTH_PREPAID_BY_MONTH（包月按带宽预付费）时，必传该参数。
                     * @param _addressChargePrepaid 包月带宽网络计费模式参数。弹性公网IP的调整目标计费模式是 BANDWIDTH_PREPAID_BY_MONTH（包月按带宽预付费）时，必传该参数。
                     * 
                     */
                    void SetAddressChargePrepaid(const AddressChargePrepaid& _addressChargePrepaid);

                    /**
                     * 判断参数 AddressChargePrepaid 是否已赋值
                     * @return AddressChargePrepaid 是否已赋值
                     * 
                     */
                    bool AddressChargePrepaidHasBeenSet() const;

                private:

                    /**
                     * 弹性公网IP的唯一ID，形如eip-xxx，可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取AddressId。
                     */
                    std::string m_addressId;
                    bool m_addressIdHasBeenSet;

                    /**
                     * 弹性公网IP调整目标计费模式，支持：
BANDWIDTH_PREPAID_BY_MONTH：包月按带宽预付费
TRAFFIC_POSTPAID_BY_HOUR：流量按小时后付费
BANDWIDTH_POSTPAID_BY_HOUR：带宽按小时后付费
                     */
                    std::string m_internetChargeType;
                    bool m_internetChargeTypeHasBeenSet;

                    /**
                     * 弹性公网IP调整目标带宽值，可调整的带宽上限值参考产品文档[带宽上限](https://cloud.tencent.com/document/product/1199/48333)。
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * 包月带宽网络计费模式参数。弹性公网IP的调整目标计费模式是 BANDWIDTH_PREPAID_BY_MONTH（包月按带宽预付费）时，必传该参数。
                     */
                    AddressChargePrepaid m_addressChargePrepaid;
                    bool m_addressChargePrepaidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYADDRESSINTERNETCHARGETYPEREQUEST_H_
