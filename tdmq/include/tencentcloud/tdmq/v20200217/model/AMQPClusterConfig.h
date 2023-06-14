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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_AMQPCLUSTERCONFIG_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_AMQPCLUSTERCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * AMQP集群配置
                */
                class AMQPClusterConfig : public AbstractModel
                {
                public:
                    AMQPClusterConfig();
                    ~AMQPClusterConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取单Vhost TPS上限
                     * @return MaxTpsPerVHost 单Vhost TPS上限
                     * 
                     */
                    uint64_t GetMaxTpsPerVHost() const;

                    /**
                     * 设置单Vhost TPS上限
                     * @param _maxTpsPerVHost 单Vhost TPS上限
                     * 
                     */
                    void SetMaxTpsPerVHost(const uint64_t& _maxTpsPerVHost);

                    /**
                     * 判断参数 MaxTpsPerVHost 是否已赋值
                     * @return MaxTpsPerVHost 是否已赋值
                     * 
                     */
                    bool MaxTpsPerVHostHasBeenSet() const;

                    /**
                     * 获取单Vhost客户端连接数上限
                     * @return MaxConnNumPerVHost 单Vhost客户端连接数上限
                     * 
                     */
                    uint64_t GetMaxConnNumPerVHost() const;

                    /**
                     * 设置单Vhost客户端连接数上限
                     * @param _maxConnNumPerVHost 单Vhost客户端连接数上限
                     * 
                     */
                    void SetMaxConnNumPerVHost(const uint64_t& _maxConnNumPerVHost);

                    /**
                     * 判断参数 MaxConnNumPerVHost 是否已赋值
                     * @return MaxConnNumPerVHost 是否已赋值
                     * 
                     */
                    bool MaxConnNumPerVHostHasBeenSet() const;

                    /**
                     * 获取最大Vhost数量
                     * @return MaxVHostNum 最大Vhost数量
                     * 
                     */
                    uint64_t GetMaxVHostNum() const;

                    /**
                     * 设置最大Vhost数量
                     * @param _maxVHostNum 最大Vhost数量
                     * 
                     */
                    void SetMaxVHostNum(const uint64_t& _maxVHostNum);

                    /**
                     * 判断参数 MaxVHostNum 是否已赋值
                     * @return MaxVHostNum 是否已赋值
                     * 
                     */
                    bool MaxVHostNumHasBeenSet() const;

                    /**
                     * 获取最大exchange数量
                     * @return MaxExchangeNum 最大exchange数量
                     * 
                     */
                    uint64_t GetMaxExchangeNum() const;

                    /**
                     * 设置最大exchange数量
                     * @param _maxExchangeNum 最大exchange数量
                     * 
                     */
                    void SetMaxExchangeNum(const uint64_t& _maxExchangeNum);

                    /**
                     * 判断参数 MaxExchangeNum 是否已赋值
                     * @return MaxExchangeNum 是否已赋值
                     * 
                     */
                    bool MaxExchangeNumHasBeenSet() const;

                    /**
                     * 获取最大Queue数量
                     * @return MaxQueueNum 最大Queue数量
                     * 
                     */
                    uint64_t GetMaxQueueNum() const;

                    /**
                     * 设置最大Queue数量
                     * @param _maxQueueNum 最大Queue数量
                     * 
                     */
                    void SetMaxQueueNum(const uint64_t& _maxQueueNum);

                    /**
                     * 判断参数 MaxQueueNum 是否已赋值
                     * @return MaxQueueNum 是否已赋值
                     * 
                     */
                    bool MaxQueueNumHasBeenSet() const;

                    /**
                     * 获取消息最大保留时间，以毫秒为单位
                     * @return MaxRetentionTime 消息最大保留时间，以毫秒为单位
                     * 
                     */
                    uint64_t GetMaxRetentionTime() const;

                    /**
                     * 设置消息最大保留时间，以毫秒为单位
                     * @param _maxRetentionTime 消息最大保留时间，以毫秒为单位
                     * 
                     */
                    void SetMaxRetentionTime(const uint64_t& _maxRetentionTime);

                    /**
                     * 判断参数 MaxRetentionTime 是否已赋值
                     * @return MaxRetentionTime 是否已赋值
                     * 
                     */
                    bool MaxRetentionTimeHasBeenSet() const;

                    /**
                     * 获取已使用Vhost数量
                     * @return UsedVHostNum 已使用Vhost数量
                     * 
                     */
                    uint64_t GetUsedVHostNum() const;

                    /**
                     * 设置已使用Vhost数量
                     * @param _usedVHostNum 已使用Vhost数量
                     * 
                     */
                    void SetUsedVHostNum(const uint64_t& _usedVHostNum);

                    /**
                     * 判断参数 UsedVHostNum 是否已赋值
                     * @return UsedVHostNum 是否已赋值
                     * 
                     */
                    bool UsedVHostNumHasBeenSet() const;

                    /**
                     * 获取已使用exchange数量
                     * @return UsedExchangeNum 已使用exchange数量
                     * 
                     */
                    uint64_t GetUsedExchangeNum() const;

                    /**
                     * 设置已使用exchange数量
                     * @param _usedExchangeNum 已使用exchange数量
                     * 
                     */
                    void SetUsedExchangeNum(const uint64_t& _usedExchangeNum);

                    /**
                     * 判断参数 UsedExchangeNum 是否已赋值
                     * @return UsedExchangeNum 是否已赋值
                     * 
                     */
                    bool UsedExchangeNumHasBeenSet() const;

                    /**
                     * 获取已使用queue数量
                     * @return UsedQueueNum 已使用queue数量
                     * 
                     */
                    uint64_t GetUsedQueueNum() const;

                    /**
                     * 设置已使用queue数量
                     * @param _usedQueueNum 已使用queue数量
                     * 
                     */
                    void SetUsedQueueNum(const uint64_t& _usedQueueNum);

                    /**
                     * 判断参数 UsedQueueNum 是否已赋值
                     * @return UsedQueueNum 是否已赋值
                     * 
                     */
                    bool UsedQueueNumHasBeenSet() const;

                private:

                    /**
                     * 单Vhost TPS上限
                     */
                    uint64_t m_maxTpsPerVHost;
                    bool m_maxTpsPerVHostHasBeenSet;

                    /**
                     * 单Vhost客户端连接数上限
                     */
                    uint64_t m_maxConnNumPerVHost;
                    bool m_maxConnNumPerVHostHasBeenSet;

                    /**
                     * 最大Vhost数量
                     */
                    uint64_t m_maxVHostNum;
                    bool m_maxVHostNumHasBeenSet;

                    /**
                     * 最大exchange数量
                     */
                    uint64_t m_maxExchangeNum;
                    bool m_maxExchangeNumHasBeenSet;

                    /**
                     * 最大Queue数量
                     */
                    uint64_t m_maxQueueNum;
                    bool m_maxQueueNumHasBeenSet;

                    /**
                     * 消息最大保留时间，以毫秒为单位
                     */
                    uint64_t m_maxRetentionTime;
                    bool m_maxRetentionTimeHasBeenSet;

                    /**
                     * 已使用Vhost数量
                     */
                    uint64_t m_usedVHostNum;
                    bool m_usedVHostNumHasBeenSet;

                    /**
                     * 已使用exchange数量
                     */
                    uint64_t m_usedExchangeNum;
                    bool m_usedExchangeNumHasBeenSet;

                    /**
                     * 已使用queue数量
                     */
                    uint64_t m_usedQueueNum;
                    bool m_usedQueueNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_AMQPCLUSTERCONFIG_H_
