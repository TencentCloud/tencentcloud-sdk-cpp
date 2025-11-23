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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_APISECSCENERULE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_APISECSCENERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * api安全自定义场景规则
                */
                class ApiSecSceneRule : public AbstractModel
                {
                public:
                    ApiSecSceneRule();
                    ~ApiSecSceneRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取场景名称
                     * @return RuleName 场景名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置场景名称
                     * @param _ruleName 场景名称
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
                     * 获取开关状态，1表示开，0表示关
                     * @return Status 开关状态，1表示开，0表示关
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置开关状态，1表示开，0表示关
                     * @param _status 开关状态，1表示开，0表示关
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
                     * 获取更新时间，10位时间戳
                     * @return UpdateTime 更新时间，10位时间戳
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间，10位时间戳
                     * @param _updateTime 更新时间，10位时间戳
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取规则列表
                     * @return RuleList 规则列表
                     * 
                     */
                    std::vector<ApiSecSceneRuleEntry> GetRuleList() const;

                    /**
                     * 设置规则列表
                     * @param _ruleList 规则列表
                     * 
                     */
                    void SetRuleList(const std::vector<ApiSecSceneRuleEntry>& _ruleList);

                    /**
                     * 判断参数 RuleList 是否已赋值
                     * @return RuleList 是否已赋值
                     * 
                     */
                    bool RuleListHasBeenSet() const;

                    /**
                     * 获取规则来源，系统内置:OS
客户自定义：custom
                     * @return Source 规则来源，系统内置:OS
客户自定义：custom
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置规则来源，系统内置:OS
客户自定义：custom
                     * @param _source 规则来源，系统内置:OS
客户自定义：custom
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
                     * 场景名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 开关状态，1表示开，0表示关
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 更新时间，10位时间戳
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 规则列表
                     */
                    std::vector<ApiSecSceneRuleEntry> m_ruleList;
                    bool m_ruleListHasBeenSet;

                    /**
                     * 规则来源，系统内置:OS
客户自定义：custom
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_APISECSCENERULE_H_
