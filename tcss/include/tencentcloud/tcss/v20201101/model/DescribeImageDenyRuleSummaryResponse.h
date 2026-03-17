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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEDENYRULESUMMARYRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEDENYRULESUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeImageDenyRuleSummary返回参数结构体
                */
                class DescribeImageDenyRuleSummaryResponse : public AbstractModel
                {
                public:
                    DescribeImageDenyRuleSummaryResponse();
                    ~DescribeImageDenyRuleSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取镜像拦截规则总数(含关闭的和开启的)
                     * @return RuleTotalCount 镜像拦截规则总数(含关闭的和开启的)
                     * 
                     */
                    uint64_t GetRuleTotalCount() const;

                    /**
                     * 判断参数 RuleTotalCount 是否已赋值
                     * @return RuleTotalCount 是否已赋值
                     * 
                     */
                    bool RuleTotalCountHasBeenSet() const;

                    /**
                     * 获取开启的镜像拦截规则数
                     * @return EnabledRuleCount 开启的镜像拦截规则数
                     * 
                     */
                    uint64_t GetEnabledRuleCount() const;

                    /**
                     * 判断参数 EnabledRuleCount 是否已赋值
                     * @return EnabledRuleCount 是否已赋值
                     * 
                     */
                    bool EnabledRuleCountHasBeenSet() const;

                    /**
                     * 获取观察期中的镜像拦截规则数
                     * @return ObservedRuleCount 观察期中的镜像拦截规则数
                     * 
                     */
                    uint64_t GetObservedRuleCount() const;

                    /**
                     * 判断参数 ObservedRuleCount 是否已赋值
                     * @return ObservedRuleCount 是否已赋值
                     * 
                     */
                    bool ObservedRuleCountHasBeenSet() const;

                    /**
                     * 获取已生效的镜像拦截规则数
                     * @return EffectiveRuleCount 已生效的镜像拦截规则数
                     * 
                     */
                    uint64_t GetEffectiveRuleCount() const;

                    /**
                     * 判断参数 EffectiveRuleCount 是否已赋值
                     * @return EffectiveRuleCount 是否已赋值
                     * 
                     */
                    bool EffectiveRuleCountHasBeenSet() const;

                private:

                    /**
                     * 镜像拦截规则总数(含关闭的和开启的)
                     */
                    uint64_t m_ruleTotalCount;
                    bool m_ruleTotalCountHasBeenSet;

                    /**
                     * 开启的镜像拦截规则数
                     */
                    uint64_t m_enabledRuleCount;
                    bool m_enabledRuleCountHasBeenSet;

                    /**
                     * 观察期中的镜像拦截规则数
                     */
                    uint64_t m_observedRuleCount;
                    bool m_observedRuleCountHasBeenSet;

                    /**
                     * 已生效的镜像拦截规则数
                     */
                    uint64_t m_effectiveRuleCount;
                    bool m_effectiveRuleCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEDENYRULESUMMARYRESPONSE_H_
