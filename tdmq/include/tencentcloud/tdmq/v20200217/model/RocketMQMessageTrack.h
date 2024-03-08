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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQMESSAGETRACK_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQMESSAGETRACK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Rocketmq消息消费track信息
                */
                class RocketMQMessageTrack : public AbstractModel
                {
                public:
                    RocketMQMessageTrack();
                    ~RocketMQMessageTrack() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取消费者组
                     * @return Group 消费者组
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置消费者组
                     * @param _group 消费者组
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
                     * 获取消费状态,
CONSUMED: 已消费
CONSUMED_BUT_FILTERED: 已过滤
NOT_CONSUME: 未消费
ENTER_RETRY: 进入重试队列
ENTER_DLQ: 进入死信队列
UNKNOWN: 查询不到消费状态
                     * @return ConsumeStatus 消费状态,
CONSUMED: 已消费
CONSUMED_BUT_FILTERED: 已过滤
NOT_CONSUME: 未消费
ENTER_RETRY: 进入重试队列
ENTER_DLQ: 进入死信队列
UNKNOWN: 查询不到消费状态
                     * 
                     */
                    std::string GetConsumeStatus() const;

                    /**
                     * 设置消费状态,
CONSUMED: 已消费
CONSUMED_BUT_FILTERED: 已过滤
NOT_CONSUME: 未消费
ENTER_RETRY: 进入重试队列
ENTER_DLQ: 进入死信队列
UNKNOWN: 查询不到消费状态
                     * @param _consumeStatus 消费状态,
CONSUMED: 已消费
CONSUMED_BUT_FILTERED: 已过滤
NOT_CONSUME: 未消费
ENTER_RETRY: 进入重试队列
ENTER_DLQ: 进入死信队列
UNKNOWN: 查询不到消费状态
                     * 
                     */
                    void SetConsumeStatus(const std::string& _consumeStatus);

                    /**
                     * 判断参数 ConsumeStatus 是否已赋值
                     * @return ConsumeStatus 是否已赋值
                     * 
                     */
                    bool ConsumeStatusHasBeenSet() const;

                    /**
                     * 获取消息track类型
                     * @return TrackType 消息track类型
                     * 
                     */
                    std::string GetTrackType() const;

                    /**
                     * 设置消息track类型
                     * @param _trackType 消息track类型
                     * 
                     */
                    void SetTrackType(const std::string& _trackType);

                    /**
                     * 判断参数 TrackType 是否已赋值
                     * @return TrackType 是否已赋值
                     * 
                     */
                    bool TrackTypeHasBeenSet() const;

                    /**
                     * 获取异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExceptionDesc 异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExceptionDesc() const;

                    /**
                     * 设置异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _exceptionDesc 异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExceptionDesc(const std::string& _exceptionDesc);

                    /**
                     * 判断参数 ExceptionDesc 是否已赋值
                     * @return ExceptionDesc 是否已赋值
                     * 
                     */
                    bool ExceptionDescHasBeenSet() const;

                private:

                    /**
                     * 消费者组
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * 消费状态,
CONSUMED: 已消费
CONSUMED_BUT_FILTERED: 已过滤
NOT_CONSUME: 未消费
ENTER_RETRY: 进入重试队列
ENTER_DLQ: 进入死信队列
UNKNOWN: 查询不到消费状态
                     */
                    std::string m_consumeStatus;
                    bool m_consumeStatusHasBeenSet;

                    /**
                     * 消息track类型
                     */
                    std::string m_trackType;
                    bool m_trackTypeHasBeenSet;

                    /**
                     * 异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_exceptionDesc;
                    bool m_exceptionDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQMESSAGETRACK_H_
