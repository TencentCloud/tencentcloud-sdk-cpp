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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBESHAREDSUBSCRIPTIONSRESPONSE_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBESHAREDSUBSCRIPTIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * DescribeSharedSubscriptions返回参数结构体
                */
                class DescribeSharedSubscriptionsResponse : public AbstractModel
                {
                public:
                    DescribeSharedSubscriptionsResponse();
                    ~DescribeSharedSubscriptionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群id
                     * @return InstanceId 集群id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取共享组名
                     * @return SharedName 共享组名
                     * 
                     */
                    std::string GetSharedName() const;

                    /**
                     * 判断参数 SharedName 是否已赋值
                     * @return SharedName 是否已赋值
                     * 
                     */
                    bool SharedNameHasBeenSet() const;

                    /**
                     * 获取共享组下的订阅表达式列表
                     * @return TopicFilter 共享组下的订阅表达式列表
                     * 
                     */
                    std::vector<std::string> GetTopicFilter() const;

                    /**
                     * 判断参数 TopicFilter 是否已赋值
                     * @return TopicFilter 是否已赋值
                     * 
                     */
                    bool TopicFilterHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 共享组名
                     */
                    std::string m_sharedName;
                    bool m_sharedNameHasBeenSet;

                    /**
                     * 共享组下的订阅表达式列表
                     */
                    std::vector<std::string> m_topicFilter;
                    bool m_topicFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBESHAREDSUBSCRIPTIONSRESPONSE_H_
