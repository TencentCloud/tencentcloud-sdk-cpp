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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCEVERSION_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCEVERSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/LatestBrokerVersion.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 实例版本信息
                */
                class InstanceVersion : public AbstractModel
                {
                public:
                    InstanceVersion();
                    ~InstanceVersion() = default;
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
                     * 获取broker版本信息
                     * @return CurBrokerVersion broker版本信息
                     * 
                     */
                    std::string GetCurBrokerVersion() const;

                    /**
                     * 设置broker版本信息
                     * @param _curBrokerVersion broker版本信息
                     * 
                     */
                    void SetCurBrokerVersion(const std::string& _curBrokerVersion);

                    /**
                     * 判断参数 CurBrokerVersion 是否已赋值
                     * @return CurBrokerVersion 是否已赋值
                     * 
                     */
                    bool CurBrokerVersionHasBeenSet() const;

                    /**
                     * 获取最新版本信息
                     * @return LatestBrokerVersion 最新版本信息
                     * 
                     */
                    std::vector<LatestBrokerVersion> GetLatestBrokerVersion() const;

                    /**
                     * 设置最新版本信息
                     * @param _latestBrokerVersion 最新版本信息
                     * 
                     */
                    void SetLatestBrokerVersion(const std::vector<LatestBrokerVersion>& _latestBrokerVersion);

                    /**
                     * 判断参数 LatestBrokerVersion 是否已赋值
                     * @return LatestBrokerVersion 是否已赋值
                     * 
                     */
                    bool LatestBrokerVersionHasBeenSet() const;

                    /**
                     * 获取允许跨大版本内核升级
                     * @return AllowUpgradeHighVersion 允许跨大版本内核升级
                     * 
                     */
                    bool GetAllowUpgradeHighVersion() const;

                    /**
                     * 设置允许跨大版本内核升级
                     * @param _allowUpgradeHighVersion 允许跨大版本内核升级
                     * 
                     */
                    void SetAllowUpgradeHighVersion(const bool& _allowUpgradeHighVersion);

                    /**
                     * 判断参数 AllowUpgradeHighVersion 是否已赋值
                     * @return AllowUpgradeHighVersion 是否已赋值
                     * 
                     */
                    bool AllowUpgradeHighVersionHasBeenSet() const;

                    /**
                     * 获取允许升级的大版本
                     * @return HighVersionSet 允许升级的大版本
                     * 
                     */
                    std::vector<std::string> GetHighVersionSet() const;

                    /**
                     * 设置允许升级的大版本
                     * @param _highVersionSet 允许升级的大版本
                     * 
                     */
                    void SetHighVersionSet(const std::vector<std::string>& _highVersionSet);

                    /**
                     * 判断参数 HighVersionSet 是否已赋值
                     * @return HighVersionSet 是否已赋值
                     * 
                     */
                    bool HighVersionSetHasBeenSet() const;

                    /**
                     * 获取允许小版本号配置自动删除消费者组
                     * @return AllowAutoDeleteTimestamp 允许小版本号配置自动删除消费者组
                     * 
                     */
                    bool GetAllowAutoDeleteTimestamp() const;

                    /**
                     * 设置允许小版本号配置自动删除消费者组
                     * @param _allowAutoDeleteTimestamp 允许小版本号配置自动删除消费者组
                     * 
                     */
                    void SetAllowAutoDeleteTimestamp(const bool& _allowAutoDeleteTimestamp);

                    /**
                     * 判断参数 AllowAutoDeleteTimestamp 是否已赋值
                     * @return AllowAutoDeleteTimestamp 是否已赋值
                     * 
                     */
                    bool AllowAutoDeleteTimestampHasBeenSet() const;

                private:

                    /**
                     * ckafka集群实例版本
                     */
                    std::string m_kafkaVersion;
                    bool m_kafkaVersionHasBeenSet;

                    /**
                     * broker版本信息
                     */
                    std::string m_curBrokerVersion;
                    bool m_curBrokerVersionHasBeenSet;

                    /**
                     * 最新版本信息
                     */
                    std::vector<LatestBrokerVersion> m_latestBrokerVersion;
                    bool m_latestBrokerVersionHasBeenSet;

                    /**
                     * 允许跨大版本内核升级
                     */
                    bool m_allowUpgradeHighVersion;
                    bool m_allowUpgradeHighVersionHasBeenSet;

                    /**
                     * 允许升级的大版本
                     */
                    std::vector<std::string> m_highVersionSet;
                    bool m_highVersionSetHasBeenSet;

                    /**
                     * 允许小版本号配置自动删除消费者组
                     */
                    bool m_allowAutoDeleteTimestamp;
                    bool m_allowAutoDeleteTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCEVERSION_H_
