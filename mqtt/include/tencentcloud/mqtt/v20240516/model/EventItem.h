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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_EVENTITEM_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_EVENTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mqtt/v20240516/model/EventInfo.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * 事件
                */
                class EventItem : public AbstractModel
                {
                public:
                    EventItem();
                    ~EventItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timestamp <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timestamp <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取<p>事件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Event <p>事件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEvent() const;

                    /**
                     * 设置<p>事件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _event <p>事件</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>发消息或者收消息的clientid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientId <p>发消息或者收消息的clientid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置<p>发消息或者收消息的clientid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clientId <p>发消息或者收消息的clientid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClientId(const std::string& _clientId);

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取<p>事件的相关信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Info <p>事件的相关信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EventInfo> GetInfo() const;

                    /**
                     * 设置<p>事件的相关信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _info <p>事件的相关信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInfo(const std::vector<EventInfo>& _info);

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                private:

                    /**
                     * <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * <p>事件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_event;
                    bool m_eventHasBeenSet;

                    /**
                     * <p>发消息或者收消息的clientid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * <p>事件的相关信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EventInfo> m_info;
                    bool m_infoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_EVENTITEM_H_
