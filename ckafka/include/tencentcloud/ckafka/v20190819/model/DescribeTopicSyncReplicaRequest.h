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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBETOPICSYNCREPLICAREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBETOPICSYNCREPLICAREQUEST_H_

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
                * DescribeTopicSyncReplica请求参数结构体
                */
                class DescribeTopicSyncReplicaRequest : public AbstractModel
                {
                public:
                    DescribeTopicSyncReplicaRequest();
                    ~DescribeTopicSyncReplicaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取偏移量，不填默认为0
                     * @return Offset 偏移量，不填默认为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，不填默认为0
                     * @param _offset 偏移量，不填默认为0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量，不填则默认10，最大值20。
                     * @return Limit 返回数量，不填则默认10，最大值20。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，不填则默认10，最大值20。
                     * @param _limit 返回数量，不填则默认10，最大值20。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取仅筛选未同步副本
                     * @return OutOfSyncReplicaOnly 仅筛选未同步副本
                     * 
                     */
                    bool GetOutOfSyncReplicaOnly() const;

                    /**
                     * 设置仅筛选未同步副本
                     * @param _outOfSyncReplicaOnly 仅筛选未同步副本
                     * 
                     */
                    void SetOutOfSyncReplicaOnly(const bool& _outOfSyncReplicaOnly);

                    /**
                     * 判断参数 OutOfSyncReplicaOnly 是否已赋值
                     * @return OutOfSyncReplicaOnly 是否已赋值
                     * 
                     */
                    bool OutOfSyncReplicaOnlyHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 主题名称
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 偏移量，不填默认为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，不填则默认10，最大值20。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 仅筛选未同步副本
                     */
                    bool m_outOfSyncReplicaOnly;
                    bool m_outOfSyncReplicaOnlyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBETOPICSYNCREPLICAREQUEST_H_
