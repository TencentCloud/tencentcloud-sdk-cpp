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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEAPMPROMETHEUSRULERESPONSE_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEAPMPROMETHEUSRULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/ApmPrometheusRules.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeApmPrometheusRule返回参数结构体
                */
                class DescribeApmPrometheusRuleResponse : public AbstractModel
                {
                public:
                    DescribeApmPrometheusRuleResponse();
                    ~DescribeApmPrometheusRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取指标匹配规则
                     * @return ApmPrometheusRules 指标匹配规则
                     * 
                     */
                    std::vector<ApmPrometheusRules> GetApmPrometheusRules() const;

                    /**
                     * 判断参数 ApmPrometheusRules 是否已赋值
                     * @return ApmPrometheusRules 是否已赋值
                     * 
                     */
                    bool ApmPrometheusRulesHasBeenSet() const;

                private:

                    /**
                     * 指标匹配规则
                     */
                    std::vector<ApmPrometheusRules> m_apmPrometheusRules;
                    bool m_apmPrometheusRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEAPMPROMETHEUSRULERESPONSE_H_
