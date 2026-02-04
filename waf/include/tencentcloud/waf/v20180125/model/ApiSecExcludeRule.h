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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_APISECEXCLUDERULE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_APISECEXCLUDERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 排除无效api资产的规则
                */
                class ApiSecExcludeRule : public AbstractModel
                {
                public:
                    ApiSecExcludeRule();
                    ~ApiSecExcludeRule() = default;
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
                     * 获取匹配类型，regex、prefix、suffix、contain匹配模式
                     * @return MatchType 匹配类型，regex、prefix、suffix、contain匹配模式
                     * 
                     */
                    std::string GetMatchType() const;

                    /**
                     * 设置匹配类型，regex、prefix、suffix、contain匹配模式
                     * @param _matchType 匹配类型，regex、prefix、suffix、contain匹配模式
                     * 
                     */
                    void SetMatchType(const std::string& _matchType);

                    /**
                     * 判断参数 MatchType 是否已赋值
                     * @return MatchType 是否已赋值
                     * 
                     */
                    bool MatchTypeHasBeenSet() const;

                    /**
                     * 获取匹配内容
                     * @return Content 匹配内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置匹配内容
                     * @param _content 匹配内容
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取状态开关
                     * @return Status 状态开关
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态开关
                     * @param _status 状态开关
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
                     * 获取规则更新时间
                     * @return UpdateTime 规则更新时间
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置规则更新时间
                     * @param _updateTime 规则更新时间
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 匹配类型，regex、prefix、suffix、contain匹配模式
                     */
                    std::string m_matchType;
                    bool m_matchTypeHasBeenSet;

                    /**
                     * 匹配内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 状态开关
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 规则更新时间
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_APISECEXCLUDERULE_H_
