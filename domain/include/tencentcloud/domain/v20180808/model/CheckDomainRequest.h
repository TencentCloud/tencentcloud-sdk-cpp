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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_CHECKDOMAINREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_CHECKDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * CheckDomain请求参数结构体
                */
                class CheckDomainRequest : public AbstractModel
                {
                public:
                    CheckDomainRequest();
                    ~CheckDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取所查询域名名称
                     * @return DomainName 所查询域名名称
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置所查询域名名称
                     * @param _domainName 所查询域名名称
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取年限。该参数为空时无法查询溢价词域名
                     * @return Period 年限。该参数为空时无法查询溢价词域名
                     * 
                     */
                    std::string GetPeriod() const;

                    /**
                     * 设置年限。该参数为空时无法查询溢价词域名
                     * @param _period 年限。该参数为空时无法查询溢价词域名
                     * 
                     */
                    void SetPeriod(const std::string& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                private:

                    /**
                     * 所查询域名名称
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 年限。该参数为空时无法查询溢价词域名
                     */
                    std::string m_period;
                    bool m_periodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_CHECKDOMAINREQUEST_H_
