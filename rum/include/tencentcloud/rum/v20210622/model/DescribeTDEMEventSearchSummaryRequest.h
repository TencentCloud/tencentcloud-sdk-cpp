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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMEVENTSEARCHSUMMARYREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMEVENTSEARCHSUMMARYREQUEST_H_

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
                * DescribeTDEMEventSearchSummary请求参数结构体
                */
                class DescribeTDEMEventSearchSummaryRequest : public AbstractModel
                {
                public:
                    DescribeTDEMEventSearchSummaryRequest();
                    ~DescribeTDEMEventSearchSummaryRequest() = default;
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
                     * 获取<p>开始时间 Unix 毫秒（必填）</p>
                     * @return StartTime <p>开始时间 Unix 毫秒（必填）</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>开始时间 Unix 毫秒（必填）</p>
                     * @param _startTime <p>开始时间 Unix 毫秒（必填）</p>
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
                     * 获取<p>事件分类（必填，可含 session）</p>
                     * @return Category <p>事件分类（必填，可含 session）</p>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置<p>事件分类（必填，可含 session）</p>
                     * @param _category <p>事件分类（必填，可含 session）</p>
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
                     * 获取<p>筛选条件 JSON 字符串：[{Key,Op,Values}]</p>
                     * @return Filters <p>筛选条件 JSON 字符串：[{Key,Op,Values}]</p>
                     * 
                     */
                    std::string GetFilters() const;

                    /**
                     * 设置<p>筛选条件 JSON 字符串：[{Key,Op,Values}]</p>
                     * @param _filters <p>筛选条件 JSON 字符串：[{Key,Op,Values}]</p>
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
                     * 获取<p>分桶秒数，正整数；缺省由服务端按窗口选取</p>
                     * @return IntervalSec <p>分桶秒数，正整数；缺省由服务端按窗口选取</p>
                     * 
                     */
                    int64_t GetIntervalSec() const;

                    /**
                     * 设置<p>分桶秒数，正整数；缺省由服务端按窗口选取</p>
                     * @param _intervalSec <p>分桶秒数，正整数；缺省由服务端按窗口选取</p>
                     * 
                     */
                    void SetIntervalSec(const int64_t& _intervalSec);

                    /**
                     * 判断参数 IntervalSec 是否已赋值
                     * @return IntervalSec 是否已赋值
                     * 
                     */
                    bool IntervalSecHasBeenSet() const;

                    /**
                     * 获取<p>是否只看有错误的会话。可选。不传表示不过滤。Category 为 session 的汇总查询会使用该条件。</p>
                     * @return HasError <p>是否只看有错误的会话。可选。不传表示不过滤。Category 为 session 的汇总查询会使用该条件。</p>
                     * 
                     */
                    bool GetHasError() const;

                    /**
                     * 设置<p>是否只看有错误的会话。可选。不传表示不过滤。Category 为 session 的汇总查询会使用该条件。</p>
                     * @param _hasError <p>是否只看有错误的会话。可选。不传表示不过滤。Category 为 session 的汇总查询会使用该条件。</p>
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
                     * 获取<p>会话最短时长，单位毫秒。可选。0 或不传表示不限制。Category 为 session 的汇总查询会使用该条件。</p>
                     * @return MinDuration <p>会话最短时长，单位毫秒。可选。0 或不传表示不限制。Category 为 session 的汇总查询会使用该条件。</p>
                     * 
                     */
                    int64_t GetMinDuration() const;

                    /**
                     * 设置<p>会话最短时长，单位毫秒。可选。0 或不传表示不限制。Category 为 session 的汇总查询会使用该条件。</p>
                     * @param _minDuration <p>会话最短时长，单位毫秒。可选。0 或不传表示不限制。Category 为 session 的汇总查询会使用该条件。</p>
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
                     * 获取<p>会话最长时长，单位毫秒。可选。0 或不传表示不限制。Category 为 session 的汇总查询会使用该条件。</p>
                     * @return MaxDuration <p>会话最长时长，单位毫秒。可选。0 或不传表示不限制。Category 为 session 的汇总查询会使用该条件。</p>
                     * 
                     */
                    int64_t GetMaxDuration() const;

                    /**
                     * 设置<p>会话最长时长，单位毫秒。可选。0 或不传表示不限制。Category 为 session 的汇总查询会使用该条件。</p>
                     * @param _maxDuration <p>会话最长时长，单位毫秒。可选。0 或不传表示不限制。Category 为 session 的汇总查询会使用该条件。</p>
                     * 
                     */
                    void SetMaxDuration(const int64_t& _maxDuration);

                    /**
                     * 判断参数 MaxDuration 是否已赋值
                     * @return MaxDuration 是否已赋值
                     * 
                     */
                    bool MaxDurationHasBeenSet() const;

                private:

                    /**
                     * <p>应用 ID（必填）</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>开始时间 Unix 毫秒（必填）</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间 Unix 毫秒（必填）</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>事件分类（必填，可含 session）</p>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>筛选条件 JSON 字符串：[{Key,Op,Values}]</p>
                     */
                    std::string m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>分桶秒数，正整数；缺省由服务端按窗口选取</p>
                     */
                    int64_t m_intervalSec;
                    bool m_intervalSecHasBeenSet;

                    /**
                     * <p>是否只看有错误的会话。可选。不传表示不过滤。Category 为 session 的汇总查询会使用该条件。</p>
                     */
                    bool m_hasError;
                    bool m_hasErrorHasBeenSet;

                    /**
                     * <p>会话最短时长，单位毫秒。可选。0 或不传表示不限制。Category 为 session 的汇总查询会使用该条件。</p>
                     */
                    int64_t m_minDuration;
                    bool m_minDurationHasBeenSet;

                    /**
                     * <p>会话最长时长，单位毫秒。可选。0 或不传表示不限制。Category 为 session 的汇总查询会使用该条件。</p>
                     */
                    int64_t m_maxDuration;
                    bool m_maxDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMEVENTSEARCHSUMMARYREQUEST_H_
