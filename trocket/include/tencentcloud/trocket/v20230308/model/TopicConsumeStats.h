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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_TOPICCONSUMESTATS_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_TOPICCONSUMESTATS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * 主题消费进度
                */
                class TopicConsumeStats : public AbstractModel
                {
                public:
                    TopicConsumeStats();
                    ~TopicConsumeStats() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主题名称
                     * @return Topic 主题名称
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置主题名称
                     * @param _topic 主题名称
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取主题类型
                     * @return TopicType 主题类型
                     * 
                     */
                    std::string GetTopicType() const;

                    /**
                     * 设置主题类型
                     * @param _topicType 主题类型
                     * 
                     */
                    void SetTopicType(const std::string& _topicType);

                    /**
                     * 判断参数 TopicType 是否已赋值
                     * @return TopicType 是否已赋值
                     * 
                     */
                    bool TopicTypeHasBeenSet() const;

                    /**
                     * 获取单节点主题队列数量
                     * @return QueueNum 单节点主题队列数量
                     * 
                     */
                    int64_t GetQueueNum() const;

                    /**
                     * 设置单节点主题队列数量
                     * @param _queueNum 单节点主题队列数量
                     * 
                     */
                    void SetQueueNum(const int64_t& _queueNum);

                    /**
                     * 判断参数 QueueNum 是否已赋值
                     * @return QueueNum 是否已赋值
                     * 
                     */
                    bool QueueNumHasBeenSet() const;

                    /**
                     * 获取消费堆积
                     * @return ConsumerLag 消费堆积
                     * 
                     */
                    int64_t GetConsumerLag() const;

                    /**
                     * 设置消费堆积
                     * @param _consumerLag 消费堆积
                     * 
                     */
                    void SetConsumerLag(const int64_t& _consumerLag);

                    /**
                     * 判断参数 ConsumerLag 是否已赋值
                     * @return ConsumerLag 是否已赋值
                     * 
                     */
                    bool ConsumerLagHasBeenSet() const;

                    /**
                     * 获取订阅规则
                     * @return SubString 订阅规则
                     * 
                     */
                    std::string GetSubString() const;

                    /**
                     * 设置订阅规则
                     * @param _subString 订阅规则
                     * 
                     */
                    void SetSubString(const std::string& _subString);

                    /**
                     * 判断参数 SubString 是否已赋值
                     * @return SubString 是否已赋值
                     * 
                     */
                    bool SubStringHasBeenSet() const;

                    /**
                     * 获取最后消费进度更新时间
                     * @return LastUpdateTime 最后消费进度更新时间
                     * 
                     */
                    int64_t GetLastUpdateTime() const;

                    /**
                     * 设置最后消费进度更新时间
                     * @param _lastUpdateTime 最后消费进度更新时间
                     * 
                     */
                    void SetLastUpdateTime(const int64_t& _lastUpdateTime);

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 主题名称
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 主题类型
                     */
                    std::string m_topicType;
                    bool m_topicTypeHasBeenSet;

                    /**
                     * 单节点主题队列数量
                     */
                    int64_t m_queueNum;
                    bool m_queueNumHasBeenSet;

                    /**
                     * 消费堆积
                     */
                    int64_t m_consumerLag;
                    bool m_consumerLagHasBeenSet;

                    /**
                     * 订阅规则
                     */
                    std::string m_subString;
                    bool m_subStringHasBeenSet;

                    /**
                     * 最后消费进度更新时间
                     */
                    int64_t m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_TOPICCONSUMESTATS_H_
