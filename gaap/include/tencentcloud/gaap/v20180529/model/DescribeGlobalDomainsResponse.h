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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEGLOBALDOMAINSRESPONSE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEGLOBALDOMAINSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/Domain.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeGlobalDomains返回参数结构体
                */
                class DescribeGlobalDomainsResponse : public AbstractModel
                {
                public:
                    DescribeGlobalDomainsResponse();
                    ~DescribeGlobalDomainsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取域名信息列表
                     * @return Domains 域名信息列表
                     * 
                     */
                    std::vector<Domain> GetDomains() const;

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取总记录数
                     * @return TotalCount 总记录数
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
                     * 域名信息列表
                     */
                    std::vector<Domain> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * 总记录数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEGLOBALDOMAINSRESPONSE_H_
