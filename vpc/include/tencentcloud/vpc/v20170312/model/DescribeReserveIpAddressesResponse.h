/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBERESERVEIPADDRESSESRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBERESERVEIPADDRESSESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/ReserveIpAddressInfo.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeReserveIpAddresses返回参数结构体
                */
                class DescribeReserveIpAddressesResponse : public AbstractModel
                {
                public:
                    DescribeReserveIpAddressesResponse();
                    ~DescribeReserveIpAddressesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取内网保留 IP返回信息。
                     * @return ReserveIpAddressSet 内网保留 IP返回信息。
                     * 
                     */
                    std::vector<ReserveIpAddressInfo> GetReserveIpAddressSet() const;

                    /**
                     * 判断参数 ReserveIpAddressSet 是否已赋值
                     * @return ReserveIpAddressSet 是否已赋值
                     * 
                     */
                    bool ReserveIpAddressSetHasBeenSet() const;

                    /**
                     * 获取返回内网保留IP的个数。
                     * @return TotalCount 返回内网保留IP的个数。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 内网保留 IP返回信息。
                     */
                    std::vector<ReserveIpAddressInfo> m_reserveIpAddressSet;
                    bool m_reserveIpAddressSetHasBeenSet;

                    /**
                     * 返回内网保留IP的个数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBERESERVEIPADDRESSESRESPONSE_H_
