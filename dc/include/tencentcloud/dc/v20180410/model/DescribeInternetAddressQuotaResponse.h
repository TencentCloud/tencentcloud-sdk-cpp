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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_DESCRIBEINTERNETADDRESSQUOTARESPONSE_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_DESCRIBEINTERNETADDRESSQUOTARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * DescribeInternetAddressQuota返回参数结构体
                */
                class DescribeInternetAddressQuotaResponse : public AbstractModel
                {
                public:
                    DescribeInternetAddressQuotaResponse();
                    ~DescribeInternetAddressQuotaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取IPv6互联网公网允许的最小前缀长度
                     * @return Ipv6PrefixLen IPv6互联网公网允许的最小前缀长度
                     * 
                     */
                    int64_t GetIpv6PrefixLen() const;

                    /**
                     * 判断参数 Ipv6PrefixLen 是否已赋值
                     * @return Ipv6PrefixLen 是否已赋值
                     * 
                     */
                    bool Ipv6PrefixLenHasBeenSet() const;

                    /**
                     * 获取BGP类型IPv4互联网地址配额
                     * @return Ipv4BgpQuota BGP类型IPv4互联网地址配额
                     * 
                     */
                    int64_t GetIpv4BgpQuota() const;

                    /**
                     * 判断参数 Ipv4BgpQuota 是否已赋值
                     * @return Ipv4BgpQuota 是否已赋值
                     * 
                     */
                    bool Ipv4BgpQuotaHasBeenSet() const;

                    /**
                     * 获取非BGP类型IPv4互联网地址配额
                     * @return Ipv4OtherQuota 非BGP类型IPv4互联网地址配额
                     * 
                     */
                    int64_t GetIpv4OtherQuota() const;

                    /**
                     * 判断参数 Ipv4OtherQuota 是否已赋值
                     * @return Ipv4OtherQuota 是否已赋值
                     * 
                     */
                    bool Ipv4OtherQuotaHasBeenSet() const;

                    /**
                     * 获取BGP类型IPv4互联网地址已使用数量
                     * @return Ipv4BgpNum BGP类型IPv4互联网地址已使用数量
                     * 
                     */
                    int64_t GetIpv4BgpNum() const;

                    /**
                     * 判断参数 Ipv4BgpNum 是否已赋值
                     * @return Ipv4BgpNum 是否已赋值
                     * 
                     */
                    bool Ipv4BgpNumHasBeenSet() const;

                    /**
                     * 获取非BGP类型互联网地址已使用数量
                     * @return Ipv4OtherNum 非BGP类型互联网地址已使用数量
                     * 
                     */
                    int64_t GetIpv4OtherNum() const;

                    /**
                     * 判断参数 Ipv4OtherNum 是否已赋值
                     * @return Ipv4OtherNum 是否已赋值
                     * 
                     */
                    bool Ipv4OtherNumHasBeenSet() const;

                private:

                    /**
                     * IPv6互联网公网允许的最小前缀长度
                     */
                    int64_t m_ipv6PrefixLen;
                    bool m_ipv6PrefixLenHasBeenSet;

                    /**
                     * BGP类型IPv4互联网地址配额
                     */
                    int64_t m_ipv4BgpQuota;
                    bool m_ipv4BgpQuotaHasBeenSet;

                    /**
                     * 非BGP类型IPv4互联网地址配额
                     */
                    int64_t m_ipv4OtherQuota;
                    bool m_ipv4OtherQuotaHasBeenSet;

                    /**
                     * BGP类型IPv4互联网地址已使用数量
                     */
                    int64_t m_ipv4BgpNum;
                    bool m_ipv4BgpNumHasBeenSet;

                    /**
                     * 非BGP类型互联网地址已使用数量
                     */
                    int64_t m_ipv4OtherNum;
                    bool m_ipv4OtherNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_DESCRIBEINTERNETADDRESSQUOTARESPONSE_H_
