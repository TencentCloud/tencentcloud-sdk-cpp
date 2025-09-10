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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEPARTITIONREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEPARTITIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreatePartition请求参数结构体
                */
                class CreatePartitionRequest : public AbstractModel
                {
                public:
                    CreatePartitionRequest();
                    ~CreatePartitionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ckafka集群实例Id，可通过[DescribeInstances](https://cloud.tencent.com/document/product/597/40835)接口获取
                     * @return InstanceId ckafka集群实例Id，可通过[DescribeInstances](https://cloud.tencent.com/document/product/597/40835)接口获取
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ckafka集群实例Id，可通过[DescribeInstances](https://cloud.tencent.com/document/product/597/40835)接口获取
                     * @param _instanceId ckafka集群实例Id，可通过[DescribeInstances](https://cloud.tencent.com/document/product/597/40835)接口获取
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
                     * 获取主题名称，可通过[DescribeTopic](https://cloud.tencent.com/document/product/597/40847)接口获取
                     * @return TopicName 主题名称，可通过[DescribeTopic](https://cloud.tencent.com/document/product/597/40847)接口获取
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置主题名称，可通过[DescribeTopic](https://cloud.tencent.com/document/product/597/40847)接口获取
                     * @param _topicName 主题名称，可通过[DescribeTopic](https://cloud.tencent.com/document/product/597/40847)接口获取
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
                     * 获取主题分区个数，传入参数为修改后的分区数，而不是增加的分区数，因此传入参数需要大于当前主题分区个数。
                     * @return PartitionNum 主题分区个数，传入参数为修改后的分区数，而不是增加的分区数，因此传入参数需要大于当前主题分区个数。
                     * 
                     */
                    int64_t GetPartitionNum() const;

                    /**
                     * 设置主题分区个数，传入参数为修改后的分区数，而不是增加的分区数，因此传入参数需要大于当前主题分区个数。
                     * @param _partitionNum 主题分区个数，传入参数为修改后的分区数，而不是增加的分区数，因此传入参数需要大于当前主题分区个数。
                     * 
                     */
                    void SetPartitionNum(const int64_t& _partitionNum);

                    /**
                     * 判断参数 PartitionNum 是否已赋值
                     * @return PartitionNum 是否已赋值
                     * 
                     */
                    bool PartitionNumHasBeenSet() const;

                private:

                    /**
                     * ckafka集群实例Id，可通过[DescribeInstances](https://cloud.tencent.com/document/product/597/40835)接口获取
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 主题名称，可通过[DescribeTopic](https://cloud.tencent.com/document/product/597/40847)接口获取
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 主题分区个数，传入参数为修改后的分区数，而不是增加的分区数，因此传入参数需要大于当前主题分区个数。
                     */
                    int64_t m_partitionNum;
                    bool m_partitionNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEPARTITIONREQUEST_H_
