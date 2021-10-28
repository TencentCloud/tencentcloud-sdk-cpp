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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQTOPICREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQTOPICREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * CreateRocketMQTopic请求参数结构体
                */
                class CreateRocketMQTopicRequest : public AbstractModel
                {
                public:
                    CreateRocketMQTopicRequest();
                    ~CreateRocketMQTopicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取主题名称，3-64个字符，只能包含字母、数字、“-”及“_”
                     * @return Topic 主题名称，3-64个字符，只能包含字母、数字、“-”及“_”
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置主题名称，3-64个字符，只能包含字母、数字、“-”及“_”
                     * @param Topic 主题名称，3-64个字符，只能包含字母、数字、“-”及“_”
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取主题所在的命名空间，目前支持在单个命名空间下创建主题
                     * @return Namespaces 主题所在的命名空间，目前支持在单个命名空间下创建主题
                     */
                    std::vector<std::string> GetNamespaces() const;

                    /**
                     * 设置主题所在的命名空间，目前支持在单个命名空间下创建主题
                     * @param Namespaces 主题所在的命名空间，目前支持在单个命名空间下创建主题
                     */
                    void SetNamespaces(const std::vector<std::string>& _namespaces);

                    /**
                     * 判断参数 Namespaces 是否已赋值
                     * @return Namespaces 是否已赋值
                     */
                    bool NamespacesHasBeenSet() const;

                    /**
                     * 获取主题类型，可选值为Normal, GlobalOrder, PartitionedOrder, Transaction
                     * @return Type 主题类型，可选值为Normal, GlobalOrder, PartitionedOrder, Transaction
                     */
                    std::string GetType() const;

                    /**
                     * 设置主题类型，可选值为Normal, GlobalOrder, PartitionedOrder, Transaction
                     * @param Type 主题类型，可选值为Normal, GlobalOrder, PartitionedOrder, Transaction
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param ClusterId 集群ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取主题说明，最大128个字符
                     * @return Remark 主题说明，最大128个字符
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置主题说明，最大128个字符
                     * @param Remark 主题说明，最大128个字符
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 主题名称，3-64个字符，只能包含字母、数字、“-”及“_”
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 主题所在的命名空间，目前支持在单个命名空间下创建主题
                     */
                    std::vector<std::string> m_namespaces;
                    bool m_namespacesHasBeenSet;

                    /**
                     * 主题类型，可选值为Normal, GlobalOrder, PartitionedOrder, Transaction
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 主题说明，最大128个字符
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQTOPICREQUEST_H_
