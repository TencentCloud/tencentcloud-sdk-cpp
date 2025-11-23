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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DELETERATELIMITSV2REQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DELETERATELIMITSV2REQUEST_H_

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
                * DeleteRateLimitsV2请求参数结构体
                */
                class DeleteRateLimitsV2Request : public AbstractModel
                {
                public:
                    DeleteRateLimitsV2Request();
                    ~DeleteRateLimitsV2Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取要删除的限流ID列表
                     * @return LimitRuleIds 要删除的限流ID列表
                     * 
                     */
                    std::vector<int64_t> GetLimitRuleIds() const;

                    /**
                     * 设置要删除的限流ID列表
                     * @param _limitRuleIds 要删除的限流ID列表
                     * 
                     */
                    void SetLimitRuleIds(const std::vector<int64_t>& _limitRuleIds);

                    /**
                     * 判断参数 LimitRuleIds 是否已赋值
                     * @return LimitRuleIds 是否已赋值
                     * 
                     */
                    bool LimitRuleIdsHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 要删除的限流ID列表
                     */
                    std::vector<int64_t> m_limitRuleIds;
                    bool m_limitRuleIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DELETERATELIMITSV2REQUEST_H_
