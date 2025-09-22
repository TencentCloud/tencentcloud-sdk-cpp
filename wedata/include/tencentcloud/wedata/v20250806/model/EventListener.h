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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_EVENTLISTENER_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_EVENTLISTENER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/ParamInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 监听事件器
                */
                class EventListener : public AbstractModel
                {
                public:
                    EventListener();
                    ~EventListener() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventName 事件名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置事件名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventName 事件名
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
                     * 获取事件周期：SECOND, MIN, HOUR, DAY
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventSubType 事件周期：SECOND, MIN, HOUR, DAY
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventSubType() const;

                    /**
                     * 设置事件周期：SECOND, MIN, HOUR, DAY
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventSubType 事件周期：SECOND, MIN, HOUR, DAY
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventSubType(const std::string& _eventSubType);

                    /**
                     * 判断参数 EventSubType 是否已赋值
                     * @return EventSubType 是否已赋值
                     * 
                     */
                    bool EventSubTypeHasBeenSet() const;

                    /**
                     * 获取事件广播类型：SINGLE, BROADCAST
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventBroadcastType 事件广播类型：SINGLE, BROADCAST
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventBroadcastType() const;

                    /**
                     * 设置事件广播类型：SINGLE, BROADCAST
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventBroadcastType 事件广播类型：SINGLE, BROADCAST
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventBroadcastType(const std::string& _eventBroadcastType);

                    /**
                     * 判断参数 EventBroadcastType 是否已赋值
                     * @return EventBroadcastType 是否已赋值
                     * 
                     */
                    bool EventBroadcastTypeHasBeenSet() const;

                    /**
                     * 获取扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PropertiesList 扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ParamInfo> GetPropertiesList() const;

                    /**
                     * 设置扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _propertiesList 扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPropertiesList(const std::vector<ParamInfo>& _propertiesList);

                    /**
                     * 判断参数 PropertiesList 是否已赋值
                     * @return PropertiesList 是否已赋值
                     * 
                     */
                    bool PropertiesListHasBeenSet() const;

                private:

                    /**
                     * 事件名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * 事件周期：SECOND, MIN, HOUR, DAY
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventSubType;
                    bool m_eventSubTypeHasBeenSet;

                    /**
                     * 事件广播类型：SINGLE, BROADCAST
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventBroadcastType;
                    bool m_eventBroadcastTypeHasBeenSet;

                    /**
                     * 扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ParamInfo> m_propertiesList;
                    bool m_propertiesListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_EVENTLISTENER_H_
