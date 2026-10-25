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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMSSETRENDRESPONSE_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMSSETRENDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/TDEMSSETrendPoint.h>
#include <tencentcloud/rum/v20210622/model/TDEMSSETrendSeries.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeTDEMSSETrend返回参数结构体
                */
                class DescribeTDEMSSETrendResponse : public AbstractModel
                {
                public:
                    DescribeTDEMSSETrendResponse();
                    ~DescribeTDEMSSETrendResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>时间桶宽度，单位秒。</p>
                     * @return IntervalSec <p>时间桶宽度，单位秒。</p>
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
                     * 获取<p>Dimension 为 overall 时的时间桶。没有对话时为空数组。</p>
                     * @return Points <p>Dimension 为 overall 时的时间桶。没有对话时为空数组。</p>
                     * 
                     */
                    std::vector<TDEMSSETrendPoint> GetPoints() const;

                    /**
                     * 判断参数 Points 是否已赋值
                     * @return Points 是否已赋值
                     * 
                     */
                    bool PointsHasBeenSet() const;

                    /**
                     * 获取<p>非 overall 时按指标从高到低取 TopN 后的序列。没有对话时为空数组。</p>
                     * @return Series <p>非 overall 时按指标从高到低取 TopN 后的序列。没有对话时为空数组。</p>
                     * 
                     */
                    std::vector<TDEMSSETrendSeries> GetSeries() const;

                    /**
                     * 判断参数 Series 是否已赋值
                     * @return Series 是否已赋值
                     * 
                     */
                    bool SeriesHasBeenSet() const;

                private:

                    /**
                     * <p>时间桶宽度，单位秒。</p>
                     */
                    int64_t m_intervalSec;
                    bool m_intervalSecHasBeenSet;

                    /**
                     * <p>Dimension 为 overall 时的时间桶。没有对话时为空数组。</p>
                     */
                    std::vector<TDEMSSETrendPoint> m_points;
                    bool m_pointsHasBeenSet;

                    /**
                     * <p>非 overall 时按指标从高到低取 TopN 后的序列。没有对话时为空数组。</p>
                     */
                    std::vector<TDEMSSETrendSeries> m_series;
                    bool m_seriesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMSSETRENDRESPONSE_H_
