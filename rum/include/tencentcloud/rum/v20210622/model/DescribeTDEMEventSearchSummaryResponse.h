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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMEVENTSEARCHSUMMARYRESPONSE_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMEVENTSEARCHSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/IntKeyValue.h>
#include <tencentcloud/rum/v20210622/model/EventSearchSeriesPoint.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeTDEMEventSearchSummary返回参数结构体
                */
                class DescribeTDEMEventSearchSummaryResponse : public AbstractModel
                {
                public:
                    DescribeTDEMEventSearchSummaryResponse();
                    ~DescribeTDEMEventSearchSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>各分类窗口计数，Key 为分类 id</p>
                     * @return CategoryCounts <p>各分类窗口计数，Key 为分类 id</p>
                     * 
                     */
                    std::vector<IntKeyValue> GetCategoryCounts() const;

                    /**
                     * 判断参数 CategoryCounts 是否已赋值
                     * @return CategoryCounts 是否已赋值
                     * 
                     */
                    bool CategoryCountsHasBeenSet() const;

                    /**
                     * 获取<p>当前分类窗口条数</p>
                     * @return Total <p>当前分类窗口条数</p>
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取<p>访问用户（设备）</p>
                     * @return Visitors <p>访问用户（设备）</p>
                     * 
                     */
                    int64_t GetVisitors() const;

                    /**
                     * 判断参数 Visitors 是否已赋值
                     * @return Visitors 是否已赋值
                     * 
                     */
                    bool VisitorsHasBeenSet() const;

                    /**
                     * 获取<p>业务用户</p>
                     * @return Users <p>业务用户</p>
                     * 
                     */
                    int64_t GetUsers() const;

                    /**
                     * 判断参数 Users 是否已赋值
                     * @return Users 是否已赋值
                     * 
                     */
                    bool UsersHasBeenSet() const;

                    /**
                     * 获取<p>实际分桶秒数</p>
                     * @return IntervalSec <p>实际分桶秒数</p>
                     * 
                     */
                    int64_t GetIntervalSec() const;

                    /**
                     * 判断参数 IntervalSec 是否已赋值
                     * @return IntervalSec 是否已赋值
                     * 
                     */
                    bool IntervalSecHasBeenSet() const;

                    /**
                     * 获取<p>分桶趋势</p>
                     * @return Series <p>分桶趋势</p>
                     * 
                     */
                    std::vector<EventSearchSeriesPoint> GetSeries() const;

                    /**
                     * 判断参数 Series 是否已赋值
                     * @return Series 是否已赋值
                     * 
                     */
                    bool SeriesHasBeenSet() const;

                private:

                    /**
                     * <p>各分类窗口计数，Key 为分类 id</p>
                     */
                    std::vector<IntKeyValue> m_categoryCounts;
                    bool m_categoryCountsHasBeenSet;

                    /**
                     * <p>当前分类窗口条数</p>
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * <p>访问用户（设备）</p>
                     */
                    int64_t m_visitors;
                    bool m_visitorsHasBeenSet;

                    /**
                     * <p>业务用户</p>
                     */
                    int64_t m_users;
                    bool m_usersHasBeenSet;

                    /**
                     * <p>实际分桶秒数</p>
                     */
                    int64_t m_intervalSec;
                    bool m_intervalSecHasBeenSet;

                    /**
                     * <p>分桶趋势</p>
                     */
                    std::vector<EventSearchSeriesPoint> m_series;
                    bool m_seriesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMEVENTSEARCHSUMMARYRESPONSE_H_
