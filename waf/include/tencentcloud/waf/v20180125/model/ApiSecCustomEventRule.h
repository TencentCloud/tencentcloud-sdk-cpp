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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_APISECCUSTOMEVENTRULE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_APISECCUSTOMEVENTRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/ApiNameOp.h>
#include <tencentcloud/waf/v20180125/model/ApiSecSceneRuleEntry.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * api安全自定义事件规则结构体
                */
                class ApiSecCustomEventRule : public AbstractModel
                {
                public:
                    ApiSecCustomEventRule();
                    ~ApiSecCustomEventRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则名称
                     * @return RuleName 规则名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称
                     * @param _ruleName 规则名称
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取开关，1：开，0:关
                     * @return Status 开关，1：开，0:关
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置开关，1：开，0:关
                     * @param _status 开关，1：开，0:关
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取api匹配列表
                     * @return ApiNameOp api匹配列表
                     * 
                     */
                    std::vector<ApiNameOp> GetApiNameOp() const;

                    /**
                     * 设置api匹配列表
                     * @param _apiNameOp api匹配列表
                     * 
                     */
                    void SetApiNameOp(const std::vector<ApiNameOp>& _apiNameOp);

                    /**
                     * 判断参数 ApiNameOp 是否已赋值
                     * @return ApiNameOp 是否已赋值
                     * 
                     */
                    bool ApiNameOpHasBeenSet() const;

                    /**
                     * 获取事件详情
                     * @return Description 事件详情
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置事件详情
                     * @param _description 事件详情
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取时间戳，出参有该值，入参不需要传没有
                     * @return UpdateTime 时间戳，出参有该值，入参不需要传没有
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置时间戳，出参有该值，入参不需要传没有
                     * @param _updateTime 时间戳，出参有该值，入参不需要传没有
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取匹配规则列表
                     * @return MatchRuleList 匹配规则列表
                     * 
                     */
                    std::vector<ApiSecSceneRuleEntry> GetMatchRuleList() const;

                    /**
                     * 设置匹配规则列表
                     * @param _matchRuleList 匹配规则列表
                     * 
                     */
                    void SetMatchRuleList(const std::vector<ApiSecSceneRuleEntry>& _matchRuleList);

                    /**
                     * 判断参数 MatchRuleList 是否已赋值
                     * @return MatchRuleList 是否已赋值
                     * 
                     */
                    bool MatchRuleListHasBeenSet() const;

                    /**
                     * 获取统计规则列表
                     * @return StatRuleList 统计规则列表
                     * 
                     */
                    std::vector<ApiSecSceneRuleEntry> GetStatRuleList() const;

                    /**
                     * 设置统计规则列表
                     * @param _statRuleList 统计规则列表
                     * 
                     */
                    void SetStatRuleList(const std::vector<ApiSecSceneRuleEntry>& _statRuleList);

                    /**
                     * 判断参数 StatRuleList 是否已赋值
                     * @return StatRuleList 是否已赋值
                     * 
                     */
                    bool StatRuleListHasBeenSet() const;

                    /**
                     * 获取访问频次，第一个字段表示次数，第二个字段表示分钟
                     * @return ReqFrequency 访问频次，第一个字段表示次数，第二个字段表示分钟
                     * 
                     */
                    std::vector<int64_t> GetReqFrequency() const;

                    /**
                     * 设置访问频次，第一个字段表示次数，第二个字段表示分钟
                     * @param _reqFrequency 访问频次，第一个字段表示次数，第二个字段表示分钟
                     * 
                     */
                    void SetReqFrequency(const std::vector<int64_t>& _reqFrequency);

                    /**
                     * 判断参数 ReqFrequency 是否已赋值
                     * @return ReqFrequency 是否已赋值
                     * 
                     */
                    bool ReqFrequencyHasBeenSet() const;

                    /**
                     * 获取风险等级，取值为100,200,300，分别表示低位、中危、高危
                     * @return RiskLevel 风险等级，取值为100,200,300，分别表示低位、中危、高危
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置风险等级，取值为100,200,300，分别表示低位、中危、高危
                     * @param _riskLevel 风险等级，取值为100,200,300，分别表示低位、中危、高危
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取规则来源
                     * @return Source 规则来源
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置规则来源
                     * @param _source 规则来源
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                private:

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 开关，1：开，0:关
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * api匹配列表
                     */
                    std::vector<ApiNameOp> m_apiNameOp;
                    bool m_apiNameOpHasBeenSet;

                    /**
                     * 事件详情
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 时间戳，出参有该值，入参不需要传没有
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 匹配规则列表
                     */
                    std::vector<ApiSecSceneRuleEntry> m_matchRuleList;
                    bool m_matchRuleListHasBeenSet;

                    /**
                     * 统计规则列表
                     */
                    std::vector<ApiSecSceneRuleEntry> m_statRuleList;
                    bool m_statRuleListHasBeenSet;

                    /**
                     * 访问频次，第一个字段表示次数，第二个字段表示分钟
                     */
                    std::vector<int64_t> m_reqFrequency;
                    bool m_reqFrequencyHasBeenSet;

                    /**
                     * 风险等级，取值为100,200,300，分别表示低位、中危、高危
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 规则来源
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_APISECCUSTOMEVENTRULE_H_
