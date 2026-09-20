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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEEVENTSREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEEVENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * DescribeEvents请求参数结构体
                */
                class DescribeEventsRequest : public AbstractModel
                {
                public:
                    DescribeEventsRequest();
                    ~DescribeEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>会话所属空间 ID。</p>
                     * @return SpaceId <p>会话所属空间 ID。</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>会话所属空间 ID。</p>
                     * @param _spaceId <p>会话所属空间 ID。</p>
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取<p>用户 ID。可通过调用方业务系统接口获取。</p>
                     * @return UserId <p>用户 ID。可通过调用方业务系统接口获取。</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>用户 ID。可通过调用方业务系统接口获取。</p>
                     * @param _userId <p>用户 ID。可通过调用方业务系统接口获取。</p>
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取<p>会话 ID。可通过 CreateSession 或 DescribeSessions 接口获取。</p>
                     * @return SessionId <p>会话 ID。可通过 CreateSession 或 DescribeSessions 接口获取。</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>会话 ID。可通过 CreateSession 或 DescribeSessions 接口获取。</p>
                     * @param _sessionId <p>会话 ID。可通过 CreateSession 或 DescribeSessions 接口获取。</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>Agent ID。可选。</p>
                     * @return AgentId <p>Agent ID。可选。</p>
                     * @deprecated
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置<p>Agent ID。可选。</p>
                     * @param _agentId <p>Agent ID。可选。</p>
                     * @deprecated
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * @deprecated
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取<p>事件作者。取值示例：user、assistant、tool。</p>
                     * @return Author <p>事件作者。取值示例：user、assistant、tool。</p>
                     * 
                     */
                    std::string GetAuthor() const;

                    /**
                     * 设置<p>事件作者。取值示例：user、assistant、tool。</p>
                     * @param _author <p>事件作者。取值示例：user、assistant、tool。</p>
                     * 
                     */
                    void SetAuthor(const std::string& _author);

                    /**
                     * 判断参数 Author 是否已赋值
                     * @return Author 是否已赋值
                     * 
                     */
                    bool AuthorHasBeenSet() const;

                    /**
                     * 获取<p>起始时间，仅返回该时间之后的事件，使用 RFC3339 格式，最大长度 64 字符。</p>
                     * @return AfterTimestamp <p>起始时间，仅返回该时间之后的事件，使用 RFC3339 格式，最大长度 64 字符。</p>
                     * 
                     */
                    std::string GetAfterTimestamp() const;

                    /**
                     * 设置<p>起始时间，仅返回该时间之后的事件，使用 RFC3339 格式，最大长度 64 字符。</p>
                     * @param _afterTimestamp <p>起始时间，仅返回该时间之后的事件，使用 RFC3339 格式，最大长度 64 字符。</p>
                     * 
                     */
                    void SetAfterTimestamp(const std::string& _afterTimestamp);

                    /**
                     * 判断参数 AfterTimestamp 是否已赋值
                     * @return AfterTimestamp 是否已赋值
                     * 
                     */
                    bool AfterTimestampHasBeenSet() const;

                    /**
                     * 获取<p>分页偏移量，默认为 0。</p>
                     * @return Offset <p>分页偏移量，默认为 0。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量，默认为 0。</p>
                     * @param _offset <p>分页偏移量，默认为 0。</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>返回数量，默认为 50，最大值为 200。</p>
                     * @return Limit <p>返回数量，默认为 50，最大值为 200。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认为 50，最大值为 200。</p>
                     * @param _limit <p>返回数量，默认为 50，最大值为 200。</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <p>会话所属空间 ID。</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * <p>用户 ID。可通过调用方业务系统接口获取。</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>会话 ID。可通过 CreateSession 或 DescribeSessions 接口获取。</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>Agent ID。可选。</p>
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * <p>事件作者。取值示例：user、assistant、tool。</p>
                     */
                    std::string m_author;
                    bool m_authorHasBeenSet;

                    /**
                     * <p>起始时间，仅返回该时间之后的事件，使用 RFC3339 格式，最大长度 64 字符。</p>
                     */
                    std::string m_afterTimestamp;
                    bool m_afterTimestampHasBeenSet;

                    /**
                     * <p>分页偏移量，默认为 0。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回数量，默认为 50，最大值为 200。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEEVENTSREQUEST_H_
