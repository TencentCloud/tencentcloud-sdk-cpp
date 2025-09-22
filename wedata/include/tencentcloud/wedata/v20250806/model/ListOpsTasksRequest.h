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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTOPSTASKSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTOPSTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * ListOpsTasks请求参数结构体
                */
                class ListOpsTasksRequest : public AbstractModel
                {
                public:
                    ListOpsTasksRequest();
                    ~ListOpsTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目Id	
                     * @return ProjectId 项目Id	
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id	
                     * @param _projectId 项目Id	
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取分页大小
                     * @return PageSize 分页大小
                     * 
                     */
                    std::string GetPageSize() const;

                    /**
                     * 设置分页大小
                     * @param _pageSize 分页大小
                     * 
                     */
                    void SetPageSize(const std::string& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取分页页码
                     * @return PageNumber 分页页码
                     * 
                     */
                    std::string GetPageNumber() const;

                    /**
                     * 设置分页页码
                     * @param _pageNumber 分页页码
                     * 
                     */
                    void SetPageNumber(const std::string& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取任务类型Id 
 - 20：通用数据同步
 - 25：ETLTaskType
 - 26：ETLTaskType
 - 30：python
 - 31：pyspark
 - 34：HiveSQLTaskType
 - 35：shell
 - 36：SparkSQLTaskType
 - 21：JDBCSQLTaskType
 - 32：DLCTaskType
 - 33：ImpalaTaskType
 - 40：CDWTaskType
 - 41：kettle
 - 46：DLCSparkTaskType
 - 47：TiOne机器学习
 - 48：TrinoTaskType
 - 50：DLCPyspark39：spark
 - 92：mr
 - 38：shell脚本
 - 70：hivesql脚本
 - 1000：自定义业务通用
                     * @return TaskTypeId 任务类型Id 
 - 20：通用数据同步
 - 25：ETLTaskType
 - 26：ETLTaskType
 - 30：python
 - 31：pyspark
 - 34：HiveSQLTaskType
 - 35：shell
 - 36：SparkSQLTaskType
 - 21：JDBCSQLTaskType
 - 32：DLCTaskType
 - 33：ImpalaTaskType
 - 40：CDWTaskType
 - 41：kettle
 - 46：DLCSparkTaskType
 - 47：TiOne机器学习
 - 48：TrinoTaskType
 - 50：DLCPyspark39：spark
 - 92：mr
 - 38：shell脚本
 - 70：hivesql脚本
 - 1000：自定义业务通用
                     * 
                     */
                    std::string GetTaskTypeId() const;

                    /**
                     * 设置任务类型Id 
 - 20：通用数据同步
 - 25：ETLTaskType
 - 26：ETLTaskType
 - 30：python
 - 31：pyspark
 - 34：HiveSQLTaskType
 - 35：shell
 - 36：SparkSQLTaskType
 - 21：JDBCSQLTaskType
 - 32：DLCTaskType
 - 33：ImpalaTaskType
 - 40：CDWTaskType
 - 41：kettle
 - 46：DLCSparkTaskType
 - 47：TiOne机器学习
 - 48：TrinoTaskType
 - 50：DLCPyspark39：spark
 - 92：mr
 - 38：shell脚本
 - 70：hivesql脚本
 - 1000：自定义业务通用
                     * @param _taskTypeId 任务类型Id 
 - 20：通用数据同步
 - 25：ETLTaskType
 - 26：ETLTaskType
 - 30：python
 - 31：pyspark
 - 34：HiveSQLTaskType
 - 35：shell
 - 36：SparkSQLTaskType
 - 21：JDBCSQLTaskType
 - 32：DLCTaskType
 - 33：ImpalaTaskType
 - 40：CDWTaskType
 - 41：kettle
 - 46：DLCSparkTaskType
 - 47：TiOne机器学习
 - 48：TrinoTaskType
 - 50：DLCPyspark39：spark
 - 92：mr
 - 38：shell脚本
 - 70：hivesql脚本
 - 1000：自定义业务通用
                     * 
                     */
                    void SetTaskTypeId(const std::string& _taskTypeId);

                    /**
                     * 判断参数 TaskTypeId 是否已赋值
                     * @return TaskTypeId 是否已赋值
                     * 
                     */
                    bool TaskTypeIdHasBeenSet() const;

                    /**
                     * 获取工作流Id
                     * @return WorkflowId 工作流Id
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置工作流Id
                     * @param _workflowId 工作流Id
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取工作流名称
                     * @return WorkflowName 工作流名称
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置工作流名称
                     * @param _workflowName 工作流名称
                     * 
                     */
                    void SetWorkflowName(const std::string& _workflowName);

                    /**
                     * 判断参数 WorkflowName 是否已赋值
                     * @return WorkflowName 是否已赋值
                     * 
                     */
                    bool WorkflowNameHasBeenSet() const;

                    /**
                     * 获取责任人id
                     * @return OwnerUin 责任人id
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置责任人id
                     * @param _ownerUin 责任人id
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取文件夹Id
                     * @return FolderId 文件夹Id
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置文件夹Id
                     * @param _folderId 文件夹Id
                     * 
                     */
                    void SetFolderId(const std::string& _folderId);

                    /**
                     * 判断参数 FolderId 是否已赋值
                     * @return FolderId 是否已赋值
                     * 
                     */
                    bool FolderIdHasBeenSet() const;

                    /**
                     * 获取数据源id
                     * @return SourceServiceId 数据源id
                     * 
                     */
                    std::string GetSourceServiceId() const;

                    /**
                     * 设置数据源id
                     * @param _sourceServiceId 数据源id
                     * 
                     */
                    void SetSourceServiceId(const std::string& _sourceServiceId);

                    /**
                     * 判断参数 SourceServiceId 是否已赋值
                     * @return SourceServiceId 是否已赋值
                     * 
                     */
                    bool SourceServiceIdHasBeenSet() const;

                    /**
                     * 获取目标数据源id
                     * @return TargetServiceId 目标数据源id
                     * 
                     */
                    std::string GetTargetServiceId() const;

                    /**
                     * 设置目标数据源id
                     * @param _targetServiceId 目标数据源id
                     * 
                     */
                    void SetTargetServiceId(const std::string& _targetServiceId);

                    /**
                     * 判断参数 TargetServiceId 是否已赋值
                     * @return TargetServiceId 是否已赋值
                     * 
                     */
                    bool TargetServiceIdHasBeenSet() const;

                    /**
                     * 获取资源组id
                     * @return ExecutorGroupId 资源组id
                     * 
                     */
                    std::string GetExecutorGroupId() const;

                    /**
                     * 设置资源组id
                     * @param _executorGroupId 资源组id
                     * 
                     */
                    void SetExecutorGroupId(const std::string& _executorGroupId);

                    /**
                     * 判断参数 ExecutorGroupId 是否已赋值
                     * @return ExecutorGroupId 是否已赋值
                     * 
                     */
                    bool ExecutorGroupIdHasBeenSet() const;

                    /**
                     * 获取任务周期类型
* ONEOFF_CYCLE: 一次性
* YEAR_CYCLE: 年
* MONTH_CYCLE: 月
* WEEK_CYCLE: 周
* DAY_CYCLE: 天
* HOUR_CYCLE: 小时
* MINUTE_CYCLE: 分钟
* CRONTAB_CYCLE: crontab表达式类型
                     * @return CycleType 任务周期类型
* ONEOFF_CYCLE: 一次性
* YEAR_CYCLE: 年
* MONTH_CYCLE: 月
* WEEK_CYCLE: 周
* DAY_CYCLE: 天
* HOUR_CYCLE: 小时
* MINUTE_CYCLE: 分钟
* CRONTAB_CYCLE: crontab表达式类型
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置任务周期类型
* ONEOFF_CYCLE: 一次性
* YEAR_CYCLE: 年
* MONTH_CYCLE: 月
* WEEK_CYCLE: 周
* DAY_CYCLE: 天
* HOUR_CYCLE: 小时
* MINUTE_CYCLE: 分钟
* CRONTAB_CYCLE: crontab表达式类型
                     * @param _cycleType 任务周期类型
* ONEOFF_CYCLE: 一次性
* YEAR_CYCLE: 年
* MONTH_CYCLE: 月
* WEEK_CYCLE: 周
* DAY_CYCLE: 天
* HOUR_CYCLE: 小时
* MINUTE_CYCLE: 分钟
* CRONTAB_CYCLE: crontab表达式类型
                     * 
                     */
                    void SetCycleType(const std::string& _cycleType);

                    /**
                     * 判断参数 CycleType 是否已赋值
                     * @return CycleType 是否已赋值
                     * 
                     */
                    bool CycleTypeHasBeenSet() const;

                    /**
                     * 获取任务状态:
- Y: 运行
- F: 停止
- O: 冻结
- T: 停止中
- INVALID: 已失效
                     * @return Status 任务状态:
- Y: 运行
- F: 停止
- O: 冻结
- T: 停止中
- INVALID: 已失效
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态:
- Y: 运行
- F: 停止
- O: 冻结
- T: 停止中
- INVALID: 已失效
                     * @param _status 任务状态:
- Y: 运行
- F: 停止
- O: 冻结
- T: 停止中
- INVALID: 已失效
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取时区, 默认默认UTC+8
                     * @return TimeZone 时区, 默认默认UTC+8
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置时区, 默认默认UTC+8
                     * @param _timeZone 时区, 默认默认UTC+8
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                private:

                    /**
                     * 项目Id	
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 分页大小
                     */
                    std::string m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 分页页码
                     */
                    std::string m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 任务类型Id 
 - 20：通用数据同步
 - 25：ETLTaskType
 - 26：ETLTaskType
 - 30：python
 - 31：pyspark
 - 34：HiveSQLTaskType
 - 35：shell
 - 36：SparkSQLTaskType
 - 21：JDBCSQLTaskType
 - 32：DLCTaskType
 - 33：ImpalaTaskType
 - 40：CDWTaskType
 - 41：kettle
 - 46：DLCSparkTaskType
 - 47：TiOne机器学习
 - 48：TrinoTaskType
 - 50：DLCPyspark39：spark
 - 92：mr
 - 38：shell脚本
 - 70：hivesql脚本
 - 1000：自定义业务通用
                     */
                    std::string m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * 工作流Id
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 工作流名称
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * 责任人id
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 文件夹Id
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * 数据源id
                     */
                    std::string m_sourceServiceId;
                    bool m_sourceServiceIdHasBeenSet;

                    /**
                     * 目标数据源id
                     */
                    std::string m_targetServiceId;
                    bool m_targetServiceIdHasBeenSet;

                    /**
                     * 资源组id
                     */
                    std::string m_executorGroupId;
                    bool m_executorGroupIdHasBeenSet;

                    /**
                     * 任务周期类型
* ONEOFF_CYCLE: 一次性
* YEAR_CYCLE: 年
* MONTH_CYCLE: 月
* WEEK_CYCLE: 周
* DAY_CYCLE: 天
* HOUR_CYCLE: 小时
* MINUTE_CYCLE: 分钟
* CRONTAB_CYCLE: crontab表达式类型
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * 任务状态:
- Y: 运行
- F: 停止
- O: 冻结
- T: 停止中
- INVALID: 已失效
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 时区, 默认默认UTC+8
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTOPSTASKSREQUEST_H_
