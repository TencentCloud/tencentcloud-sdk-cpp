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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKINSTANCESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/OrderField.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTaskInstances请求参数结构体
                */
                class DescribeTaskInstancesRequest : public AbstractModel
                {
                public:
                    DescribeTaskInstancesRequest();
                    ~DescribeTaskInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param ProjectId 项目id
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取页号，默认为1
                     * @return PageNumber 页号，默认为1
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置页号，默认为1
                     * @param PageNumber 页号，默认为1
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取页大小，默认为10，最大不超过200
                     * @return PageSize 页大小，默认为10，最大不超过200
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置页大小，默认为10，最大不超过200
                     * @param PageSize 页大小，默认为10，最大不超过200
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取工作流id列表
                     * @return WorkflowIdList 工作流id列表
                     */
                    std::vector<std::string> GetWorkflowIdList() const;

                    /**
                     * 设置工作流id列表
                     * @param WorkflowIdList 工作流id列表
                     */
                    void SetWorkflowIdList(const std::vector<std::string>& _workflowIdList);

                    /**
                     * 判断参数 WorkflowIdList 是否已赋值
                     * @return WorkflowIdList 是否已赋值
                     */
                    bool WorkflowIdListHasBeenSet() const;

                    /**
                     * 获取工作流名称列表，支持模糊搜索
                     * @return WorkflowNameList 工作流名称列表，支持模糊搜索
                     */
                    std::vector<std::string> GetWorkflowNameList() const;

                    /**
                     * 设置工作流名称列表，支持模糊搜索
                     * @param WorkflowNameList 工作流名称列表，支持模糊搜索
                     */
                    void SetWorkflowNameList(const std::vector<std::string>& _workflowNameList);

                    /**
                     * 判断参数 WorkflowNameList 是否已赋值
                     * @return WorkflowNameList 是否已赋值
                     */
                    bool WorkflowNameListHasBeenSet() const;

                    /**
                     * 获取起始数据时间，格式yyyy-MM-dd HH:mm:ss
                     * @return DateFrom 起始数据时间，格式yyyy-MM-dd HH:mm:ss
                     */
                    std::string GetDateFrom() const;

                    /**
                     * 设置起始数据时间，格式yyyy-MM-dd HH:mm:ss
                     * @param DateFrom 起始数据时间，格式yyyy-MM-dd HH:mm:ss
                     */
                    void SetDateFrom(const std::string& _dateFrom);

                    /**
                     * 判断参数 DateFrom 是否已赋值
                     * @return DateFrom 是否已赋值
                     */
                    bool DateFromHasBeenSet() const;

                    /**
                     * 获取结束数据时间，格式yyyy-MM-dd HH:mm:ss
                     * @return DateTo 结束数据时间，格式yyyy-MM-dd HH:mm:ss
                     */
                    std::string GetDateTo() const;

                    /**
                     * 设置结束数据时间，格式yyyy-MM-dd HH:mm:ss
                     * @param DateTo 结束数据时间，格式yyyy-MM-dd HH:mm:ss
                     */
                    void SetDateTo(const std::string& _dateTo);

                    /**
                     * 判断参数 DateTo 是否已赋值
                     * @return DateTo 是否已赋值
                     */
                    bool DateToHasBeenSet() const;

                    /**
                     * 获取任务id列表
                     * @return TaskIdList 任务id列表
                     */
                    std::vector<std::string> GetTaskIdList() const;

                    /**
                     * 设置任务id列表
                     * @param TaskIdList 任务id列表
                     */
                    void SetTaskIdList(const std::vector<std::string>& _taskIdList);

                    /**
                     * 判断参数 TaskIdList 是否已赋值
                     * @return TaskIdList 是否已赋值
                     */
                    bool TaskIdListHasBeenSet() const;

                    /**
                     * 获取任务名称列表，支持模糊搜索
                     * @return TaskNameList 任务名称列表，支持模糊搜索
                     */
                    std::vector<std::string> GetTaskNameList() const;

                    /**
                     * 设置任务名称列表，支持模糊搜索
                     * @param TaskNameList 任务名称列表，支持模糊搜索
                     */
                    void SetTaskNameList(const std::vector<std::string>& _taskNameList);

                    /**
                     * 判断参数 TaskNameList 是否已赋值
                     * @return TaskNameList 是否已赋值
                     */
                    bool TaskNameListHasBeenSet() const;

                    /**
                     * 获取责任人名称列表
                     * @return InChargeList 责任人名称列表
                     */
                    std::vector<std::string> GetInChargeList() const;

                    /**
                     * 设置责任人名称列表
                     * @param InChargeList 责任人名称列表
                     */
                    void SetInChargeList(const std::vector<std::string>& _inChargeList);

                    /**
                     * 判断参数 InChargeList 是否已赋值
                     * @return InChargeList 是否已赋值
                     */
                    bool InChargeListHasBeenSet() const;

                    /**
                     * 获取任务类型码列表，26离线同步，30Python，31PySpark，32DLC，33Impala，34Hive SQL，35Shell，36Spark SQL，39Spark，40CDW PG，92MapReduce
                     * @return TaskTypeIdList 任务类型码列表，26离线同步，30Python，31PySpark，32DLC，33Impala，34Hive SQL，35Shell，36Spark SQL，39Spark，40CDW PG，92MapReduce
                     */
                    std::vector<int64_t> GetTaskTypeIdList() const;

                    /**
                     * 设置任务类型码列表，26离线同步，30Python，31PySpark，32DLC，33Impala，34Hive SQL，35Shell，36Spark SQL，39Spark，40CDW PG，92MapReduce
                     * @param TaskTypeIdList 任务类型码列表，26离线同步，30Python，31PySpark，32DLC，33Impala，34Hive SQL，35Shell，36Spark SQL，39Spark，40CDW PG，92MapReduce
                     */
                    void SetTaskTypeIdList(const std::vector<int64_t>& _taskTypeIdList);

                    /**
                     * 判断参数 TaskTypeIdList 是否已赋值
                     * @return TaskTypeIdList 是否已赋值
                     */
                    bool TaskTypeIdListHasBeenSet() const;

                    /**
                     * 获取实例状态列表，0等待事件，1等待上游，2等待运行，3运行中，4正在终止，5失败重试，6失败，7成功
                     * @return StateList 实例状态列表，0等待事件，1等待上游，2等待运行，3运行中，4正在终止，5失败重试，6失败，7成功
                     */
                    std::vector<std::string> GetStateList() const;

                    /**
                     * 设置实例状态列表，0等待事件，1等待上游，2等待运行，3运行中，4正在终止，5失败重试，6失败，7成功
                     * @param StateList 实例状态列表，0等待事件，1等待上游，2等待运行，3运行中，4正在终止，5失败重试，6失败，7成功
                     */
                    void SetStateList(const std::vector<std::string>& _stateList);

                    /**
                     * 判断参数 StateList 是否已赋值
                     * @return StateList 是否已赋值
                     */
                    bool StateListHasBeenSet() const;

                    /**
                     * 获取周期类型列表，I分钟，H小时，D天，W周，M月，Y年，O一次性，C crontab
                     * @return TaskCycleUnitList 周期类型列表，I分钟，H小时，D天，W周，M月，Y年，O一次性，C crontab
                     */
                    std::vector<std::string> GetTaskCycleUnitList() const;

                    /**
                     * 设置周期类型列表，I分钟，H小时，D天，W周，M月，Y年，O一次性，C crontab
                     * @param TaskCycleUnitList 周期类型列表，I分钟，H小时，D天，W周，M月，Y年，O一次性，C crontab
                     */
                    void SetTaskCycleUnitList(const std::vector<std::string>& _taskCycleUnitList);

                    /**
                     * 判断参数 TaskCycleUnitList 是否已赋值
                     * @return TaskCycleUnitList 是否已赋值
                     */
                    bool TaskCycleUnitListHasBeenSet() const;

                    /**
                     * 获取实例类型，0补录实例，1周期实例，2非周期实例
                     * @return InstanceType 实例类型，0补录实例，1周期实例，2非周期实例
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置实例类型，0补录实例，1周期实例，2非周期实例
                     * @param InstanceType 实例类型，0补录实例，1周期实例，2非周期实例
                     */
                    void SetInstanceType(const int64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取排序字段信息列表，ScheduleDateTime / CostTime / StartTime / EndTime
                     * @return OrderFields 排序字段信息列表，ScheduleDateTime / CostTime / StartTime / EndTime
                     */
                    std::vector<OrderField> GetOrderFields() const;

                    /**
                     * 设置排序字段信息列表，ScheduleDateTime / CostTime / StartTime / EndTime
                     * @param OrderFields 排序字段信息列表，ScheduleDateTime / CostTime / StartTime / EndTime
                     */
                    void SetOrderFields(const std::vector<OrderField>& _orderFields);

                    /**
                     * 判断参数 OrderFields 是否已赋值
                     * @return OrderFields 是否已赋值
                     */
                    bool OrderFieldsHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 页号，默认为1
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 页大小，默认为10，最大不超过200
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 工作流id列表
                     */
                    std::vector<std::string> m_workflowIdList;
                    bool m_workflowIdListHasBeenSet;

                    /**
                     * 工作流名称列表，支持模糊搜索
                     */
                    std::vector<std::string> m_workflowNameList;
                    bool m_workflowNameListHasBeenSet;

                    /**
                     * 起始数据时间，格式yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_dateFrom;
                    bool m_dateFromHasBeenSet;

                    /**
                     * 结束数据时间，格式yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_dateTo;
                    bool m_dateToHasBeenSet;

                    /**
                     * 任务id列表
                     */
                    std::vector<std::string> m_taskIdList;
                    bool m_taskIdListHasBeenSet;

                    /**
                     * 任务名称列表，支持模糊搜索
                     */
                    std::vector<std::string> m_taskNameList;
                    bool m_taskNameListHasBeenSet;

                    /**
                     * 责任人名称列表
                     */
                    std::vector<std::string> m_inChargeList;
                    bool m_inChargeListHasBeenSet;

                    /**
                     * 任务类型码列表，26离线同步，30Python，31PySpark，32DLC，33Impala，34Hive SQL，35Shell，36Spark SQL，39Spark，40CDW PG，92MapReduce
                     */
                    std::vector<int64_t> m_taskTypeIdList;
                    bool m_taskTypeIdListHasBeenSet;

                    /**
                     * 实例状态列表，0等待事件，1等待上游，2等待运行，3运行中，4正在终止，5失败重试，6失败，7成功
                     */
                    std::vector<std::string> m_stateList;
                    bool m_stateListHasBeenSet;

                    /**
                     * 周期类型列表，I分钟，H小时，D天，W周，M月，Y年，O一次性，C crontab
                     */
                    std::vector<std::string> m_taskCycleUnitList;
                    bool m_taskCycleUnitListHasBeenSet;

                    /**
                     * 实例类型，0补录实例，1周期实例，2非周期实例
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 排序字段信息列表，ScheduleDateTime / CostTime / StartTime / EndTime
                     */
                    std::vector<OrderField> m_orderFields;
                    bool m_orderFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKINSTANCESREQUEST_H_
