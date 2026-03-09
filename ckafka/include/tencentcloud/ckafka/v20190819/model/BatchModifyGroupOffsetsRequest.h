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
                     * 获取<p>消费分组名称</p>
                     * @return GroupName <p>消费分组名称</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>消费分组名称</p>
                     * @param _groupName <p>消费分组名称</p>
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
                     * 获取<p>ckafka集群实例Id</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40835">DescribeInstances</a></p>
                     * @return InstanceId <p>ckafka集群实例Id</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40835">DescribeInstances</a></p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>ckafka集群实例Id</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40835">DescribeInstances</a></p>
                     * @param _instanceId <p>ckafka集群实例Id</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40835">DescribeInstances</a></p>
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
                     * 获取<p>partition信息</p>
                     * @return Partitions <p>partition信息</p>
                     * 
                     */
                    std::vector<Partitions> GetPartitions() const;

                    /**
                     * 设置<p>partition信息</p>
                     * @param _partitions <p>partition信息</p>
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
                     * 获取<p>指定topic，默认所有topic</p>
                     * @return TopicName <p>指定topic，默认所有topic</p>
                     * 
                     */
                    std::vector<std::string> GetTopicName() const;

                    /**
                     * 设置<p>指定topic，默认所有topic</p>
                     * @param _topicName <p>指定topic，默认所有topic</p>
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
                     * <p>消费分组名称</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>ckafka集群实例Id</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40835">DescribeInstances</a></p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>partition信息</p>
                     */
                    std::vector<Partitions> m_partitions;
                    bool m_partitionsHasBeenSet;

                    /**
                     * <p>指定topic，默认所有topic</p>
                     */
                    std::vector<std::string> m_topicName;
                    bool m_topicNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_BATCHMODIFYGROUPOFFSETSREQUEST_H_
