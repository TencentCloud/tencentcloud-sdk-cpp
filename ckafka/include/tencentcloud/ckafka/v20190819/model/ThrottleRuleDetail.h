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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_THROTTLERULEDETAIL_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_THROTTLERULEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 限流规则详情
                */
                class ThrottleRuleDetail : public AbstractModel
                {
                public:
                    ThrottleRuleDetail();
                    ~ThrottleRuleDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>限流规则标识</p>
                     * @return ThrottleRuleId <p>限流规则标识</p>
                     * 
                     */
                    uint64_t GetThrottleRuleId() const;

                    /**
                     * 设置<p>限流规则标识</p>
                     * @param _throttleRuleId <p>限流规则标识</p>
                     * 
                     */
                    void SetThrottleRuleId(const uint64_t& _throttleRuleId);

                    /**
                     * 判断参数 ThrottleRuleId 是否已赋值
                     * @return ThrottleRuleId 是否已赋值
                     * 
                     */
                    bool ThrottleRuleIdHasBeenSet() const;

                    /**
                     * 获取<p>限流类型</p><p>枚举值：</p><ul><li>1： 用户/客户端限流</li><li>2： 消费组限流</li><li>3： topic限流</li></ul>
                     * @return ThrottleType <p>限流类型</p><p>枚举值：</p><ul><li>1： 用户/客户端限流</li><li>2： 消费组限流</li><li>3： topic限流</li></ul>
                     * 
                     */
                    int64_t GetThrottleType() const;

                    /**
                     * 设置<p>限流类型</p><p>枚举值：</p><ul><li>1： 用户/客户端限流</li><li>2： 消费组限流</li><li>3： topic限流</li></ul>
                     * @param _throttleType <p>限流类型</p><p>枚举值：</p><ul><li>1： 用户/客户端限流</li><li>2： 消费组限流</li><li>3： topic限流</li></ul>
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
                     * 获取<p>客户端id</p>
                     * @return ClientId <p>客户端id</p>
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置<p>客户端id</p>
                     * @param _clientId <p>客户端id</p>
                     * 
                     */
                    void SetClientId(const std::string& _clientId);

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取<p>用户名</p>
                     * @return UserName <p>用户名</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>用户名</p>
                     * @param _userName <p>用户名</p>
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取<p>消费限流值,单位MB/s</p>
                     * @return ConsumeThrottle <p>消费限流值,单位MB/s</p>
                     * 
                     */
                    uint64_t GetConsumeThrottle() const;

                    /**
                     * 设置<p>消费限流值,单位MB/s</p>
                     * @param _consumeThrottle <p>消费限流值,单位MB/s</p>
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
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateTime <p>更新时间</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>topic名称</p>
                     * @return TopicName <p>topic名称</p>
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置<p>topic名称</p>
                     * @param _topicName <p>topic名称</p>
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
                     * 获取<p>topicId</p>
                     * @return TopicId <p>topicId</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>topicId</p>
                     * @param _topicId <p>topicId</p>
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                private:

                    /**
                     * <p>限流规则标识</p>
                     */
                    uint64_t m_throttleRuleId;
                    bool m_throttleRuleIdHasBeenSet;

                    /**
                     * <p>限流类型</p><p>枚举值：</p><ul><li>1： 用户/客户端限流</li><li>2： 消费组限流</li><li>3： topic限流</li></ul>
                     */
                    int64_t m_throttleType;
                    bool m_throttleTypeHasBeenSet;

                    /**
                     * <p>客户端id</p>
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * <p>用户名</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>消费限流值,单位MB/s</p>
                     */
                    uint64_t m_consumeThrottle;
                    bool m_consumeThrottleHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>topic名称</p>
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * <p>topicId</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_THROTTLERULEDETAIL_H_
