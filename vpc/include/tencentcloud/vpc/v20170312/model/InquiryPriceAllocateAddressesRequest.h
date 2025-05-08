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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_INQUIRYPRICEALLOCATEADDRESSESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_INQUIRYPRICEALLOCATEADDRESSESREQUEST_H_

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
                * InquiryPriceAllocateAddresses请求参数结构体
                */
                class InquiryPriceAllocateAddressesRequest : public AbstractModel
                {
                public:
                    InquiryPriceAllocateAddressesRequest();
                    ~InquiryPriceAllocateAddressesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取EIP计费方式。
<ul style="margin:0"><li>账号为标准账户类型的用户，可选值：<ul>
<li>BANDWIDTH_POSTPAID_BY_HOUR：带宽按小时后付费</li>
<li>BANDWIDTH_PREPAID_BY_MONTH：包月按带宽预付费</li>
<li>TRAFFIC_POSTPAID_BY_HOUR：流量按小时后付费</li>
</ul></li>
</ul>
                     * @return InternetChargeType EIP计费方式。
<ul style="margin:0"><li>账号为标准账户类型的用户，可选值：<ul>
<li>BANDWIDTH_POSTPAID_BY_HOUR：带宽按小时后付费</li>
<li>BANDWIDTH_PREPAID_BY_MONTH：包月按带宽预付费</li>
<li>TRAFFIC_POSTPAID_BY_HOUR：流量按小时后付费</li>
</ul></li>
</ul>
                     * 
                     */
                    std::string GetInternetChargeType() const;

                    /**
                     * 设置EIP计费方式。
<ul style="margin:0"><li>账号为标准账户类型的用户，可选值：<ul>
<li>BANDWIDTH_POSTPAID_BY_HOUR：带宽按小时后付费</li>
<li>BANDWIDTH_PREPAID_BY_MONTH：包月按带宽预付费</li>
<li>TRAFFIC_POSTPAID_BY_HOUR：流量按小时后付费</li>
</ul></li>
</ul>
                     * @param _internetChargeType EIP计费方式。
<ul style="margin:0"><li>账号为标准账户类型的用户，可选值：<ul>
<li>BANDWIDTH_POSTPAID_BY_HOUR：带宽按小时后付费</li>
<li>BANDWIDTH_PREPAID_BY_MONTH：包月按带宽预付费</li>
<li>TRAFFIC_POSTPAID_BY_HOUR：流量按小时后付费</li>
</ul></li>
</ul>
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
                     * 获取EIP出带宽上限，单位：Mbps。
<ul style="margin:0"><li>账号为标准账户类型的用户，可选值范围取决于EIP计费方式：<ul>
<li>BANDWIDTH_POSTPAID_BY_HOUR：1 Mbps 至 100 Mbps</li>
<li>BANDWIDTH_PREPAID_BY_MONTH：1 Mbps 至 200 Mbps</li>
<li>TRAFFIC_POSTPAID_BY_HOUR：1 Mbps 至 100 Mbps</li></ul>默认值：1 Mbps。</li>
<li>账号为传统账户类型的用户，EIP出带宽上限取决于与其绑定的实例的公网出带宽上限，无需传递此参数。</li></ul>

                     * @return InternetMaxBandwidthOut EIP出带宽上限，单位：Mbps。
<ul style="margin:0"><li>账号为标准账户类型的用户，可选值范围取决于EIP计费方式：<ul>
<li>BANDWIDTH_POSTPAID_BY_HOUR：1 Mbps 至 100 Mbps</li>
<li>BANDWIDTH_PREPAID_BY_MONTH：1 Mbps 至 200 Mbps</li>
<li>TRAFFIC_POSTPAID_BY_HOUR：1 Mbps 至 100 Mbps</li></ul>默认值：1 Mbps。</li>
<li>账号为传统账户类型的用户，EIP出带宽上限取决于与其绑定的实例的公网出带宽上限，无需传递此参数。</li></ul>

                     * 
                     */
                    int64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置EIP出带宽上限，单位：Mbps。
<ul style="margin:0"><li>账号为标准账户类型的用户，可选值范围取决于EIP计费方式：<ul>
<li>BANDWIDTH_POSTPAID_BY_HOUR：1 Mbps 至 100 Mbps</li>
<li>BANDWIDTH_PREPAID_BY_MONTH：1 Mbps 至 200 Mbps</li>
<li>TRAFFIC_POSTPAID_BY_HOUR：1 Mbps 至 100 Mbps</li></ul>默认值：1 Mbps。</li>
<li>账号为传统账户类型的用户，EIP出带宽上限取决于与其绑定的实例的公网出带宽上限，无需传递此参数。</li></ul>

                     * @param _internetMaxBandwidthOut EIP出带宽上限，单位：Mbps。
<ul style="margin:0"><li>账号为标准账户类型的用户，可选值范围取决于EIP计费方式：<ul>
<li>BANDWIDTH_POSTPAID_BY_HOUR：1 Mbps 至 100 Mbps</li>
<li>BANDWIDTH_PREPAID_BY_MONTH：1 Mbps 至 200 Mbps</li>
<li>TRAFFIC_POSTPAID_BY_HOUR：1 Mbps 至 100 Mbps</li></ul>默认值：1 Mbps。</li>
<li>账号为传统账户类型的用户，EIP出带宽上限取决于与其绑定的实例的公网出带宽上限，无需传递此参数。</li></ul>

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
                     * 获取包月按带宽预付费EIP的计费参数。EIP为包月按带宽预付费时，该参数必传，其余场景不需传递
                     * @return AddressChargePrepaid 包月按带宽预付费EIP的计费参数。EIP为包月按带宽预付费时，该参数必传，其余场景不需传递
                     * 
                     */
                    AddressChargePrepaid GetAddressChargePrepaid() const;

                    /**
                     * 设置包月按带宽预付费EIP的计费参数。EIP为包月按带宽预付费时，该参数必传，其余场景不需传递
                     * @param _addressChargePrepaid 包月按带宽预付费EIP的计费参数。EIP为包月按带宽预付费时，该参数必传，其余场景不需传递
                     * 
                     */
                    void SetAddressChargePrepaid(const AddressChargePrepaid& _addressChargePrepaid);

                    /**
                     * 判断参数 AddressChargePrepaid 是否已赋值
                     * @return AddressChargePrepaid 是否已赋值
                     * 
                     */
                    bool AddressChargePrepaidHasBeenSet() const;

                    /**
                     * 获取EIP类型。默认值：EIP。
<ul style="margin:0"><li>弹性公网IP，可选值：<ul><li>EIP：弹性公网IP</li></ul></li></ul>
<ul style="margin:0"><li>精品IP，可选值：<ul><li>HighQualityEIP：精品IP</li></ul>注意：仅新加坡和中国香港支持精品IP。</li></ul>
<ul style="margin:0"><li>高防IP，可选值：<ul><li>AntiDDoSEIP：高防IP</li></ul>注意：仅部分地域支持高防IP，详情可见弹性公网IP[产品概述](https://cloud.tencent.com/document/product/1199/41646)。</li></ul>
                     * @return AddressType EIP类型。默认值：EIP。
<ul style="margin:0"><li>弹性公网IP，可选值：<ul><li>EIP：弹性公网IP</li></ul></li></ul>
<ul style="margin:0"><li>精品IP，可选值：<ul><li>HighQualityEIP：精品IP</li></ul>注意：仅新加坡和中国香港支持精品IP。</li></ul>
<ul style="margin:0"><li>高防IP，可选值：<ul><li>AntiDDoSEIP：高防IP</li></ul>注意：仅部分地域支持高防IP，详情可见弹性公网IP[产品概述](https://cloud.tencent.com/document/product/1199/41646)。</li></ul>
                     * 
                     */
                    std::string GetAddressType() const;

                    /**
                     * 设置EIP类型。默认值：EIP。
<ul style="margin:0"><li>弹性公网IP，可选值：<ul><li>EIP：弹性公网IP</li></ul></li></ul>
<ul style="margin:0"><li>精品IP，可选值：<ul><li>HighQualityEIP：精品IP</li></ul>注意：仅新加坡和中国香港支持精品IP。</li></ul>
<ul style="margin:0"><li>高防IP，可选值：<ul><li>AntiDDoSEIP：高防IP</li></ul>注意：仅部分地域支持高防IP，详情可见弹性公网IP[产品概述](https://cloud.tencent.com/document/product/1199/41646)。</li></ul>
                     * @param _addressType EIP类型。默认值：EIP。
<ul style="margin:0"><li>弹性公网IP，可选值：<ul><li>EIP：弹性公网IP</li></ul></li></ul>
<ul style="margin:0"><li>精品IP，可选值：<ul><li>HighQualityEIP：精品IP</li></ul>注意：仅新加坡和中国香港支持精品IP。</li></ul>
<ul style="margin:0"><li>高防IP，可选值：<ul><li>AntiDDoSEIP：高防IP</li></ul>注意：仅部分地域支持高防IP，详情可见弹性公网IP[产品概述](https://cloud.tencent.com/document/product/1199/41646)。</li></ul>
                     * 
                     */
                    void SetAddressType(const std::string& _addressType);

                    /**
                     * 判断参数 AddressType 是否已赋值
                     * @return AddressType 是否已赋值
                     * 
                     */
                    bool AddressTypeHasBeenSet() const;

                private:

                    /**
                     * EIP计费方式。
<ul style="margin:0"><li>账号为标准账户类型的用户，可选值：<ul>
<li>BANDWIDTH_POSTPAID_BY_HOUR：带宽按小时后付费</li>
<li>BANDWIDTH_PREPAID_BY_MONTH：包月按带宽预付费</li>
<li>TRAFFIC_POSTPAID_BY_HOUR：流量按小时后付费</li>
</ul></li>
</ul>
                     */
                    std::string m_internetChargeType;
                    bool m_internetChargeTypeHasBeenSet;

                    /**
                     * EIP出带宽上限，单位：Mbps。
<ul style="margin:0"><li>账号为标准账户类型的用户，可选值范围取决于EIP计费方式：<ul>
<li>BANDWIDTH_POSTPAID_BY_HOUR：1 Mbps 至 100 Mbps</li>
<li>BANDWIDTH_PREPAID_BY_MONTH：1 Mbps 至 200 Mbps</li>
<li>TRAFFIC_POSTPAID_BY_HOUR：1 Mbps 至 100 Mbps</li></ul>默认值：1 Mbps。</li>
<li>账号为传统账户类型的用户，EIP出带宽上限取决于与其绑定的实例的公网出带宽上限，无需传递此参数。</li></ul>

                     */
                    int64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * 包月按带宽预付费EIP的计费参数。EIP为包月按带宽预付费时，该参数必传，其余场景不需传递
                     */
                    AddressChargePrepaid m_addressChargePrepaid;
                    bool m_addressChargePrepaidHasBeenSet;

                    /**
                     * EIP类型。默认值：EIP。
<ul style="margin:0"><li>弹性公网IP，可选值：<ul><li>EIP：弹性公网IP</li></ul></li></ul>
<ul style="margin:0"><li>精品IP，可选值：<ul><li>HighQualityEIP：精品IP</li></ul>注意：仅新加坡和中国香港支持精品IP。</li></ul>
<ul style="margin:0"><li>高防IP，可选值：<ul><li>AntiDDoSEIP：高防IP</li></ul>注意：仅部分地域支持高防IP，详情可见弹性公网IP[产品概述](https://cloud.tencent.com/document/product/1199/41646)。</li></ul>
                     */
                    std::string m_addressType;
                    bool m_addressTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_INQUIRYPRICEALLOCATEADDRESSESREQUEST_H_
