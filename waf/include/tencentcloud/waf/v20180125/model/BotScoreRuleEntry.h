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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_BOTSCORERULEENTRY_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_BOTSCORERULEENTRY_H_

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
                * 动作策略的一条分数段实体
                */
                class BotScoreRuleEntry : public AbstractModel
                {
                public:
                    BotScoreRuleEntry();
                    ~BotScoreRuleEntry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分数区间上限
                     * @return Upper 分数区间上限
                     * 
                     */
                    std::string GetUpper() const;

                    /**
                     * 设置分数区间上限
                     * @param _upper 分数区间上限
                     * 
                     */
                    void SetUpper(const std::string& _upper);

                    /**
                     * 判断参数 Upper 是否已赋值
                     * @return Upper 是否已赋值
                     * 
                     */
                    bool UpperHasBeenSet() const;

                    /**
                     * 获取分数区间下限
                     * @return Lower 分数区间下限
                     * 
                     */
                    std::string GetLower() const;

                    /**
                     * 设置分数区间下限
                     * @param _lower 分数区间下限
                     * 
                     */
                    void SetLower(const std::string& _lower);

                    /**
                     * 判断参数 Lower 是否已赋值
                     * @return Lower 是否已赋值
                     * 
                     */
                    bool LowerHasBeenSet() const;

                    /**
                     * 获取处置动作
                     * @return Action 处置动作
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置处置动作
                     * @param _action 处置动作
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取流量标签
                     * @return Label 流量标签
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置流量标签
                     * @param _label 流量标签
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取重定向
                     * @return Redirect 重定向
                     * 
                     */
                    std::string GetRedirect() const;

                    /**
                     * 设置重定向
                     * @param _redirect 重定向
                     * 
                     */
                    void SetRedirect(const std::string& _redirect);

                    /**
                     * 判断参数 Redirect 是否已赋值
                     * @return Redirect 是否已赋值
                     * 
                     */
                    bool RedirectHasBeenSet() const;

                private:

                    /**
                     * 分数区间上限
                     */
                    std::string m_upper;
                    bool m_upperHasBeenSet;

                    /**
                     * 分数区间下限
                     */
                    std::string m_lower;
                    bool m_lowerHasBeenSet;

                    /**
                     * 处置动作
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 流量标签
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 重定向
                     */
                    std::string m_redirect;
                    bool m_redirectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_BOTSCORERULEENTRY_H_
