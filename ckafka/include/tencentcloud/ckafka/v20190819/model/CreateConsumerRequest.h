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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATECONSUMERREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATECONSUMERREQUEST_H_

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
                * CreateConsumer请求参数结构体
                */
                class CreateConsumerRequest : public AbstractModel
                {
                public:
                    CreateConsumerRequest();
                    ~CreateConsumerRequest() = default;
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
                     * 获取消费分组名称
                     * @return GroupName 消费分组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置消费分组名称
                     * @param _groupName 消费分组名称
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
                     * 获取主题名，TopicName、TopicNameList 需要显示指定一个存在的主题名
                     * @return TopicName 主题名，TopicName、TopicNameList 需要显示指定一个存在的主题名
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置主题名，TopicName、TopicNameList 需要显示指定一个存在的主题名
                     * @param _topicName 主题名，TopicName、TopicNameList 需要显示指定一个存在的主题名
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
                     * 获取主题名列表
                     * @return TopicNameList 主题名列表
                     * 
                     */
                    std::vector<std::string> GetTopicNameList() const;

                    /**
                     * 设置主题名列表
                     * @param _topicNameList 主题名列表
                     * 
                     */
                    void SetTopicNameList(const std::vector<std::string>& _topicNameList);

                    /**
                     * 判断参数 TopicNameList 是否已赋值
                     * @return TopicNameList 是否已赋值
                     * 
                     */
                    bool TopicNameListHasBeenSet() const;

                private:

                    /**
                     * ckafka集群实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 消费分组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 主题名，TopicName、TopicNameList 需要显示指定一个存在的主题名
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 主题名列表
                     */
                    std::vector<std::string> m_topicNameList;
                    bool m_topicNameListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATECONSUMERREQUEST_H_
