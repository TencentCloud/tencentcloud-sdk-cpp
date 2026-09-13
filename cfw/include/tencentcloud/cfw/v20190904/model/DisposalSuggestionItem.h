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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DISPOSALSUGGESTIONITEM_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DISPOSALSUGGESTIONITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 处置建议-条目
                */
                class DisposalSuggestionItem : public AbstractModel
                {
                public:
                    DisposalSuggestionItem();
                    ~DisposalSuggestionItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取处置对象
                     * @return Target 处置对象
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置处置对象
                     * @param _target 处置对象
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取处置优先级
                     * @return Priority 处置优先级
                     * 
                     */
                    std::string GetPriority() const;

                    /**
                     * 设置处置优先级
                     * @param _priority 处置优先级
                     * 
                     */
                    void SetPriority(const std::string& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取处置建议
                     * @return Suggestion 处置建议
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置处置建议
                     * @param _suggestion 处置建议
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                private:

                    /**
                     * 处置动作
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 处置对象
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * 处置优先级
                     */
                    std::string m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 处置建议
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DISPOSALSUGGESTIONITEM_H_
