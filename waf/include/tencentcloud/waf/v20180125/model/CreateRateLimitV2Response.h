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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_CREATERATELIMITV2RESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_CREATERATELIMITV2RESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/RateLimitCommonRsp.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * CreateRateLimitV2返回参数结构体
                */
                class CreateRateLimitV2Response : public AbstractModel
                {
                public:
                    CreateRateLimitV2Response();
                    ~CreateRateLimitV2Response() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取操作结果
                     * @return BaseInfo 操作结果
                     * 
                     */
                    RateLimitCommonRsp GetBaseInfo() const;

                    /**
                     * 判断参数 BaseInfo 是否已赋值
                     * @return BaseInfo 是否已赋值
                     * 
                     */
                    bool BaseInfoHasBeenSet() const;

                    /**
                     * 获取创建规则的ruleID
                     * @return LimitRuleID 创建规则的ruleID
                     * 
                     */
                    int64_t GetLimitRuleID() const;

                    /**
                     * 判断参数 LimitRuleID 是否已赋值
                     * @return LimitRuleID 是否已赋值
                     * 
                     */
                    bool LimitRuleIDHasBeenSet() const;

                    /**
                     * 获取所属域名
                     * @return Domain 所属域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * 操作结果
                     */
                    RateLimitCommonRsp m_baseInfo;
                    bool m_baseInfoHasBeenSet;

                    /**
                     * 创建规则的ruleID
                     */
                    int64_t m_limitRuleID;
                    bool m_limitRuleIDHasBeenSet;

                    /**
                     * 所属域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_CREATERATELIMITV2RESPONSE_H_
