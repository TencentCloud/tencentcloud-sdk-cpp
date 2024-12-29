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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SWITCHLOG_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SWITCHLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 主备切换日志
                */
                class SwitchLog : public AbstractModel
                {
                public:
                    SwitchLog();
                    ~SwitchLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取切换事件ID
                     * @return EventId 切换事件ID
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置切换事件ID
                     * @param _eventId 切换事件ID
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取切换模式 0-系统自动切换，1-手动切换
                     * @return SwitchType 切换模式 0-系统自动切换，1-手动切换
                     * 
                     */
                    uint64_t GetSwitchType() const;

                    /**
                     * 设置切换模式 0-系统自动切换，1-手动切换
                     * @param _switchType 切换模式 0-系统自动切换，1-手动切换
                     * 
                     */
                    void SetSwitchType(const uint64_t& _switchType);

                    /**
                     * 判断参数 SwitchType 是否已赋值
                     * @return SwitchType 是否已赋值
                     * 
                     */
                    bool SwitchTypeHasBeenSet() const;

                    /**
                     * 获取切换开始时间
                     * @return StartTime 切换开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置切换开始时间
                     * @param _startTime 切换开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取切换结束时间
                     * @return EndTime 切换结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置切换结束时间
                     * @param _endTime 切换结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取机器故障导致自动切换
                     * @return Reason 机器故障导致自动切换
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置机器故障导致自动切换
                     * @param _reason 机器故障导致自动切换
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * 切换事件ID
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 切换模式 0-系统自动切换，1-手动切换
                     */
                    uint64_t m_switchType;
                    bool m_switchTypeHasBeenSet;

                    /**
                     * 切换开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 切换结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 机器故障导致自动切换
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SWITCHLOG_H_
