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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DELIVERSUMMARY_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DELIVERSUMMARY_H_

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
                * 投递信息
                */
                class DeliverSummary : public AbstractModel
                {
                public:
                    DeliverSummary();
                    ~DeliverSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取投递类型，store（存储类），mq（消息通道）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeliverType 投递类型，store（存储类），mq（消息通道）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeliverType() const;

                    /**
                     * 设置投递类型，store（存储类），mq（消息通道）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deliverType 投递类型，store（存储类），mq（消息通道）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeliverType(const std::string& _deliverType);

                    /**
                     * 判断参数 DeliverType 是否已赋值
                     * @return DeliverType 是否已赋值
                     * 
                     */
                    bool DeliverTypeHasBeenSet() const;

                    /**
                     * 获取投递子类型：cls，ckafka。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeliverSubType 投递子类型：cls，ckafka。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeliverSubType() const;

                    /**
                     * 设置投递子类型：cls，ckafka。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deliverSubType 投递子类型：cls，ckafka。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeliverSubType(const std::string& _deliverSubType);

                    /**
                     * 判断参数 DeliverSubType 是否已赋值
                     * @return DeliverSubType 是否已赋值
                     * 
                     */
                    bool DeliverSubTypeHasBeenSet() const;

                    /**
                     * 获取投递订阅者
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeliverConsumer 投递订阅者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeliverConsumer() const;

                    /**
                     * 设置投递订阅者
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deliverConsumer 投递订阅者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeliverConsumer(const std::string& _deliverConsumer);

                    /**
                     * 判断参数 DeliverConsumer 是否已赋值
                     * @return DeliverConsumer 是否已赋值
                     * 
                     */
                    bool DeliverConsumerHasBeenSet() const;

                    /**
                     * 获取投递订阅者名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeliverConsumerName 投递订阅者名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeliverConsumerName() const;

                    /**
                     * 设置投递订阅者名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deliverConsumerName 投递订阅者名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeliverConsumerName(const std::string& _deliverConsumerName);

                    /**
                     * 判断参数 DeliverConsumerName 是否已赋值
                     * @return DeliverConsumerName 是否已赋值
                     * 
                     */
                    bool DeliverConsumerNameHasBeenSet() const;

                    /**
                     * 获取投递
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeliverError 投递
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeliverError() const;

                    /**
                     * 设置投递
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deliverError 投递
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeliverError(const std::string& _deliverError);

                    /**
                     * 判断参数 DeliverError 是否已赋值
                     * @return DeliverError 是否已赋值
                     * 
                     */
                    bool DeliverErrorHasBeenSet() const;

                private:

                    /**
                     * 投递类型，store（存储类），mq（消息通道）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deliverType;
                    bool m_deliverTypeHasBeenSet;

                    /**
                     * 投递子类型：cls，ckafka。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deliverSubType;
                    bool m_deliverSubTypeHasBeenSet;

                    /**
                     * 投递订阅者
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deliverConsumer;
                    bool m_deliverConsumerHasBeenSet;

                    /**
                     * 投递订阅者名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deliverConsumerName;
                    bool m_deliverConsumerNameHasBeenSet;

                    /**
                     * 投递
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deliverError;
                    bool m_deliverErrorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DELIVERSUMMARY_H_
