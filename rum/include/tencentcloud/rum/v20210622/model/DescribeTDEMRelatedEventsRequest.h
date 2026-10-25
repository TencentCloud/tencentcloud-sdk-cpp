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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMRELATEDEVENTSREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMRELATEDEVENTSREQUEST_H_

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
                * DescribeTDEMRelatedEvents请求参数结构体
                */
                class DescribeTDEMRelatedEventsRequest : public AbstractModel
                {
                public:
                    DescribeTDEMRelatedEventsRequest();
                    ~DescribeTDEMRelatedEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用 ID（必填）</p>
                     * @return AppId <p>应用 ID（必填）</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用 ID（必填）</p>
                     * @param _appId <p>应用 ID（必填）</p>
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
                     * 获取<p>开始时间 Unix 毫秒（必填，用于分区裁剪）</p>
                     * @return StartTime <p>开始时间 Unix 毫秒（必填，用于分区裁剪）</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>开始时间 Unix 毫秒（必填，用于分区裁剪）</p>
                     * @param _startTime <p>开始时间 Unix 毫秒（必填，用于分区裁剪）</p>
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
                     * 获取<p>结束时间 Unix 毫秒（必填）</p>
                     * @return EndTime <p>结束时间 Unix 毫秒（必填）</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>结束时间 Unix 毫秒（必填）</p>
                     * @param _endTime <p>结束时间 Unix 毫秒（必填）</p>
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
                     * 获取<p>模式：timeline / page / breadcrumb（必填）</p>
                     * @return Mode <p>模式：timeline / page / breadcrumb（必填）</p>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>模式：timeline / page / breadcrumb（必填）</p>
                     * @param _mode <p>模式：timeline / page / breadcrumb（必填）</p>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取<p>会话 ID（必填）</p>
                     * @return SessionId <p>会话 ID（必填）</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>会话 ID（必填）</p>
                     * @param _sessionId <p>会话 ID（必填）</p>
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
                     * 获取<p>页面 URL（Mode=page 必填）</p>
                     * @return PageUrl <p>页面 URL（Mode=page 必填）</p>
                     * 
                     */
                    std::string GetPageUrl() const;

                    /**
                     * 设置<p>页面 URL（Mode=page 必填）</p>
                     * @param _pageUrl <p>页面 URL（Mode=page 必填）</p>
                     * 
                     */
                    void SetPageUrl(const std::string& _pageUrl);

                    /**
                     * 判断参数 PageUrl 是否已赋值
                     * @return PageUrl 是否已赋值
                     * 
                     */
                    bool PageUrlHasBeenSet() const;

                    /**
                     * 获取<p>锚点 Unix 毫秒（Mode=page/breadcrumb 使用）</p>
                     * @return AnchorTimestamp <p>锚点 Unix 毫秒（Mode=page/breadcrumb 使用）</p>
                     * 
                     */
                    int64_t GetAnchorTimestamp() const;

                    /**
                     * 设置<p>锚点 Unix 毫秒（Mode=page/breadcrumb 使用）</p>
                     * @param _anchorTimestamp <p>锚点 Unix 毫秒（Mode=page/breadcrumb 使用）</p>
                     * 
                     */
                    void SetAnchorTimestamp(const int64_t& _anchorTimestamp);

                    /**
                     * 判断参数 AnchorTimestamp 是否已赋值
                     * @return AnchorTimestamp 是否已赋值
                     * 
                     */
                    bool AnchorTimestampHasBeenSet() const;

                    /**
                     * 获取<p>偏移，&gt;=0，默认 0</p>
                     * @return Offset <p>偏移，&gt;=0，默认 0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移，&gt;=0，默认 0</p>
                     * @param _offset <p>偏移，&gt;=0，默认 0</p>
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
                     * 获取<p>条数，1-200，默认 200</p>
                     * @return Limit <p>条数，1-200，默认 200</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>条数，1-200，默认 200</p>
                     * @param _limit <p>条数，1-200，默认 200</p>
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
                     * 获取<p>事件分类（可选）</p>
                     * @return Category <p>事件分类（可选）</p>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置<p>事件分类（可选）</p>
                     * @param _category <p>事件分类（可选）</p>
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取<p>关键字（可选）</p>
                     * @return Keyword <p>关键字（可选）</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>关键字（可选）</p>
                     * @param _keyword <p>关键字（可选）</p>
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取<p>视图 ID</p>
                     * @return ViewId <p>视图 ID</p>
                     * 
                     */
                    std::string GetViewId() const;

                    /**
                     * 设置<p>视图 ID</p>
                     * @param _viewId <p>视图 ID</p>
                     * 
                     */
                    void SetViewId(const std::string& _viewId);

                    /**
                     * 判断参数 ViewId 是否已赋值
                     * @return ViewId 是否已赋值
                     * 
                     */
                    bool ViewIdHasBeenSet() const;

                private:

                    /**
                     * <p>应用 ID（必填）</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>开始时间 Unix 毫秒（必填，用于分区裁剪）</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间 Unix 毫秒（必填）</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>模式：timeline / page / breadcrumb（必填）</p>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>会话 ID（必填）</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>页面 URL（Mode=page 必填）</p>
                     */
                    std::string m_pageUrl;
                    bool m_pageUrlHasBeenSet;

                    /**
                     * <p>锚点 Unix 毫秒（Mode=page/breadcrumb 使用）</p>
                     */
                    int64_t m_anchorTimestamp;
                    bool m_anchorTimestampHasBeenSet;

                    /**
                     * <p>偏移，&gt;=0，默认 0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>条数，1-200，默认 200</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>事件分类（可选）</p>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>关键字（可选）</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>视图 ID</p>
                     */
                    std::string m_viewId;
                    bool m_viewIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMRELATEDEVENTSREQUEST_H_
