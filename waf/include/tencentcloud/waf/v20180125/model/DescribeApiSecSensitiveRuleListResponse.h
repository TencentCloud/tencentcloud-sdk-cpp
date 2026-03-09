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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEAPISECSENSITIVERULELISTRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEAPISECSENSITIVERULELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/ApiSecSensitiveRule.h>
#include <tencentcloud/waf/v20180125/model/ApiSecExtractRule.h>
#include <tencentcloud/waf/v20180125/model/ApiSecPrivilegeRule.h>
#include <tencentcloud/waf/v20180125/model/ApiSecSceneRule.h>
#include <tencentcloud/waf/v20180125/model/ApiSecCustomEventRule.h>
#include <tencentcloud/waf/v20180125/model/ApiSecExcludeRule.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeApiSecSensitiveRuleList返回参数结构体
                */
                class DescribeApiSecSensitiveRuleListResponse : public AbstractModel
                {
                public:
                    DescribeApiSecSensitiveRuleListResponse();
                    ~DescribeApiSecSensitiveRuleListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取api敏感规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data api敏感规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ApiSecSensitiveRule> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取规则数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 规则数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取自定义敏感检测规则总开关
                     * @return Status 自定义敏感检测规则总开关
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取非内置规则的rulename列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleNameList 非内置规则的rulename列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetRuleNameList() const;

                    /**
                     * 判断参数 RuleNameList 是否已赋值
                     * @return RuleNameList 是否已赋值
                     * 
                     */
                    bool RuleNameListHasBeenSet() const;

                    /**
                     * 获取api提取规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiExtractRule api提取规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ApiSecExtractRule> GetApiExtractRule() const;

                    /**
                     * 判断参数 ApiExtractRule 是否已赋值
                     * @return ApiExtractRule 是否已赋值
                     * 
                     */
                    bool ApiExtractRuleHasBeenSet() const;

                    /**
                     * 获取api鉴权规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiSecPrivilegeRule api鉴权规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ApiSecPrivilegeRule> GetApiSecPrivilegeRule() const;

                    /**
                     * 判断参数 ApiSecPrivilegeRule 是否已赋值
                     * @return ApiSecPrivilegeRule 是否已赋值
                     * 
                     */
                    bool ApiSecPrivilegeRuleHasBeenSet() const;

                    /**
                     * 获取api场景规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiSecSceneRule api场景规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ApiSecSceneRule> GetApiSecSceneRule() const;

                    /**
                     * 判断参数 ApiSecSceneRule 是否已赋值
                     * @return ApiSecSceneRule 是否已赋值
                     * 
                     */
                    bool ApiSecSceneRuleHasBeenSet() const;

                    /**
                     * 获取自定义事件规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiSecCustomEventRule 自定义事件规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ApiSecCustomEventRule> GetApiSecCustomEventRule() const;

                    /**
                     * 判断参数 ApiSecCustomEventRule 是否已赋值
                     * @return ApiSecCustomEventRule 是否已赋值
                     * 
                     */
                    bool ApiSecCustomEventRuleHasBeenSet() const;

                    /**
                     * 获取无效api排除规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiExcludeRule 无效api排除规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ApiSecExcludeRule> GetApiExcludeRule() const;

                    /**
                     * 判断参数 ApiExcludeRule 是否已赋值
                     * @return ApiExcludeRule 是否已赋值
                     * 
                     */
                    bool ApiExcludeRuleHasBeenSet() const;

                private:

                    /**
                     * api敏感规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ApiSecSensitiveRule> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 规则数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 自定义敏感检测规则总开关
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 非内置规则的rulename列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_ruleNameList;
                    bool m_ruleNameListHasBeenSet;

                    /**
                     * api提取规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ApiSecExtractRule> m_apiExtractRule;
                    bool m_apiExtractRuleHasBeenSet;

                    /**
                     * api鉴权规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ApiSecPrivilegeRule> m_apiSecPrivilegeRule;
                    bool m_apiSecPrivilegeRuleHasBeenSet;

                    /**
                     * api场景规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ApiSecSceneRule> m_apiSecSceneRule;
                    bool m_apiSecSceneRuleHasBeenSet;

                    /**
                     * 自定义事件规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ApiSecCustomEventRule> m_apiSecCustomEventRule;
                    bool m_apiSecCustomEventRuleHasBeenSet;

                    /**
                     * 无效api排除规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ApiSecExcludeRule> m_apiExcludeRule;
                    bool m_apiExcludeRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEAPISECSENSITIVERULELISTRESPONSE_H_
