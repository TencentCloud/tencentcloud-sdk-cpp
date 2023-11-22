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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQCLUSTERRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQCLUSTERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/RocketMQClusterInfo.h>
#include <tencentcloud/tdmq/v20200217/model/RocketMQClusterConfig.h>
#include <tencentcloud/tdmq/v20200217/model/RocketMQClusterRecentStats.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeRocketMQCluster返回参数结构体
                */
                class DescribeRocketMQClusterResponse : public AbstractModel
                {
                public:
                    DescribeRocketMQClusterResponse();
                    ~DescribeRocketMQClusterResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群信息
                     * @return ClusterInfo 集群信息
                     * 
                     */
                    RocketMQClusterInfo GetClusterInfo() const;

                    /**
                     * 判断参数 ClusterInfo 是否已赋值
                     * @return ClusterInfo 是否已赋值
                     * 
                     */
                    bool ClusterInfoHasBeenSet() const;

                    /**
                     * 获取集群配置
                     * @return ClusterConfig 集群配置
                     * 
                     */
                    RocketMQClusterConfig GetClusterConfig() const;

                    /**
                     * 判断参数 ClusterConfig 是否已赋值
                     * @return ClusterConfig 是否已赋值
                     * 
                     */
                    bool ClusterConfigHasBeenSet() const;

                    /**
                     * 获取集群最近使用量，即将废弃，请使用腾讯云可观测平台获取相关数据。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterStats 集群最近使用量，即将废弃，请使用腾讯云可观测平台获取相关数据。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RocketMQClusterRecentStats GetClusterStats() const;

                    /**
                     * 判断参数 ClusterStats 是否已赋值
                     * @return ClusterStats 是否已赋值
                     * 
                     */
                    bool ClusterStatsHasBeenSet() const;

                private:

                    /**
                     * 集群信息
                     */
                    RocketMQClusterInfo m_clusterInfo;
                    bool m_clusterInfoHasBeenSet;

                    /**
                     * 集群配置
                     */
                    RocketMQClusterConfig m_clusterConfig;
                    bool m_clusterConfigHasBeenSet;

                    /**
                     * 集群最近使用量，即将废弃，请使用腾讯云可观测平台获取相关数据。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RocketMQClusterRecentStats m_clusterStats;
                    bool m_clusterStatsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQCLUSTERRESPONSE_H_
