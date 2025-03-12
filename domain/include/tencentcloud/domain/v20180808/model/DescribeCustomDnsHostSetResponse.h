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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBECUSTOMDNSHOSTSETRESPONSE_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBECUSTOMDNSHOSTSETRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/domain/v20180808/model/CustomDnsHost.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribeCustomDnsHostSet返回参数结构体
                */
                class DescribeCustomDnsHostSetResponse : public AbstractModel
                {
                public:
                    DescribeCustomDnsHostSetResponse();
                    ~DescribeCustomDnsHostSetResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取自定义DNS Host 列表
                     * @return DnsHostSet 自定义DNS Host 列表
                     * 
                     */
                    std::vector<CustomDnsHost> GetDnsHostSet() const;

                    /**
                     * 判断参数 DnsHostSet 是否已赋值
                     * @return DnsHostSet 是否已赋值
                     * 
                     */
                    bool DnsHostSetHasBeenSet() const;

                    /**
                     * 获取自定义DNS Host总数
                     * @return TotalCount 自定义DNS Host总数
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
                     * 自定义DNS Host 列表
                     */
                    std::vector<CustomDnsHost> m_dnsHostSet;
                    bool m_dnsHostSetHasBeenSet;

                    /**
                     * 自定义DNS Host总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBECUSTOMDNSHOSTSETRESPONSE_H_
