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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEDOMAINSCONFIGRESPONSE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEDOMAINSCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/DetailDomain.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribeDomainsConfig返回参数结构体
                */
                class DescribeDomainsConfigResponse : public AbstractModel
                {
                public:
                    DescribeDomainsConfigResponse();
                    ~DescribeDomainsConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取域名列表
                     * @return Domains 域名列表
                     * 
                     */
                    std::vector<DetailDomain> GetDomains() const;

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取符合查询条件的域名总数
用于分页查询
                     * @return TotalNumber 符合查询条件的域名总数
用于分页查询
                     * 
                     */
                    int64_t GetTotalNumber() const;

                    /**
                     * 判断参数 TotalNumber 是否已赋值
                     * @return TotalNumber 是否已赋值
                     * 
                     */
                    bool TotalNumberHasBeenSet() const;

                private:

                    /**
                     * 域名列表
                     */
                    std::vector<DetailDomain> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * 符合查询条件的域名总数
用于分页查询
                     */
                    int64_t m_totalNumber;
                    bool m_totalNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEDOMAINSCONFIGRESPONSE_H_
