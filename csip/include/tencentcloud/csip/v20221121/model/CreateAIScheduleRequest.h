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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEAISCHEDULEREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEAISCHEDULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AiScheduleTriggerInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateAISchedule请求参数结构体
                */
                class CreateAIScheduleRequest : public AbstractModel
                {
                public:
                    CreateAIScheduleRequest();
                    ~CreateAIScheduleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务名称。最大 128 字符。</p>
                     * @return Name <p>任务名称。最大 128 字符。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>任务名称。最大 128 字符。</p>
                     * @param _name <p>任务名称。最大 128 字符。</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>执行提示词。最大 2048 字符。</p>
                     * @return Prompts <p>执行提示词。最大 2048 字符。</p>
                     * 
                     */
                    std::string GetPrompts() const;

                    /**
                     * 设置<p>执行提示词。最大 2048 字符。</p>
                     * @param _prompts <p>执行提示词。最大 2048 字符。</p>
                     * 
                     */
                    void SetPrompts(const std::string& _prompts);

                    /**
                     * 判断参数 Prompts 是否已赋值
                     * @return Prompts 是否已赋值
                     * 
                     */
                    bool PromptsHasBeenSet() const;

                    /**
                     * 获取<p>触发器列表，多个触发器之间为「或」关系，满足任一即触发。</p>
                     * @return Triggers <p>触发器列表，多个触发器之间为「或」关系，满足任一即触发。</p>
                     * 
                     */
                    std::vector<AiScheduleTriggerInfo> GetTriggers() const;

                    /**
                     * 设置<p>触发器列表，多个触发器之间为「或」关系，满足任一即触发。</p>
                     * @param _triggers <p>触发器列表，多个触发器之间为「或」关系，满足任一即触发。</p>
                     * 
                     */
                    void SetTriggers(const std::vector<AiScheduleTriggerInfo>& _triggers);

                    /**
                     * 判断参数 Triggers 是否已赋值
                     * @return Triggers 是否已赋值
                     * 
                     */
                    bool TriggersHasBeenSet() const;

                    /**
                     * 获取<p>最大触发次数，0 表示无限制。</p>
                     * @return MaxFireCount <p>最大触发次数，0 表示无限制。</p>
                     * 
                     */
                    int64_t GetMaxFireCount() const;

                    /**
                     * 设置<p>最大触发次数，0 表示无限制。</p>
                     * @param _maxFireCount <p>最大触发次数，0 表示无限制。</p>
                     * 
                     */
                    void SetMaxFireCount(const int64_t& _maxFireCount);

                    /**
                     * 判断参数 MaxFireCount 是否已赋值
                     * @return MaxFireCount 是否已赋值
                     * 
                     */
                    bool MaxFireCountHasBeenSet() const;

                    /**
                     * 获取<p>生效开始时间，Unix 毫秒时间戳，0 表示立即生效。</p>
                     * @return StartTime <p>生效开始时间，Unix 毫秒时间戳，0 表示立即生效。</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>生效开始时间，Unix 毫秒时间戳，0 表示立即生效。</p>
                     * @param _startTime <p>生效开始时间，Unix 毫秒时间戳，0 表示立即生效。</p>
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>生效结束时间，Unix 毫秒时间戳，0 表示永不过期。</p>
                     * @return EndTime <p>生效结束时间，Unix 毫秒时间戳，0 表示永不过期。</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>生效结束时间，Unix 毫秒时间戳，0 表示永不过期。</p>
                     * @param _endTime <p>生效结束时间，Unix 毫秒时间戳，0 表示永不过期。</p>
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * <p>任务名称。最大 128 字符。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>执行提示词。最大 2048 字符。</p>
                     */
                    std::string m_prompts;
                    bool m_promptsHasBeenSet;

                    /**
                     * <p>触发器列表，多个触发器之间为「或」关系，满足任一即触发。</p>
                     */
                    std::vector<AiScheduleTriggerInfo> m_triggers;
                    bool m_triggersHasBeenSet;

                    /**
                     * <p>最大触发次数，0 表示无限制。</p>
                     */
                    int64_t m_maxFireCount;
                    bool m_maxFireCountHasBeenSet;

                    /**
                     * <p>生效开始时间，Unix 毫秒时间戳，0 表示立即生效。</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>生效结束时间，Unix 毫秒时间戳，0 表示永不过期。</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEAISCHEDULEREQUEST_H_
