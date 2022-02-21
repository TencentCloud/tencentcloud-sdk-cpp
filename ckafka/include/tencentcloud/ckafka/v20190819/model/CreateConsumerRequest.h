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
                     * 获取实例id
                     * @return InstanceId 实例id
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param InstanceId 实例id
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取group名称
                     * @return GroupName group名称
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置group名称
                     * @param GroupName group名称
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取topic名称
                     * @return TopicName topic名称
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置topic名称
                     * @param TopicName topic名称
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取topic名称数组
                     * @return TopicNameList topic名称数组
                     */
                    std::vector<std::string> GetTopicNameList() const;

                    /**
                     * 设置topic名称数组
                     * @param TopicNameList topic名称数组
                     */
                    void SetTopicNameList(const std::vector<std::string>& _topicNameList);

                    /**
                     * 判断参数 TopicNameList 是否已赋值
                     * @return TopicNameList 是否已赋值
                     */
                    bool TopicNameListHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * group名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * topic名称
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * topic名称数组
                     */
                    std::vector<std::string> m_topicNameList;
                    bool m_topicNameListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATECONSUMERREQUEST_H_
