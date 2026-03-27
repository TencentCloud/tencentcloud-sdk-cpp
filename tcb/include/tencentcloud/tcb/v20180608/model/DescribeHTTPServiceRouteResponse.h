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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEHTTPSERVICEROUTERESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEHTTPSERVICEROUTERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/HTTPServiceDomain.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeHTTPServiceRoute返回参数结构体
                */
                class DescribeHTTPServiceRouteResponse : public AbstractModel
                {
                public:
                    DescribeHTTPServiceRouteResponse();
                    ~DescribeHTTPServiceRouteResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取域名路由信息列表
                     * @return Domains 域名路由信息列表
                     * 
                     */
                    std::vector<HTTPServiceDomain> GetDomains() const;

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取自定义接入的源站域名（HTTPService接入层域名）
                     * @return OriginDomain 自定义接入的源站域名（HTTPService接入层域名）
                     * 
                     */
                    std::string GetOriginDomain() const;

                    /**
                     * 判断参数 OriginDomain 是否已赋值
                     * @return OriginDomain 是否已赋值
                     * 
                     */
                    bool OriginDomainHasBeenSet() const;

                    /**
                     * 获取域名总数，分页查询使用总数判断是否已经拉取到所有数据
                     * @return TotalCount 域名总数，分页查询使用总数判断是否已经拉取到所有数据
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
                     * 域名路由信息列表
                     */
                    std::vector<HTTPServiceDomain> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * 自定义接入的源站域名（HTTPService接入层域名）
                     */
                    std::string m_originDomain;
                    bool m_originDomainHasBeenSet;

                    /**
                     * 域名总数，分页查询使用总数判断是否已经拉取到所有数据
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEHTTPSERVICEROUTERESPONSE_H_
