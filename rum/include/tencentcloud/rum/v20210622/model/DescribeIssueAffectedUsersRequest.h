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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEISSUEAFFECTEDUSERSREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEISSUEAFFECTEDUSERSREQUEST_H_

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
                * DescribeIssueAffectedUsers请求参数结构体
                */
                class DescribeIssueAffectedUsersRequest : public AbstractModel
                {
                public:
                    DescribeIssueAffectedUsersRequest();
                    ~DescribeIssueAffectedUsersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用 ID（string，必填）。空 → InvalidParameter</p>
                     * @return AppId <p>应用 ID（string，必填）。空 → InvalidParameter</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用 ID（string，必填）。空 → InvalidParameter</p>
                     * @param _appId <p>应用 ID（string，必填）。空 → InvalidParameter</p>
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
                     * 获取<p>问题 ID（string，必填）。空 → InvalidParameter</p>
                     * @return IssueId <p>问题 ID（string，必填）。空 → InvalidParameter</p>
                     * 
                     */
                    std::string GetIssueId() const;

                    /**
                     * 设置<p>问题 ID（string，必填）。空 → InvalidParameter</p>
                     * @param _issueId <p>问题 ID（string，必填）。空 → InvalidParameter</p>
                     * 
                     */
                    void SetIssueId(const std::string& _issueId);

                    /**
                     * 判断参数 IssueId 是否已赋值
                     * @return IssueId 是否已赋值
                     * 
                     */
                    bool IssueIdHasBeenSet() const;

                    /**
                     * 获取<p>页码（整数，选填）。&lt; 1 钳制为 1；缺省 1</p>
                     * @return Page <p>页码（整数，选填）。&lt; 1 钳制为 1；缺省 1</p>
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置<p>页码（整数，选填）。&lt; 1 钳制为 1；缺省 1</p>
                     * @param _page <p>页码（整数，选填）。&lt; 1 钳制为 1；缺省 1</p>
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取<p>每页条数（整数，选填）。&lt; 1 或 &gt; 1000 回落默认 20；导出场景按 1000 一批拉全量</p>
                     * @return PageSize <p>每页条数（整数，选填）。&lt; 1 或 &gt; 1000 回落默认 20；导出场景按 1000 一批拉全量</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>每页条数（整数，选填）。&lt; 1 或 &gt; 1000 回落默认 20；导出场景按 1000 一批拉全量</p>
                     * @param _pageSize <p>每页条数（整数，选填）。&lt; 1 或 &gt; 1000 回落默认 20；导出场景按 1000 一批拉全量</p>
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>应用版本（string，选填）。按 app_version 精确匹配；空表示不限版本</p>
                     * @return AppVersion <p>应用版本（string，选填）。按 app_version 精确匹配；空表示不限版本</p>
                     * 
                     */
                    std::string GetAppVersion() const;

                    /**
                     * 设置<p>应用版本（string，选填）。按 app_version 精确匹配；空表示不限版本</p>
                     * @param _appVersion <p>应用版本（string，选填）。按 app_version 精确匹配；空表示不限版本</p>
                     * 
                     */
                    void SetAppVersion(const std::string& _appVersion);

                    /**
                     * 判断参数 AppVersion 是否已赋值
                     * @return AppVersion 是否已赋值
                     * 
                     */
                    bool AppVersionHasBeenSet() const;

                    /**
                     * 获取<p>起始毫秒时间戳（整数，选填）。&lt;= 0 表示该侧不限</p>
                     * @return StartTime <p>起始毫秒时间戳（整数，选填）。&lt;= 0 表示该侧不限</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>起始毫秒时间戳（整数，选填）。&lt;= 0 表示该侧不限</p>
                     * @param _startTime <p>起始毫秒时间戳（整数，选填）。&lt;= 0 表示该侧不限</p>
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
                     * 获取<p>结束毫秒时间戳（整数，选填）。&lt;= 0 表示该侧不限；与 StartTime 同时给出且 StartTime &gt; EndTime → InvalidParameter</p>
                     * @return EndTime <p>结束毫秒时间戳（整数，选填）。&lt;= 0 表示该侧不限；与 StartTime 同时给出且 StartTime &gt; EndTime → InvalidParameter</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>结束毫秒时间戳（整数，选填）。&lt;= 0 表示该侧不限；与 StartTime 同时给出且 StartTime &gt; EndTime → InvalidParameter</p>
                     * @param _endTime <p>结束毫秒时间戳（整数，选填）。&lt;= 0 表示该侧不限；与 StartTime 同时给出且 StartTime &gt; EndTime → InvalidParameter</p>
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
                     * 获取<p>身份值关键字（string，选填）。不区分大小写的子串匹配，命中 if(user_id='', session_id, user_id)；空表示不限</p>
                     * @return Keyword <p>身份值关键字（string，选填）。不区分大小写的子串匹配，命中 if(user_id='', session_id, user_id)；空表示不限</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>身份值关键字（string，选填）。不区分大小写的子串匹配，命中 if(user_id='', session_id, user_id)；空表示不限</p>
                     * @param _keyword <p>身份值关键字（string，选填）。不区分大小写的子串匹配，命中 if(user_id='', session_id, user_id)；空表示不限</p>
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
                     * 获取<p>排序字段（string，选填）。可选 last_seen / first_seen / event_count；缺省 last_seen；其它值 → InvalidParameter</p>
                     * @return OrderKey <p>排序字段（string，选填）。可选 last_seen / first_seen / event_count；缺省 last_seen；其它值 → InvalidParameter</p>
                     * 
                     */
                    std::string GetOrderKey() const;

                    /**
                     * 设置<p>排序字段（string，选填）。可选 last_seen / first_seen / event_count；缺省 last_seen；其它值 → InvalidParameter</p>
                     * @param _orderKey <p>排序字段（string，选填）。可选 last_seen / first_seen / event_count；缺省 last_seen；其它值 → InvalidParameter</p>
                     * 
                     */
                    void SetOrderKey(const std::string& _orderKey);

                    /**
                     * 判断参数 OrderKey 是否已赋值
                     * @return OrderKey 是否已赋值
                     * 
                     */
                    bool OrderKeyHasBeenSet() const;

                    /**
                     * 获取<p>排序方向（string，选填）。可选 asc / desc；缺省 desc；其它值 → InvalidParameter</p>
                     * @return OrderBy <p>排序方向（string，选填）。可选 asc / desc；缺省 desc；其它值 → InvalidParameter</p>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>排序方向（string，选填）。可选 asc / desc；缺省 desc；其它值 → InvalidParameter</p>
                     * @param _orderBy <p>排序方向（string，选填）。可选 asc / desc；缺省 desc；其它值 → InvalidParameter</p>
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                private:

                    /**
                     * <p>应用 ID（string，必填）。空 → InvalidParameter</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>问题 ID（string，必填）。空 → InvalidParameter</p>
                     */
                    std::string m_issueId;
                    bool m_issueIdHasBeenSet;

                    /**
                     * <p>页码（整数，选填）。&lt; 1 钳制为 1；缺省 1</p>
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * <p>每页条数（整数，选填）。&lt; 1 或 &gt; 1000 回落默认 20；导出场景按 1000 一批拉全量</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>应用版本（string，选填）。按 app_version 精确匹配；空表示不限版本</p>
                     */
                    std::string m_appVersion;
                    bool m_appVersionHasBeenSet;

                    /**
                     * <p>起始毫秒时间戳（整数，选填）。&lt;= 0 表示该侧不限</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束毫秒时间戳（整数，选填）。&lt;= 0 表示该侧不限；与 StartTime 同时给出且 StartTime &gt; EndTime → InvalidParameter</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>身份值关键字（string，选填）。不区分大小写的子串匹配，命中 if(user_id='', session_id, user_id)；空表示不限</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>排序字段（string，选填）。可选 last_seen / first_seen / event_count；缺省 last_seen；其它值 → InvalidParameter</p>
                     */
                    std::string m_orderKey;
                    bool m_orderKeyHasBeenSet;

                    /**
                     * <p>排序方向（string，选填）。可选 asc / desc；缺省 desc；其它值 → InvalidParameter</p>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEISSUEAFFECTEDUSERSREQUEST_H_
