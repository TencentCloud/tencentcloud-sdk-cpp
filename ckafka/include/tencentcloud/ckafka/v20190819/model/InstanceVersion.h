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
                     * 获取<p>ckafka集群实例版本</p>
                     * @return KafkaVersion <p>ckafka集群实例版本</p>
                     * 
                     */
                    std::string GetKafkaVersion() const;

                    /**
                     * 设置<p>ckafka集群实例版本</p>
                     * @param _kafkaVersion <p>ckafka集群实例版本</p>
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
                     * 获取<p>broker版本信息</p>
                     * @return CurBrokerVersion <p>broker版本信息</p>
                     * 
                     */
                    std::string GetCurBrokerVersion() const;

                    /**
                     * 设置<p>broker版本信息</p>
                     * @param _curBrokerVersion <p>broker版本信息</p>
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
                     * 获取<p>最新版本信息</p>
                     * @return LatestBrokerVersion <p>最新版本信息</p>
                     * 
                     */
                    std::vector<LatestBrokerVersion> GetLatestBrokerVersion() const;

                    /**
                     * 设置<p>最新版本信息</p>
                     * @param _latestBrokerVersion <p>最新版本信息</p>
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
                     * 获取<p>允许跨大版本内核升级</p>
                     * @return AllowUpgradeHighVersion <p>允许跨大版本内核升级</p>
                     * 
                     */
                    bool GetAllowUpgradeHighVersion() const;

                    /**
                     * 设置<p>允许跨大版本内核升级</p>
                     * @param _allowUpgradeHighVersion <p>允许跨大版本内核升级</p>
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
                     * 获取<p>允许升级的大版本</p>
                     * @return HighVersionSet <p>允许升级的大版本</p>
                     * 
                     */
                    std::vector<std::string> GetHighVersionSet() const;

                    /**
                     * 设置<p>允许升级的大版本</p>
                     * @param _highVersionSet <p>允许升级的大版本</p>
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
                     * 获取<p>允许小版本号配置自动删除消费者组</p>
                     * @return AllowAutoDeleteTimestamp <p>允许小版本号配置自动删除消费者组</p>
                     * 
                     */
                    bool GetAllowAutoDeleteTimestamp() const;

                    /**
                     * 设置<p>允许小版本号配置自动删除消费者组</p>
                     * @param _allowAutoDeleteTimestamp <p>允许小版本号配置自动删除消费者组</p>
                     * 
                     */
                    void SetAllowAutoDeleteTimestamp(const bool& _allowAutoDeleteTimestamp);

                    /**
                     * 判断参数 AllowAutoDeleteTimestamp 是否已赋值
                     * @return AllowAutoDeleteTimestamp 是否已赋值
                     * 
                     */
                    bool AllowAutoDeleteTimestampHasBeenSet() const;

                    /**
                     * 获取<p>允许修改事务ID过期时间配置</p>
                     * @return AllowModifyTxnIdExpiration <p>允许修改事务ID过期时间配置</p>
                     * 
                     */
                    bool GetAllowModifyTxnIdExpiration() const;

                    /**
                     * 设置<p>允许修改事务ID过期时间配置</p>
                     * @param _allowModifyTxnIdExpiration <p>允许修改事务ID过期时间配置</p>
                     * 
                     */
                    void SetAllowModifyTxnIdExpiration(const bool& _allowModifyTxnIdExpiration);

                    /**
                     * 判断参数 AllowModifyTxnIdExpiration 是否已赋值
                     * @return AllowModifyTxnIdExpiration 是否已赋值
                     * 
                     */
                    bool AllowModifyTxnIdExpirationHasBeenSet() const;

                private:

                    /**
                     * <p>ckafka集群实例版本</p>
                     */
                    std::string m_kafkaVersion;
                    bool m_kafkaVersionHasBeenSet;

                    /**
                     * <p>broker版本信息</p>
                     */
                    std::string m_curBrokerVersion;
                    bool m_curBrokerVersionHasBeenSet;

                    /**
                     * <p>最新版本信息</p>
                     */
                    std::vector<LatestBrokerVersion> m_latestBrokerVersion;
                    bool m_latestBrokerVersionHasBeenSet;

                    /**
                     * <p>允许跨大版本内核升级</p>
                     */
                    bool m_allowUpgradeHighVersion;
                    bool m_allowUpgradeHighVersionHasBeenSet;

                    /**
                     * <p>允许升级的大版本</p>
                     */
                    std::vector<std::string> m_highVersionSet;
                    bool m_highVersionSetHasBeenSet;

                    /**
                     * <p>允许小版本号配置自动删除消费者组</p>
                     */
                    bool m_allowAutoDeleteTimestamp;
                    bool m_allowAutoDeleteTimestampHasBeenSet;

                    /**
                     * <p>允许修改事务ID过期时间配置</p>
                     */
                    bool m_allowModifyTxnIdExpiration;
                    bool m_allowModifyTxnIdExpirationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCEVERSION_H_
