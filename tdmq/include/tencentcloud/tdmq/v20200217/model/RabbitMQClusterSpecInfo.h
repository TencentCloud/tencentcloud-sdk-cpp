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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQCLUSTERSPECINFO_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQCLUSTERSPECINFO_H_

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
                * RabbitMQ集群规格信息
                */
                class RabbitMQClusterSpecInfo : public AbstractModel
                {
                public:
                    RabbitMQClusterSpecInfo();
                    ~RabbitMQClusterSpecInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群规格名称
                     * @return SpecName 集群规格名称
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置集群规格名称
                     * @param _specName 集群规格名称
                     * 
                     */
                    void SetSpecName(const std::string& _specName);

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     * 
                     */
                    bool SpecNameHasBeenSet() const;

                    /**
                     * 获取节点数量
                     * @return NodeCount 节点数量
                     * 
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 设置节点数量
                     * @param _nodeCount 节点数量
                     * 
                     */
                    void SetNodeCount(const uint64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取峰值tps
                     * @return MaxTps 峰值tps
                     * 
                     */
                    uint64_t GetMaxTps() const;

                    /**
                     * 设置峰值tps
                     * @param _maxTps 峰值tps
                     * 
                     */
                    void SetMaxTps(const uint64_t& _maxTps);

                    /**
                     * 判断参数 MaxTps 是否已赋值
                     * @return MaxTps 是否已赋值
                     * 
                     */
                    bool MaxTpsHasBeenSet() const;

                    /**
                     * 获取峰值带宽。单位：mbps
                     * @return MaxBandWidth 峰值带宽。单位：mbps
                     * 
                     */
                    uint64_t GetMaxBandWidth() const;

                    /**
                     * 设置峰值带宽。单位：mbps
                     * @param _maxBandWidth 峰值带宽。单位：mbps
                     * 
                     */
                    void SetMaxBandWidth(const uint64_t& _maxBandWidth);

                    /**
                     * 判断参数 MaxBandWidth 是否已赋值
                     * @return MaxBandWidth 是否已赋值
                     * 
                     */
                    bool MaxBandWidthHasBeenSet() const;

                    /**
                     * 获取存储容量。单位：GB
                     * @return MaxStorage 存储容量。单位：GB
                     * 
                     */
                    uint64_t GetMaxStorage() const;

                    /**
                     * 设置存储容量。单位：GB
                     * @param _maxStorage 存储容量。单位：GB
                     * 
                     */
                    void SetMaxStorage(const uint64_t& _maxStorage);

                    /**
                     * 判断参数 MaxStorage 是否已赋值
                     * @return MaxStorage 是否已赋值
                     * 
                     */
                    bool MaxStorageHasBeenSet() const;

                    /**
                     * 获取公网带宽tps。单位：Mbps
                     * @return PublicNetworkTps 公网带宽tps。单位：Mbps
                     * 
                     */
                    uint64_t GetPublicNetworkTps() const;

                    /**
                     * 设置公网带宽tps。单位：Mbps
                     * @param _publicNetworkTps 公网带宽tps。单位：Mbps
                     * 
                     */
                    void SetPublicNetworkTps(const uint64_t& _publicNetworkTps);

                    /**
                     * 判断参数 PublicNetworkTps 是否已赋值
                     * @return PublicNetworkTps 是否已赋值
                     * 
                     */
                    bool PublicNetworkTpsHasBeenSet() const;

                private:

                    /**
                     * 集群规格名称
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * 节点数量
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * 峰值tps
                     */
                    uint64_t m_maxTps;
                    bool m_maxTpsHasBeenSet;

                    /**
                     * 峰值带宽。单位：mbps
                     */
                    uint64_t m_maxBandWidth;
                    bool m_maxBandWidthHasBeenSet;

                    /**
                     * 存储容量。单位：GB
                     */
                    uint64_t m_maxStorage;
                    bool m_maxStorageHasBeenSet;

                    /**
                     * 公网带宽tps。单位：Mbps
                     */
                    uint64_t m_publicNetworkTps;
                    bool m_publicNetworkTpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQCLUSTERSPECINFO_H_
