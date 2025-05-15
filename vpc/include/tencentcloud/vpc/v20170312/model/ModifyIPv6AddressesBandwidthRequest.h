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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYIPV6ADDRESSESBANDWIDTHREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYIPV6ADDRESSESBANDWIDTHREQUEST_H_

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
                * ModifyIPv6AddressesBandwidth请求参数结构体
                */
                class ModifyIPv6AddressesBandwidthRequest : public AbstractModel
                {
                public:
                    ModifyIPv6AddressesBandwidthRequest();
                    ~ModifyIPv6AddressesBandwidthRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取弹性公网IPv6地址唯一ID，可以使用[DescribeIPv6Addresses](https://cloud.tencent.com/document/api/215/113677)接口获取IPv6AddressId。
                     * @return IPv6AddressIds 弹性公网IPv6地址唯一ID，可以使用[DescribeIPv6Addresses](https://cloud.tencent.com/document/api/215/113677)接口获取IPv6AddressId。
                     * 
                     */
                    std::vector<std::string> GetIPv6AddressIds() const;

                    /**
                     * 设置弹性公网IPv6地址唯一ID，可以使用[DescribeIPv6Addresses](https://cloud.tencent.com/document/api/215/113677)接口获取IPv6AddressId。
                     * @param _iPv6AddressIds 弹性公网IPv6地址唯一ID，可以使用[DescribeIPv6Addresses](https://cloud.tencent.com/document/api/215/113677)接口获取IPv6AddressId。
                     * 
                     */
                    void SetIPv6AddressIds(const std::vector<std::string>& _iPv6AddressIds);

                    /**
                     * 判断参数 IPv6AddressIds 是否已赋值
                     * @return IPv6AddressIds 是否已赋值
                     * 
                     */
                    bool IPv6AddressIdsHasBeenSet() const;

                    /**
                     * 获取弹性公网IPv6地址网络带宽，可调整的带宽上限值参考产品文档中[IPv6 计费限制说明](https://cloud.tencent.com/document/product/1142/38369#IPv6)。
                     * @return InternetMaxBandwidthOut 弹性公网IPv6地址网络带宽，可调整的带宽上限值参考产品文档中[IPv6 计费限制说明](https://cloud.tencent.com/document/product/1142/38369#IPv6)。
                     * 
                     */
                    int64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置弹性公网IPv6地址网络带宽，可调整的带宽上限值参考产品文档中[IPv6 计费限制说明](https://cloud.tencent.com/document/product/1142/38369#IPv6)。
                     * @param _internetMaxBandwidthOut 弹性公网IPv6地址网络带宽，可调整的带宽上限值参考产品文档中[IPv6 计费限制说明](https://cloud.tencent.com/document/product/1142/38369#IPv6)。
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
                     * 弹性公网IPv6地址唯一ID，可以使用[DescribeIPv6Addresses](https://cloud.tencent.com/document/api/215/113677)接口获取IPv6AddressId。
                     */
                    std::vector<std::string> m_iPv6AddressIds;
                    bool m_iPv6AddressIdsHasBeenSet;

                    /**
                     * 弹性公网IPv6地址网络带宽，可调整的带宽上限值参考产品文档中[IPv6 计费限制说明](https://cloud.tencent.com/document/product/1142/38369#IPv6)。
                     */
                    int64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYIPV6ADDRESSESBANDWIDTHREQUEST_H_
