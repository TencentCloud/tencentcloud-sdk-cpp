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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEUSERSIGNATURECLASSRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEUSERSIGNATURECLASSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/RuleType.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeUserSignatureClass返回参数结构体
                */
                class DescribeUserSignatureClassResponse : public AbstractModel
                {
                public:
                    DescribeUserSignatureClassResponse();
                    ~DescribeUserSignatureClassResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取规则类型数量
                     * @return Total 规则类型数量
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取规则类型列表及信息
                     * @return RuleTypeList 规则类型列表及信息
                     * 
                     */
                    std::vector<RuleType> GetRuleTypeList() const;

                    /**
                     * 判断参数 RuleTypeList 是否已赋值
                     * @return RuleTypeList 是否已赋值
                     * 
                     */
                    bool RuleTypeListHasBeenSet() const;

                private:

                    /**
                     * 规则类型数量
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 规则类型列表及信息
                     */
                    std::vector<RuleType> m_ruleTypeList;
                    bool m_ruleTypeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEUSERSIGNATURECLASSRESPONSE_H_
