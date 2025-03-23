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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICFLOWRANKINGRESULT_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICFLOWRANKINGRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/TopicFlowRanking.h>
#include <tencentcloud/ckafka/v20190819/model/ConsumerGroupSpeed.h>
#include <tencentcloud/ckafka/v20190819/model/TopicMessageHeapRanking.h>
#include <tencentcloud/ckafka/v20190819/model/BrokerTopicData.h>
#include <tencentcloud/ckafka/v20190819/model/BrokerTopicFlowData.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * topic 生产消息数据，消费者数据
                */
                class TopicFlowRankingResult : public AbstractModel
                {
                public:
                    TopicFlowRankingResult();
                    ~TopicFlowRankingResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Topic 流量数组
                     * @return TopicFlow Topic 流量数组
                     * 
                     */
                    std::vector<TopicFlowRanking> GetTopicFlow() const;

                    /**
                     * 设置Topic 流量数组
                     * @param _topicFlow Topic 流量数组
                     * 
                     */
                    void SetTopicFlow(const std::vector<TopicFlowRanking>& _topicFlow);

                    /**
                     * 判断参数 TopicFlow 是否已赋值
                     * @return TopicFlow 是否已赋值
                     * 
                     */
                    bool TopicFlowHasBeenSet() const;

                    /**
                     * 获取消费者组消费速度排行速度
                     * @return ConsumeSpeed 消费者组消费速度排行速度
                     * 
                     */
                    std::vector<ConsumerGroupSpeed> GetConsumeSpeed() const;

                    /**
                     * 设置消费者组消费速度排行速度
                     * @param _consumeSpeed 消费者组消费速度排行速度
                     * 
                     */
                    void SetConsumeSpeed(const std::vector<ConsumerGroupSpeed>& _consumeSpeed);

                    /**
                     * 判断参数 ConsumeSpeed 是否已赋值
                     * @return ConsumeSpeed 是否已赋值
                     * 
                     */
                    bool ConsumeSpeedHasBeenSet() const;

                    /**
                     * 获取Topic 消息堆积/占用磁盘排行
                     * @return TopicMessageHeap Topic 消息堆积/占用磁盘排行
                     * 
                     */
                    std::vector<TopicMessageHeapRanking> GetTopicMessageHeap() const;

                    /**
                     * 设置Topic 消息堆积/占用磁盘排行
                     * @param _topicMessageHeap Topic 消息堆积/占用磁盘排行
                     * 
                     */
                    void SetTopicMessageHeap(const std::vector<TopicMessageHeapRanking>& _topicMessageHeap);

                    /**
                     * 判断参数 TopicMessageHeap 是否已赋值
                     * @return TopicMessageHeap 是否已赋值
                     * 
                     */
                    bool TopicMessageHeapHasBeenSet() const;

                    /**
                     * 获取Broker Ip 列表
                     * @return BrokerIp Broker Ip 列表
                     * 
                     */
                    std::vector<std::string> GetBrokerIp() const;

                    /**
                     * 设置Broker Ip 列表
                     * @param _brokerIp Broker Ip 列表
                     * 
                     */
                    void SetBrokerIp(const std::vector<std::string>& _brokerIp);

                    /**
                     * 判断参数 BrokerIp 是否已赋值
                     * @return BrokerIp 是否已赋值
                     * 
                     */
                    bool BrokerIpHasBeenSet() const;

                    /**
                     * 获取单个broker 节点 Topic占用的数据大小
                     * @return BrokerTopicData 单个broker 节点 Topic占用的数据大小
                     * 
                     */
                    std::vector<BrokerTopicData> GetBrokerTopicData() const;

                    /**
                     * 设置单个broker 节点 Topic占用的数据大小
                     * @param _brokerTopicData 单个broker 节点 Topic占用的数据大小
                     * 
                     */
                    void SetBrokerTopicData(const std::vector<BrokerTopicData>& _brokerTopicData);

                    /**
                     * 判断参数 BrokerTopicData 是否已赋值
                     * @return BrokerTopicData 是否已赋值
                     * 
                     */
                    bool BrokerTopicDataHasBeenSet() const;

                    /**
                     * 获取单个Broker 节点Topic 流量的大小(单位MB)
                     * @return BrokerTopicFlowData 单个Broker 节点Topic 流量的大小(单位MB)
                     * 
                     */
                    std::vector<BrokerTopicFlowData> GetBrokerTopicFlowData() const;

                    /**
                     * 设置单个Broker 节点Topic 流量的大小(单位MB)
                     * @param _brokerTopicFlowData 单个Broker 节点Topic 流量的大小(单位MB)
                     * 
                     */
                    void SetBrokerTopicFlowData(const std::vector<BrokerTopicFlowData>& _brokerTopicFlowData);

                    /**
                     * 判断参数 BrokerTopicFlowData 是否已赋值
                     * @return BrokerTopicFlowData 是否已赋值
                     * 
                     */
                    bool BrokerTopicFlowDataHasBeenSet() const;

                private:

                    /**
                     * Topic 流量数组
                     */
                    std::vector<TopicFlowRanking> m_topicFlow;
                    bool m_topicFlowHasBeenSet;

                    /**
                     * 消费者组消费速度排行速度
                     */
                    std::vector<ConsumerGroupSpeed> m_consumeSpeed;
                    bool m_consumeSpeedHasBeenSet;

                    /**
                     * Topic 消息堆积/占用磁盘排行
                     */
                    std::vector<TopicMessageHeapRanking> m_topicMessageHeap;
                    bool m_topicMessageHeapHasBeenSet;

                    /**
                     * Broker Ip 列表
                     */
                    std::vector<std::string> m_brokerIp;
                    bool m_brokerIpHasBeenSet;

                    /**
                     * 单个broker 节点 Topic占用的数据大小
                     */
                    std::vector<BrokerTopicData> m_brokerTopicData;
                    bool m_brokerTopicDataHasBeenSet;

                    /**
                     * 单个Broker 节点Topic 流量的大小(单位MB)
                     */
                    std::vector<BrokerTopicFlowData> m_brokerTopicFlowData;
                    bool m_brokerTopicFlowDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICFLOWRANKINGRESULT_H_
