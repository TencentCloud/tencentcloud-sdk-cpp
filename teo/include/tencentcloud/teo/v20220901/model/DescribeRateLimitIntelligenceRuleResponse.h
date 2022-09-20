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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBERATELIMITINTELLIGENCERULERESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBERATELIMITINTELLIGENCERULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/RateLimitIntelligenceRuleDetail.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeRateLimitIntelligenceRule返回参数结构体
                */
                class DescribeRateLimitIntelligenceRuleResponse : public AbstractModel
                {
                public:
                    DescribeRateLimitIntelligenceRuleResponse();
                    ~DescribeRateLimitIntelligenceRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取速率限制智能规则。
                     * @return RateLimitIntelligenceRuleDetails 速率限制智能规则。
                     */
                    std::vector<RateLimitIntelligenceRuleDetail> GetRateLimitIntelligenceRuleDetails() const;

                    /**
                     * 判断参数 RateLimitIntelligenceRuleDetails 是否已赋值
                     * @return RateLimitIntelligenceRuleDetails 是否已赋值
                     */
                    bool RateLimitIntelligenceRuleDetailsHasBeenSet() const;

                private:

                    /**
                     * 速率限制智能规则。
                     */
                    std::vector<RateLimitIntelligenceRuleDetail> m_rateLimitIntelligenceRuleDetails;
                    bool m_rateLimitIntelligenceRuleDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBERATELIMITINTELLIGENCERULERESPONSE_H_
