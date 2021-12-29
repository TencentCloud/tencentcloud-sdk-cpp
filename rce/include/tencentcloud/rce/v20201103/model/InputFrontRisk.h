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

#ifndef TENCENTCLOUD_RCE_V20201103_MODEL_INPUTFRONTRISK_H_
#define TENCENTCLOUD_RCE_V20201103_MODEL_INPUTFRONTRISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20201103
        {
            namespace Model
            {
                /**
                * 风险趋势统计--入参
                */
                class InputFrontRisk : public AbstractModel
                {
                public:
                    InputFrontRisk();
                    ~InputFrontRisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件ID
                     * @return EventId 事件ID
                     */
                    int64_t GetEventId() const;

                    /**
                     * 设置事件ID
                     * @param EventId 事件ID
                     */
                    void SetEventId(const int64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param StartTime 开始时间
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param EndTime 结束时间
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取趋势类型
                     * @return Type 趋势类型
                     */
                    int64_t GetType() const;

                    /**
                     * 设置趋势类型
                     * @param Type 趋势类型
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取当前开始时间
                     * @return CurrentStartTime 当前开始时间
                     */
                    std::string GetCurrentStartTime() const;

                    /**
                     * 设置当前开始时间
                     * @param CurrentStartTime 当前开始时间
                     */
                    void SetCurrentStartTime(const std::string& _currentStartTime);

                    /**
                     * 判断参数 CurrentStartTime 是否已赋值
                     * @return CurrentStartTime 是否已赋值
                     */
                    bool CurrentStartTimeHasBeenSet() const;

                    /**
                     * 获取当前结束时间
                     * @return CurrentEndTime 当前结束时间
                     */
                    std::string GetCurrentEndTime() const;

                    /**
                     * 设置当前结束时间
                     * @param CurrentEndTime 当前结束时间
                     */
                    void SetCurrentEndTime(const std::string& _currentEndTime);

                    /**
                     * 判断参数 CurrentEndTime 是否已赋值
                     * @return CurrentEndTime 是否已赋值
                     */
                    bool CurrentEndTimeHasBeenSet() const;

                private:

                    /**
                     * 事件ID
                     */
                    int64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 趋势类型
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 当前开始时间
                     */
                    std::string m_currentStartTime;
                    bool m_currentStartTimeHasBeenSet;

                    /**
                     * 当前结束时间
                     */
                    std::string m_currentEndTime;
                    bool m_currentEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_INPUTFRONTRISK_H_
