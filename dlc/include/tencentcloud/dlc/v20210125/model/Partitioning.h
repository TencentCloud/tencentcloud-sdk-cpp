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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_PARTITIONING_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_PARTITIONING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/SingleFieldPartitioning.h>
#include <tencentcloud/dlc/v20210125/model/ListPartitioning.h>
#include <tencentcloud/dlc/v20210125/model/RangePartitioning.h>
#include <tencentcloud/dlc/v20210125/model/BucketPartitioning.h>
#include <tencentcloud/dlc/v20210125/model/TruncatePartitioning.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * tcc Partition分区定义
                */
                class Partitioning : public AbstractModel
                {
                public:
                    Partitioning();
                    ~Partitioning() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>转换策略</p>
                     * @return Strategy <p>转换策略</p>
                     * 
                     */
                    std::string GetStrategy() const;

                    /**
                     * 设置<p>转换策略</p>
                     * @param _strategy <p>转换策略</p>
                     * 
                     */
                    void SetStrategy(const std::string& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     * 
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取<p>按年分区策略</p>
                     * @return YearPartitioning <p>按年分区策略</p>
                     * 
                     */
                    SingleFieldPartitioning GetYearPartitioning() const;

                    /**
                     * 设置<p>按年分区策略</p>
                     * @param _yearPartitioning <p>按年分区策略</p>
                     * 
                     */
                    void SetYearPartitioning(const SingleFieldPartitioning& _yearPartitioning);

                    /**
                     * 判断参数 YearPartitioning 是否已赋值
                     * @return YearPartitioning 是否已赋值
                     * 
                     */
                    bool YearPartitioningHasBeenSet() const;

                    /**
                     * 获取<p>按月分区策略</p>
                     * @return MonthPartitioning <p>按月分区策略</p>
                     * 
                     */
                    SingleFieldPartitioning GetMonthPartitioning() const;

                    /**
                     * 设置<p>按月分区策略</p>
                     * @param _monthPartitioning <p>按月分区策略</p>
                     * 
                     */
                    void SetMonthPartitioning(const SingleFieldPartitioning& _monthPartitioning);

                    /**
                     * 判断参数 MonthPartitioning 是否已赋值
                     * @return MonthPartitioning 是否已赋值
                     * 
                     */
                    bool MonthPartitioningHasBeenSet() const;

                    /**
                     * 获取<p>按天分区策略</p>
                     * @return DayPartitioning <p>按天分区策略</p>
                     * 
                     */
                    SingleFieldPartitioning GetDayPartitioning() const;

                    /**
                     * 设置<p>按天分区策略</p>
                     * @param _dayPartitioning <p>按天分区策略</p>
                     * 
                     */
                    void SetDayPartitioning(const SingleFieldPartitioning& _dayPartitioning);

                    /**
                     * 判断参数 DayPartitioning 是否已赋值
                     * @return DayPartitioning 是否已赋值
                     * 
                     */
                    bool DayPartitioningHasBeenSet() const;

                    /**
                     * 获取<p>按小时分区策略</p>
                     * @return HourPartitioning <p>按小时分区策略</p>
                     * 
                     */
                    SingleFieldPartitioning GetHourPartitioning() const;

                    /**
                     * 设置<p>按小时分区策略</p>
                     * @param _hourPartitioning <p>按小时分区策略</p>
                     * 
                     */
                    void SetHourPartitioning(const SingleFieldPartitioning& _hourPartitioning);

                    /**
                     * 判断参数 HourPartitioning 是否已赋值
                     * @return HourPartitioning 是否已赋值
                     * 
                     */
                    bool HourPartitioningHasBeenSet() const;

                    /**
                     * 获取<p>按字段分区策略</p>
                     * @return IdentityPartitioning <p>按字段分区策略</p>
                     * 
                     */
                    SingleFieldPartitioning GetIdentityPartitioning() const;

                    /**
                     * 设置<p>按字段分区策略</p>
                     * @param _identityPartitioning <p>按字段分区策略</p>
                     * 
                     */
                    void SetIdentityPartitioning(const SingleFieldPartitioning& _identityPartitioning);

                    /**
                     * 判断参数 IdentityPartitioning 是否已赋值
                     * @return IdentityPartitioning 是否已赋值
                     * 
                     */
                    bool IdentityPartitioningHasBeenSet() const;

                    /**
                     * 获取<p>列表分区策略</p>
                     * @return ListPartitioning <p>列表分区策略</p>
                     * 
                     */
                    ListPartitioning GetListPartitioning() const;

                    /**
                     * 设置<p>列表分区策略</p>
                     * @param _listPartitioning <p>列表分区策略</p>
                     * 
                     */
                    void SetListPartitioning(const ListPartitioning& _listPartitioning);

                    /**
                     * 判断参数 ListPartitioning 是否已赋值
                     * @return ListPartitioning 是否已赋值
                     * 
                     */
                    bool ListPartitioningHasBeenSet() const;

                    /**
                     * 获取<p>范围分区策略</p>
                     * @return RangePartitioning <p>范围分区策略</p>
                     * 
                     */
                    RangePartitioning GetRangePartitioning() const;

                    /**
                     * 设置<p>范围分区策略</p>
                     * @param _rangePartitioning <p>范围分区策略</p>
                     * 
                     */
                    void SetRangePartitioning(const RangePartitioning& _rangePartitioning);

                    /**
                     * 判断参数 RangePartitioning 是否已赋值
                     * @return RangePartitioning 是否已赋值
                     * 
                     */
                    bool RangePartitioningHasBeenSet() const;

                    /**
                     * 获取<p>分桶分区策略</p>
                     * @return BucketPartitioning <p>分桶分区策略</p>
                     * 
                     */
                    BucketPartitioning GetBucketPartitioning() const;

                    /**
                     * 设置<p>分桶分区策略</p>
                     * @param _bucketPartitioning <p>分桶分区策略</p>
                     * 
                     */
                    void SetBucketPartitioning(const BucketPartitioning& _bucketPartitioning);

                    /**
                     * 判断参数 BucketPartitioning 是否已赋值
                     * @return BucketPartitioning 是否已赋值
                     * 
                     */
                    bool BucketPartitioningHasBeenSet() const;

                    /**
                     * 获取<p>截断分区策略</p>
                     * @return TruncatePartitioning <p>截断分区策略</p>
                     * 
                     */
                    TruncatePartitioning GetTruncatePartitioning() const;

                    /**
                     * 设置<p>截断分区策略</p>
                     * @param _truncatePartitioning <p>截断分区策略</p>
                     * 
                     */
                    void SetTruncatePartitioning(const TruncatePartitioning& _truncatePartitioning);

                    /**
                     * 判断参数 TruncatePartitioning 是否已赋值
                     * @return TruncatePartitioning 是否已赋值
                     * 
                     */
                    bool TruncatePartitioningHasBeenSet() const;

                private:

                    /**
                     * <p>转换策略</p>
                     */
                    std::string m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * <p>按年分区策略</p>
                     */
                    SingleFieldPartitioning m_yearPartitioning;
                    bool m_yearPartitioningHasBeenSet;

                    /**
                     * <p>按月分区策略</p>
                     */
                    SingleFieldPartitioning m_monthPartitioning;
                    bool m_monthPartitioningHasBeenSet;

                    /**
                     * <p>按天分区策略</p>
                     */
                    SingleFieldPartitioning m_dayPartitioning;
                    bool m_dayPartitioningHasBeenSet;

                    /**
                     * <p>按小时分区策略</p>
                     */
                    SingleFieldPartitioning m_hourPartitioning;
                    bool m_hourPartitioningHasBeenSet;

                    /**
                     * <p>按字段分区策略</p>
                     */
                    SingleFieldPartitioning m_identityPartitioning;
                    bool m_identityPartitioningHasBeenSet;

                    /**
                     * <p>列表分区策略</p>
                     */
                    ListPartitioning m_listPartitioning;
                    bool m_listPartitioningHasBeenSet;

                    /**
                     * <p>范围分区策略</p>
                     */
                    RangePartitioning m_rangePartitioning;
                    bool m_rangePartitioningHasBeenSet;

                    /**
                     * <p>分桶分区策略</p>
                     */
                    BucketPartitioning m_bucketPartitioning;
                    bool m_bucketPartitioningHasBeenSet;

                    /**
                     * <p>截断分区策略</p>
                     */
                    TruncatePartitioning m_truncatePartitioning;
                    bool m_truncatePartitioningHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_PARTITIONING_H_
