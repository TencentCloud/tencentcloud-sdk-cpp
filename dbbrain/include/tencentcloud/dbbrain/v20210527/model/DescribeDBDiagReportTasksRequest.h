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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBDIAGREPORTTASKSREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBDIAGREPORTTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/TagFilterGroup.h>


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
                     * 获取<p>第一个任务的开始时间，用于范围查询，时间格式如：2019-09-10 12:13:14。</p>
                     * @return StartTime <p>第一个任务的开始时间，用于范围查询，时间格式如：2019-09-10 12:13:14。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>第一个任务的开始时间，用于范围查询，时间格式如：2019-09-10 12:13:14。</p>
                     * @param _startTime <p>第一个任务的开始时间，用于范围查询，时间格式如：2019-09-10 12:13:14。</p>
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
                     * 获取<p>最后一个任务的开始时间，用于范围查询，时间格式如：2019-09-10 12:13:14。</p>
                     * @return EndTime <p>最后一个任务的开始时间，用于范围查询，时间格式如：2019-09-10 12:13:14。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>最后一个任务的开始时间，用于范围查询，时间格式如：2019-09-10 12:13:14。</p>
                     * @param _endTime <p>最后一个任务的开始时间，用于范围查询，时间格式如：2019-09-10 12:13:14。</p>
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
                     * 获取<p>实例ID数组，用于筛选指定实例的任务列表。。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。</p>
                     * @return InstanceIds <p>实例ID数组，用于筛选指定实例的任务列表。。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>实例ID数组，用于筛选指定实例的任务列表。。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。</p>
                     * @param _instanceIds <p>实例ID数组，用于筛选指定实例的任务列表。。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。</p>
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
                     * 获取<p>任务的触发来源，支持的取值包括：&quot;DAILY_INSPECTION&quot; - 实例巡检；&quot;SCHEDULED&quot; - 计划任务；&quot;MANUAL&quot; - 手动触发。</p>
                     * @return Sources <p>任务的触发来源，支持的取值包括：&quot;DAILY_INSPECTION&quot; - 实例巡检；&quot;SCHEDULED&quot; - 计划任务；&quot;MANUAL&quot; - 手动触发。</p>
                     * 
                     */
                    std::vector<std::string> GetSources() const;

                    /**
                     * 设置<p>任务的触发来源，支持的取值包括：&quot;DAILY_INSPECTION&quot; - 实例巡检；&quot;SCHEDULED&quot; - 计划任务；&quot;MANUAL&quot; - 手动触发。</p>
                     * @param _sources <p>任务的触发来源，支持的取值包括：&quot;DAILY_INSPECTION&quot; - 实例巡检；&quot;SCHEDULED&quot; - 计划任务；&quot;MANUAL&quot; - 手动触发。</p>
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
                     * 获取<p>报告的健康等级，支持的取值包括：&quot;HEALTH&quot; - 健康；&quot;SUB_HEALTH&quot; - 亚健康；&quot;RISK&quot; - 危险；&quot;HIGH_RISK&quot; - 高危。</p>
                     * @return HealthLevels <p>报告的健康等级，支持的取值包括：&quot;HEALTH&quot; - 健康；&quot;SUB_HEALTH&quot; - 亚健康；&quot;RISK&quot; - 危险；&quot;HIGH_RISK&quot; - 高危。</p>
                     * 
                     */
                    std::string GetHealthLevels() const;

                    /**
                     * 设置<p>报告的健康等级，支持的取值包括：&quot;HEALTH&quot; - 健康；&quot;SUB_HEALTH&quot; - 亚健康；&quot;RISK&quot; - 危险；&quot;HIGH_RISK&quot; - 高危。</p>
                     * @param _healthLevels <p>报告的健康等级，支持的取值包括：&quot;HEALTH&quot; - 健康；&quot;SUB_HEALTH&quot; - 亚健康；&quot;RISK&quot; - 危险；&quot;HIGH_RISK&quot; - 高危。</p>
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
                     * 获取<p>任务的状态，支持的取值包括：&quot;created&quot; - 新建；&quot;chosen&quot; - 待执行； &quot;running&quot; - 执行中；&quot;failed&quot; - 失败；&quot;finished&quot; - 已完成。</p>
                     * @return TaskStatuses <p>任务的状态，支持的取值包括：&quot;created&quot; - 新建；&quot;chosen&quot; - 待执行； &quot;running&quot; - 执行中；&quot;failed&quot; - 失败；&quot;finished&quot; - 已完成。</p>
                     * 
                     */
                    std::string GetTaskStatuses() const;

                    /**
                     * 设置<p>任务的状态，支持的取值包括：&quot;created&quot; - 新建；&quot;chosen&quot; - 待执行； &quot;running&quot; - 执行中；&quot;failed&quot; - 失败；&quot;finished&quot; - 已完成。</p>
                     * @param _taskStatuses <p>任务的状态，支持的取值包括：&quot;created&quot; - 新建；&quot;chosen&quot; - 待执行； &quot;running&quot; - 执行中；&quot;failed&quot; - 失败；&quot;finished&quot; - 已完成。</p>
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
                     * 获取<p>偏移量，默认0。</p>
                     * @return Offset <p>偏移量，默认0。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认0。</p>
                     * @param _offset <p>偏移量，默认0。</p>
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
                     * 获取<p>返回数量，默认20，最大值为100。</p>
                     * @return Limit <p>返回数量，默认20，最大值为100。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认20，最大值为100。</p>
                     * @param _limit <p>返回数量，默认20，最大值为100。</p>
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
                     * 获取<p>服务产品类型，支持值：&quot;mysql&quot; - 云数据库 MySQL；&quot;cynosdb&quot; - 云数据库 TDSQL-C for MySQL，&quot;redis&quot; - 云数据库 Redis，默认为&quot;mysql&quot;。</p>
                     * @return Product <p>服务产品类型，支持值：&quot;mysql&quot; - 云数据库 MySQL；&quot;cynosdb&quot; - 云数据库 TDSQL-C for MySQL，&quot;redis&quot; - 云数据库 Redis，默认为&quot;mysql&quot;。</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>服务产品类型，支持值：&quot;mysql&quot; - 云数据库 MySQL；&quot;cynosdb&quot; - 云数据库 TDSQL-C for MySQL，&quot;redis&quot; - 云数据库 Redis，默认为&quot;mysql&quot;。</p>
                     * @param _product <p>服务产品类型，支持值：&quot;mysql&quot; - 云数据库 MySQL；&quot;cynosdb&quot; - 云数据库 TDSQL-C for MySQL，&quot;redis&quot; - 云数据库 Redis，默认为&quot;mysql&quot;。</p>
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取<p>根据任务所属实例的标签信息进行过滤</p>
                     * @return TagFilters <p>根据任务所属实例的标签信息进行过滤</p>
                     * 
                     */
                    std::vector<TagFilterGroup> GetTagFilters() const;

                    /**
                     * 设置<p>根据任务所属实例的标签信息进行过滤</p>
                     * @param _tagFilters <p>根据任务所属实例的标签信息进行过滤</p>
                     * 
                     */
                    void SetTagFilters(const std::vector<TagFilterGroup>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     * 
                     */
                    bool TagFiltersHasBeenSet() const;

                private:

                    /**
                     * <p>第一个任务的开始时间，用于范围查询，时间格式如：2019-09-10 12:13:14。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>最后一个任务的开始时间，用于范围查询，时间格式如：2019-09-10 12:13:14。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>实例ID数组，用于筛选指定实例的任务列表。。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>任务的触发来源，支持的取值包括：&quot;DAILY_INSPECTION&quot; - 实例巡检；&quot;SCHEDULED&quot; - 计划任务；&quot;MANUAL&quot; - 手动触发。</p>
                     */
                    std::vector<std::string> m_sources;
                    bool m_sourcesHasBeenSet;

                    /**
                     * <p>报告的健康等级，支持的取值包括：&quot;HEALTH&quot; - 健康；&quot;SUB_HEALTH&quot; - 亚健康；&quot;RISK&quot; - 危险；&quot;HIGH_RISK&quot; - 高危。</p>
                     */
                    std::string m_healthLevels;
                    bool m_healthLevelsHasBeenSet;

                    /**
                     * <p>任务的状态，支持的取值包括：&quot;created&quot; - 新建；&quot;chosen&quot; - 待执行； &quot;running&quot; - 执行中；&quot;failed&quot; - 失败；&quot;finished&quot; - 已完成。</p>
                     */
                    std::string m_taskStatuses;
                    bool m_taskStatusesHasBeenSet;

                    /**
                     * <p>偏移量，默认0。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回数量，默认20，最大值为100。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>服务产品类型，支持值：&quot;mysql&quot; - 云数据库 MySQL；&quot;cynosdb&quot; - 云数据库 TDSQL-C for MySQL，&quot;redis&quot; - 云数据库 Redis，默认为&quot;mysql&quot;。</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>根据任务所属实例的标签信息进行过滤</p>
                     */
                    std::vector<TagFilterGroup> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBDIAGREPORTTASKSREQUEST_H_
