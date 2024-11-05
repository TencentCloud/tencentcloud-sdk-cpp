/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETASKSANALYSISREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETASKSANALYSISREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Filter.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeTasksAnalysis请求参数结构体
                */
                class DescribeTasksAnalysisRequest : public AbstractModel
                {
                public:
                    DescribeTasksAnalysisRequest();
                    ~DescribeTasksAnalysisRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据引擎名称，用于筛选
                     * @return DataEngineName 数据引擎名称，用于筛选
                     * 
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 设置数据引擎名称，用于筛选
                     * @param _dataEngineName 数据引擎名称，用于筛选
                     * 
                     */
                    void SetDataEngineName(const std::string& _dataEngineName);

                    /**
                     * 判断参数 DataEngineName 是否已赋值
                     * @return DataEngineName 是否已赋值
                     * 
                     */
                    bool DataEngineNameHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为10，最大值为100。
                     * @return Limit 返回数量，默认为10，最大值为100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为10，最大值为100。
                     * @param _limit 返回数量，默认为10，最大值为100。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取过滤条件，如下支持的过滤类型，传参Name应为以下其中一个: task-id - String - （任务ID准确过滤）task-id 取值形如：e386471f-139a-4e59-877f-50ece8135b99。task-state - String - （任务状态过滤）取值范围 0(初始化)， 1(运行中)， 2(成功)， -1(失败)，rule-id - String - （洞察类型）取值范围 SPARK-StageScheduleDelay（资源抢占）, SPARK-ShuffleFailure（Shuffle异常）, SPARK-SlowTask（慢task）, SPARK-DataSkew（数据倾斜）, SPARK-InsufficientResource（磁盘或内存不足）
                     * @return Filters 过滤条件，如下支持的过滤类型，传参Name应为以下其中一个: task-id - String - （任务ID准确过滤）task-id 取值形如：e386471f-139a-4e59-877f-50ece8135b99。task-state - String - （任务状态过滤）取值范围 0(初始化)， 1(运行中)， 2(成功)， -1(失败)，rule-id - String - （洞察类型）取值范围 SPARK-StageScheduleDelay（资源抢占）, SPARK-ShuffleFailure（Shuffle异常）, SPARK-SlowTask（慢task）, SPARK-DataSkew（数据倾斜）, SPARK-InsufficientResource（磁盘或内存不足）
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，如下支持的过滤类型，传参Name应为以下其中一个: task-id - String - （任务ID准确过滤）task-id 取值形如：e386471f-139a-4e59-877f-50ece8135b99。task-state - String - （任务状态过滤）取值范围 0(初始化)， 1(运行中)， 2(成功)， -1(失败)，rule-id - String - （洞察类型）取值范围 SPARK-StageScheduleDelay（资源抢占）, SPARK-ShuffleFailure（Shuffle异常）, SPARK-SlowTask（慢task）, SPARK-DataSkew（数据倾斜）, SPARK-InsufficientResource（磁盘或内存不足）
                     * @param _filters 过滤条件，如下支持的过滤类型，传参Name应为以下其中一个: task-id - String - （任务ID准确过滤）task-id 取值形如：e386471f-139a-4e59-877f-50ece8135b99。task-state - String - （任务状态过滤）取值范围 0(初始化)， 1(运行中)， 2(成功)， -1(失败)，rule-id - String - （洞察类型）取值范围 SPARK-StageScheduleDelay（资源抢占）, SPARK-ShuffleFailure（Shuffle异常）, SPARK-SlowTask（慢task）, SPARK-DataSkew（数据倾斜）, SPARK-InsufficientResource（磁盘或内存不足）
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取排序字段，支持如下字段类型，instance-start-time (任务开始时间）,job-time-sum （单位毫秒，引擎内执行耗时）,task-time-sum （CU资源消耗，单位秒）,input-bytes-sum（数据扫描总大小，单位bytes）,shuffle-read-bytes-sum（数据shuffle总大小，单位bytes）
                     * @return SortBy 排序字段，支持如下字段类型，instance-start-time (任务开始时间）,job-time-sum （单位毫秒，引擎内执行耗时）,task-time-sum （CU资源消耗，单位秒）,input-bytes-sum（数据扫描总大小，单位bytes）,shuffle-read-bytes-sum（数据shuffle总大小，单位bytes）
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置排序字段，支持如下字段类型，instance-start-time (任务开始时间）,job-time-sum （单位毫秒，引擎内执行耗时）,task-time-sum （CU资源消耗，单位秒）,input-bytes-sum（数据扫描总大小，单位bytes）,shuffle-read-bytes-sum（数据shuffle总大小，单位bytes）
                     * @param _sortBy 排序字段，支持如下字段类型，instance-start-time (任务开始时间）,job-time-sum （单位毫秒，引擎内执行耗时）,task-time-sum （CU资源消耗，单位秒）,input-bytes-sum（数据扫描总大小，单位bytes）,shuffle-read-bytes-sum（数据shuffle总大小，单位bytes）
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
                     * 获取排序方式，desc表示正序，asc表示反序， 默认为asc。
                     * @return Sorting 排序方式，desc表示正序，asc表示反序， 默认为asc。
                     * 
                     */
                    std::string GetSorting() const;

                    /**
                     * 设置排序方式，desc表示正序，asc表示反序， 默认为asc。
                     * @param _sorting 排序方式，desc表示正序，asc表示反序， 默认为asc。
                     * 
                     */
                    void SetSorting(const std::string& _sorting);

                    /**
                     * 判断参数 Sorting 是否已赋值
                     * @return Sorting 是否已赋值
                     * 
                     */
                    bool SortingHasBeenSet() const;

                    /**
                     * 获取任务开始时间点，格式为yyyy-mm-dd HH:MM:SS时间跨度在(0,30天]，支持最近30天数据查询。默认为当前时刻
                     * @return StartTime 任务开始时间点，格式为yyyy-mm-dd HH:MM:SS时间跨度在(0,30天]，支持最近30天数据查询。默认为当前时刻
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置任务开始时间点，格式为yyyy-mm-dd HH:MM:SS时间跨度在(0,30天]，支持最近30天数据查询。默认为当前时刻
                     * @param _startTime 任务开始时间点，格式为yyyy-mm-dd HH:MM:SS时间跨度在(0,30天]，支持最近30天数据查询。默认为当前时刻
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间点，格式为yyyy-mm-dd HH:MM:SS时间跨度在(0,30天]，支持最近30天数据查询。默认为当前时刻
                     * @return EndTime 结束时间点，格式为yyyy-mm-dd HH:MM:SS时间跨度在(0,30天]，支持最近30天数据查询。默认为当前时刻
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间点，格式为yyyy-mm-dd HH:MM:SS时间跨度在(0,30天]，支持最近30天数据查询。默认为当前时刻
                     * @param _endTime 结束时间点，格式为yyyy-mm-dd HH:MM:SS时间跨度在(0,30天]，支持最近30天数据查询。默认为当前时刻
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 数据引擎名称，用于筛选
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                    /**
                     * 返回数量，默认为10，最大值为100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 过滤条件，如下支持的过滤类型，传参Name应为以下其中一个: task-id - String - （任务ID准确过滤）task-id 取值形如：e386471f-139a-4e59-877f-50ece8135b99。task-state - String - （任务状态过滤）取值范围 0(初始化)， 1(运行中)， 2(成功)， -1(失败)，rule-id - String - （洞察类型）取值范围 SPARK-StageScheduleDelay（资源抢占）, SPARK-ShuffleFailure（Shuffle异常）, SPARK-SlowTask（慢task）, SPARK-DataSkew（数据倾斜）, SPARK-InsufficientResource（磁盘或内存不足）
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序字段，支持如下字段类型，instance-start-time (任务开始时间）,job-time-sum （单位毫秒，引擎内执行耗时）,task-time-sum （CU资源消耗，单位秒）,input-bytes-sum（数据扫描总大小，单位bytes）,shuffle-read-bytes-sum（数据shuffle总大小，单位bytes）
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * 排序方式，desc表示正序，asc表示反序， 默认为asc。
                     */
                    std::string m_sorting;
                    bool m_sortingHasBeenSet;

                    /**
                     * 任务开始时间点，格式为yyyy-mm-dd HH:MM:SS时间跨度在(0,30天]，支持最近30天数据查询。默认为当前时刻
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间点，格式为yyyy-mm-dd HH:MM:SS时间跨度在(0,30天]，支持最近30天数据查询。默认为当前时刻
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETASKSANALYSISREQUEST_H_
