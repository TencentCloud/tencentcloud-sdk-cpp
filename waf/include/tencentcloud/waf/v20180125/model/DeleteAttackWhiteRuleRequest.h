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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DELETEATTACKWHITERULEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DELETEATTACKWHITERULEREQUEST_H_

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
                * DeleteAttackWhiteRule请求参数结构体
                */
                class DeleteAttackWhiteRuleRequest : public AbstractModel
                {
                public:
                    DeleteAttackWhiteRuleRequest();
                    ~DeleteAttackWhiteRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则序号组
                     * @return Ids 规则序号组
                     * 
                     */
                    std::vector<uint64_t> GetIds() const;

                    /**
                     * 设置规则序号组
                     * @param _ids 规则序号组
                     * 
                     */
                    void SetIds(const std::vector<uint64_t>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                    /**
                     * 获取用户域名
                     * @return Domain 用户域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置用户域名
                     * @param _domain 用户域名
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
                     * 规则序号组
                     */
                    std::vector<uint64_t> m_ids;
                    bool m_idsHasBeenSet;

                    /**
                     * 用户域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DELETEATTACKWHITERULEREQUEST_H_
