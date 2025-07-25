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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_ENABLELANERULEREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_ENABLELANERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * EnableLaneRule请求参数结构体
                */
                class EnableLaneRuleRequest : public AbstractModel
                {
                public:
                    EnableLaneRuleRequest();
                    ~EnableLaneRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取泳道规则ID
                     * @return RuleId 泳道规则ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置泳道规则ID
                     * @param _ruleId 泳道规则ID
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * 泳道规则ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_ENABLELANERULEREQUEST_H_
