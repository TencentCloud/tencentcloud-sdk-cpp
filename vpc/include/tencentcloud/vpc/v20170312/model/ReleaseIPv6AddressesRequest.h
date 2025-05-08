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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_RELEASEIPV6ADDRESSESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_RELEASEIPV6ADDRESSESREQUEST_H_

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
                * ReleaseIPv6Addresses请求参数结构体
                */
                class ReleaseIPv6AddressesRequest : public AbstractModel
                {
                public:
                    ReleaseIPv6AddressesRequest();
                    ~ReleaseIPv6AddressesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取IPv6地址唯一ID。可以使用[DescribeIPv6Addresses](https://cloud.tencent.com/document/api/215/113677)接口获取IPv6AddressId。
                     * @return IPv6AddressIds IPv6地址唯一ID。可以使用[DescribeIPv6Addresses](https://cloud.tencent.com/document/api/215/113677)接口获取IPv6AddressId。
                     * 
                     */
                    std::vector<std::string> GetIPv6AddressIds() const;

                    /**
                     * 设置IPv6地址唯一ID。可以使用[DescribeIPv6Addresses](https://cloud.tencent.com/document/api/215/113677)接口获取IPv6AddressId。
                     * @param _iPv6AddressIds IPv6地址唯一ID。可以使用[DescribeIPv6Addresses](https://cloud.tencent.com/document/api/215/113677)接口获取IPv6AddressId。
                     * 
                     */
                    void SetIPv6AddressIds(const std::vector<std::string>& _iPv6AddressIds);

                    /**
                     * 判断参数 IPv6AddressIds 是否已赋值
                     * @return IPv6AddressIds 是否已赋值
                     * 
                     */
                    bool IPv6AddressIdsHasBeenSet() const;

                private:

                    /**
                     * IPv6地址唯一ID。可以使用[DescribeIPv6Addresses](https://cloud.tencent.com/document/api/215/113677)接口获取IPv6AddressId。
                     */
                    std::vector<std::string> m_iPv6AddressIds;
                    bool m_iPv6AddressIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_RELEASEIPV6ADDRESSESREQUEST_H_
