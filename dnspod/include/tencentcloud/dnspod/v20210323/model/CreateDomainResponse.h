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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATEDOMAINRESPONSE_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATEDOMAINRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/DomainCreateInfo.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * CreateDomain返回参数结构体
                */
                class CreateDomainResponse : public AbstractModel
                {
                public:
                    CreateDomainResponse();
                    ~CreateDomainResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取域名信息
                     * @return DomainInfo 域名信息
                     * 
                     */
                    DomainCreateInfo GetDomainInfo() const;

                    /**
                     * 判断参数 DomainInfo 是否已赋值
                     * @return DomainInfo 是否已赋值
                     * 
                     */
                    bool DomainInfoHasBeenSet() const;

                private:

                    /**
                     * 域名信息
                     */
                    DomainCreateInfo m_domainInfo;
                    bool m_domainInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATEDOMAINRESPONSE_H_
