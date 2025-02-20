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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQQUEUELISTCONSUMERDETAILINFO_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQQUEUELISTCONSUMERDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * RabbitMQ队列列表消费者信息
                */
                class RabbitMQQueueListConsumerDetailInfo : public AbstractModel
                {
                public:
                    RabbitMQQueueListConsumerDetailInfo();
                    ~RabbitMQQueueListConsumerDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取消费者数量
                     * @return ConsumersNumber 消费者数量
                     * 
                     */
                    int64_t GetConsumersNumber() const;

                    /**
                     * 设置消费者数量
                     * @param _consumersNumber 消费者数量
                     * 
                     */
                    void SetConsumersNumber(const int64_t& _consumersNumber);

                    /**
                     * 判断参数 ConsumersNumber 是否已赋值
                     * @return ConsumersNumber 是否已赋值
                     * 
                     */
                    bool ConsumersNumberHasBeenSet() const;

                private:

                    /**
                     * 消费者数量
                     */
                    int64_t m_consumersNumber;
                    bool m_consumersNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQQUEUELISTCONSUMERDETAILINFO_H_
