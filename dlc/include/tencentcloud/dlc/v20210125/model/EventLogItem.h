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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_EVENTLOGITEM_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_EVENTLOGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 事件日志项
                */
                class EventLogItem : public AbstractModel
                {
                public:
                    EventLogItem();
                    ~EventLogItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件时间（Unix 时间戳，秒级）
                     * @return EventTime 事件时间（Unix 时间戳，秒级）
                     * 
                     */
                    uint64_t GetEventTime() const;

                    /**
                     * 设置事件时间（Unix 时间戳，秒级）
                     * @param _eventTime 事件时间（Unix 时间戳，秒级）
                     * 
                     */
                    void SetEventTime(const uint64_t& _eventTime);

                    /**
                     * 判断参数 EventTime 是否已赋值
                     * @return EventTime 是否已赋值
                     * 
                     */
                    bool EventTimeHasBeenSet() const;

                    /**
                     * 获取组件名称
                     * @return Component 组件名称
                     * 
                     */
                    std::string GetComponent() const;

                    /**
                     * 设置组件名称
                     * @param _component 组件名称
                     * 
                     */
                    void SetComponent(const std::string& _component);

                    /**
                     * 判断参数 Component 是否已赋值
                     * @return Component 是否已赋值
                     * 
                     */
                    bool ComponentHasBeenSet() const;

                    /**
                     * 获取日志级别（INFO/WARN/ERROR）
                     * @return Level 日志级别（INFO/WARN/ERROR）
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置日志级别（INFO/WARN/ERROR）
                     * @param _level 日志级别（INFO/WARN/ERROR）
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取事件内容
                     * @return Message 事件内容
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置事件内容
                     * @param _message 事件内容
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 事件时间（Unix 时间戳，秒级）
                     */
                    uint64_t m_eventTime;
                    bool m_eventTimeHasBeenSet;

                    /**
                     * 组件名称
                     */
                    std::string m_component;
                    bool m_componentHasBeenSet;

                    /**
                     * 日志级别（INFO/WARN/ERROR）
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 事件内容
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_EVENTLOGITEM_H_
