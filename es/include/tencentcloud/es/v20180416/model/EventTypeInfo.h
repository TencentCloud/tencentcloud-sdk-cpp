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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_EVENTTYPEINFO_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_EVENTTYPEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 事件类型详情结构
                */
                class EventTypeInfo : public AbstractModel
                {
                public:
                    EventTypeInfo();
                    ~EventTypeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>事件类型</p>
                     * @return EventType <p>事件类型</p>
                     * 
                     */
                    int64_t GetEventType() const;

                    /**
                     * 设置<p>事件类型</p>
                     * @param _eventType <p>事件类型</p>
                     * 
                     */
                    void SetEventType(const int64_t& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取<p>事件名称</p>
                     * @return EventTypeName <p>事件名称</p>
                     * 
                     */
                    std::string GetEventTypeName() const;

                    /**
                     * 设置<p>事件名称</p>
                     * @param _eventTypeName <p>事件名称</p>
                     * 
                     */
                    void SetEventTypeName(const std::string& _eventTypeName);

                    /**
                     * 判断参数 EventTypeName 是否已赋值
                     * @return EventTypeName 是否已赋值
                     * 
                     */
                    bool EventTypeNameHasBeenSet() const;

                private:

                    /**
                     * <p>事件类型</p>
                     */
                    int64_t m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * <p>事件名称</p>
                     */
                    std::string m_eventTypeName;
                    bool m_eventTypeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_EVENTTYPEINFO_H_
