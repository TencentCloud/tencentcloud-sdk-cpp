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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DELETELIVEDOMAINREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DELETELIVEDOMAINREQUEST_H_

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
                * DeleteLiveDomain请求参数结构体
                */
                class DeleteLiveDomainRequest : public AbstractModel
                {
                public:
                    DeleteLiveDomainRequest();
                    ~DeleteLiveDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要删除的域名
                     * @return DomainName 要删除的域名
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置要删除的域名
                     * @param _domainName 要删除的域名
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
                     * 获取类型。0-推流，1-播放
                     * @return DomainType 类型。0-推流，1-播放
                     * 
                     */
                    uint64_t GetDomainType() const;

                    /**
                     * 设置类型。0-推流，1-播放
                     * @param _domainType 类型。0-推流，1-播放
                     * 
                     */
                    void SetDomainType(const uint64_t& _domainType);

                    /**
                     * 判断参数 DomainType 是否已赋值
                     * @return DomainType 是否已赋值
                     * 
                     */
                    bool DomainTypeHasBeenSet() const;

                private:

                    /**
                     * 要删除的域名
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 类型。0-推流，1-播放
                     */
                    uint64_t m_domainType;
                    bool m_domainTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DELETELIVEDOMAINREQUEST_H_
