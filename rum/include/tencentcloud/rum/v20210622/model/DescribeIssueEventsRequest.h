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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEISSUEEVENTSREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEISSUEEVENTSREQUEST_H_

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
                * DescribeIssueEvents请求参数结构体
                */
                class DescribeIssueEventsRequest : public AbstractModel
                {
                public:
                    DescribeIssueEventsRequest();
                    ~DescribeIssueEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用 ID
                     * @return AppId 应用 ID
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置应用 ID
                     * @param _appId 应用 ID
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
                     * 获取Issue ID
                     * @return IssueId Issue ID
                     * 
                     */
                    std::string GetIssueId() const;

                    /**
                     * 设置Issue ID
                     * @param _issueId Issue ID
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
                     * 获取开始时间，Unix 毫秒时间戳
                     * @return StartTime 开始时间，Unix 毫秒时间戳
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置开始时间，Unix 毫秒时间戳
                     * @param _startTime 开始时间，Unix 毫秒时间戳
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
                     * 获取结束时间，Unix 毫秒时间戳
                     * @return EndTime 结束时间，Unix 毫秒时间戳
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间，Unix 毫秒时间戳
                     * @param _endTime 结束时间，Unix 毫秒时间戳
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
                     * 获取事件关键字过滤
                     * @return Keyword 事件关键字过滤
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置事件关键字过滤
                     * @param _keyword 事件关键字过滤
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
                     * 获取扩展过滤器 JSON 字符串；白名单字段包括 app_version、country、province、city、device_type、browser、os、isp、referrer、user_type、platform、normalized_page_url、event_type、issue_id、environment、process_type
                     * @return Filters 扩展过滤器 JSON 字符串；白名单字段包括 app_version、country、province、city、device_type、browser、os、isp、referrer、user_type、platform、normalized_page_url、event_type、issue_id、environment、process_type
                     * 
                     */
                    std::string GetFilters() const;

                    /**
                     * 设置扩展过滤器 JSON 字符串；白名单字段包括 app_version、country、province、city、device_type、browser、os、isp、referrer、user_type、platform、normalized_page_url、event_type、issue_id、environment、process_type
                     * @param _filters 扩展过滤器 JSON 字符串；白名单字段包括 app_version、country、province、city、device_type、browser、os、isp、referrer、user_type、platform、normalized_page_url、event_type、issue_id、environment、process_type
                     * 
                     */
                    void SetFilters(const std::string& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取页码，默认 1
                     * @return Page 页码，默认 1
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置页码，默认 1
                     * @param _page 页码，默认 1
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
                     * 获取分页大小，默认 20，范围 1~100
                     * @return PageSize 分页大小，默认 20，范围 1~100
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置分页大小，默认 20，范围 1~100
                     * @param _pageSize 分页大小，默认 20，范围 1~100
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
                     * 获取排序方向，可选值：asc、desc
                     * @return SortOrder 排序方向，可选值：asc、desc
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置排序方向，可选值：asc、desc
                     * @param _sortOrder 排序方向，可选值：asc、desc
                     * 
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                private:

                    /**
                     * 应用 ID
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Issue ID
                     */
                    std::string m_issueId;
                    bool m_issueIdHasBeenSet;

                    /**
                     * 开始时间，Unix 毫秒时间戳
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，Unix 毫秒时间戳
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 事件关键字过滤
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 扩展过滤器 JSON 字符串；白名单字段包括 app_version、country、province、city、device_type、browser、os、isp、referrer、user_type、platform、normalized_page_url、event_type、issue_id、environment、process_type
                     */
                    std::string m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 页码，默认 1
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 分页大小，默认 20，范围 1~100
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 排序方向，可选值：asc、desc
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEISSUEEVENTSREQUEST_H_
