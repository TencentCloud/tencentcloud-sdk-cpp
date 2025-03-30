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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DELIVERSUMMARY_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DELIVERSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 日志投递信息
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
                     * @return DeliverType 投递类型，store（存储类），mq（消息通道）
                     * 
                     */
                    std::string GetDeliverType() const;

                    /**
                     * 设置投递类型，store（存储类），mq（消息通道）
                     * @param _deliverType 投递类型，store（存储类），mq（消息通道）
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
                     * @return DeliverSubType 投递子类型：cls，ckafka。
                     * 
                     */
                    std::string GetDeliverSubType() const;

                    /**
                     * 设置投递子类型：cls，ckafka。
                     * @param _deliverSubType 投递子类型：cls，ckafka。
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
                     * 获取投递者
                     * @return DeliverConsumer 投递者
                     * 
                     */
                    std::string GetDeliverConsumer() const;

                    /**
                     * 设置投递者
                     * @param _deliverConsumer 投递者
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
                     * 获取投递者名称
                     * @return DeliverConsumerName 投递者名称
                     * 
                     */
                    std::string GetDeliverConsumerName() const;

                    /**
                     * 设置投递者名称
                     * @param _deliverConsumerName 投递者名称
                     * 
                     */
                    void SetDeliverConsumerName(const std::string& _deliverConsumerName);

                    /**
                     * 判断参数 DeliverConsumerName 是否已赋值
                     * @return DeliverConsumerName 是否已赋值
                     * 
                     */
                    bool DeliverConsumerNameHasBeenSet() const;

                private:

                    /**
                     * 投递类型，store（存储类），mq（消息通道）
                     */
                    std::string m_deliverType;
                    bool m_deliverTypeHasBeenSet;

                    /**
                     * 投递子类型：cls，ckafka。
                     */
                    std::string m_deliverSubType;
                    bool m_deliverSubTypeHasBeenSet;

                    /**
                     * 投递者
                     */
                    std::string m_deliverConsumer;
                    bool m_deliverConsumerHasBeenSet;

                    /**
                     * 投递者名称
                     */
                    std::string m_deliverConsumerName;
                    bool m_deliverConsumerNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DELIVERSUMMARY_H_
