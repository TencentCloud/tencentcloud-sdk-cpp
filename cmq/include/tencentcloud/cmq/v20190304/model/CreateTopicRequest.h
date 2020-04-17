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

#ifndef TENCENTCLOUD_CMQ_V20190304_MODEL_CREATETOPICREQUEST_H_
#define TENCENTCLOUD_CMQ_V20190304_MODEL_CREATETOPICREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cmq
    {
        namespace V20190304
        {
            namespace Model
            {
                /**
                * CreateTopic请求参数结构体
                */
                class CreateTopicRequest : public AbstractModel
                {
                public:
                    CreateTopicRequest();
                    ~CreateTopicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取主题名字，在单个地域同一帐号下唯一。主题名称是一个不超过64个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线（-）。
                     * @return TopicName 主题名字，在单个地域同一帐号下唯一。主题名称是一个不超过64个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线（-）。
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置主题名字，在单个地域同一帐号下唯一。主题名称是一个不超过64个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线（-）。
                     * @param TopicName 主题名字，在单个地域同一帐号下唯一。主题名称是一个不超过64个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线（-）。
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取消息最大长度。取值范围 1024-65536 Byte（即1-64K），默认值 65536。
                     * @return MaxMsgSize 消息最大长度。取值范围 1024-65536 Byte（即1-64K），默认值 65536。
                     */
                    uint64_t GetMaxMsgSize() const;

                    /**
                     * 设置消息最大长度。取值范围 1024-65536 Byte（即1-64K），默认值 65536。
                     * @param MaxMsgSize 消息最大长度。取值范围 1024-65536 Byte（即1-64K），默认值 65536。
                     */
                    void SetMaxMsgSize(const uint64_t& _maxMsgSize);

                    /**
                     * 判断参数 MaxMsgSize 是否已赋值
                     * @return MaxMsgSize 是否已赋值
                     */
                    bool MaxMsgSizeHasBeenSet() const;

                    /**
                     * 获取用于指定主题的消息匹配策略。
                     * @return FilterType 用于指定主题的消息匹配策略。
                     */
                    uint64_t GetFilterType() const;

                    /**
                     * 设置用于指定主题的消息匹配策略。
                     * @param FilterType 用于指定主题的消息匹配策略。
                     */
                    void SetFilterType(const uint64_t& _filterType);

                    /**
                     * 判断参数 FilterType 是否已赋值
                     * @return FilterType 是否已赋值
                     */
                    bool FilterTypeHasBeenSet() const;

                    /**
                     * 获取消息保存时间。取值范围60 - 86400 s（即1分钟 - 1天），默认值86400。
                     * @return MsgRetentionSeconds 消息保存时间。取值范围60 - 86400 s（即1分钟 - 1天），默认值86400。
                     */
                    uint64_t GetMsgRetentionSeconds() const;

                    /**
                     * 设置消息保存时间。取值范围60 - 86400 s（即1分钟 - 1天），默认值86400。
                     * @param MsgRetentionSeconds 消息保存时间。取值范围60 - 86400 s（即1分钟 - 1天），默认值86400。
                     */
                    void SetMsgRetentionSeconds(const uint64_t& _msgRetentionSeconds);

                    /**
                     * 判断参数 MsgRetentionSeconds 是否已赋值
                     * @return MsgRetentionSeconds 是否已赋值
                     */
                    bool MsgRetentionSecondsHasBeenSet() const;

                    /**
                     * 获取是否开启消息轨迹标识，true表示开启，false表示不开启，不填表示不开启。
                     * @return Trace 是否开启消息轨迹标识，true表示开启，false表示不开启，不填表示不开启。
                     */
                    bool GetTrace() const;

                    /**
                     * 设置是否开启消息轨迹标识，true表示开启，false表示不开启，不填表示不开启。
                     * @param Trace 是否开启消息轨迹标识，true表示开启，false表示不开启，不填表示不开启。
                     */
                    void SetTrace(const bool& _trace);

                    /**
                     * 判断参数 Trace 是否已赋值
                     * @return Trace 是否已赋值
                     */
                    bool TraceHasBeenSet() const;

                private:

                    /**
                     * 主题名字，在单个地域同一帐号下唯一。主题名称是一个不超过64个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线（-）。
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 消息最大长度。取值范围 1024-65536 Byte（即1-64K），默认值 65536。
                     */
                    uint64_t m_maxMsgSize;
                    bool m_maxMsgSizeHasBeenSet;

                    /**
                     * 用于指定主题的消息匹配策略。
                     */
                    uint64_t m_filterType;
                    bool m_filterTypeHasBeenSet;

                    /**
                     * 消息保存时间。取值范围60 - 86400 s（即1分钟 - 1天），默认值86400。
                     */
                    uint64_t m_msgRetentionSeconds;
                    bool m_msgRetentionSecondsHasBeenSet;

                    /**
                     * 是否开启消息轨迹标识，true表示开启，false表示不开启，不填表示不开启。
                     */
                    bool m_trace;
                    bool m_traceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMQ_V20190304_MODEL_CREATETOPICREQUEST_H_
