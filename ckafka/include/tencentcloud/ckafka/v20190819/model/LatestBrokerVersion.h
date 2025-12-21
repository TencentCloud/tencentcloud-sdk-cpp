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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_LATESTBROKERVERSION_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_LATESTBROKERVERSION_H_

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
                * 最新版本信息列表
                */
                class LatestBrokerVersion : public AbstractModel
                {
                public:
                    LatestBrokerVersion();
                    ~LatestBrokerVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ckafka集群实例版本
                     * @return KafkaVersion ckafka集群实例版本
                     * 
                     */
                    std::string GetKafkaVersion() const;

                    /**
                     * 设置ckafka集群实例版本
                     * @param _kafkaVersion ckafka集群实例版本
                     * 
                     */
                    void SetKafkaVersion(const std::string& _kafkaVersion);

                    /**
                     * 判断参数 KafkaVersion 是否已赋值
                     * @return KafkaVersion 是否已赋值
                     * 
                     */
                    bool KafkaVersionHasBeenSet() const;

                    /**
                     * 获取broker版本号
                     * @return BrokerVersion broker版本号
                     * 
                     */
                    std::string GetBrokerVersion() const;

                    /**
                     * 设置broker版本号
                     * @param _brokerVersion broker版本号
                     * 
                     */
                    void SetBrokerVersion(const std::string& _brokerVersion);

                    /**
                     * 判断参数 BrokerVersion 是否已赋值
                     * @return BrokerVersion 是否已赋值
                     * 
                     */
                    bool BrokerVersionHasBeenSet() const;

                private:

                    /**
                     * ckafka集群实例版本
                     */
                    std::string m_kafkaVersion;
                    bool m_kafkaVersionHasBeenSet;

                    /**
                     * broker版本号
                     */
                    std::string m_brokerVersion;
                    bool m_brokerVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_LATESTBROKERVERSION_H_
