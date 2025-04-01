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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBDIAGREPORTTASKSREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBDIAGREPORTTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeDBDiagReportTasks请求参数结构体
                */
                class DescribeDBDiagReportTasksRequest : public AbstractModel
                {
                public:
                    DescribeDBDiagReportTasksRequest();
                    ~DescribeDBDiagReportTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取第一个任务的开始时间，用于范围查询，时间格式如：2019-09-10 12:13:14。
                     * @return StartTime 第一个任务的开始时间，用于范围查询，时间格式如：2019-09-10 12:13:14。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置第一个任务的开始时间，用于范围查询，时间格式如：2019-09-10 12:13:14。
                     * @param _startTime 第一个任务的开始时间，用于范围查询，时间格式如：2019-09-10 12:13:14。
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
                     * 获取最后一个任务的开始时间，用于范围查询，时间格式如：2019-09-10 12:13:14。
                     * @return EndTime 最后一个任务的开始时间，用于范围查询，时间格式如：2019-09-10 12:13:14。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置最后一个任务的开始时间，用于范围查询，时间格式如：2019-09-10 12:13:14。
                     * @param _endTime 最后一个任务的开始时间，用于范围查询，时间格式如：2019-09-10 12:13:14。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取实例ID数组，用于筛选指定实例的任务列表。
                     * @return InstanceIds 实例ID数组，用于筛选指定实例的任务列表。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例ID数组，用于筛选指定实例的任务列表。
                     * @param _instanceIds 实例ID数组，用于筛选指定实例的任务列表。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取任务的触发来源，支持的取值包括："DAILY_INSPECTION" - 实例巡检；"SCHEDULED" - 计划任务；"MANUAL" - 手动触发。
                     * @return Sources 任务的触发来源，支持的取值包括："DAILY_INSPECTION" - 实例巡检；"SCHEDULED" - 计划任务；"MANUAL" - 手动触发。
                     * 
                     */
                    std::vector<std::string> GetSources() const;

                    /**
                     * 设置任务的触发来源，支持的取值包括："DAILY_INSPECTION" - 实例巡检；"SCHEDULED" - 计划任务；"MANUAL" - 手动触发。
                     * @param _sources 任务的触发来源，支持的取值包括："DAILY_INSPECTION" - 实例巡检；"SCHEDULED" - 计划任务；"MANUAL" - 手动触发。
                     * 
                     */
                    void SetSources(const std::vector<std::string>& _sources);

                    /**
                     * 判断参数 Sources 是否已赋值
                     * @return Sources 是否已赋值
                     * 
                     */
                    bool SourcesHasBeenSet() const;

                    /**
                     * 获取报告的健康等级，支持的取值包括："HEALTH" - 健康；"SUB_HEALTH" - 亚健康；"RISK" - 危险；"HIGH_RISK" - 高危。
                     * @return HealthLevels 报告的健康等级，支持的取值包括："HEALTH" - 健康；"SUB_HEALTH" - 亚健康；"RISK" - 危险；"HIGH_RISK" - 高危。
                     * 
                     */
                    std::string GetHealthLevels() const;

                    /**
                     * 设置报告的健康等级，支持的取值包括："HEALTH" - 健康；"SUB_HEALTH" - 亚健康；"RISK" - 危险；"HIGH_RISK" - 高危。
                     * @param _healthLevels 报告的健康等级，支持的取值包括："HEALTH" - 健康；"SUB_HEALTH" - 亚健康；"RISK" - 危险；"HIGH_RISK" - 高危。
                     * 
                     */
                    void SetHealthLevels(const std::string& _healthLevels);

                    /**
                     * 判断参数 HealthLevels 是否已赋值
                     * @return HealthLevels 是否已赋值
                     * 
                     */
                    bool HealthLevelsHasBeenSet() const;

                    /**
                     * 获取任务的状态，支持的取值包括："created" - 新建；"chosen" - 待执行； "running" - 执行中；"failed" - 失败；"finished" - 已完成。
                     * @return TaskStatuses 任务的状态，支持的取值包括："created" - 新建；"chosen" - 待执行； "running" - 执行中；"failed" - 失败；"finished" - 已完成。
                     * 
                     */
                    std::string GetTaskStatuses() const;

                    /**
                     * 设置任务的状态，支持的取值包括："created" - 新建；"chosen" - 待执行； "running" - 执行中；"failed" - 失败；"finished" - 已完成。
                     * @param _taskStatuses 任务的状态，支持的取值包括："created" - 新建；"chosen" - 待执行； "running" - 执行中；"failed" - 失败；"finished" - 已完成。
                     * 
                     */
                    void SetTaskStatuses(const std::string& _taskStatuses);

                    /**
                     * 判断参数 TaskStatuses 是否已赋值
                     * @return TaskStatuses 是否已赋值
                     * 
                     */
                    bool TaskStatusesHasBeenSet() const;

                    /**
                     * 获取偏移量，默认0。
                     * @return Offset 偏移量，默认0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认0。
                     * @param _offset 偏移量，默认0。
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
                     * 获取返回数量，默认20，最大值为100。
                     * @return Limit 返回数量，默认20，最大值为100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认20，最大值为100。
                     * @param _limit 返回数量，默认20，最大值为100。
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
                     * 获取服务产品类型，支持值："mysql" - 云数据库 MySQL；"cynosdb" - 云数据库 TDSQL-C for MySQL，"redis" - 云数据库 Redis，默认为"mysql"。
                     * @return Product 服务产品类型，支持值："mysql" - 云数据库 MySQL；"cynosdb" - 云数据库 TDSQL-C for MySQL，"redis" - 云数据库 Redis，默认为"mysql"。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置服务产品类型，支持值："mysql" - 云数据库 MySQL；"cynosdb" - 云数据库 TDSQL-C for MySQL，"redis" - 云数据库 Redis，默认为"mysql"。
                     * @param _product 服务产品类型，支持值："mysql" - 云数据库 MySQL；"cynosdb" - 云数据库 TDSQL-C for MySQL，"redis" - 云数据库 Redis，默认为"mysql"。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * 第一个任务的开始时间，用于范围查询，时间格式如：2019-09-10 12:13:14。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 最后一个任务的开始时间，用于范围查询，时间格式如：2019-09-10 12:13:14。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 实例ID数组，用于筛选指定实例的任务列表。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 任务的触发来源，支持的取值包括："DAILY_INSPECTION" - 实例巡检；"SCHEDULED" - 计划任务；"MANUAL" - 手动触发。
                     */
                    std::vector<std::string> m_sources;
                    bool m_sourcesHasBeenSet;

                    /**
                     * 报告的健康等级，支持的取值包括："HEALTH" - 健康；"SUB_HEALTH" - 亚健康；"RISK" - 危险；"HIGH_RISK" - 高危。
                     */
                    std::string m_healthLevels;
                    bool m_healthLevelsHasBeenSet;

                    /**
                     * 任务的状态，支持的取值包括："created" - 新建；"chosen" - 待执行； "running" - 执行中；"failed" - 失败；"finished" - 已完成。
                     */
                    std::string m_taskStatuses;
                    bool m_taskStatusesHasBeenSet;

                    /**
                     * 偏移量，默认0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认20，最大值为100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 服务产品类型，支持值："mysql" - 云数据库 MySQL；"cynosdb" - 云数据库 TDSQL-C for MySQL，"redis" - 云数据库 Redis，默认为"mysql"。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBDIAGREPORTTASKSREQUEST_H_
