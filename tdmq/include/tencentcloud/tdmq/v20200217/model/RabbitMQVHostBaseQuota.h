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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQVHOSTBASEQUOTA_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQVHOSTBASEQUOTA_H_

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
                * RabbitMQ 虚拟主机基础配额信息
                */
                class RabbitMQVHostBaseQuota : public AbstractModel
                {
                public:
                    RabbitMQVHostBaseQuota();
                    ~RabbitMQVHostBaseQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取单个 vhost 下允许的最大连接数
                     * @return MaxConnectionPerVhost 单个 vhost 下允许的最大连接数
                     * 
                     */
                    int64_t GetMaxConnectionPerVhost() const;

                    /**
                     * 设置单个 vhost 下允许的最大连接数
                     * @param _maxConnectionPerVhost 单个 vhost 下允许的最大连接数
                     * 
                     */
                    void SetMaxConnectionPerVhost(const int64_t& _maxConnectionPerVhost);

                    /**
                     * 判断参数 MaxConnectionPerVhost 是否已赋值
                     * @return MaxConnectionPerVhost 是否已赋值
                     * 
                     */
                    bool MaxConnectionPerVhostHasBeenSet() const;

                    /**
                     * 获取单个 vhost 下允许的最大交换机数
                     * @return MaxExchangePerVhost 单个 vhost 下允许的最大交换机数
                     * 
                     */
                    int64_t GetMaxExchangePerVhost() const;

                    /**
                     * 设置单个 vhost 下允许的最大交换机数
                     * @param _maxExchangePerVhost 单个 vhost 下允许的最大交换机数
                     * 
                     */
                    void SetMaxExchangePerVhost(const int64_t& _maxExchangePerVhost);

                    /**
                     * 判断参数 MaxExchangePerVhost 是否已赋值
                     * @return MaxExchangePerVhost 是否已赋值
                     * 
                     */
                    bool MaxExchangePerVhostHasBeenSet() const;

                    /**
                     * 获取单个 vhost 下允许的最大队列数
                     * @return MaxQueuePerVhost 单个 vhost 下允许的最大队列数
                     * 
                     */
                    int64_t GetMaxQueuePerVhost() const;

                    /**
                     * 设置单个 vhost 下允许的最大队列数
                     * @param _maxQueuePerVhost 单个 vhost 下允许的最大队列数
                     * 
                     */
                    void SetMaxQueuePerVhost(const int64_t& _maxQueuePerVhost);

                    /**
                     * 判断参数 MaxQueuePerVhost 是否已赋值
                     * @return MaxQueuePerVhost 是否已赋值
                     * 
                     */
                    bool MaxQueuePerVhostHasBeenSet() const;

                private:

                    /**
                     * 单个 vhost 下允许的最大连接数
                     */
                    int64_t m_maxConnectionPerVhost;
                    bool m_maxConnectionPerVhostHasBeenSet;

                    /**
                     * 单个 vhost 下允许的最大交换机数
                     */
                    int64_t m_maxExchangePerVhost;
                    bool m_maxExchangePerVhostHasBeenSet;

                    /**
                     * 单个 vhost 下允许的最大队列数
                     */
                    int64_t m_maxQueuePerVhost;
                    bool m_maxQueuePerVhostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQVHOSTBASEQUOTA_H_
