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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DELETETOPICREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DELETETOPICREQUEST_H_

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
                * DeleteTopic请求参数结构体
                */
                class DeleteTopicRequest : public AbstractModel
                {
                public:
                    DeleteTopicRequest();
                    ~DeleteTopicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ckafka 实例Id
                     * @return InstanceId ckafka 实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ckafka 实例Id
                     * @param _instanceId ckafka 实例Id
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
                     * 获取ckafka 主题名称
                     * @return TopicName ckafka 主题名称
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置ckafka 主题名称
                     * @param _topicName ckafka 主题名称
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                private:

                    /**
                     * ckafka 实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * ckafka 主题名称
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DELETETOPICREQUEST_H_
