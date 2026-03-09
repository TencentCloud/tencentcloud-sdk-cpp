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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_FETCHMESSAGEBYOFFSETREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_FETCHMESSAGEBYOFFSETREQUEST_H_

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
                * FetchMessageByOffset请求参数结构体
                */
                class FetchMessageByOffsetRequest : public AbstractModel
                {
                public:
                    FetchMessageByOffsetRequest();
                    ~FetchMessageByOffsetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ckafka集群实例Id，可通过<a href="https://cloud.tencent.com/document/product/597/40835">DescribeInstances</a>接口获取</p>
                     * @return InstanceId <p>ckafka集群实例Id，可通过<a href="https://cloud.tencent.com/document/product/597/40835">DescribeInstances</a>接口获取</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>ckafka集群实例Id，可通过<a href="https://cloud.tencent.com/document/product/597/40835">DescribeInstances</a>接口获取</p>
                     * @param _instanceId <p>ckafka集群实例Id，可通过<a href="https://cloud.tencent.com/document/product/597/40835">DescribeInstances</a>接口获取</p>
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
                     * 获取<p>主题名，可通过<a href="https://cloud.tencent.com/document/product/597/40847">DescribeTopic</a>接口获取</p>
                     * @return Topic <p>主题名，可通过<a href="https://cloud.tencent.com/document/product/597/40847">DescribeTopic</a>接口获取</p>
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置<p>主题名，可通过<a href="https://cloud.tencent.com/document/product/597/40847">DescribeTopic</a>接口获取</p>
                     * @param _topic <p>主题名，可通过<a href="https://cloud.tencent.com/document/product/597/40847">DescribeTopic</a>接口获取</p>
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取<p>分区id</p>
                     * @return Partition <p>分区id</p>
                     * 
                     */
                    int64_t GetPartition() const;

                    /**
                     * 设置<p>分区id</p>
                     * @param _partition <p>分区id</p>
                     * 
                     */
                    void SetPartition(const int64_t& _partition);

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     * 
                     */
                    bool PartitionHasBeenSet() const;

                    /**
                     * 获取<p>位点信息</p>
                     * @return Offset <p>位点信息</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>位点信息</p>
                     * @param _offset <p>位点信息</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * <p>ckafka集群实例Id，可通过<a href="https://cloud.tencent.com/document/product/597/40835">DescribeInstances</a>接口获取</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>主题名，可通过<a href="https://cloud.tencent.com/document/product/597/40847">DescribeTopic</a>接口获取</p>
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * <p>分区id</p>
                     */
                    int64_t m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * <p>位点信息</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_FETCHMESSAGEBYOFFSETREQUEST_H_
