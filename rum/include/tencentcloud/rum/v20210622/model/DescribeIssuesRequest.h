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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEISSUESREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEISSUESREQUEST_H_

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
                * DescribeIssues请求参数结构体
                */
                class DescribeIssuesRequest : public AbstractModel
                {
                public:
                    DescribeIssuesRequest();
                    ~DescribeIssuesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用 ID</p>
                     * @return AppId <p>应用 ID</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用 ID</p>
                     * @param _appId <p>应用 ID</p>
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
                     * 获取<p>开始时间，Unix 毫秒时间戳</p>
                     * @return StartTime <p>开始时间，Unix 毫秒时间戳</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>开始时间，Unix 毫秒时间戳</p>
                     * @param _startTime <p>开始时间，Unix 毫秒时间戳</p>
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
                     * 获取<p>结束时间，Unix 毫秒时间戳</p>
                     * @return EndTime <p>结束时间，Unix 毫秒时间戳</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>结束时间，Unix 毫秒时间戳</p>
                     * @param _endTime <p>结束时间，Unix 毫秒时间戳</p>
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
                     * 获取<p>环境过滤，如 prod、test</p>
                     * @return Env <p>环境过滤，如 prod、test</p>
                     * 
                     */
                    std::string GetEnv() const;

                    /**
                     * 设置<p>环境过滤，如 prod、test</p>
                     * @param _env <p>环境过滤，如 prod、test</p>
                     * 
                     */
                    void SetEnv(const std::string& _env);

                    /**
                     * 判断参数 Env 是否已赋值
                     * @return Env 是否已赋值
                     * 
                     */
                    bool EnvHasBeenSet() const;

                    /**
                     * 获取<p>Issue 类型过滤，可选值：native_crash、js_error、event_loop_block</p>
                     * @return IssueTypes <p>Issue 类型过滤，可选值：native_crash、js_error、event_loop_block</p>
                     * 
                     */
                    std::vector<std::string> GetIssueTypes() const;

                    /**
                     * 设置<p>Issue 类型过滤，可选值：native_crash、js_error、event_loop_block</p>
                     * @param _issueTypes <p>Issue 类型过滤，可选值：native_crash、js_error、event_loop_block</p>
                     * 
                     */
                    void SetIssueTypes(const std::vector<std::string>& _issueTypes);

                    /**
                     * 判断参数 IssueTypes 是否已赋值
                     * @return IssueTypes 是否已赋值
                     * 
                     */
                    bool IssueTypesHasBeenSet() const;

                    /**
                     * 获取<p>状态过滤，可选值：Unresolved、Resolved、Ignored、Regressed</p>
                     * @return Statuses <p>状态过滤，可选值：Unresolved、Resolved、Ignored、Regressed</p>
                     * 
                     */
                    std::vector<std::string> GetStatuses() const;

                    /**
                     * 设置<p>状态过滤，可选值：Unresolved、Resolved、Ignored、Regressed</p>
                     * @param _statuses <p>状态过滤，可选值：Unresolved、Resolved、Ignored、Regressed</p>
                     * 
                     */
                    void SetStatuses(const std::vector<std::string>& _statuses);

                    /**
                     * 判断参数 Statuses 是否已赋值
                     * @return Statuses 是否已赋值
                     * 
                     */
                    bool StatusesHasBeenSet() const;

                    /**
                     * 获取<p>Issue 标题或错误关键字模糊搜索</p>
                     * @return Keyword <p>Issue 标题或错误关键字模糊搜索</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>Issue 标题或错误关键字模糊搜索</p>
                     * @param _keyword <p>Issue 标题或错误关键字模糊搜索</p>
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
                     * 获取<p>扩展过滤器 JSON 字符串；白名单字段包括 app_version、country、province、city、device_type、browser、os、isp、referrer、user_type、platform、normalized_page_url、event_type、issue_id、environment、process_type</p>
                     * @return Filters <p>扩展过滤器 JSON 字符串；白名单字段包括 app_version、country、province、city、device_type、browser、os、isp、referrer、user_type、platform、normalized_page_url、event_type、issue_id、environment、process_type</p>
                     * 
                     */
                    std::string GetFilters() const;

                    /**
                     * 设置<p>扩展过滤器 JSON 字符串；白名单字段包括 app_version、country、province、city、device_type、browser、os、isp、referrer、user_type、platform、normalized_page_url、event_type、issue_id、environment、process_type</p>
                     * @param _filters <p>扩展过滤器 JSON 字符串；白名单字段包括 app_version、country、province、city、device_type、browser、os、isp、referrer、user_type、platform、normalized_page_url、event_type、issue_id、environment、process_type</p>
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
                     * 获取<p>排序字段，可选值：last_seen、first_seen、event_count、affected_users</p>
                     * @return SortBy <p>排序字段，可选值：last_seen、first_seen、event_count、affected_users</p>
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置<p>排序字段，可选值：last_seen、first_seen、event_count、affected_users</p>
                     * @param _sortBy <p>排序字段，可选值：last_seen、first_seen、event_count、affected_users</p>
                     * 
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     * 
                     */
                    bool SortByHasBeenSet() const;

                    /**
                     * 获取<p>排序方向，可选值：asc、desc</p>
                     * @return SortOrder <p>排序方向，可选值：asc、desc</p>
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置<p>排序方向，可选值：asc、desc</p>
                     * @param _sortOrder <p>排序方向，可选值：asc、desc</p>
                     * 
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                    /**
                     * 获取<p>页码，默认 1</p>
                     * @return Page <p>页码，默认 1</p>
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置<p>页码，默认 1</p>
                     * @param _page <p>页码，默认 1</p>
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
                     * 获取<p>分页大小，默认 20，范围 1~100</p>
                     * @return PageSize <p>分页大小，默认 20，范围 1~100</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>分页大小，默认 20，范围 1~100</p>
                     * @param _pageSize <p>分页大小，默认 20，范围 1~100</p>
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * <p>应用 ID</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>开始时间，Unix 毫秒时间戳</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间，Unix 毫秒时间戳</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>环境过滤，如 prod、test</p>
                     */
                    std::string m_env;
                    bool m_envHasBeenSet;

                    /**
                     * <p>Issue 类型过滤，可选值：native_crash、js_error、event_loop_block</p>
                     */
                    std::vector<std::string> m_issueTypes;
                    bool m_issueTypesHasBeenSet;

                    /**
                     * <p>状态过滤，可选值：Unresolved、Resolved、Ignored、Regressed</p>
                     */
                    std::vector<std::string> m_statuses;
                    bool m_statusesHasBeenSet;

                    /**
                     * <p>Issue 标题或错误关键字模糊搜索</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>扩展过滤器 JSON 字符串；白名单字段包括 app_version、country、province、city、device_type、browser、os、isp、referrer、user_type、platform、normalized_page_url、event_type、issue_id、environment、process_type</p>
                     */
                    std::string m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>排序字段，可选值：last_seen、first_seen、event_count、affected_users</p>
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * <p>排序方向，可选值：asc、desc</p>
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                    /**
                     * <p>页码，默认 1</p>
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * <p>分页大小，默认 20，范围 1~100</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEISSUESREQUEST_H_
