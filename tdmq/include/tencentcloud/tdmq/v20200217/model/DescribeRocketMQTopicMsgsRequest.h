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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQTOPICMSGSREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQTOPICMSGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeRocketMQTopicMsgs请求参数结构体
                */
                class DescribeRocketMQTopicMsgsRequest : public AbstractModel
                {
                public:
                    DescribeRocketMQTopicMsgsRequest();
                    ~DescribeRocketMQTopicMsgsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群 ID
                     * @return ClusterId 集群 ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群 ID
                     * @param _clusterId 集群 ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取命名空间
                     * @return EnvironmentId 命名空间
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置命名空间
                     * @param _environmentId 命名空间
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取主题名称，查询死信时为groupId
                     * @return TopicName 主题名称，查询死信时为groupId
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置主题名称，查询死信时为groupId
                     * @param _topicName 主题名称，查询死信时为groupId
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
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取消息 ID
                     * @return MsgId 消息 ID
                     * 
                     */
                    std::string GetMsgId() const;

                    /**
                     * 设置消息 ID
                     * @param _msgId 消息 ID
                     * 
                     */
                    void SetMsgId(const std::string& _msgId);

                    /**
                     * 判断参数 MsgId 是否已赋值
                     * @return MsgId 是否已赋值
                     * 
                     */
                    bool MsgIdHasBeenSet() const;

                    /**
                     * 获取消息 key
                     * @return MsgKey 消息 key
                     * 
                     */
                    std::string GetMsgKey() const;

                    /**
                     * 设置消息 key
                     * @param _msgKey 消息 key
                     * 
                     */
                    void SetMsgKey(const std::string& _msgKey);

                    /**
                     * 判断参数 MsgKey 是否已赋值
                     * @return MsgKey 是否已赋值
                     * 
                     */
                    bool MsgKeyHasBeenSet() const;

                    /**
                     * 获取查询偏移
                     * @return Offset 查询偏移
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置查询偏移
                     * @param _offset 查询偏移
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取查询限额
                     * @return Limit 查询限额
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置查询限额
                     * @param _limit 查询限额
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取标志一次分页事务
                     * @return TaskRequestId 标志一次分页事务
                     * 
                     */
                    std::string GetTaskRequestId() const;

                    /**
                     * 设置标志一次分页事务
                     * @param _taskRequestId 标志一次分页事务
                     * 
                     */
                    void SetTaskRequestId(const std::string& _taskRequestId);

                    /**
                     * 判断参数 TaskRequestId 是否已赋值
                     * @return TaskRequestId 是否已赋值
                     * 
                     */
                    bool TaskRequestIdHasBeenSet() const;

                    /**
                     * 获取死信查询时该值为true，只对Rocketmq有效
                     * @return QueryDlqMsg 死信查询时该值为true，只对Rocketmq有效
                     * @deprecated
                     */
                    bool GetQueryDlqMsg() const;

                    /**
                     * 设置死信查询时该值为true，只对Rocketmq有效
                     * @param _queryDlqMsg 死信查询时该值为true，只对Rocketmq有效
                     * @deprecated
                     */
                    void SetQueryDlqMsg(const bool& _queryDlqMsg);

                    /**
                     * 判断参数 QueryDlqMsg 是否已赋值
                     * @return QueryDlqMsg 是否已赋值
                     * @deprecated
                     */
                    bool QueryDlqMsgHasBeenSet() const;

                    /**
                     * 获取查询最近N条消息 最大不超过1024，默认-1为其他查询条件
                     * @return NumOfLatestMsg 查询最近N条消息 最大不超过1024，默认-1为其他查询条件
                     * 
                     */
                    int64_t GetNumOfLatestMsg() const;

                    /**
                     * 设置查询最近N条消息 最大不超过1024，默认-1为其他查询条件
                     * @param _numOfLatestMsg 查询最近N条消息 最大不超过1024，默认-1为其他查询条件
                     * 
                     */
                    void SetNumOfLatestMsg(const int64_t& _numOfLatestMsg);

                    /**
                     * 判断参数 NumOfLatestMsg 是否已赋值
                     * @return NumOfLatestMsg 是否已赋值
                     * 
                     */
                    bool NumOfLatestMsgHasBeenSet() const;

                    /**
                     * 获取TAG表达式
                     * @return Tag TAG表达式
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置TAG表达式
                     * @param _tag TAG表达式
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取死信查询时该值为true，只对Rocketmq有效
                     * @return QueryDeadLetterMessage 死信查询时该值为true，只对Rocketmq有效
                     * 
                     */
                    bool GetQueryDeadLetterMessage() const;

                    /**
                     * 设置死信查询时该值为true，只对Rocketmq有效
                     * @param _queryDeadLetterMessage 死信查询时该值为true，只对Rocketmq有效
                     * 
                     */
                    void SetQueryDeadLetterMessage(const bool& _queryDeadLetterMessage);

                    /**
                     * 判断参数 QueryDeadLetterMessage 是否已赋值
                     * @return QueryDeadLetterMessage 是否已赋值
                     * 
                     */
                    bool QueryDeadLetterMessageHasBeenSet() const;

                private:

                    /**
                     * 集群 ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 主题名称，查询死信时为groupId
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 消息 ID
                     */
                    std::string m_msgId;
                    bool m_msgIdHasBeenSet;

                    /**
                     * 消息 key
                     */
                    std::string m_msgKey;
                    bool m_msgKeyHasBeenSet;

                    /**
                     * 查询偏移
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询限额
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 标志一次分页事务
                     */
                    std::string m_taskRequestId;
                    bool m_taskRequestIdHasBeenSet;

                    /**
                     * 死信查询时该值为true，只对Rocketmq有效
                     */
                    bool m_queryDlqMsg;
                    bool m_queryDlqMsgHasBeenSet;

                    /**
                     * 查询最近N条消息 最大不超过1024，默认-1为其他查询条件
                     */
                    int64_t m_numOfLatestMsg;
                    bool m_numOfLatestMsgHasBeenSet;

                    /**
                     * TAG表达式
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 死信查询时该值为true，只对Rocketmq有效
                     */
                    bool m_queryDeadLetterMessage;
                    bool m_queryDeadLetterMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQTOPICMSGSREQUEST_H_
