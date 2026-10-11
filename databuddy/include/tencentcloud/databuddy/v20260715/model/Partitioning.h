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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_PARTITIONING_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_PARTITIONING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/SingleFieldPartitioning.h>
#include <tencentcloud/databuddy/v20260715/model/ListPartitioning.h>
#include <tencentcloud/databuddy/v20260715/model/RangePartitioning.h>
#include <tencentcloud/databuddy/v20260715/model/BucketPartitioning.h>
#include <tencentcloud/databuddy/v20260715/model/TruncatePartitioning.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 分区结构
                */
                class Partitioning : public AbstractModel
                {
                public:
                    Partitioning();
                    ~Partitioning() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转换策略
                     * @return Strategy 转换策略
                     * 
                     */
                    std::string GetStrategy() const;

                    /**
                     * 设置转换策略
                     * @param _strategy 转换策略
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
                     * 获取分桶策略参数
                     * @return NumBuckets 分桶策略参数
                     * 
                     */
                    int64_t GetNumBuckets() const;

                    /**
                     * 设置分桶策略参数
                     * @param _numBuckets 分桶策略参数
                     * 
                     */
                    void SetNumBuckets(const int64_t& _numBuckets);

                    /**
                     * 判断参数 NumBuckets 是否已赋值
                     * @return NumBuckets 是否已赋值
                     * 
                     */
                    bool NumBucketsHasBeenSet() const;

                    /**
                     * 获取字段名称
                     * @return FieldNames 字段名称
                     * 
                     */
                    std::vector<std::string> GetFieldNames() const;

                    /**
                     * 设置字段名称
                     * @param _fieldNames 字段名称
                     * 
                     */
                    void SetFieldNames(const std::vector<std::string>& _fieldNames);

                    /**
                     * 判断参数 FieldNames 是否已赋值
                     * @return FieldNames 是否已赋值
                     * 
                     */
                    bool FieldNamesHasBeenSet() const;

                    /**
                     * 获取策略参数
                     * @return Width 策略参数
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置策略参数
                     * @param _width 策略参数
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取字段名称
                     * @return FieldName 字段名称
                     * 
                     */
                    std::vector<std::string> GetFieldName() const;

                    /**
                     * 设置字段名称
                     * @param _fieldName 字段名称
                     * 
                     */
                    void SetFieldName(const std::vector<std::string>& _fieldName);

                    /**
                     * 判断参数 FieldName 是否已赋值
                     * @return FieldName 是否已赋值
                     * 
                     */
                    bool FieldNameHasBeenSet() const;

                    /**
                     * 获取按年分区策略
                     * @return YearPartitioning 按年分区策略
                     * 
                     */
                    SingleFieldPartitioning GetYearPartitioning() const;

                    /**
                     * 设置按年分区策略
                     * @param _yearPartitioning 按年分区策略
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
                     * 获取按月分区策略
                     * @return MonthPartitioning 按月分区策略
                     * 
                     */
                    SingleFieldPartitioning GetMonthPartitioning() const;

                    /**
                     * 设置按月分区策略
                     * @param _monthPartitioning 按月分区策略
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
                     * 获取按天分区策略
                     * @return DayPartitioning 按天分区策略
                     * 
                     */
                    SingleFieldPartitioning GetDayPartitioning() const;

                    /**
                     * 设置按天分区策略
                     * @param _dayPartitioning 按天分区策略
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
                     * 获取按小时分区策略
                     * @return HourPartitioning 按小时分区策略
                     * 
                     */
                    SingleFieldPartitioning GetHourPartitioning() const;

                    /**
                     * 设置按小时分区策略
                     * @param _hourPartitioning 按小时分区策略
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
                     * 获取按字段分区策略
                     * @return IdentityPartitioning 按字段分区策略
                     * 
                     */
                    SingleFieldPartitioning GetIdentityPartitioning() const;

                    /**
                     * 设置按字段分区策略
                     * @param _identityPartitioning 按字段分区策略
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
                     * 获取列表分区策略
                     * @return ListPartitioning 列表分区策略
                     * 
                     */
                    ListPartitioning GetListPartitioning() const;

                    /**
                     * 设置列表分区策略
                     * @param _listPartitioning 列表分区策略
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
                     * 获取范围分区策略
                     * @return RangePartitioning 范围分区策略
                     * 
                     */
                    RangePartitioning GetRangePartitioning() const;

                    /**
                     * 设置范围分区策略
                     * @param _rangePartitioning 范围分区策略
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
                     * 获取分桶分区策略
                     * @return BucketPartitioning 分桶分区策略
                     * 
                     */
                    BucketPartitioning GetBucketPartitioning() const;

                    /**
                     * 设置分桶分区策略
                     * @param _bucketPartitioning 分桶分区策略
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
                     * 获取截断分区策略
                     * @return TruncatePartitioning 截断分区策略
                     * 
                     */
                    TruncatePartitioning GetTruncatePartitioning() const;

                    /**
                     * 设置截断分区策略
                     * @param _truncatePartitioning 截断分区策略
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
                     * 转换策略
                     */
                    std::string m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * 分桶策略参数
                     */
                    int64_t m_numBuckets;
                    bool m_numBucketsHasBeenSet;

                    /**
                     * 字段名称
                     */
                    std::vector<std::string> m_fieldNames;
                    bool m_fieldNamesHasBeenSet;

                    /**
                     * 策略参数
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 字段名称
                     */
                    std::vector<std::string> m_fieldName;
                    bool m_fieldNameHasBeenSet;

                    /**
                     * 按年分区策略
                     */
                    SingleFieldPartitioning m_yearPartitioning;
                    bool m_yearPartitioningHasBeenSet;

                    /**
                     * 按月分区策略
                     */
                    SingleFieldPartitioning m_monthPartitioning;
                    bool m_monthPartitioningHasBeenSet;

                    /**
                     * 按天分区策略
                     */
                    SingleFieldPartitioning m_dayPartitioning;
                    bool m_dayPartitioningHasBeenSet;

                    /**
                     * 按小时分区策略
                     */
                    SingleFieldPartitioning m_hourPartitioning;
                    bool m_hourPartitioningHasBeenSet;

                    /**
                     * 按字段分区策略
                     */
                    SingleFieldPartitioning m_identityPartitioning;
                    bool m_identityPartitioningHasBeenSet;

                    /**
                     * 列表分区策略
                     */
                    ListPartitioning m_listPartitioning;
                    bool m_listPartitioningHasBeenSet;

                    /**
                     * 范围分区策略
                     */
                    RangePartitioning m_rangePartitioning;
                    bool m_rangePartitioningHasBeenSet;

                    /**
                     * 分桶分区策略
                     */
                    BucketPartitioning m_bucketPartitioning;
                    bool m_bucketPartitioningHasBeenSet;

                    /**
                     * 截断分区策略
                     */
                    TruncatePartitioning m_truncatePartitioning;
                    bool m_truncatePartitioningHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_PARTITIONING_H_
