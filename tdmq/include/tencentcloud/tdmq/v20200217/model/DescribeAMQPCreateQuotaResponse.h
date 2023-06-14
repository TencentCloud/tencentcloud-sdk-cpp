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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEAMQPCREATEQUOTARESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEAMQPCREATEQUOTARESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeAMQPCreateQuota返回参数结构体
                */
                class DescribeAMQPCreateQuotaResponse : public AbstractModel
                {
                public:
                    DescribeAMQPCreateQuotaResponse();
                    ~DescribeAMQPCreateQuotaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取租户总共可使用集群数量
                     * @return MaxClusterNum 租户总共可使用集群数量
                     * 
                     */
                    uint64_t GetMaxClusterNum() const;

                    /**
                     * 判断参数 MaxClusterNum 是否已赋值
                     * @return MaxClusterNum 是否已赋值
                     * 
                     */
                    bool MaxClusterNumHasBeenSet() const;

                    /**
                     * 获取租户已创建集群数量
                     * @return UsedClusterNum 租户已创建集群数量
                     * 
                     */
                    uint64_t GetUsedClusterNum() const;

                    /**
                     * 判断参数 UsedClusterNum 是否已赋值
                     * @return UsedClusterNum 是否已赋值
                     * 
                     */
                    bool UsedClusterNumHasBeenSet() const;

                    /**
                     * 获取Exchange容量
                     * @return ExchangeCapacity Exchange容量
                     * 
                     */
                    uint64_t GetExchangeCapacity() const;

                    /**
                     * 判断参数 ExchangeCapacity 是否已赋值
                     * @return ExchangeCapacity 是否已赋值
                     * 
                     */
                    bool ExchangeCapacityHasBeenSet() const;

                    /**
                     * 获取Queue容量
                     * @return QueueCapacity Queue容量
                     * 
                     */
                    uint64_t GetQueueCapacity() const;

                    /**
                     * 判断参数 QueueCapacity 是否已赋值
                     * @return QueueCapacity 是否已赋值
                     * 
                     */
                    bool QueueCapacityHasBeenSet() const;

                    /**
                     * 获取单Vhost TPS
                     * @return MaxTpsPerVHost 单Vhost TPS
                     * 
                     */
                    uint64_t GetMaxTpsPerVHost() const;

                    /**
                     * 判断参数 MaxTpsPerVHost 是否已赋值
                     * @return MaxTpsPerVHost 是否已赋值
                     * 
                     */
                    bool MaxTpsPerVHostHasBeenSet() const;

                private:

                    /**
                     * 租户总共可使用集群数量
                     */
                    uint64_t m_maxClusterNum;
                    bool m_maxClusterNumHasBeenSet;

                    /**
                     * 租户已创建集群数量
                     */
                    uint64_t m_usedClusterNum;
                    bool m_usedClusterNumHasBeenSet;

                    /**
                     * Exchange容量
                     */
                    uint64_t m_exchangeCapacity;
                    bool m_exchangeCapacityHasBeenSet;

                    /**
                     * Queue容量
                     */
                    uint64_t m_queueCapacity;
                    bool m_queueCapacityHasBeenSet;

                    /**
                     * 单Vhost TPS
                     */
                    uint64_t m_maxTpsPerVHost;
                    bool m_maxTpsPerVHostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEAMQPCREATEQUOTARESPONSE_H_
