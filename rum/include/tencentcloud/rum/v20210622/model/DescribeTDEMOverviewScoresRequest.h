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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMOVERVIEWSCORESREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMOVERVIEWSCORESREQUEST_H_

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
                * DescribeTDEMOverviewScores请求参数结构体
                */
                class DescribeTDEMOverviewScoresRequest : public AbstractModel
                {
                public:
                    DescribeTDEMOverviewScoresRequest();
                    ~DescribeTDEMOverviewScoresRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用 ID 列表，1-200（必填）</p>
                     * @return AppIds <p>应用 ID 列表，1-200（必填）</p>
                     * 
                     */
                    std::vector<std::string> GetAppIds() const;

                    /**
                     * 设置<p>应用 ID 列表，1-200（必填）</p>
                     * @param _appIds <p>应用 ID 列表，1-200（必填）</p>
                     * 
                     */
                    void SetAppIds(const std::vector<std::string>& _appIds);

                    /**
                     * 判断参数 AppIds 是否已赋值
                     * @return AppIds 是否已赋值
                     * 
                     */
                    bool AppIdsHasBeenSet() const;

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
                     * 获取<p>筛选条件 JSON 字符串，格式为 [{Key,Op,Values}]。可选。总览总分按环境筛选时传入。</p>
                     * @return Filters <p>筛选条件 JSON 字符串，格式为 [{Key,Op,Values}]。可选。总览总分按环境筛选时传入。</p>
                     * 
                     */
                    std::string GetFilters() const;

                    /**
                     * 设置<p>筛选条件 JSON 字符串，格式为 [{Key,Op,Values}]。可选。总览总分按环境筛选时传入。</p>
                     * @param _filters <p>筛选条件 JSON 字符串，格式为 [{Key,Op,Values}]。可选。总览总分按环境筛选时传入。</p>
                     * 
                     */
                    void SetFilters(const std::string& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>应用 ID 列表，1-200（必填）</p>
                     */
                    std::vector<std::string> m_appIds;
                    bool m_appIdsHasBeenSet;

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
                     * <p>筛选条件 JSON 字符串，格式为 [{Key,Op,Values}]。可选。总览总分按环境筛选时传入。</p>
                     */
                    std::string m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMOVERVIEWSCORESREQUEST_H_
