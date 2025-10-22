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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_ENABLELIVEDOMAINREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_ENABLELIVEDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * EnableLiveDomain请求参数结构体
                */
                class EnableLiveDomainRequest : public AbstractModel
                {
                public:
                    EnableLiveDomainRequest();
                    ~EnableLiveDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待启用的直播域名。
                     * @return DomainName 待启用的直播域名。
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置待启用的直播域名。
                     * @param _domainName 待启用的直播域名。
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                private:

                    /**
                     * 待启用的直播域名。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_ENABLELIVEDOMAINREQUEST_H_
