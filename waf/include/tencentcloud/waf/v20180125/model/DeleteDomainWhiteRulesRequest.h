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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DELETEDOMAINWHITERULESREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DELETEDOMAINWHITERULESREQUEST_H_

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
                * DeleteDomainWhiteRules请求参数结构体
                */
                class DeleteDomainWhiteRulesRequest : public AbstractModel
                {
                public:
                    DeleteDomainWhiteRulesRequest();
                    ~DeleteDomainWhiteRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要删除的规则域名
                     * @return Domain 需要删除的规则域名
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置需要删除的规则域名
                     * @param Domain 需要删除的规则域名
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取需要删除的白名单规则
                     * @return Ids 需要删除的白名单规则
                     */
                    std::vector<uint64_t> GetIds() const;

                    /**
                     * 设置需要删除的白名单规则
                     * @param Ids 需要删除的白名单规则
                     */
                    void SetIds(const std::vector<uint64_t>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     */
                    bool IdsHasBeenSet() const;

                private:

                    /**
                     * 需要删除的规则域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 需要删除的白名单规则
                     */
                    std::vector<uint64_t> m_ids;
                    bool m_idsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DELETEDOMAINWHITERULESREQUEST_H_
