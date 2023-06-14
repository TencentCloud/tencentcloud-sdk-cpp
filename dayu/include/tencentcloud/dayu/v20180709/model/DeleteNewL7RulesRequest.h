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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DELETENEWL7RULESREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DELETENEWL7RULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/L4DelRule.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DeleteNewL7Rules请求参数结构体
                */
                class DeleteNewL7RulesRequest : public AbstractModel
                {
                public:
                    DeleteNewL7RulesRequest();
                    ~DeleteNewL7RulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取大禹子产品代号（bgpip表示高防IP)
                     * @return Business 大禹子产品代号（bgpip表示高防IP)
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置大禹子产品代号（bgpip表示高防IP)
                     * @param _business 大禹子产品代号（bgpip表示高防IP)
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取删除规则列表
                     * @return Rule 删除规则列表
                     * 
                     */
                    std::vector<L4DelRule> GetRule() const;

                    /**
                     * 设置删除规则列表
                     * @param _rule 删除规则列表
                     * 
                     */
                    void SetRule(const std::vector<L4DelRule>& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                private:

                    /**
                     * 大禹子产品代号（bgpip表示高防IP)
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 删除规则列表
                     */
                    std::vector<L4DelRule> m_rule;
                    bool m_ruleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DELETENEWL7RULESREQUEST_H_
