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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_BATCHMODIFYGROUPOFFSETSREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_BATCHMODIFYGROUPOFFSETSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/Partitions.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * BatchModifyGroupOffsets请求参数结构体
                */
                class BatchModifyGroupOffsetsRequest : public AbstractModel
                {
                public:
                    BatchModifyGroupOffsetsRequest();
                    ~BatchModifyGroupOffsetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取消费分组名称
                     * @return GroupName 消费分组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置消费分组名称
                     * @param _groupName 消费分组名称
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取ckafka集群实例Id
                     * @return InstanceId ckafka集群实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ckafka集群实例Id
                     * @param _instanceId ckafka集群实例Id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取partition信息
                     * @return Partitions partition信息
                     * 
                     */
                    std::vector<Partitions> GetPartitions() const;

                    /**
                     * 设置partition信息
                     * @param _partitions partition信息
                     * 
                     */
                    void SetPartitions(const std::vector<Partitions>& _partitions);

                    /**
                     * 判断参数 Partitions 是否已赋值
                     * @return Partitions 是否已赋值
                     * 
                     */
                    bool PartitionsHasBeenSet() const;

                    /**
                     * 获取指定topic，默认所有topic
                     * @return TopicName 指定topic，默认所有topic
                     * 
                     */
                    std::vector<std::string> GetTopicName() const;

                    /**
                     * 设置指定topic，默认所有topic
                     * @param _topicName 指定topic，默认所有topic
                     * 
                     */
                    void SetTopicName(const std::vector<std::string>& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                private:

                    /**
                     * 消费分组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * ckafka集群实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * partition信息
                     */
                    std::vector<Partitions> m_partitions;
                    bool m_partitionsHasBeenSet;

                    /**
                     * 指定topic，默认所有topic
                     */
                    std::vector<std::string> m_topicName;
                    bool m_topicNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_BATCHMODIFYGROUPOFFSETSREQUEST_H_
