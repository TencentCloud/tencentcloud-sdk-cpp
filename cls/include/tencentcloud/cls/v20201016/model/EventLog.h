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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_EVENTLOG_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_EVENTLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Windows事件日志采集配置
                */
                class EventLog : public AbstractModel
                {
                public:
                    EventLog();
                    ~EventLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件通道，支持Application，Security，Setup，System，ALL

                     * @return EventChannel 事件通道，支持Application，Security，Setup，System，ALL

                     * 
                     */
                    std::string GetEventChannel() const;

                    /**
                     * 设置事件通道，支持Application，Security，Setup，System，ALL

                     * @param _eventChannel 事件通道，支持Application，Security，Setup，System，ALL

                     * 
                     */
                    void SetEventChannel(const std::string& _eventChannel);

                    /**
                     * 判断参数 EventChannel 是否已赋值
                     * @return EventChannel 是否已赋值
                     * 
                     */
                    bool EventChannelHasBeenSet() const;

                    /**
                     * 获取时间类型，1:用户自定义，2:当前时间
                     * @return TimeType 时间类型，1:用户自定义，2:当前时间
                     * 
                     */
                    uint64_t GetTimeType() const;

                    /**
                     * 设置时间类型，1:用户自定义，2:当前时间
                     * @param _timeType 时间类型，1:用户自定义，2:当前时间
                     * 
                     */
                    void SetTimeType(const uint64_t& _timeType);

                    /**
                     * 判断参数 TimeType 是否已赋值
                     * @return TimeType 是否已赋值
                     * 
                     */
                    bool TimeTypeHasBeenSet() const;

                    /**
                     * 获取时间，用户选择自定义时间类型时，需要指定时间
                     * @return Timestamp 时间，用户选择自定义时间类型时，需要指定时间
                     * 
                     */
                    uint64_t GetTimestamp() const;

                    /**
                     * 设置时间，用户选择自定义时间类型时，需要指定时间
                     * @param _timestamp 时间，用户选择自定义时间类型时，需要指定时间
                     * 
                     */
                    void SetTimestamp(const uint64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取事件ID过滤列表
	
选填，为空表示不做过滤
支持正向过滤单个值（例：20）或范围（例：0-20），也支持反向过滤单个值(例：-20)
多个过滤项之间可由逗号隔开，例：1-200,-100表示采集1-200范围内除了100以外的事件日志
                     * @return EventIDs 事件ID过滤列表
	
选填，为空表示不做过滤
支持正向过滤单个值（例：20）或范围（例：0-20），也支持反向过滤单个值(例：-20)
多个过滤项之间可由逗号隔开，例：1-200,-100表示采集1-200范围内除了100以外的事件日志
                     * 
                     */
                    std::vector<std::string> GetEventIDs() const;

                    /**
                     * 设置事件ID过滤列表
	
选填，为空表示不做过滤
支持正向过滤单个值（例：20）或范围（例：0-20），也支持反向过滤单个值(例：-20)
多个过滤项之间可由逗号隔开，例：1-200,-100表示采集1-200范围内除了100以外的事件日志
                     * @param _eventIDs 事件ID过滤列表
	
选填，为空表示不做过滤
支持正向过滤单个值（例：20）或范围（例：0-20），也支持反向过滤单个值(例：-20)
多个过滤项之间可由逗号隔开，例：1-200,-100表示采集1-200范围内除了100以外的事件日志
                     * 
                     */
                    void SetEventIDs(const std::vector<std::string>& _eventIDs);

                    /**
                     * 判断参数 EventIDs 是否已赋值
                     * @return EventIDs 是否已赋值
                     * 
                     */
                    bool EventIDsHasBeenSet() const;

                private:

                    /**
                     * 事件通道，支持Application，Security，Setup，System，ALL

                     */
                    std::string m_eventChannel;
                    bool m_eventChannelHasBeenSet;

                    /**
                     * 时间类型，1:用户自定义，2:当前时间
                     */
                    uint64_t m_timeType;
                    bool m_timeTypeHasBeenSet;

                    /**
                     * 时间，用户选择自定义时间类型时，需要指定时间
                     */
                    uint64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 事件ID过滤列表
	
选填，为空表示不做过滤
支持正向过滤单个值（例：20）或范围（例：0-20），也支持反向过滤单个值(例：-20)
多个过滤项之间可由逗号隔开，例：1-200,-100表示采集1-200范围内除了100以外的事件日志
                     */
                    std::vector<std::string> m_eventIDs;
                    bool m_eventIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_EVENTLOG_H_
