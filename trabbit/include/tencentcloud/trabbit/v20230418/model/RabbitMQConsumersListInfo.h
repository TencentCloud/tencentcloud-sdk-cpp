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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQCONSUMERSLISTINFO_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQCONSUMERSLISTINFO_H_

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
                * 队列消费者列表信息
                */
                class RabbitMQConsumersListInfo : public AbstractModel
                {
                public:
                    RabbitMQConsumersListInfo();
                    ~RabbitMQConsumersListInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客户端Ip
                     * @return ClientIp 客户端Ip
                     * 
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置客户端Ip
                     * @param _clientIp 客户端Ip
                     * 
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     * 
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取消费者Tag
                     * @return ConsumerTag 消费者Tag
                     * 
                     */
                    std::string GetConsumerTag() const;

                    /**
                     * 设置消费者Tag
                     * @param _consumerTag 消费者Tag
                     * 
                     */
                    void SetConsumerTag(const std::string& _consumerTag);

                    /**
                     * 判断参数 ConsumerTag 是否已赋值
                     * @return ConsumerTag 是否已赋值
                     * 
                     */
                    bool ConsumerTagHasBeenSet() const;

                private:

                    /**
                     * 客户端Ip
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * 消费者Tag
                     */
                    std::string m_consumerTag;
                    bool m_consumerTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQCONSUMERSLISTINFO_H_
