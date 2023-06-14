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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DELETECCFREQUENCYRULESREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DELETECCFREQUENCYRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DeleteCCFrequencyRules请求参数结构体
                */
                class DeleteCCFrequencyRulesRequest : public AbstractModel
                {
                public:
                    DeleteCCFrequencyRulesRequest();
                    ~DeleteCCFrequencyRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版）
                     * @return Business 大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版）
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版）
                     * @param _business 大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版）
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
                     * 获取CC防护的访问频率控制规则ID
                     * @return CCFrequencyRuleId CC防护的访问频率控制规则ID
                     * 
                     */
                    std::string GetCCFrequencyRuleId() const;

                    /**
                     * 设置CC防护的访问频率控制规则ID
                     * @param _cCFrequencyRuleId CC防护的访问频率控制规则ID
                     * 
                     */
                    void SetCCFrequencyRuleId(const std::string& _cCFrequencyRuleId);

                    /**
                     * 判断参数 CCFrequencyRuleId 是否已赋值
                     * @return CCFrequencyRuleId 是否已赋值
                     * 
                     */
                    bool CCFrequencyRuleIdHasBeenSet() const;

                private:

                    /**
                     * 大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * CC防护的访问频率控制规则ID
                     */
                    std::string m_cCFrequencyRuleId;
                    bool m_cCFrequencyRuleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DELETECCFREQUENCYRULESREQUEST_H_
