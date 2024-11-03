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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEEVENTSREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEEVENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeInstanceEvents请求参数结构体
                */
                class DescribeInstanceEventsRequest : public AbstractModel
                {
                public:
                    DescribeInstanceEventsRequest();
                    ~DescribeInstanceEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取配置查询事件执行计划的起始日期，查询日期最大跨度30天。
                     * @return ExecutionStartDate 配置查询事件执行计划的起始日期，查询日期最大跨度30天。
                     * 
                     */
                    std::string GetExecutionStartDate() const;

                    /**
                     * 设置配置查询事件执行计划的起始日期，查询日期最大跨度30天。
                     * @param _executionStartDate 配置查询事件执行计划的起始日期，查询日期最大跨度30天。
                     * 
                     */
                    void SetExecutionStartDate(const std::string& _executionStartDate);

                    /**
                     * 判断参数 ExecutionStartDate 是否已赋值
                     * @return ExecutionStartDate 是否已赋值
                     * 
                     */
                    bool ExecutionStartDateHasBeenSet() const;

                    /**
                     * 获取配置查询事件执行计划的结束日期，查询日期最大跨度30天。
                     * @return ExecutionEndDate 配置查询事件执行计划的结束日期，查询日期最大跨度30天。
                     * 
                     */
                    std::string GetExecutionEndDate() const;

                    /**
                     * 设置配置查询事件执行计划的结束日期，查询日期最大跨度30天。
                     * @param _executionEndDate 配置查询事件执行计划的结束日期，查询日期最大跨度30天。
                     * 
                     */
                    void SetExecutionEndDate(const std::string& _executionEndDate);

                    /**
                     * 判断参数 ExecutionEndDate 是否已赋值
                     * @return ExecutionEndDate 是否已赋值
                     * 
                     */
                    bool ExecutionEndDateHasBeenSet() const;

                    /**
                     * 获取指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
                     * @return InstanceId 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
                     * @param _instanceId 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
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
                     * 获取输出每页显示事件的数量，默认：10，最大100。
                     * @return PageSize 输出每页显示事件的数量，默认：10，最大100。
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置输出每页显示事件的数量，默认：10，最大100。
                     * @param _pageSize 输出每页显示事件的数量，默认：10，最大100。
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
                     * 获取配置查询事件的输出页码，即支持根据PageNo（页码）与 PageSize （每页输出数量）查询某一页的事件。默认：1。
                     * @return PageNo 配置查询事件的输出页码，即支持根据PageNo（页码）与 PageSize （每页输出数量）查询某一页的事件。默认：1。
                     * 
                     */
                    int64_t GetPageNo() const;

                    /**
                     * 设置配置查询事件的输出页码，即支持根据PageNo（页码）与 PageSize （每页输出数量）查询某一页的事件。默认：1。
                     * @param _pageNo 配置查询事件的输出页码，即支持根据PageNo（页码）与 PageSize （每页输出数量）查询某一页的事件。默认：1。
                     * 
                     */
                    void SetPageNo(const int64_t& _pageNo);

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     * 
                     */
                    bool PageNoHasBeenSet() const;

                    /**
                     * 获取事件当前状态。
- Waiting：未到达执行日期或不在维护时间窗内的事件。
- Running：在维护时间窗内，正在执行维护的事件。
- Finished：已全部完成维护的事件。
- Canceled：已取消执行的事件。
                     * @return Status 事件当前状态。
- Waiting：未到达执行日期或不在维护时间窗内的事件。
- Running：在维护时间窗内，正在执行维护的事件。
- Finished：已全部完成维护的事件。
- Canceled：已取消执行的事件。
                     * 
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置事件当前状态。
- Waiting：未到达执行日期或不在维护时间窗内的事件。
- Running：在维护时间窗内，正在执行维护的事件。
- Finished：已全部完成维护的事件。
- Canceled：已取消执行的事件。
                     * @param _status 事件当前状态。
- Waiting：未到达执行日期或不在维护时间窗内的事件。
- Running：在维护时间窗内，正在执行维护的事件。
- Finished：已全部完成维护的事件。
- Canceled：已取消执行的事件。
                     * 
                     */
                    void SetStatus(const std::vector<std::string>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取事件类型，当前仅支持配置实例迁移、资源腾挪、机房裁撤相关的运维操作。该参数仅支持配置为 **InstanceMigration**。
                     * @return EventTypes 事件类型，当前仅支持配置实例迁移、资源腾挪、机房裁撤相关的运维操作。该参数仅支持配置为 **InstanceMigration**。
                     * 
                     */
                    std::vector<std::string> GetEventTypes() const;

                    /**
                     * 设置事件类型，当前仅支持配置实例迁移、资源腾挪、机房裁撤相关的运维操作。该参数仅支持配置为 **InstanceMigration**。
                     * @param _eventTypes 事件类型，当前仅支持配置实例迁移、资源腾挪、机房裁撤相关的运维操作。该参数仅支持配置为 **InstanceMigration**。
                     * 
                     */
                    void SetEventTypes(const std::vector<std::string>& _eventTypes);

                    /**
                     * 判断参数 EventTypes 是否已赋值
                     * @return EventTypes 是否已赋值
                     * 
                     */
                    bool EventTypesHasBeenSet() const;

                    /**
                     * 获取配置查询事件等级。事件等级根据其影响严重程度和紧急程度进行分级，由重至轻依次为关键、重要、中等、一般。
- Critical：关键
- High：重要
- Middle：中等
- Low：一般
                     * @return Grades 配置查询事件等级。事件等级根据其影响严重程度和紧急程度进行分级，由重至轻依次为关键、重要、中等、一般。
- Critical：关键
- High：重要
- Middle：中等
- Low：一般
                     * 
                     */
                    std::vector<std::string> GetGrades() const;

                    /**
                     * 设置配置查询事件等级。事件等级根据其影响严重程度和紧急程度进行分级，由重至轻依次为关键、重要、中等、一般。
- Critical：关键
- High：重要
- Middle：中等
- Low：一般
                     * @param _grades 配置查询事件等级。事件等级根据其影响严重程度和紧急程度进行分级，由重至轻依次为关键、重要、中等、一般。
- Critical：关键
- High：重要
- Middle：中等
- Low：一般
                     * 
                     */
                    void SetGrades(const std::vector<std::string>& _grades);

                    /**
                     * 判断参数 Grades 是否已赋值
                     * @return Grades 是否已赋值
                     * 
                     */
                    bool GradesHasBeenSet() const;

                private:

                    /**
                     * 配置查询事件执行计划的起始日期，查询日期最大跨度30天。
                     */
                    std::string m_executionStartDate;
                    bool m_executionStartDateHasBeenSet;

                    /**
                     * 配置查询事件执行计划的结束日期，查询日期最大跨度30天。
                     */
                    std::string m_executionEndDate;
                    bool m_executionEndDateHasBeenSet;

                    /**
                     * 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 输出每页显示事件的数量，默认：10，最大100。
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 配置查询事件的输出页码，即支持根据PageNo（页码）与 PageSize （每页输出数量）查询某一页的事件。默认：1。
                     */
                    int64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * 事件当前状态。
- Waiting：未到达执行日期或不在维护时间窗内的事件。
- Running：在维护时间窗内，正在执行维护的事件。
- Finished：已全部完成维护的事件。
- Canceled：已取消执行的事件。
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 事件类型，当前仅支持配置实例迁移、资源腾挪、机房裁撤相关的运维操作。该参数仅支持配置为 **InstanceMigration**。
                     */
                    std::vector<std::string> m_eventTypes;
                    bool m_eventTypesHasBeenSet;

                    /**
                     * 配置查询事件等级。事件等级根据其影响严重程度和紧急程度进行分级，由重至轻依次为关键、重要、中等、一般。
- Critical：关键
- High：重要
- Middle：中等
- Low：一般
                     */
                    std::vector<std::string> m_grades;
                    bool m_gradesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEEVENTSREQUEST_H_
