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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQVIPINSTANCERESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQVIPINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/RabbitMQClusterInfo.h>
#include <tencentcloud/tdmq/v20200217/model/RabbitMQClusterSpecInfo.h>
#include <tencentcloud/tdmq/v20200217/model/RabbitMQClusterAccessInfo.h>
#include <tencentcloud/tdmq/v20200217/model/RabbitMQClusterWhiteListInfo.h>
#include <tencentcloud/tdmq/v20200217/model/VirtualHostQuota.h>
#include <tencentcloud/tdmq/v20200217/model/ExchangeQuota.h>
#include <tencentcloud/tdmq/v20200217/model/QueueQuota.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeRabbitMQVipInstance返回参数结构体
                */
                class DescribeRabbitMQVipInstanceResponse : public AbstractModel
                {
                public:
                    DescribeRabbitMQVipInstanceResponse();
                    ~DescribeRabbitMQVipInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群信息
                     * @return ClusterInfo 集群信息
                     * 
                     */
                    RabbitMQClusterInfo GetClusterInfo() const;

                    /**
                     * 判断参数 ClusterInfo 是否已赋值
                     * @return ClusterInfo 是否已赋值
                     * 
                     */
                    bool ClusterInfoHasBeenSet() const;

                    /**
                     * 获取集群规格信息
                     * @return ClusterSpecInfo 集群规格信息
                     * 
                     */
                    RabbitMQClusterSpecInfo GetClusterSpecInfo() const;

                    /**
                     * 判断参数 ClusterSpecInfo 是否已赋值
                     * @return ClusterSpecInfo 是否已赋值
                     * 
                     */
                    bool ClusterSpecInfoHasBeenSet() const;

                    /**
                     * 获取集群访问
                     * @return ClusterNetInfo 集群访问
                     * 
                     */
                    RabbitMQClusterAccessInfo GetClusterNetInfo() const;

                    /**
                     * 判断参数 ClusterNetInfo 是否已赋值
                     * @return ClusterNetInfo 是否已赋值
                     * 
                     */
                    bool ClusterNetInfoHasBeenSet() const;

                    /**
                     * 获取集群白名单
                     * @return ClusterWhiteListInfo 集群白名单
                     * 
                     */
                    RabbitMQClusterWhiteListInfo GetClusterWhiteListInfo() const;

                    /**
                     * 判断参数 ClusterWhiteListInfo 是否已赋值
                     * @return ClusterWhiteListInfo 是否已赋值
                     * 
                     */
                    bool ClusterWhiteListInfoHasBeenSet() const;

                    /**
                     * 获取vhost配额信息
                     * @return VirtualHostQuota vhost配额信息
                     * 
                     */
                    VirtualHostQuota GetVirtualHostQuota() const;

                    /**
                     * 判断参数 VirtualHostQuota 是否已赋值
                     * @return VirtualHostQuota 是否已赋值
                     * 
                     */
                    bool VirtualHostQuotaHasBeenSet() const;

                    /**
                     * 获取exchange配额信息
                     * @return ExchangeQuota exchange配额信息
                     * 
                     */
                    ExchangeQuota GetExchangeQuota() const;

                    /**
                     * 判断参数 ExchangeQuota 是否已赋值
                     * @return ExchangeQuota 是否已赋值
                     * 
                     */
                    bool ExchangeQuotaHasBeenSet() const;

                    /**
                     * 获取queue配额信息
                     * @return QueueQuota queue配额信息
                     * 
                     */
                    QueueQuota GetQueueQuota() const;

                    /**
                     * 判断参数 QueueQuota 是否已赋值
                     * @return QueueQuota 是否已赋值
                     * 
                     */
                    bool QueueQuotaHasBeenSet() const;

                private:

                    /**
                     * 集群信息
                     */
                    RabbitMQClusterInfo m_clusterInfo;
                    bool m_clusterInfoHasBeenSet;

                    /**
                     * 集群规格信息
                     */
                    RabbitMQClusterSpecInfo m_clusterSpecInfo;
                    bool m_clusterSpecInfoHasBeenSet;

                    /**
                     * 集群访问
                     */
                    RabbitMQClusterAccessInfo m_clusterNetInfo;
                    bool m_clusterNetInfoHasBeenSet;

                    /**
                     * 集群白名单
                     */
                    RabbitMQClusterWhiteListInfo m_clusterWhiteListInfo;
                    bool m_clusterWhiteListInfoHasBeenSet;

                    /**
                     * vhost配额信息
                     */
                    VirtualHostQuota m_virtualHostQuota;
                    bool m_virtualHostQuotaHasBeenSet;

                    /**
                     * exchange配额信息
                     */
                    ExchangeQuota m_exchangeQuota;
                    bool m_exchangeQuotaHasBeenSet;

                    /**
                     * queue配额信息
                     */
                    QueueQuota m_queueQuota;
                    bool m_queueQuotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQVIPINSTANCERESPONSE_H_
