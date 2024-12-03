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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICFLOWRANKING_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICFLOWRANKING_H_

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
                * topic 流量排行
                */
                class TopicFlowRanking : public AbstractModel
                {
                public:
                    TopicFlowRanking();
                    ~TopicFlowRanking() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主题Id
                     * @return TopicId 主题Id
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置主题Id
                     * @param _topicId 主题Id
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取主题名称
                     * @return TopicName 主题名称
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置主题名称
                     * @param _topicName 主题名称
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取分区数
                     * @return PartitionNum 分区数
                     * 
                     */
                    uint64_t GetPartitionNum() const;

                    /**
                     * 设置分区数
                     * @param _partitionNum 分区数
                     * 
                     */
                    void SetPartitionNum(const uint64_t& _partitionNum);

                    /**
                     * 判断参数 PartitionNum 是否已赋值
                     * @return PartitionNum 是否已赋值
                     * 
                     */
                    bool PartitionNumHasBeenSet() const;

                    /**
                     * 获取副本数
                     * @return ReplicaNum 副本数
                     * 
                     */
                    uint64_t GetReplicaNum() const;

                    /**
                     * 设置副本数
                     * @param _replicaNum 副本数
                     * 
                     */
                    void SetReplicaNum(const uint64_t& _replicaNum);

                    /**
                     * 判断参数 ReplicaNum 是否已赋值
                     * @return ReplicaNum 是否已赋值
                     * 
                     */
                    bool ReplicaNumHasBeenSet() const;

                    /**
                     * 获取Topic 流量,单位MB(设置date时以sum方式聚合)
                     * @return TopicTraffic Topic 流量,单位MB(设置date时以sum方式聚合)
                     * 
                     */
                    std::string GetTopicTraffic() const;

                    /**
                     * 设置Topic 流量,单位MB(设置date时以sum方式聚合)
                     * @param _topicTraffic Topic 流量,单位MB(设置date时以sum方式聚合)
                     * 
                     */
                    void SetTopicTraffic(const std::string& _topicTraffic);

                    /**
                     * 判断参数 TopicTraffic 是否已赋值
                     * @return TopicTraffic 是否已赋值
                     * 
                     */
                    bool TopicTrafficHasBeenSet() const;

                    /**
                     * 获取Topic 消息堆积
                     * @return MessageHeap Topic 消息堆积
                     * 
                     */
                    uint64_t GetMessageHeap() const;

                    /**
                     * 设置Topic 消息堆积
                     * @param _messageHeap Topic 消息堆积
                     * 
                     */
                    void SetMessageHeap(const uint64_t& _messageHeap);

                    /**
                     * 判断参数 MessageHeap 是否已赋值
                     * @return MessageHeap 是否已赋值
                     * 
                     */
                    bool MessageHeapHasBeenSet() const;

                private:

                    /**
                     * 主题Id
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 主题名称
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 分区数
                     */
                    uint64_t m_partitionNum;
                    bool m_partitionNumHasBeenSet;

                    /**
                     * 副本数
                     */
                    uint64_t m_replicaNum;
                    bool m_replicaNumHasBeenSet;

                    /**
                     * Topic 流量,单位MB(设置date时以sum方式聚合)
                     */
                    std::string m_topicTraffic;
                    bool m_topicTrafficHasBeenSet;

                    /**
                     * Topic 消息堆积
                     */
                    uint64_t m_messageHeap;
                    bool m_messageHeapHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICFLOWRANKING_H_
