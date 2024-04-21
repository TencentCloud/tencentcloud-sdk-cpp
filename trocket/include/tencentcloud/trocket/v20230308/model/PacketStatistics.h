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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_PACKETSTATISTICS_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_PACKETSTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * MQTT客户端监控
                */
                class PacketStatistics : public AbstractModel
                {
                public:
                    PacketStatistics();
                    ~PacketStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MessageType 类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessageType() const;

                    /**
                     * 设置类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _messageType 类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessageType(const std::string& _messageType);

                    /**
                     * 判断参数 MessageType 是否已赋值
                     * @return MessageType 是否已赋值
                     * 
                     */
                    bool MessageTypeHasBeenSet() const;

                    /**
                     * 获取服务质量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Qos 服务质量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetQos() const;

                    /**
                     * 设置服务质量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qos 服务质量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQos(const int64_t& _qos);

                    /**
                     * 判断参数 Qos 是否已赋值
                     * @return Qos 是否已赋值
                     * 
                     */
                    bool QosHasBeenSet() const;

                    /**
                     * 获取指标值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Count 指标值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置指标值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _count 指标值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_messageType;
                    bool m_messageTypeHasBeenSet;

                    /**
                     * 服务质量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_qos;
                    bool m_qosHasBeenSet;

                    /**
                     * 指标值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_PACKETSTATISTICS_H_
