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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWRULEOPTIMIZATIONRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWRULEOPTIMIZATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeCfwRuleOptimization返回参数结构体
                */
                class DescribeCfwRuleOptimizationResponse : public AbstractModel
                {
                public:
                    DescribeCfwRuleOptimizationResponse();
                    ~DescribeCfwRuleOptimizationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询结果。UTF-8 JSON object 字符串；调用方需解析 Response.Data。示例仅展示代表性字段；完整结果还包含 rule_type_name、rule_total、rule_active、rule_skipped_geo_or_cloud、dimension_skipped、thresholds 和 generated_at，finding 还包含 risk_level、affected_rule_uuids、affected_rule_seqs、recommendation_action、reason 和 evidence。结果过大时返回摘要，不返回 findings，并增加 truncated 和 truncated_reason。
                     * @return Data 查询结果。UTF-8 JSON object 字符串；调用方需解析 Response.Data。示例仅展示代表性字段；完整结果还包含 rule_type_name、rule_total、rule_active、rule_skipped_geo_or_cloud、dimension_skipped、thresholds 和 generated_at，finding 还包含 risk_level、affected_rule_uuids、affected_rule_seqs、recommendation_action、reason 和 evidence。结果过大时返回摘要，不返回 findings，并增加 truncated 和 truncated_reason。
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 查询结果。UTF-8 JSON object 字符串；调用方需解析 Response.Data。示例仅展示代表性字段；完整结果还包含 rule_type_name、rule_total、rule_active、rule_skipped_geo_or_cloud、dimension_skipped、thresholds 和 generated_at，finding 还包含 risk_level、affected_rule_uuids、affected_rule_seqs、recommendation_action、reason 和 evidence。结果过大时返回摘要，不返回 findings，并增加 truncated 和 truncated_reason。
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWRULEOPTIMIZATIONRESPONSE_H_
