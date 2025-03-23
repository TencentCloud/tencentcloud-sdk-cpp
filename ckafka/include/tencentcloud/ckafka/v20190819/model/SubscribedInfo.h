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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_SUBSCRIBEDINFO_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_SUBSCRIBEDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/PartitionOffset.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 订阅信息实体
                */
                class SubscribedInfo : public AbstractModel
                {
                public:
                    SubscribedInfo();
                    ~SubscribedInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取订阅的主题名
                     * @return TopicName 订阅的主题名
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置订阅的主题名
                     * @param _topicName 订阅的主题名
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
                     * 获取订阅的分区
                     * @return Partition 订阅的分区
                     * 
                     */
                    std::vector<int64_t> GetPartition() const;

                    /**
                     * 设置订阅的分区
                     * @param _partition 订阅的分区
                     * 
                     */
                    void SetPartition(const std::vector<int64_t>& _partition);

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     * 
                     */
                    bool PartitionHasBeenSet() const;

                    /**
                     * 获取分区offset信息
                     * @return PartitionOffset 分区offset信息
                     * 
                     */
                    std::vector<PartitionOffset> GetPartitionOffset() const;

                    /**
                     * 设置分区offset信息
                     * @param _partitionOffset 分区offset信息
                     * 
                     */
                    void SetPartitionOffset(const std::vector<PartitionOffset>& _partitionOffset);

                    /**
                     * 判断参数 PartitionOffset 是否已赋值
                     * @return PartitionOffset 是否已赋值
                     * 
                     */
                    bool PartitionOffsetHasBeenSet() const;

                    /**
                     * 获取订阅的主题ID
                     * @return TopicId 订阅的主题ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置订阅的主题ID
                     * @param _topicId 订阅的主题ID
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                private:

                    /**
                     * 订阅的主题名
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 订阅的分区
                     */
                    std::vector<int64_t> m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * 分区offset信息
                     */
                    std::vector<PartitionOffset> m_partitionOffset;
                    bool m_partitionOffsetHasBeenSet;

                    /**
                     * 订阅的主题ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_SUBSCRIBEDINFO_H_
