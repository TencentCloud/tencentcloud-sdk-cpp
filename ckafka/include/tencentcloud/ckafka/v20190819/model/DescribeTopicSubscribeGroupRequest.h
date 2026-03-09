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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBETOPICSUBSCRIBEGROUPREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBETOPICSUBSCRIBEGROUPREQUEST_H_

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
                * DescribeTopicSubscribeGroup请求参数结构体
                */
                class DescribeTopicSubscribeGroupRequest : public AbstractModel
                {
                public:
                    DescribeTopicSubscribeGroupRequest();
                    ~DescribeTopicSubscribeGroupRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>主题名</p>
                     * @return TopicName <p>主题名</p>
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置<p>主题名</p>
                     * @param _topicName <p>主题名</p>
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
                     * 获取<p>分页时的起始位置</p>
                     * @return Offset <p>分页时的起始位置</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>分页时的起始位置</p>
                     * @param _offset <p>分页时的起始位置</p>
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
                     * 获取<p>分页时的个数</p><p>默认值：20</p>
                     * @return Limit <p>分页时的个数</p><p>默认值：20</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>分页时的个数</p><p>默认值：20</p>
                     * @param _limit <p>分页时的个数</p><p>默认值：20</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <p>ckafka集群实例Id</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40835">DescribeInstances</a></p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>主题名</p>
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * <p>分页时的起始位置</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>分页时的个数</p><p>默认值：20</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBETOPICSUBSCRIBEGROUPREQUEST_H_
