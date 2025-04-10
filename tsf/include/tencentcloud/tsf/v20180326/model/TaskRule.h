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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_TASKRULE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_TASKRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 任务规则
                */
                class TaskRule : public AbstractModel
                {
                public:
                    TaskRule();
                    ~TaskRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取触发规则类型, Cron/Repeat
                     * @return RuleType 触发规则类型, Cron/Repeat
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置触发规则类型, Cron/Repeat
                     * @param _ruleType 触发规则类型, Cron/Repeat
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取Cron类型规则，cron表达式。
                     * @return Expression Cron类型规则，cron表达式。
                     * 
                     */
                    std::string GetExpression() const;

                    /**
                     * 设置Cron类型规则，cron表达式。
                     * @param _expression Cron类型规则，cron表达式。
                     * 
                     */
                    void SetExpression(const std::string& _expression);

                    /**
                     * 判断参数 Expression 是否已赋值
                     * @return Expression 是否已赋值
                     * 
                     */
                    bool ExpressionHasBeenSet() const;

                    /**
                     * 获取时间间隔， 单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RepeatInterval 时间间隔， 单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRepeatInterval() const;

                    /**
                     * 设置时间间隔， 单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _repeatInterval 时间间隔， 单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRepeatInterval(const uint64_t& _repeatInterval);

                    /**
                     * 判断参数 RepeatInterval 是否已赋值
                     * @return RepeatInterval 是否已赋值
                     * 
                     */
                    bool RepeatIntervalHasBeenSet() const;

                private:

                    /**
                     * 触发规则类型, Cron/Repeat
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Cron类型规则，cron表达式。
                     */
                    std::string m_expression;
                    bool m_expressionHasBeenSet;

                    /**
                     * 时间间隔， 单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_repeatInterval;
                    bool m_repeatIntervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_TASKRULE_H_
