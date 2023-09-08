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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_PLATFORMEVENTDETAIL_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_PLATFORMEVENTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * 平台事件名称
                */
                class PlatformEventDetail : public AbstractModel
                {
                public:
                    PlatformEventDetail();
                    ~PlatformEventDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventName 事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventName 事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventName(const std::string& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     * 
                     */
                    bool EventNameHasBeenSet() const;

                    /**
                     * 获取事件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventType 事件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置事件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventType 事件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                private:

                    /**
                     * 事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * 事件类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_PLATFORMEVENTDETAIL_H_
