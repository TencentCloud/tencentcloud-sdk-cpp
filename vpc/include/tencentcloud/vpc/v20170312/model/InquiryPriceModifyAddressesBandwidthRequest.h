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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_INQUIRYPRICEMODIFYADDRESSESBANDWIDTHREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_INQUIRYPRICEMODIFYADDRESSESBANDWIDTHREQUEST_H_

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
                * InquiryPriceModifyAddressesBandwidth请求参数结构体
                */
                class InquiryPriceModifyAddressesBandwidthRequest : public AbstractModel
                {
                public:
                    InquiryPriceModifyAddressesBandwidthRequest();
                    ~InquiryPriceModifyAddressesBandwidthRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取EIP唯一ID，可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取AddressId。
                     * @return AddressIds EIP唯一ID，可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取AddressId。
                     * 
                     */
                    std::vector<std::string> GetAddressIds() const;

                    /**
                     * 设置EIP唯一ID，可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取AddressId。
                     * @param _addressIds EIP唯一ID，可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取AddressId。
                     * 
                     */
                    void SetAddressIds(const std::vector<std::string>& _addressIds);

                    /**
                     * 判断参数 AddressIds 是否已赋值
                     * @return AddressIds 是否已赋值
                     * 
                     */
                    bool AddressIdsHasBeenSet() const;

                    /**
                     * 获取新带宽值，可调整的带宽上限值参考产品文档[带宽上限](https://cloud.tencent.com/document/product/1199/48333)。
                     * @return InternetMaxBandwidthOut 新带宽值，可调整的带宽上限值参考产品文档[带宽上限](https://cloud.tencent.com/document/product/1199/48333)。
                     * 
                     */
                    int64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置新带宽值，可调整的带宽上限值参考产品文档[带宽上限](https://cloud.tencent.com/document/product/1199/48333)。
                     * @param _internetMaxBandwidthOut 新带宽值，可调整的带宽上限值参考产品文档[带宽上限](https://cloud.tencent.com/document/product/1199/48333)。
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                private:

                    /**
                     * EIP唯一ID，可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取AddressId。
                     */
                    std::vector<std::string> m_addressIds;
                    bool m_addressIdsHasBeenSet;

                    /**
                     * 新带宽值，可调整的带宽上限值参考产品文档[带宽上限](https://cloud.tencent.com/document/product/1199/48333)。
                     */
                    int64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_INQUIRYPRICEMODIFYADDRESSESBANDWIDTHREQUEST_H_
