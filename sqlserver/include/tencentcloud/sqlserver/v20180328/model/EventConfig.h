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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_EVENTCONFIG_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_EVENTCONFIG_H_

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
                * 设置实例扩展事件阈值
                */
                class EventConfig : public AbstractModel
                {
                public:
                    EventConfig();
                    ~EventConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件类型，slow-设置慢SQL阈值，blocked-设置阻塞、死锁阈值
                     * @return EventType 事件类型，slow-设置慢SQL阈值，blocked-设置阻塞、死锁阈值
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置事件类型，slow-设置慢SQL阈值，blocked-设置阻塞、死锁阈值
                     * @param _eventType 事件类型，slow-设置慢SQL阈值，blocked-设置阻塞、死锁阈值
                     * 
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取阈值，单位毫秒。0表示关闭，大于0表示开启
                     * @return Threshold 阈值，单位毫秒。0表示关闭，大于0表示开启
                     * 
                     */
                    int64_t GetThreshold() const;

                    /**
                     * 设置阈值，单位毫秒。0表示关闭，大于0表示开启
                     * @param _threshold 阈值，单位毫秒。0表示关闭，大于0表示开启
                     * 
                     */
                    void SetThreshold(const int64_t& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     * 
                     */
                    bool ThresholdHasBeenSet() const;

                private:

                    /**
                     * 事件类型，slow-设置慢SQL阈值，blocked-设置阻塞、死锁阈值
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 阈值，单位毫秒。0表示关闭，大于0表示开启
                     */
                    int64_t m_threshold;
                    bool m_thresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_EVENTCONFIG_H_
