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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBENEWL7RULESERRHEALTHREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBENEWL7RULESERRHEALTHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeNewL7RulesErrHealth请求参数结构体
                */
                class DescribeNewL7RulesErrHealthRequest : public AbstractModel
                {
                public:
                    DescribeNewL7RulesErrHealthRequest();
                    ~DescribeNewL7RulesErrHealthRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DDoS防护子产品代号(bgpip表示高防IP)
                     * @return Business DDoS防护子产品代号(bgpip表示高防IP)
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置DDoS防护子产品代号(bgpip表示高防IP)
                     * @param _business DDoS防护子产品代号(bgpip表示高防IP)
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
                     * 获取规则Id列表
                     * @return RuleIdList 规则Id列表
                     * 
                     */
                    std::vector<std::string> GetRuleIdList() const;

                    /**
                     * 设置规则Id列表
                     * @param _ruleIdList 规则Id列表
                     * 
                     */
                    void SetRuleIdList(const std::vector<std::string>& _ruleIdList);

                    /**
                     * 判断参数 RuleIdList 是否已赋值
                     * @return RuleIdList 是否已赋值
                     * 
                     */
                    bool RuleIdListHasBeenSet() const;

                private:

                    /**
                     * DDoS防护子产品代号(bgpip表示高防IP)
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 规则Id列表
                     */
                    std::vector<std::string> m_ruleIdList;
                    bool m_ruleIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBENEWL7RULESERRHEALTHREQUEST_H_
