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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_AISCHEDULEINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_AISCHEDULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AiScheduleTriggerInfo.h>
#include <tencentcloud/csip/v20221121/model/AIScheduleUserIdentity.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * AI 定时任务信息
                */
                class AiScheduleInfo : public AbstractModel
                {
                public:
                    AiScheduleInfo();
                    ~AiScheduleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>AI 定时任务 ID。</p>
                     * @return ScheduleId <p>AI 定时任务 ID。</p>
                     * 
                     */
                    std::string GetScheduleId() const;

                    /**
                     * 设置<p>AI 定时任务 ID。</p>
                     * @param _scheduleId <p>AI 定时任务 ID。</p>
                     * 
                     */
                    void SetScheduleId(const std::string& _scheduleId);

                    /**
                     * 判断参数 ScheduleId 是否已赋值
                     * @return ScheduleId 是否已赋值
                     * 
                     */
                    bool ScheduleIdHasBeenSet() const;

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
                     * 获取<p>状态。取值：1（已启用）、2（已停用）。</p>
                     * @return Status <p>状态。取值：1（已启用）、2（已停用）。</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>状态。取值：1（已启用）、2（已停用）。</p>
                     * @param _status <p>状态。取值：1（已启用）、2（已停用）。</p>
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
                     * 获取<p>触发器</p>
                     * @return Triggers <p>触发器</p>
                     * 
                     */
                    std::vector<AiScheduleTriggerInfo> GetTriggers() const;

                    /**
                     * 设置<p>触发器</p>
                     * @param _triggers <p>触发器</p>
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
                     * 获取<p>已触发次数。</p>
                     * @return CurrentFireCount <p>已触发次数。</p>
                     * 
                     */
                    int64_t GetCurrentFireCount() const;

                    /**
                     * 设置<p>已触发次数。</p>
                     * @param _currentFireCount <p>已触发次数。</p>
                     * 
                     */
                    void SetCurrentFireCount(const int64_t& _currentFireCount);

                    /**
                     * 判断参数 CurrentFireCount 是否已赋值
                     * @return CurrentFireCount 是否已赋值
                     * 
                     */
                    bool CurrentFireCountHasBeenSet() const;

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

                    /**
                     * 获取<p>创建时间，Unix 毫秒时间戳。</p>
                     * @return CreateTime <p>创建时间，Unix 毫秒时间戳。</p>
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间，Unix 毫秒时间戳。</p>
                     * @param _createTime <p>创建时间，Unix 毫秒时间戳。</p>
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间，Unix 毫秒时间戳。</p>
                     * @return UpdateTime <p>更新时间，Unix 毫秒时间戳。</p>
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间，Unix 毫秒时间戳。</p>
                     * @param _updateTime <p>更新时间，Unix 毫秒时间戳。</p>
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
                     * 获取<p>身份信息</p>
                     * @return Identity <p>身份信息</p>
                     * 
                     */
                    AIScheduleUserIdentity GetIdentity() const;

                    /**
                     * 设置<p>身份信息</p>
                     * @param _identity <p>身份信息</p>
                     * 
                     */
                    void SetIdentity(const AIScheduleUserIdentity& _identity);

                    /**
                     * 判断参数 Identity 是否已赋值
                     * @return Identity 是否已赋值
                     * 
                     */
                    bool IdentityHasBeenSet() const;

                private:

                    /**
                     * <p>AI 定时任务 ID。</p>
                     */
                    std::string m_scheduleId;
                    bool m_scheduleIdHasBeenSet;

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
                     * <p>状态。取值：1（已启用）、2（已停用）。</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>触发器</p>
                     */
                    std::vector<AiScheduleTriggerInfo> m_triggers;
                    bool m_triggersHasBeenSet;

                    /**
                     * <p>最大触发次数，0 表示无限制。</p>
                     */
                    int64_t m_maxFireCount;
                    bool m_maxFireCountHasBeenSet;

                    /**
                     * <p>已触发次数。</p>
                     */
                    int64_t m_currentFireCount;
                    bool m_currentFireCountHasBeenSet;

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

                    /**
                     * <p>创建时间，Unix 毫秒时间戳。</p>
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间，Unix 毫秒时间戳。</p>
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>身份信息</p>
                     */
                    AIScheduleUserIdentity m_identity;
                    bool m_identityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_AISCHEDULEINFO_H_
