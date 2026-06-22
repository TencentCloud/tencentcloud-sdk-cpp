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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBETOPICRESPONSE_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBETOPICRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/SubscriptionData.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * DescribeTopic返回参数结构体
                */
                class DescribeTopicResponse : public AbstractModel
                {
                public:
                    DescribeTopicResponse();
                    ~DescribeTopicResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
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
                     * 获取<p>主题名称</p>
                     * @return Topic <p>主题名称</p>
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取<p>主题类型<br>UNSPECIFIED:未指定,<br>NORMAL:普通消息,<br>FIFO:顺序消息,<br>DELAY:延时消息,<br>TRANSACTION:事务消息</p>
                     * @return TopicType <p>主题类型<br>UNSPECIFIED:未指定,<br>NORMAL:普通消息,<br>FIFO:顺序消息,<br>DELAY:延时消息,<br>TRANSACTION:事务消息</p>
                     * 
                     */
                    std::string GetTopicType() const;

                    /**
                     * 判断参数 TopicType 是否已赋值
                     * @return TopicType 是否已赋值
                     * 
                     */
                    bool TopicTypeHasBeenSet() const;

                    /**
                     * 获取<p>备注</p>
                     * @return Remark <p>备注</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>创建时间，<strong>Unix时间戳（毫秒）</strong></p>
                     * @return CreatedTime <p>创建时间，<strong>Unix时间戳（毫秒）</strong></p>
                     * 
                     */
                    int64_t GetCreatedTime() const;

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>最后写入时间，<strong>Unix时间戳（毫秒）</strong></p>
                     * @return LastUpdateTime <p>最后写入时间，<strong>Unix时间戳（毫秒）</strong></p>
                     * 
                     */
                    int64_t GetLastUpdateTime() const;

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>订阅数量</p>
                     * @return SubscriptionCount <p>订阅数量</p>
                     * 
                     */
                    int64_t GetSubscriptionCount() const;

                    /**
                     * 判断参数 SubscriptionCount 是否已赋值
                     * @return SubscriptionCount 是否已赋值
                     * 
                     */
                    bool SubscriptionCountHasBeenSet() const;

                    /**
                     * 获取<p>订阅关系列表</p>
                     * @return SubscriptionData <p>订阅关系列表</p>
                     * 
                     */
                    std::vector<SubscriptionData> GetSubscriptionData() const;

                    /**
                     * 判断参数 SubscriptionData 是否已赋值
                     * @return SubscriptionData 是否已赋值
                     * 
                     */
                    bool SubscriptionDataHasBeenSet() const;

                    /**
                     * 获取<p>消息保留时长，单位：小时</p>
                     * @return MsgTTL <p>消息保留时长，单位：小时</p>
                     * 
                     */
                    int64_t GetMsgTTL() const;

                    /**
                     * 判断参数 MsgTTL 是否已赋值
                     * @return MsgTTL 是否已赋值
                     * 
                     */
                    bool MsgTTLHasBeenSet() const;

                    /**
                     * 获取<p>是否自动删除</p><p>仅适用于轻量主题</p>
                     * @return AutoExpireDelete <p>是否自动删除</p><p>仅适用于轻量主题</p>
                     * 
                     */
                    bool GetAutoExpireDelete() const;

                    /**
                     * 判断参数 AutoExpireDelete 是否已赋值
                     * @return AutoExpireDelete 是否已赋值
                     * 
                     */
                    bool AutoExpireDeleteHasBeenSet() const;

                    /**
                     * 获取<p>自动过期时间</p><p>单位：分钟</p><p>仅适用于轻量主题</p>
                     * @return AutoExpireTime <p>自动过期时间</p><p>单位：分钟</p><p>仅适用于轻量主题</p>
                     * 
                     */
                    int64_t GetAutoExpireTime() const;

                    /**
                     * 判断参数 AutoExpireTime 是否已赋值
                     * @return AutoExpireTime 是否已赋值
                     * 
                     */
                    bool AutoExpireTimeHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>主题名称</p>
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * <p>主题类型<br>UNSPECIFIED:未指定,<br>NORMAL:普通消息,<br>FIFO:顺序消息,<br>DELAY:延时消息,<br>TRANSACTION:事务消息</p>
                     */
                    std::string m_topicType;
                    bool m_topicTypeHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>创建时间，<strong>Unix时间戳（毫秒）</strong></p>
                     */
                    int64_t m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>最后写入时间，<strong>Unix时间戳（毫秒）</strong></p>
                     */
                    int64_t m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                    /**
                     * <p>订阅数量</p>
                     */
                    int64_t m_subscriptionCount;
                    bool m_subscriptionCountHasBeenSet;

                    /**
                     * <p>订阅关系列表</p>
                     */
                    std::vector<SubscriptionData> m_subscriptionData;
                    bool m_subscriptionDataHasBeenSet;

                    /**
                     * <p>消息保留时长，单位：小时</p>
                     */
                    int64_t m_msgTTL;
                    bool m_msgTTLHasBeenSet;

                    /**
                     * <p>是否自动删除</p><p>仅适用于轻量主题</p>
                     */
                    bool m_autoExpireDelete;
                    bool m_autoExpireDeleteHasBeenSet;

                    /**
                     * <p>自动过期时间</p><p>单位：分钟</p><p>仅适用于轻量主题</p>
                     */
                    int64_t m_autoExpireTime;
                    bool m_autoExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBETOPICRESPONSE_H_
