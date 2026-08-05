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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATETHROTTLERULEREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATETHROTTLERULEREQUEST_H_

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
                * CreateThrottleRule请求参数结构体
                */
                class CreateThrottleRuleRequest : public AbstractModel
                {
                public:
                    CreateThrottleRuleRequest();
                    ~CreateThrottleRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例Id</p>
                     * @return InstanceId <p>实例Id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例Id</p>
                     * @param _instanceId <p>实例Id</p>
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
                     * 获取<p>限流类型:</p><p>枚举值：</p><ul><li>1： 用户/客户端限流</li><li>2： 消费组维度限流</li><li>3： Topic限流</li></ul>
                     * @return ThrottleType <p>限流类型:</p><p>枚举值：</p><ul><li>1： 用户/客户端限流</li><li>2： 消费组维度限流</li><li>3： Topic限流</li></ul>
                     * 
                     */
                    int64_t GetThrottleType() const;

                    /**
                     * 设置<p>限流类型:</p><p>枚举值：</p><ul><li>1： 用户/客户端限流</li><li>2： 消费组维度限流</li><li>3： Topic限流</li></ul>
                     * @param _throttleType <p>限流类型:</p><p>枚举值：</p><ul><li>1： 用户/客户端限流</li><li>2： 消费组维度限流</li><li>3： Topic限流</li></ul>
                     * 
                     */
                    void SetThrottleType(const int64_t& _throttleType);

                    /**
                     * 判断参数 ThrottleType 是否已赋值
                     * @return ThrottleType 是否已赋值
                     * 
                     */
                    bool ThrottleTypeHasBeenSet() const;

                    /**
                     * 获取<p>消费组名</p>
                     * @return GroupNameList <p>消费组名</p>
                     * 
                     */
                    std::vector<std::string> GetGroupNameList() const;

                    /**
                     * 设置<p>消费组名</p>
                     * @param _groupNameList <p>消费组名</p>
                     * 
                     */
                    void SetGroupNameList(const std::vector<std::string>& _groupNameList);

                    /**
                     * 判断参数 GroupNameList 是否已赋值
                     * @return GroupNameList 是否已赋值
                     * 
                     */
                    bool GroupNameListHasBeenSet() const;

                    /**
                     * 获取<p>消费限流值,生产消费限流值,必填一个单位MB/s</p>
                     * @return ConsumeThrottle <p>消费限流值,生产消费限流值,必填一个单位MB/s</p>
                     * 
                     */
                    uint64_t GetConsumeThrottle() const;

                    /**
                     * 设置<p>消费限流值,生产消费限流值,必填一个单位MB/s</p>
                     * @param _consumeThrottle <p>消费限流值,生产消费限流值,必填一个单位MB/s</p>
                     * 
                     */
                    void SetConsumeThrottle(const uint64_t& _consumeThrottle);

                    /**
                     * 判断参数 ConsumeThrottle 是否已赋值
                     * @return ConsumeThrottle 是否已赋值
                     * 
                     */
                    bool ConsumeThrottleHasBeenSet() const;

                    /**
                     * 获取<p>生产限流值,生产消费限流值,单位MB/s</p>
                     * @return ProduceThrottle <p>生产限流值,生产消费限流值,单位MB/s</p>
                     * 
                     */
                    uint64_t GetProduceThrottle() const;

                    /**
                     * 设置<p>生产限流值,生产消费限流值,单位MB/s</p>
                     * @param _produceThrottle <p>生产限流值,生产消费限流值,单位MB/s</p>
                     * 
                     */
                    void SetProduceThrottle(const uint64_t& _produceThrottle);

                    /**
                     * 判断参数 ProduceThrottle 是否已赋值
                     * @return ProduceThrottle 是否已赋值
                     * 
                     */
                    bool ProduceThrottleHasBeenSet() const;

                    /**
                     * 获取<p>用户客户端id</p>
                     * @return ClientIdList <p>用户客户端id</p>
                     * 
                     */
                    std::vector<std::string> GetClientIdList() const;

                    /**
                     * 设置<p>用户客户端id</p>
                     * @param _clientIdList <p>用户客户端id</p>
                     * 
                     */
                    void SetClientIdList(const std::vector<std::string>& _clientIdList);

                    /**
                     * 判断参数 ClientIdList 是否已赋值
                     * @return ClientIdList 是否已赋值
                     * 
                     */
                    bool ClientIdListHasBeenSet() const;

                    /**
                     * 获取<p>用户名</p>
                     * @return UserNameList <p>用户名</p>
                     * 
                     */
                    std::vector<std::string> GetUserNameList() const;

                    /**
                     * 设置<p>用户名</p>
                     * @param _userNameList <p>用户名</p>
                     * 
                     */
                    void SetUserNameList(const std::vector<std::string>& _userNameList);

                    /**
                     * 判断参数 UserNameList 是否已赋值
                     * @return UserNameList 是否已赋值
                     * 
                     */
                    bool UserNameListHasBeenSet() const;

                    /**
                     * 获取<p>topic名称</p>
                     * @return TopicNameList <p>topic名称</p>
                     * 
                     */
                    std::vector<std::string> GetTopicNameList() const;

                    /**
                     * 设置<p>topic名称</p>
                     * @param _topicNameList <p>topic名称</p>
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
                     * <p>实例Id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>限流类型:</p><p>枚举值：</p><ul><li>1： 用户/客户端限流</li><li>2： 消费组维度限流</li><li>3： Topic限流</li></ul>
                     */
                    int64_t m_throttleType;
                    bool m_throttleTypeHasBeenSet;

                    /**
                     * <p>消费组名</p>
                     */
                    std::vector<std::string> m_groupNameList;
                    bool m_groupNameListHasBeenSet;

                    /**
                     * <p>消费限流值,生产消费限流值,必填一个单位MB/s</p>
                     */
                    uint64_t m_consumeThrottle;
                    bool m_consumeThrottleHasBeenSet;

                    /**
                     * <p>生产限流值,生产消费限流值,单位MB/s</p>
                     */
                    uint64_t m_produceThrottle;
                    bool m_produceThrottleHasBeenSet;

                    /**
                     * <p>用户客户端id</p>
                     */
                    std::vector<std::string> m_clientIdList;
                    bool m_clientIdListHasBeenSet;

                    /**
                     * <p>用户名</p>
                     */
                    std::vector<std::string> m_userNameList;
                    bool m_userNameListHasBeenSet;

                    /**
                     * <p>topic名称</p>
                     */
                    std::vector<std::string> m_topicNameList;
                    bool m_topicNameListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATETHROTTLERULEREQUEST_H_
