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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMSESSIONREPLAYTIMELINEREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMSESSIONREPLAYTIMELINEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeTDEMSessionReplayTimeline请求参数结构体
                */
                class DescribeTDEMSessionReplayTimelineRequest : public AbstractModel
                {
                public:
                    DescribeTDEMSessionReplayTimelineRequest();
                    ~DescribeTDEMSessionReplayTimelineRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用id</p>
                     * @return AppId <p>应用id</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用id</p>
                     * @param _appId <p>应用id</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>会话id</p>
                     * @return SessionId <p>会话id</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>会话id</p>
                     * @param _sessionId <p>会话id</p>
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
                     * 获取<p>开始时间</p>
                     * @return StartTime <p>开始时间</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>开始时间</p>
                     * @param _startTime <p>开始时间</p>
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束时间</p>
                     * @return EndTime <p>结束时间</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>结束时间</p>
                     * @param _endTime <p>结束时间</p>
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>数量限制</p>
                     * @return Limit <p>数量限制</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>数量限制</p>
                     * @param _limit <p>数量限制</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>游标</p>
                     * @return Cursor <p>游标</p>
                     * 
                     */
                    int64_t GetCursor() const;

                    /**
                     * 设置<p>游标</p>
                     * @param _cursor <p>游标</p>
                     * 
                     */
                    void SetCursor(const int64_t& _cursor);

                    /**
                     * 判断参数 Cursor 是否已赋值
                     * @return Cursor 是否已赋值
                     * 
                     */
                    bool CursorHasBeenSet() const;

                    /**
                     * 获取<p>时间线分页的事件ID游标，与时间游标Cursor共同定位续页起点，用于同一时间戳下的稳定分页。</p>
                     * @return CursorEventId <p>时间线分页的事件ID游标，与时间游标Cursor共同定位续页起点，用于同一时间戳下的稳定分页。</p>
                     * 
                     */
                    std::string GetCursorEventId() const;

                    /**
                     * 设置<p>时间线分页的事件ID游标，与时间游标Cursor共同定位续页起点，用于同一时间戳下的稳定分页。</p>
                     * @param _cursorEventId <p>时间线分页的事件ID游标，与时间游标Cursor共同定位续页起点，用于同一时间戳下的稳定分页。</p>
                     * 
                     */
                    void SetCursorEventId(const std::string& _cursorEventId);

                    /**
                     * 判断参数 CursorEventId 是否已赋值
                     * @return CursorEventId 是否已赋值
                     * 
                     */
                    bool CursorEventIdHasBeenSet() const;

                private:

                    /**
                     * <p>应用id</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>会话id</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>开始时间</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>数量限制</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>游标</p>
                     */
                    int64_t m_cursor;
                    bool m_cursorHasBeenSet;

                    /**
                     * <p>时间线分页的事件ID游标，与时间游标Cursor共同定位续页起点，用于同一时间戳下的稳定分页。</p>
                     */
                    std::string m_cursorEventId;
                    bool m_cursorEventIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMSESSIONREPLAYTIMELINEREQUEST_H_
