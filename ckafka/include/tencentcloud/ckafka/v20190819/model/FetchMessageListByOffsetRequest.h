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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_FETCHMESSAGELISTBYOFFSETREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_FETCHMESSAGELISTBYOFFSETREQUEST_H_

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
                * FetchMessageListByOffset请求参数结构体
                */
                class FetchMessageListByOffsetRequest : public AbstractModel
                {
                public:
                    FetchMessageListByOffsetRequest();
                    ~FetchMessageListByOffsetRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取主题名
                     * @return Topic 主题名
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置主题名
                     * @param _topic 主题名
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
                     * 获取分区id
                     * @return Partition 分区id
                     * 
                     */
                    int64_t GetPartition() const;

                    /**
                     * 设置分区id
                     * @param _partition 分区id
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
                     * 获取位点信息
                     * @return Offset 位点信息
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置位点信息
                     * @param _offset 位点信息
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取最大查询条数，默认20，最大20
                     * @return SinglePartitionRecordNumber 最大查询条数，默认20，最大20
                     * 
                     */
                    int64_t GetSinglePartitionRecordNumber() const;

                    /**
                     * 设置最大查询条数，默认20，最大20
                     * @param _singlePartitionRecordNumber 最大查询条数，默认20，最大20
                     * 
                     */
                    void SetSinglePartitionRecordNumber(const int64_t& _singlePartitionRecordNumber);

                    /**
                     * 判断参数 SinglePartitionRecordNumber 是否已赋值
                     * @return SinglePartitionRecordNumber 是否已赋值
                     * 
                     */
                    bool SinglePartitionRecordNumberHasBeenSet() const;

                private:

                    /**
                     * ckafka集群实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 主题名
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 分区id
                     */
                    int64_t m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * 位点信息
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 最大查询条数，默认20，最大20
                     */
                    int64_t m_singlePartitionRecordNumber;
                    bool m_singlePartitionRecordNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_FETCHMESSAGELISTBYOFFSETREQUEST_H_
