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
                     * 获取<p>实例ID</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40835">DescribeInstances</a></p>
                     * @return InstanceId <p>实例ID</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40835">DescribeInstances</a></p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40835">DescribeInstances</a></p>
                     * @param _instanceId <p>实例ID</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40835">DescribeInstances</a></p>
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
                     * 获取<p>主题名称</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40847">DescribeTopic</a></p>
                     * @return TopicName <p>主题名称</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40847">DescribeTopic</a></p>
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置<p>主题名称</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40847">DescribeTopic</a></p>
                     * @param _topicName <p>主题名称</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40847">DescribeTopic</a></p>
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
                     * 获取<p>偏移量，不填默认为0</p>
                     * @return Offset <p>偏移量，不填默认为0</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，不填默认为0</p>
                     * @param _offset <p>偏移量，不填默认为0</p>
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
                     * 获取<p>返回数量，默认值为20，必须大于0。</p>
                     * @return Limit <p>返回数量，默认值为20，必须大于0。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认值为20，必须大于0。</p>
                     * @param _limit <p>返回数量，默认值为20，必须大于0。</p>
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
                     * 获取<p>仅筛选未同步副本</p>
                     * @return OutOfSyncReplicaOnly <p>仅筛选未同步副本</p>
                     * 
                     */
                    bool GetOutOfSyncReplicaOnly() const;

                    /**
                     * 设置<p>仅筛选未同步副本</p>
                     * @param _outOfSyncReplicaOnly <p>仅筛选未同步副本</p>
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
                     * <p>实例ID</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40835">DescribeInstances</a></p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>主题名称</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40847">DescribeTopic</a></p>
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * <p>偏移量，不填默认为0</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回数量，默认值为20，必须大于0。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>仅筛选未同步副本</p>
                     */
                    bool m_outOfSyncReplicaOnly;
                    bool m_outOfSyncReplicaOnlyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBETOPICSYNCREPLICAREQUEST_H_
