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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEREPLAYDETAILSREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEREPLAYDETAILSREQUEST_H_

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
                * DescribeReplayDetails请求参数结构体
                */
                class DescribeReplayDetailsRequest : public AbstractModel
                {
                public:
                    DescribeReplayDetailsRequest();
                    ~DescribeReplayDetailsRequest() = default;
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
                     * 获取<p>回放id</p>
                     * @return ReplayId <p>回放id</p>
                     * 
                     */
                    std::string GetReplayId() const;

                    /**
                     * 设置<p>回放id</p>
                     * @param _replayId <p>回放id</p>
                     * 
                     */
                    void SetReplayId(const std::string& _replayId);

                    /**
                     * 判断参数 ReplayId 是否已赋值
                     * @return ReplayId 是否已赋值
                     * 
                     */
                    bool ReplayIdHasBeenSet() const;

                    /**
                     * 获取<p>事件类别， 默认为all</p>
                     * @return Categories <p>事件类别， 默认为all</p>
                     * 
                     */
                    std::string GetCategories() const;

                    /**
                     * 设置<p>事件类别， 默认为all</p>
                     * @param _categories <p>事件类别， 默认为all</p>
                     * 
                     */
                    void SetCategories(const std::string& _categories);

                    /**
                     * 判断参数 Categories 是否已赋值
                     * @return Categories 是否已赋值
                     * 
                     */
                    bool CategoriesHasBeenSet() const;

                    /**
                     * 获取<p>每页返回数量</p>
                     * @return Limit <p>每页返回数量</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>每页返回数量</p>
                     * @param _limit <p>每页返回数量</p>
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
                     * 获取<p>游标分页，传上一次返回的 NextCursor 值。首次请求不传</p>
                     * @return Cursor <p>游标分页，传上一次返回的 NextCursor 值。首次请求不传</p>
                     * 
                     */
                    int64_t GetCursor() const;

                    /**
                     * 设置<p>游标分页，传上一次返回的 NextCursor 值。首次请求不传</p>
                     * @param _cursor <p>游标分页，传上一次返回的 NextCursor 值。首次请求不传</p>
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
                     * 获取<p>起始偏移（毫秒），相对于录屏开始时间。用于只查某个时间段的事件</p>
                     * @return StartOffsetMs <p>起始偏移（毫秒），相对于录屏开始时间。用于只查某个时间段的事件</p>
                     * 
                     */
                    int64_t GetStartOffsetMs() const;

                    /**
                     * 设置<p>起始偏移（毫秒），相对于录屏开始时间。用于只查某个时间段的事件</p>
                     * @param _startOffsetMs <p>起始偏移（毫秒），相对于录屏开始时间。用于只查某个时间段的事件</p>
                     * 
                     */
                    void SetStartOffsetMs(const int64_t& _startOffsetMs);

                    /**
                     * 判断参数 StartOffsetMs 是否已赋值
                     * @return StartOffsetMs 是否已赋值
                     * 
                     */
                    bool StartOffsetMsHasBeenSet() const;

                    /**
                     * 获取<p>结束偏移（毫秒），必须 ≥ StartOffsetMs</p>
                     * @return EndOffsetMs <p>结束偏移（毫秒），必须 ≥ StartOffsetMs</p>
                     * 
                     */
                    int64_t GetEndOffsetMs() const;

                    /**
                     * 设置<p>结束偏移（毫秒），必须 ≥ StartOffsetMs</p>
                     * @param _endOffsetMs <p>结束偏移（毫秒），必须 ≥ StartOffsetMs</p>
                     * 
                     */
                    void SetEndOffsetMs(const int64_t& _endOffsetMs);

                    /**
                     * 判断参数 EndOffsetMs 是否已赋值
                     * @return EndOffsetMs 是否已赋值
                     * 
                     */
                    bool EndOffsetMsHasBeenSet() const;

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
                     * <p>回放id</p>
                     */
                    std::string m_replayId;
                    bool m_replayIdHasBeenSet;

                    /**
                     * <p>事件类别， 默认为all</p>
                     */
                    std::string m_categories;
                    bool m_categoriesHasBeenSet;

                    /**
                     * <p>每页返回数量</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>游标分页，传上一次返回的 NextCursor 值。首次请求不传</p>
                     */
                    int64_t m_cursor;
                    bool m_cursorHasBeenSet;

                    /**
                     * <p>起始偏移（毫秒），相对于录屏开始时间。用于只查某个时间段的事件</p>
                     */
                    int64_t m_startOffsetMs;
                    bool m_startOffsetMsHasBeenSet;

                    /**
                     * <p>结束偏移（毫秒），必须 ≥ StartOffsetMs</p>
                     */
                    int64_t m_endOffsetMs;
                    bool m_endOffsetMsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEREPLAYDETAILSREQUEST_H_
