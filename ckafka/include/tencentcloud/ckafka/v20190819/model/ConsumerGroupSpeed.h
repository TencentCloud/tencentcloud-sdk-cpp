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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CONSUMERGROUPSPEED_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CONSUMERGROUPSPEED_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 消费者组消费速度排行
                */
                class ConsumerGroupSpeed : public AbstractModel
                {
                public:
                    ConsumerGroupSpeed();
                    ~ConsumerGroupSpeed() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取消费者组名称
                     * @return ConsumerGroupName 消费者组名称
                     * 
                     */
                    std::string GetConsumerGroupName() const;

                    /**
                     * 设置消费者组名称
                     * @param _consumerGroupName 消费者组名称
                     * 
                     */
                    void SetConsumerGroupName(const std::string& _consumerGroupName);

                    /**
                     * 判断参数 ConsumerGroupName 是否已赋值
                     * @return ConsumerGroupName 是否已赋值
                     * 
                     */
                    bool ConsumerGroupNameHasBeenSet() const;

                    /**
                     * 获取消费速度 Count/Minute
                     * @return Speed 消费速度 Count/Minute
                     * 
                     */
                    uint64_t GetSpeed() const;

                    /**
                     * 设置消费速度 Count/Minute
                     * @param _speed 消费速度 Count/Minute
                     * 
                     */
                    void SetSpeed(const uint64_t& _speed);

                    /**
                     * 判断参数 Speed 是否已赋值
                     * @return Speed 是否已赋值
                     * 
                     */
                    bool SpeedHasBeenSet() const;

                private:

                    /**
                     * 消费者组名称
                     */
                    std::string m_consumerGroupName;
                    bool m_consumerGroupNameHasBeenSet;

                    /**
                     * 消费速度 Count/Minute
                     */
                    uint64_t m_speed;
                    bool m_speedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CONSUMERGROUPSPEED_H_
