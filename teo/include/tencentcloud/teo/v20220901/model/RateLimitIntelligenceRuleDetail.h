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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITINTELLIGENCERULEDETAIL_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITINTELLIGENCERULEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 速率限制智能客户端过滤规则详情
                */
                class RateLimitIntelligenceRuleDetail : public AbstractModel
                {
                public:
                    RateLimitIntelligenceRuleDetail();
                    ~RateLimitIntelligenceRuleDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取智能识别到的客户端IP。
                     * @return MatchContent 智能识别到的客户端IP。
                     */
                    std::string GetMatchContent() const;

                    /**
                     * 设置智能识别到的客户端IP。
                     * @param MatchContent 智能识别到的客户端IP。
                     */
                    void SetMatchContent(const std::string& _matchContent);

                    /**
                     * 判断参数 MatchContent 是否已赋值
                     * @return MatchContent 是否已赋值
                     */
                    bool MatchContentHasBeenSet() const;

                    /**
                     * 获取应用的动作。
                     * @return Action 应用的动作。
                     */
                    std::string GetAction() const;

                    /**
                     * 设置应用的动作。
                     * @param Action 应用的动作。
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取更新时间。
                     * @return EffectiveTime 更新时间。
                     */
                    std::string GetEffectiveTime() const;

                    /**
                     * 设置更新时间。
                     * @param EffectiveTime 更新时间。
                     */
                    void SetEffectiveTime(const std::string& _effectiveTime);

                    /**
                     * 判断参数 EffectiveTime 是否已赋值
                     * @return EffectiveTime 是否已赋值
                     */
                    bool EffectiveTimeHasBeenSet() const;

                    /**
                     * 获取失效时间。
                     * @return ExpireTime 失效时间。
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置失效时间。
                     * @param ExpireTime 失效时间。
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取规则id。
                     * @return RuleId 规则id。
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置规则id。
                     * @param RuleId 规则id。
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取处置状态，allowed即已经人为放行。
                     * @return Status 处置状态，allowed即已经人为放行。
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置处置状态，allowed即已经人为放行。
                     * @param Status 处置状态，allowed即已经人为放行。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 智能识别到的客户端IP。
                     */
                    std::string m_matchContent;
                    bool m_matchContentHasBeenSet;

                    /**
                     * 应用的动作。
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 更新时间。
                     */
                    std::string m_effectiveTime;
                    bool m_effectiveTimeHasBeenSet;

                    /**
                     * 失效时间。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 规则id。
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 处置状态，allowed即已经人为放行。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITINTELLIGENCERULEDETAIL_H_
