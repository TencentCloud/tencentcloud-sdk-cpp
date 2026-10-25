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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBESESSIONLISTREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBESESSIONLISTREQUEST_H_

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
                * DescribeSessionList请求参数结构体
                */
                class DescribeSessionListRequest : public AbstractModel
                {
                public:
                    DescribeSessionListRequest();
                    ~DescribeSessionListRequest() = default;
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
                     * 获取<p>开始时间</p><p>单位：毫秒</p>
                     * @return StartTime <p>开始时间</p><p>单位：毫秒</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>开始时间</p><p>单位：毫秒</p>
                     * @param _startTime <p>开始时间</p><p>单位：毫秒</p>
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
                     * 获取<p>结束时间</p><p>单位：毫秒</p>
                     * @return EndTime <p>结束时间</p><p>单位：毫秒</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>结束时间</p><p>单位：毫秒</p>
                     * @param _endTime <p>结束时间</p><p>单位：毫秒</p>
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
                     * 获取<p>session类型</p><p>枚举值：</p><ul><li>all： 所有</li><li>error： 错</li><li>slow： 慢</li></ul>
                     * @return SessionType <p>session类型</p><p>枚举值：</p><ul><li>all： 所有</li><li>error： 错</li><li>slow： 慢</li></ul>
                     * 
                     */
                    std::string GetSessionType() const;

                    /**
                     * 设置<p>session类型</p><p>枚举值：</p><ul><li>all： 所有</li><li>error： 错</li><li>slow： 慢</li></ul>
                     * @param _sessionType <p>session类型</p><p>枚举值：</p><ul><li>all： 所有</li><li>error： 错</li><li>slow： 慢</li></ul>
                     * 
                     */
                    void SetSessionType(const std::string& _sessionType);

                    /**
                     * 判断参数 SessionType 是否已赋值
                     * @return SessionType 是否已赋值
                     * 
                     */
                    bool SessionTypeHasBeenSet() const;

                    /**
                     * 获取<p>页面号</p><p>默认值：1</p>
                     * @return Page <p>页面号</p><p>默认值：1</p>
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置<p>页面号</p><p>默认值：1</p>
                     * @param _page <p>页面号</p><p>默认值：1</p>
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
                     * 获取<p>每一页的数量</p>
                     * @return PageSize <p>每一页的数量</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>每一页的数量</p>
                     * @param _pageSize <p>每一页的数量</p>
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
                     * 获取<p>排序字段</p>
                     * @return SortBy <p>排序字段</p>
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置<p>排序字段</p>
                     * @param _sortBy <p>排序字段</p>
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
                     * 获取<p>排序方式，ASC或DESC</p>
                     * @return SortOrder <p>排序方式，ASC或DESC</p>
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置<p>排序方式，ASC或DESC</p>
                     * @param _sortOrder <p>排序方式，ASC或DESC</p>
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
                     * 获取<p>用户id</p>
                     * @return UserId <p>用户id</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>用户id</p>
                     * @param _userId <p>用户id</p>
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
                     * 获取<p>session id</p>
                     * @return SessionId <p>session id</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>session id</p>
                     * @param _sessionId <p>session id</p>
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
                     * 获取<p>设备类型</p>
                     * @return DeviceTypes <p>设备类型</p>
                     * 
                     */
                    std::vector<std::string> GetDeviceTypes() const;

                    /**
                     * 设置<p>设备类型</p>
                     * @param _deviceTypes <p>设备类型</p>
                     * 
                     */
                    void SetDeviceTypes(const std::vector<std::string>& _deviceTypes);

                    /**
                     * 判断参数 DeviceTypes 是否已赋值
                     * @return DeviceTypes 是否已赋值
                     * 
                     */
                    bool DeviceTypesHasBeenSet() const;

                    /**
                     * 获取<p>浏览器</p>
                     * @return Browsers <p>浏览器</p>
                     * 
                     */
                    std::vector<std::string> GetBrowsers() const;

                    /**
                     * 设置<p>浏览器</p>
                     * @param _browsers <p>浏览器</p>
                     * 
                     */
                    void SetBrowsers(const std::vector<std::string>& _browsers);

                    /**
                     * 判断参数 Browsers 是否已赋值
                     * @return Browsers 是否已赋值
                     * 
                     */
                    bool BrowsersHasBeenSet() const;

                    /**
                     * 获取<p>操作系统</p>
                     * @return OSList <p>操作系统</p>
                     * 
                     */
                    std::vector<std::string> GetOSList() const;

                    /**
                     * 设置<p>操作系统</p>
                     * @param _oSList <p>操作系统</p>
                     * 
                     */
                    void SetOSList(const std::vector<std::string>& _oSList);

                    /**
                     * 判断参数 OSList 是否已赋值
                     * @return OSList 是否已赋值
                     * 
                     */
                    bool OSListHasBeenSet() const;

                    /**
                     * 获取<p>平台</p>
                     * @return Platforms <p>平台</p>
                     * 
                     */
                    std::vector<std::string> GetPlatforms() const;

                    /**
                     * 设置<p>平台</p>
                     * @param _platforms <p>平台</p>
                     * 
                     */
                    void SetPlatforms(const std::vector<std::string>& _platforms);

                    /**
                     * 判断参数 Platforms 是否已赋值
                     * @return Platforms 是否已赋值
                     * 
                     */
                    bool PlatformsHasBeenSet() const;

                    /**
                     * 获取<p>应用版本</p>
                     * @return AppVersions <p>应用版本</p>
                     * 
                     */
                    std::vector<std::string> GetAppVersions() const;

                    /**
                     * 设置<p>应用版本</p>
                     * @param _appVersions <p>应用版本</p>
                     * 
                     */
                    void SetAppVersions(const std::vector<std::string>& _appVersions);

                    /**
                     * 判断参数 AppVersions 是否已赋值
                     * @return AppVersions 是否已赋值
                     * 
                     */
                    bool AppVersionsHasBeenSet() const;

                    /**
                     * 获取<p>国家</p>
                     * @return Countries <p>国家</p>
                     * 
                     */
                    std::vector<std::string> GetCountries() const;

                    /**
                     * 设置<p>国家</p>
                     * @param _countries <p>国家</p>
                     * 
                     */
                    void SetCountries(const std::vector<std::string>& _countries);

                    /**
                     * 判断参数 Countries 是否已赋值
                     * @return Countries 是否已赋值
                     * 
                     */
                    bool CountriesHasBeenSet() const;

                    /**
                     * 获取<p>是否有挣扎事件</p>
                     * @return HasStruggle <p>是否有挣扎事件</p>
                     * 
                     */
                    bool GetHasStruggle() const;

                    /**
                     * 设置<p>是否有挣扎事件</p>
                     * @param _hasStruggle <p>是否有挣扎事件</p>
                     * 
                     */
                    void SetHasStruggle(const bool& _hasStruggle);

                    /**
                     * 判断参数 HasStruggle 是否已赋值
                     * @return HasStruggle 是否已赋值
                     * 
                     */
                    bool HasStruggleHasBeenSet() const;

                    /**
                     * 获取<p>挣扎等级</p>
                     * @return StruggleRanks <p>挣扎等级</p>
                     * 
                     */
                    std::vector<std::string> GetStruggleRanks() const;

                    /**
                     * 设置<p>挣扎等级</p>
                     * @param _struggleRanks <p>挣扎等级</p>
                     * 
                     */
                    void SetStruggleRanks(const std::vector<std::string>& _struggleRanks);

                    /**
                     * 判断参数 StruggleRanks 是否已赋值
                     * @return StruggleRanks 是否已赋值
                     * 
                     */
                    bool StruggleRanksHasBeenSet() const;

                    /**
                     * 获取<p>挣扎事件类型</p>
                     * @return StruggleTypes <p>挣扎事件类型</p>
                     * 
                     */
                    std::vector<std::string> GetStruggleTypes() const;

                    /**
                     * 设置<p>挣扎事件类型</p>
                     * @param _struggleTypes <p>挣扎事件类型</p>
                     * 
                     */
                    void SetStruggleTypes(const std::vector<std::string>& _struggleTypes);

                    /**
                     * 判断参数 StruggleTypes 是否已赋值
                     * @return StruggleTypes 是否已赋值
                     * 
                     */
                    bool StruggleTypesHasBeenSet() const;

                    /**
                     * 获取<p>是否有错误</p>
                     * @return HasError <p>是否有错误</p>
                     * 
                     */
                    bool GetHasError() const;

                    /**
                     * 设置<p>是否有错误</p>
                     * @param _hasError <p>是否有错误</p>
                     * 
                     */
                    void SetHasError(const bool& _hasError);

                    /**
                     * 判断参数 HasError 是否已赋值
                     * @return HasError 是否已赋值
                     * 
                     */
                    bool HasErrorHasBeenSet() const;

                    /**
                     * 获取<p>访问页面</p>
                     * @return VisitedPage <p>访问页面</p>
                     * 
                     */
                    std::string GetVisitedPage() const;

                    /**
                     * 设置<p>访问页面</p>
                     * @param _visitedPage <p>访问页面</p>
                     * 
                     */
                    void SetVisitedPage(const std::string& _visitedPage);

                    /**
                     * 判断参数 VisitedPage 是否已赋值
                     * @return VisitedPage 是否已赋值
                     * 
                     */
                    bool VisitedPageHasBeenSet() const;

                    /**
                     * 获取<p>包含事件</p>
                     * @return ContainsEvent <p>包含事件</p>
                     * 
                     */
                    std::string GetContainsEvent() const;

                    /**
                     * 设置<p>包含事件</p>
                     * @param _containsEvent <p>包含事件</p>
                     * 
                     */
                    void SetContainsEvent(const std::string& _containsEvent);

                    /**
                     * 判断参数 ContainsEvent 是否已赋值
                     * @return ContainsEvent 是否已赋值
                     * 
                     */
                    bool ContainsEventHasBeenSet() const;

                    /**
                     * 获取<p>最小持续时间</p>
                     * @return MinDuration <p>最小持续时间</p>
                     * 
                     */
                    int64_t GetMinDuration() const;

                    /**
                     * 设置<p>最小持续时间</p>
                     * @param _minDuration <p>最小持续时间</p>
                     * 
                     */
                    void SetMinDuration(const int64_t& _minDuration);

                    /**
                     * 判断参数 MinDuration 是否已赋值
                     * @return MinDuration 是否已赋值
                     * 
                     */
                    bool MinDurationHasBeenSet() const;

                    /**
                     * 获取<p>最大持续时间</p>
                     * @return MaxDuration <p>最大持续时间</p>
                     * 
                     */
                    int64_t GetMaxDuration() const;

                    /**
                     * 设置<p>最大持续时间</p>
                     * @param _maxDuration <p>最大持续时间</p>
                     * 
                     */
                    void SetMaxDuration(const int64_t& _maxDuration);

                    /**
                     * 判断参数 MaxDuration 是否已赋值
                     * @return MaxDuration 是否已赋值
                     * 
                     */
                    bool MaxDurationHasBeenSet() const;

                    /**
                     * 获取<p>性能过滤</p>
                     * @return PerfFilter <p>性能过滤</p>
                     * 
                     */
                    std::string GetPerfFilter() const;

                    /**
                     * 设置<p>性能过滤</p>
                     * @param _perfFilter <p>性能过滤</p>
                     * 
                     */
                    void SetPerfFilter(const std::string& _perfFilter);

                    /**
                     * 判断参数 PerfFilter 是否已赋值
                     * @return PerfFilter 是否已赋值
                     * 
                     */
                    bool PerfFilterHasBeenSet() const;

                    /**
                     * 获取<p>地区</p>
                     * @return Regions <p>地区</p>
                     * 
                     */
                    std::vector<std::string> GetRegions() const;

                    /**
                     * 设置<p>地区</p>
                     * @param _regions <p>地区</p>
                     * 
                     */
                    void SetRegions(const std::vector<std::string>& _regions);

                    /**
                     * 判断参数 Regions 是否已赋值
                     * @return Regions 是否已赋值
                     * 
                     */
                    bool RegionsHasBeenSet() const;

                    /**
                     * 获取<p>环境</p>
                     * @return Environments <p>环境</p>
                     * 
                     */
                    std::vector<std::string> GetEnvironments() const;

                    /**
                     * 设置<p>环境</p>
                     * @param _environments <p>环境</p>
                     * 
                     */
                    void SetEnvironments(const std::vector<std::string>& _environments);

                    /**
                     * 判断参数 Environments 是否已赋值
                     * @return Environments 是否已赋值
                     * 
                     */
                    bool EnvironmentsHasBeenSet() const;

                    /**
                     * 获取<p>筛选</p>
                     * @return Filters <p>筛选</p>
                     * 
                     */
                    std::string GetFilters() const;

                    /**
                     * 设置<p>筛选</p>
                     * @param _filters <p>筛选</p>
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
                     * 获取<p>旅程起点页面。可选。不传表示不过滤。</p>
                     * @return StartPage <p>旅程起点页面。可选。不传表示不过滤。</p>
                     * 
                     */
                    std::string GetStartPage() const;

                    /**
                     * 设置<p>旅程起点页面。可选。不传表示不过滤。</p>
                     * @param _startPage <p>旅程起点页面。可选。不传表示不过滤。</p>
                     * 
                     */
                    void SetStartPage(const std::string& _startPage);

                    /**
                     * 判断参数 StartPage 是否已赋值
                     * @return StartPage 是否已赋值
                     * 
                     */
                    bool StartPageHasBeenSet() const;

                    /**
                     * 获取<p>旅程终点页面。可选。不传表示不过滤。</p>
                     * @return EndPage <p>旅程终点页面。可选。不传表示不过滤。</p>
                     * 
                     */
                    std::string GetEndPage() const;

                    /**
                     * 设置<p>旅程终点页面。可选。不传表示不过滤。</p>
                     * @param _endPage <p>旅程终点页面。可选。不传表示不过滤。</p>
                     * 
                     */
                    void SetEndPage(const std::string& _endPage);

                    /**
                     * 判断参数 EndPage 是否已赋值
                     * @return EndPage 是否已赋值
                     * 
                     */
                    bool EndPageHasBeenSet() const;

                    /**
                     * 获取<p>旅程筛选条件 JSON 字符串，格式与 Filters 相同：[{Key,Op,Values}]。可选。不传表示不过滤。</p>
                     * @return JourneyFilters <p>旅程筛选条件 JSON 字符串，格式与 Filters 相同：[{Key,Op,Values}]。可选。不传表示不过滤。</p>
                     * 
                     */
                    std::string GetJourneyFilters() const;

                    /**
                     * 设置<p>旅程筛选条件 JSON 字符串，格式与 Filters 相同：[{Key,Op,Values}]。可选。不传表示不过滤。</p>
                     * @param _journeyFilters <p>旅程筛选条件 JSON 字符串，格式与 Filters 相同：[{Key,Op,Values}]。可选。不传表示不过滤。</p>
                     * 
                     */
                    void SetJourneyFilters(const std::string& _journeyFilters);

                    /**
                     * 判断参数 JourneyFilters 是否已赋值
                     * @return JourneyFilters 是否已赋值
                     * 
                     */
                    bool JourneyFiltersHasBeenSet() const;

                private:

                    /**
                     * <p>应用id</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>开始时间</p><p>单位：毫秒</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间</p><p>单位：毫秒</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>session类型</p><p>枚举值：</p><ul><li>all： 所有</li><li>error： 错</li><li>slow： 慢</li></ul>
                     */
                    std::string m_sessionType;
                    bool m_sessionTypeHasBeenSet;

                    /**
                     * <p>页面号</p><p>默认值：1</p>
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * <p>每一页的数量</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>排序字段</p>
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * <p>排序方式，ASC或DESC</p>
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                    /**
                     * <p>用户id</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>session id</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>设备类型</p>
                     */
                    std::vector<std::string> m_deviceTypes;
                    bool m_deviceTypesHasBeenSet;

                    /**
                     * <p>浏览器</p>
                     */
                    std::vector<std::string> m_browsers;
                    bool m_browsersHasBeenSet;

                    /**
                     * <p>操作系统</p>
                     */
                    std::vector<std::string> m_oSList;
                    bool m_oSListHasBeenSet;

                    /**
                     * <p>平台</p>
                     */
                    std::vector<std::string> m_platforms;
                    bool m_platformsHasBeenSet;

                    /**
                     * <p>应用版本</p>
                     */
                    std::vector<std::string> m_appVersions;
                    bool m_appVersionsHasBeenSet;

                    /**
                     * <p>国家</p>
                     */
                    std::vector<std::string> m_countries;
                    bool m_countriesHasBeenSet;

                    /**
                     * <p>是否有挣扎事件</p>
                     */
                    bool m_hasStruggle;
                    bool m_hasStruggleHasBeenSet;

                    /**
                     * <p>挣扎等级</p>
                     */
                    std::vector<std::string> m_struggleRanks;
                    bool m_struggleRanksHasBeenSet;

                    /**
                     * <p>挣扎事件类型</p>
                     */
                    std::vector<std::string> m_struggleTypes;
                    bool m_struggleTypesHasBeenSet;

                    /**
                     * <p>是否有错误</p>
                     */
                    bool m_hasError;
                    bool m_hasErrorHasBeenSet;

                    /**
                     * <p>访问页面</p>
                     */
                    std::string m_visitedPage;
                    bool m_visitedPageHasBeenSet;

                    /**
                     * <p>包含事件</p>
                     */
                    std::string m_containsEvent;
                    bool m_containsEventHasBeenSet;

                    /**
                     * <p>最小持续时间</p>
                     */
                    int64_t m_minDuration;
                    bool m_minDurationHasBeenSet;

                    /**
                     * <p>最大持续时间</p>
                     */
                    int64_t m_maxDuration;
                    bool m_maxDurationHasBeenSet;

                    /**
                     * <p>性能过滤</p>
                     */
                    std::string m_perfFilter;
                    bool m_perfFilterHasBeenSet;

                    /**
                     * <p>地区</p>
                     */
                    std::vector<std::string> m_regions;
                    bool m_regionsHasBeenSet;

                    /**
                     * <p>环境</p>
                     */
                    std::vector<std::string> m_environments;
                    bool m_environmentsHasBeenSet;

                    /**
                     * <p>筛选</p>
                     */
                    std::string m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>旅程起点页面。可选。不传表示不过滤。</p>
                     */
                    std::string m_startPage;
                    bool m_startPageHasBeenSet;

                    /**
                     * <p>旅程终点页面。可选。不传表示不过滤。</p>
                     */
                    std::string m_endPage;
                    bool m_endPageHasBeenSet;

                    /**
                     * <p>旅程筛选条件 JSON 字符串，格式与 Filters 相同：[{Key,Op,Values}]。可选。不传表示不过滤。</p>
                     */
                    std::string m_journeyFilters;
                    bool m_journeyFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBESESSIONLISTREQUEST_H_
