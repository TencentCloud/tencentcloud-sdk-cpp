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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DELETEPROTECTGROUPDOMAINREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DELETEPROTECTGROUPDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DeleteProtectGroupDomain请求参数结构体
                */
                class DeleteProtectGroupDomainRequest : public AbstractModel
                {
                public:
                    DeleteProtectGroupDomainRequest();
                    ~DeleteProtectGroupDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取防护对象组ID
                     * @return GroupId 防护对象组ID
                     * 
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置防护对象组ID
                     * @param _groupId 防护对象组ID
                     * 
                     */
                    void SetGroupId(const uint64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取解除绑定的域名
                     * @return Domain 解除绑定的域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置解除绑定的域名
                     * @param _domain 解除绑定的域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * 防护对象组ID
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 解除绑定的域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DELETEPROTECTGROUPDOMAINREQUEST_H_
