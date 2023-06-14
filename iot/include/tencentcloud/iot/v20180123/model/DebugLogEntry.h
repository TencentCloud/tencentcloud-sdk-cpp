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

#ifndef TENCENTCLOUD_IOT_V20180123_MODEL_DEBUGLOGENTRY_H_
#define TENCENTCLOUD_IOT_V20180123_MODEL_DEBUGLOGENTRY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iot
    {
        namespace V20180123
        {
            namespace Model
            {
                /**
                * 设备日志条目
                */
                class DebugLogEntry : public AbstractModel
                {
                public:
                    DebugLogEntry();
                    ~DebugLogEntry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志id
                     * @return Id 日志id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置日志id
                     * @param _id 日志id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取行为（事件）
                     * @return Event 行为（事件）
                     * 
                     */
                    std::string GetEvent() const;

                    /**
                     * 设置行为（事件）
                     * @param _event 行为（事件）
                     * 
                     */
                    void SetEvent(const std::string& _event);

                    /**
                     * 判断参数 Event 是否已赋值
                     * @return Event 是否已赋值
                     * 
                     */
                    bool EventHasBeenSet() const;

                    /**
                     * 获取shadow/action/mqtt, 分别表示：影子/规则引擎/上下线日志
                     * @return LogType shadow/action/mqtt, 分别表示：影子/规则引擎/上下线日志
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置shadow/action/mqtt, 分别表示：影子/规则引擎/上下线日志
                     * @param _logType shadow/action/mqtt, 分别表示：影子/规则引擎/上下线日志
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取时间戳
                     * @return Timestamp 时间戳
                     * 
                     */
                    uint64_t GetTimestamp() const;

                    /**
                     * 设置时间戳
                     * @param _timestamp 时间戳
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
                     * 获取success/fail
                     * @return Result success/fail
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置success/fail
                     * @param _result success/fail
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取日志详细内容
                     * @return Data 日志详细内容
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 设置日志详细内容
                     * @param _data 日志详细内容
                     * 
                     */
                    void SetData(const std::string& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取数据来源topic
                     * @return Topic 数据来源topic
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置数据来源topic
                     * @param _topic 数据来源topic
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取设备名称
                     * @return DeviceName 设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名称
                     * @param _deviceName 设备名称
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                private:

                    /**
                     * 日志id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 行为（事件）
                     */
                    std::string m_event;
                    bool m_eventHasBeenSet;

                    /**
                     * shadow/action/mqtt, 分别表示：影子/规则引擎/上下线日志
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 时间戳
                     */
                    uint64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * success/fail
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 日志详细内容
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 数据来源topic
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOT_V20180123_MODEL_DEBUGLOGENTRY_H_
