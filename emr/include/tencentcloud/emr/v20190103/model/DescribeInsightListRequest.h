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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEINSIGHTLISTREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEINSIGHTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeInsightList请求参数结构体
                */
                class DescribeInsightListRequest : public AbstractModel
                {
                public:
                    DescribeInsightListRequest();
                    ~DescribeInsightListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return InstanceId 集群ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群ID
                     * @param _instanceId 集群ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取获取的洞察结果开始时间，此时间针对对App或者Hive查询的开始时间的过滤
                     * @return StartTime 获取的洞察结果开始时间，此时间针对对App或者Hive查询的开始时间的过滤
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置获取的洞察结果开始时间，此时间针对对App或者Hive查询的开始时间的过滤
                     * @param _startTime 获取的洞察结果开始时间，此时间针对对App或者Hive查询的开始时间的过滤
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
                     * 获取获取的洞察结果结束时间，此时间针对对App或者Hive查询的开始时间的过滤
                     * @return EndTime 获取的洞察结果结束时间，此时间针对对App或者Hive查询的开始时间的过滤
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置获取的洞察结果结束时间，此时间针对对App或者Hive查询的开始时间的过滤
                     * @param _endTime 获取的洞察结果结束时间，此时间针对对App或者Hive查询的开始时间的过滤
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
                     * 获取分页查询时的分页大小，最小1，最大100
                     * @return PageSize 分页查询时的分页大小，最小1，最大100
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置分页查询时的分页大小，最小1，最大100
                     * @param _pageSize 分页查询时的分页大小，最小1，最大100
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
                     * 获取分页查询时的页号，从1开始
                     * @return Page 分页查询时的页号，从1开始
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置分页查询时的页号，从1开始
                     * @param _page 分页查询时的页号，从1开始
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
                     * 获取查询类型,支持HIVE,SPARK,DLC_SPARK,SPARK_SQL,SCHEDULE,MAPREDUCE,TRINO等类型,默认查询全部
                     * @return Type 查询类型,支持HIVE,SPARK,DLC_SPARK,SPARK_SQL,SCHEDULE,MAPREDUCE,TRINO等类型,默认查询全部
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置查询类型,支持HIVE,SPARK,DLC_SPARK,SPARK_SQL,SCHEDULE,MAPREDUCE,TRINO等类型,默认查询全部
                     * @param _type 查询类型,支持HIVE,SPARK,DLC_SPARK,SPARK_SQL,SCHEDULE,MAPREDUCE,TRINO等类型,默认查询全部
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 获取的洞察结果开始时间，此时间针对对App或者Hive查询的开始时间的过滤
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 获取的洞察结果结束时间，此时间针对对App或者Hive查询的开始时间的过滤
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 分页查询时的分页大小，最小1，最大100
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 分页查询时的页号，从1开始
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 查询类型,支持HIVE,SPARK,DLC_SPARK,SPARK_SQL,SCHEDULE,MAPREDUCE,TRINO等类型,默认查询全部
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEINSIGHTLISTREQUEST_H_
