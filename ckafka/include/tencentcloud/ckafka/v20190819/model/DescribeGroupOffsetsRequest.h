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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEGROUPOFFSETSREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEGROUPOFFSETSREQUEST_H_

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
                * DescribeGroupOffsets请求参数结构体
                */
                class DescribeGroupOffsetsRequest : public AbstractModel
                {
                public:
                    DescribeGroupOffsetsRequest();
                    ~DescribeGroupOffsetsRequest() = default;
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
                     * 获取<p>Kafka 消费分组</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40840">DescribeGroup</a></p>
                     * @return Group <p>Kafka 消费分组</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40840">DescribeGroup</a></p>
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置<p>Kafka 消费分组</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40840">DescribeGroup</a></p>
                     * @param _group <p>Kafka 消费分组</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40840">DescribeGroup</a></p>
                     * 
                     */
                    void SetGroup(const std::string& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取<p>group 订阅的主题名称数组，如果没有该数组，则表示指定的 group 下所有 topic 信息</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40847">DescribeTopic</a></p>
                     * @return Topics <p>group 订阅的主题名称数组，如果没有该数组，则表示指定的 group 下所有 topic 信息</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40847">DescribeTopic</a></p>
                     * 
                     */
                    std::vector<std::string> GetTopics() const;

                    /**
                     * 设置<p>group 订阅的主题名称数组，如果没有该数组，则表示指定的 group 下所有 topic 信息</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40847">DescribeTopic</a></p>
                     * @param _topics <p>group 订阅的主题名称数组，如果没有该数组，则表示指定的 group 下所有 topic 信息</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40847">DescribeTopic</a></p>
                     * 
                     */
                    void SetTopics(const std::vector<std::string>& _topics);

                    /**
                     * 判断参数 Topics 是否已赋值
                     * @return Topics 是否已赋值
                     * 
                     */
                    bool TopicsHasBeenSet() const;

                    /**
                     * 获取<p>模糊匹配 topicName</p>
                     * @return SearchWord <p>模糊匹配 topicName</p>
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置<p>模糊匹配 topicName</p>
                     * @param _searchWord <p>模糊匹配 topicName</p>
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取<p>本次查询的偏移位置，默认为0</p>
                     * @return Offset <p>本次查询的偏移位置，默认为0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>本次查询的偏移位置，默认为0</p>
                     * @param _offset <p>本次查询的偏移位置，默认为0</p>
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
                     * 获取<p>本次返回结果的最大个数，默认为50，最大值为50</p>
                     * @return Limit <p>本次返回结果的最大个数，默认为50，最大值为50</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>本次返回结果的最大个数，默认为50，最大值为50</p>
                     * @param _limit <p>本次返回结果的最大个数，默认为50，最大值为50</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

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
                     * <p>Kafka 消费分组</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40840">DescribeGroup</a></p>
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * <p>group 订阅的主题名称数组，如果没有该数组，则表示指定的 group 下所有 topic 信息</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40847">DescribeTopic</a></p>
                     */
                    std::vector<std::string> m_topics;
                    bool m_topicsHasBeenSet;

                    /**
                     * <p>模糊匹配 topicName</p>
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * <p>本次查询的偏移位置，默认为0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>本次返回结果的最大个数，默认为50，最大值为50</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEGROUPOFFSETSREQUEST_H_
