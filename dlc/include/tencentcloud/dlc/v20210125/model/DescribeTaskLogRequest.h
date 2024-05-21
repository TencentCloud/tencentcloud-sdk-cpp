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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETASKLOGREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETASKLOGREQUEST_H_

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
                * DescribeTaskLog请求参数结构体
                */
                class DescribeTaskLogRequest : public AbstractModel
                {
                public:
                    DescribeTaskLogRequest();
                    ~DescribeTaskLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取列表返回的Id
                     * @return TaskId 列表返回的Id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置列表返回的Id
                     * @param _taskId 列表返回的Id
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取开始运行时间，unix时间戳（毫秒）
                     * @return StartTime 开始运行时间，unix时间戳（毫秒）
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置开始运行时间，unix时间戳（毫秒）
                     * @param _startTime 开始运行时间，unix时间戳（毫秒）
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
                     * 获取结束运行时间，unix时间戳（毫秒）
                     * @return EndTime 结束运行时间，unix时间戳（毫秒）
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束运行时间，unix时间戳（毫秒）
                     * @param _endTime 结束运行时间，unix时间戳（毫秒）
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
                     * 获取分页大小，最大1000，配合Context一起使用
                     * @return Limit 分页大小，最大1000，配合Context一起使用
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页大小，最大1000，配合Context一起使用
                     * @param _limit 分页大小，最大1000，配合Context一起使用
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
                     * 获取下一次分页参数，第一次传空。透传上次接口返回的Context值，可获取后续更多日志，总计最多可获取1万条原始日志，过期时间1小时。
                     * @return Context 下一次分页参数，第一次传空。透传上次接口返回的Context值，可获取后续更多日志，总计最多可获取1万条原始日志，过期时间1小时。
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置下一次分页参数，第一次传空。透传上次接口返回的Context值，可获取后续更多日志，总计最多可获取1万条原始日志，过期时间1小时。
                     * @param _context 下一次分页参数，第一次传空。透传上次接口返回的Context值，可获取后续更多日志，总计最多可获取1万条原始日志，过期时间1小时。
                     * 
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取是否升序排列，true:升序排序，false:倒序，默认false，倒序排列
                     * @return Asc 是否升序排列，true:升序排序，false:倒序，默认false，倒序排列
                     * 
                     */
                    bool GetAsc() const;

                    /**
                     * 设置是否升序排列，true:升序排序，false:倒序，默认false，倒序排列
                     * @param _asc 是否升序排列，true:升序排序，false:倒序，默认false，倒序排列
                     * 
                     */
                    void SetAsc(const bool& _asc);

                    /**
                     * 判断参数 Asc 是否已赋值
                     * @return Asc 是否已赋值
                     * 
                     */
                    bool AscHasBeenSet() const;

                    /**
                     * 获取预览日志的通用过滤条件
                     * @return Filters 预览日志的通用过滤条件
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置预览日志的通用过滤条件
                     * @param _filters 预览日志的通用过滤条件
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
                     * 获取SparkSQL任务唯一ID
                     * @return BatchId SparkSQL任务唯一ID
                     * 
                     */
                    std::string GetBatchId() const;

                    /**
                     * 设置SparkSQL任务唯一ID
                     * @param _batchId SparkSQL任务唯一ID
                     * 
                     */
                    void SetBatchId(const std::string& _batchId);

                    /**
                     * 判断参数 BatchId 是否已赋值
                     * @return BatchId 是否已赋值
                     * 
                     */
                    bool BatchIdHasBeenSet() const;

                private:

                    /**
                     * 列表返回的Id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 开始运行时间，unix时间戳（毫秒）
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束运行时间，unix时间戳（毫秒）
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 分页大小，最大1000，配合Context一起使用
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 下一次分页参数，第一次传空。透传上次接口返回的Context值，可获取后续更多日志，总计最多可获取1万条原始日志，过期时间1小时。
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * 是否升序排列，true:升序排序，false:倒序，默认false，倒序排列
                     */
                    bool m_asc;
                    bool m_ascHasBeenSet;

                    /**
                     * 预览日志的通用过滤条件
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * SparkSQL任务唯一ID
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETASKLOGREQUEST_H_
