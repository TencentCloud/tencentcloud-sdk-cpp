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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEPERFORMANCEMETRICSREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEPERFORMANCEMETRICSREQUEST_H_

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
                * DescribePerformanceMetrics请求参数结构体
                */
                class DescribePerformanceMetricsRequest : public AbstractModel
                {
                public:
                    DescribePerformanceMetricsRequest();
                    ~DescribePerformanceMetricsRequest() = default;
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
                     * 获取<p>平台</p>
                     * @return Platform <p>平台</p>
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置<p>平台</p>
                     * @param _platform <p>平台</p>
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件</p>
                     * @return Filters <p>过滤条件</p>
                     * 
                     */
                    std::string GetFilters() const;

                    /**
                     * 设置<p>过滤条件</p>
                     * @param _filters <p>过滤条件</p>
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
                     * 获取<p>分位值</p>
                     * @return Quantile <p>分位值</p>
                     * 
                     */
                    double GetQuantile() const;

                    /**
                     * 设置<p>分位值</p>
                     * @param _quantile <p>分位值</p>
                     * 
                     */
                    void SetQuantile(const double& _quantile);

                    /**
                     * 判断参数 Quantile 是否已赋值
                     * @return Quantile 是否已赋值
                     * 
                     */
                    bool QuantileHasBeenSet() const;

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

                    /**
                     * 获取<p>是否只看包含挣扎的会话。可选。不传表示不过滤。</p>
                     * @return HasStruggle <p>是否只看包含挣扎的会话。可选。不传表示不过滤。</p>
                     * 
                     */
                    bool GetHasStruggle() const;

                    /**
                     * 设置<p>是否只看包含挣扎的会话。可选。不传表示不过滤。</p>
                     * @param _hasStruggle <p>是否只看包含挣扎的会话。可选。不传表示不过滤。</p>
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

                private:

                    /**
                     * <p>应用id</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

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
                     * <p>平台</p>
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * <p>过滤条件</p>
                     */
                    std::string m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>分位值</p>
                     */
                    double m_quantile;
                    bool m_quantileHasBeenSet;

                    /**
                     * <p>旅程筛选条件 JSON 字符串，格式与 Filters 相同：[{Key,Op,Values}]。可选。不传表示不过滤。</p>
                     */
                    std::string m_journeyFilters;
                    bool m_journeyFiltersHasBeenSet;

                    /**
                     * <p>是否只看包含挣扎的会话。可选。不传表示不过滤。</p>
                     */
                    bool m_hasStruggle;
                    bool m_hasStruggleHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEPERFORMANCEMETRICSREQUEST_H_
