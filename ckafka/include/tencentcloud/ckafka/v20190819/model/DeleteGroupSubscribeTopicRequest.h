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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DELETEGROUPSUBSCRIBETOPICREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DELETEGROUPSUBSCRIBETOPICREQUEST_H_

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
                * DeleteGroupSubscribeTopic请求参数结构体
                */
                class DeleteGroupSubscribeTopicRequest : public AbstractModel
                {
                public:
                    DeleteGroupSubscribeTopicRequest();
                    ~DeleteGroupSubscribeTopicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ckafka集群实例Id</p>
                     * @return InstanceId <p>ckafka集群实例Id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>ckafka集群实例Id</p>
                     * @param _instanceId <p>ckafka集群实例Id</p>
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
                     * 获取<p>消费分组名称</p>
                     * @return Group <p>消费分组名称</p>
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置<p>消费分组名称</p>
                     * @param _group <p>消费分组名称</p>
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
                     * 获取<p>主题名</p>
                     * @return Topic <p>主题名</p>
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置<p>主题名</p>
                     * @param _topic <p>主题名</p>
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                private:

                    /**
                     * <p>ckafka集群实例Id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>消费分组名称</p>
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * <p>主题名</p>
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DELETEGROUPSUBSCRIBETOPICREQUEST_H_
