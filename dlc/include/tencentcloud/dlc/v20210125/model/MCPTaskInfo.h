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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_MCPTASKINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_MCPTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * mcp 请求任务详情的返回
                */
                class MCPTaskInfo : public AbstractModel
                {
                public:
                    MCPTaskInfo();
                    ~MCPTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务 ID</p>
                     * @return Id <p>任务 ID</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>任务 ID</p>
                     * @param _id <p>任务 ID</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>BatchId</p>
                     * @return BatchId <p>BatchId</p>
                     * 
                     */
                    std::string GetBatchId() const;

                    /**
                     * 设置<p>BatchId</p>
                     * @param _batchId <p>BatchId</p>
                     * 
                     */
                    void SetBatchId(const std::string& _batchId);

                    /**
                     * 判断参数 BatchId 是否已赋值
                     * @return BatchId 是否已赋值
                     * 
                     */
                    bool BatchIdHasBeenSet() const;

                    /**
                     * 获取<p>状态</p>
                     * @return State <p>状态</p>
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置<p>状态</p>
                     * @param _state <p>状态</p>
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取<p>任务类型</p>
                     * @return TaskType <p>任务类型</p>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置<p>任务类型</p>
                     * @param _taskType <p>任务类型</p>
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>任务类型</p>
                     * @return TaskKind <p>任务类型</p>
                     * 
                     */
                    std::string GetTaskKind() const;

                    /**
                     * 设置<p>任务类型</p>
                     * @param _taskKind <p>任务类型</p>
                     * 
                     */
                    void SetTaskKind(const std::string& _taskKind);

                    /**
                     * 判断参数 TaskKind 是否已赋值
                     * @return TaskKind 是否已赋值
                     * 
                     */
                    bool TaskKindHasBeenSet() const;

                    /**
                     * 获取<p>引擎详情</p>
                     * @return EngineTypeDetail <p>引擎详情</p>
                     * 
                     */
                    std::string GetEngineTypeDetail() const;

                    /**
                     * 设置<p>引擎详情</p>
                     * @param _engineTypeDetail <p>引擎详情</p>
                     * 
                     */
                    void SetEngineTypeDetail(const std::string& _engineTypeDetail);

                    /**
                     * 判断参数 EngineTypeDetail 是否已赋值
                     * @return EngineTypeDetail 是否已赋值
                     * 
                     */
                    bool EngineTypeDetailHasBeenSet() const;

                    /**
                     * 获取<p>SQL 类型</p>
                     * @return SQLType <p>SQL 类型</p>
                     * 
                     */
                    std::string GetSQLType() const;

                    /**
                     * 设置<p>SQL 类型</p>
                     * @param _sQLType <p>SQL 类型</p>
                     * 
                     */
                    void SetSQLType(const std::string& _sQLType);

                    /**
                     * 判断参数 SQLType 是否已赋值
                     * @return SQLType 是否已赋值
                     * 
                     */
                    bool SQLTypeHasBeenSet() const;

                    /**
                     * 获取<p>SQL</p>
                     * @return SQL <p>SQL</p>
                     * 
                     */
                    std::string GetSQL() const;

                    /**
                     * 设置<p>SQL</p>
                     * @param _sQL <p>SQL</p>
                     * 
                     */
                    void SetSQL(const std::string& _sQL);

                    /**
                     * 判断参数 SQL 是否已赋值
                     * @return SQL 是否已赋值
                     * 
                     */
                    bool SQLHasBeenSet() const;

                    /**
                     * 获取<p>是否截断</p>
                     * @return IsSQLCutOff <p>是否截断</p>
                     * 
                     */
                    bool GetIsSQLCutOff() const;

                    /**
                     * 设置<p>是否截断</p>
                     * @param _isSQLCutOff <p>是否截断</p>
                     * 
                     */
                    void SetIsSQLCutOff(const bool& _isSQLCutOff);

                    /**
                     * 判断参数 IsSQLCutOff 是否已赋值
                     * @return IsSQLCutOff 是否已赋值
                     * 
                     */
                    bool IsSQLCutOffHasBeenSet() const;

                    /**
                     * 获取<p>数据库名称</p>
                     * @return DatabaseName <p>数据库名称</p>
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置<p>数据库名称</p>
                     * @param _databaseName <p>数据库名称</p>
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取<p>引擎 ID</p>
                     * @return DataEngineId <p>引擎 ID</p>
                     * 
                     */
                    std::string GetDataEngineId() const;

                    /**
                     * 设置<p>引擎 ID</p>
                     * @param _dataEngineId <p>引擎 ID</p>
                     * 
                     */
                    void SetDataEngineId(const std::string& _dataEngineId);

                    /**
                     * 判断参数 DataEngineId 是否已赋值
                     * @return DataEngineId 是否已赋值
                     * 
                     */
                    bool DataEngineIdHasBeenSet() const;

                    /**
                     * 获取<p>资源组名称</p>
                     * @return ResourceGroupName <p>资源组名称</p>
                     * 
                     */
                    std::string GetResourceGroupName() const;

                    /**
                     * 设置<p>资源组名称</p>
                     * @param _resourceGroupName <p>资源组名称</p>
                     * 
                     */
                    void SetResourceGroupName(const std::string& _resourceGroupName);

                    /**
                     * 判断参数 ResourceGroupName 是否已赋值
                     * @return ResourceGroupName 是否已赋值
                     * 
                     */
                    bool ResourceGroupNameHasBeenSet() const;

                    /**
                     * 获取<p>JobId</p>
                     * @return SparkJobId <p>JobId</p>
                     * 
                     */
                    std::string GetSparkJobId() const;

                    /**
                     * 设置<p>JobId</p>
                     * @param _sparkJobId <p>JobId</p>
                     * 
                     */
                    void SetSparkJobId(const std::string& _sparkJobId);

                    /**
                     * 判断参数 SparkJobId 是否已赋值
                     * @return SparkJobId 是否已赋值
                     * 
                     */
                    bool SparkJobIdHasBeenSet() const;

                    /**
                     * 获取<p>Job 名称</p>
                     * @return SparkJobName <p>Job 名称</p>
                     * 
                     */
                    std::string GetSparkJobName() const;

                    /**
                     * 设置<p>Job 名称</p>
                     * @param _sparkJobName <p>Job 名称</p>
                     * 
                     */
                    void SetSparkJobName(const std::string& _sparkJobName);

                    /**
                     * 判断参数 SparkJobName 是否已赋值
                     * @return SparkJobName 是否已赋值
                     * 
                     */
                    bool SparkJobNameHasBeenSet() const;

                    /**
                     * 获取<p>操作人 Uin</p>
                     * @return OperateUin <p>操作人 Uin</p>
                     * 
                     */
                    std::string GetOperateUin() const;

                    /**
                     * 设置<p>操作人 Uin</p>
                     * @param _operateUin <p>操作人 Uin</p>
                     * 
                     */
                    void SetOperateUin(const std::string& _operateUin);

                    /**
                     * 判断参数 OperateUin 是否已赋值
                     * @return OperateUin 是否已赋值
                     * 
                     */
                    bool OperateUinHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>开始时间</p>
                     * @return StartTime <p>开始时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间</p>
                     * @param _startTime <p>开始时间</p>
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
                     * 获取<p>结束时间</p>
                     * @return EndTime <p>结束时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间</p>
                     * @param _endTime <p>结束时间</p>
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
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateTime <p>更新时间</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>引擎耗时</p><p>单位：毫秒</p>
                     * @return UsedTime <p>引擎耗时</p><p>单位：毫秒</p>
                     * 
                     */
                    int64_t GetUsedTime() const;

                    /**
                     * 设置<p>引擎耗时</p><p>单位：毫秒</p>
                     * @param _usedTime <p>引擎耗时</p><p>单位：毫秒</p>
                     * 
                     */
                    void SetUsedTime(const int64_t& _usedTime);

                    /**
                     * 判断参数 UsedTime 是否已赋值
                     * @return UsedTime 是否已赋值
                     * 
                     */
                    bool UsedTimeHasBeenSet() const;

                    /**
                     * 获取<p>执行总耗时</p><p>单位：毫秒</p>
                     * @return TotalTime <p>执行总耗时</p><p>单位：毫秒</p>
                     * 
                     */
                    int64_t GetTotalTime() const;

                    /**
                     * 设置<p>执行总耗时</p><p>单位：毫秒</p>
                     * @param _totalTime <p>执行总耗时</p><p>单位：毫秒</p>
                     * 
                     */
                    void SetTotalTime(const int64_t& _totalTime);

                    /**
                     * 判断参数 TotalTime 是否已赋值
                     * @return TotalTime 是否已赋值
                     * 
                     */
                    bool TotalTimeHasBeenSet() const;

                    /**
                     * 获取<p>进度</p>
                     * @return Progress <p>进度</p>
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置<p>进度</p>
                     * @param _progress <p>进度</p>
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取<p>输出信息</p>
                     * @return OutputMessage <p>输出信息</p>
                     * 
                     */
                    std::string GetOutputMessage() const;

                    /**
                     * 设置<p>输出信息</p>
                     * @param _outputMessage <p>输出信息</p>
                     * 
                     */
                    void SetOutputMessage(const std::string& _outputMessage);

                    /**
                     * 判断参数 OutputMessage 是否已赋值
                     * @return OutputMessage 是否已赋值
                     * 
                     */
                    bool OutputMessageHasBeenSet() const;

                    /**
                     * 获取<p>结果集</p>
                     * @return DataSet <p>结果集</p>
                     * 
                     */
                    std::string GetDataSet() const;

                    /**
                     * 设置<p>结果集</p>
                     * @param _dataSet <p>结果集</p>
                     * 
                     */
                    void SetDataSet(const std::string& _dataSet);

                    /**
                     * 判断参数 DataSet 是否已赋值
                     * @return DataSet 是否已赋值
                     * 
                     */
                    bool DataSetHasBeenSet() const;

                private:

                    /**
                     * <p>任务 ID</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>BatchId</p>
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                    /**
                     * <p>状态</p>
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>任务类型</p>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>任务类型</p>
                     */
                    std::string m_taskKind;
                    bool m_taskKindHasBeenSet;

                    /**
                     * <p>引擎详情</p>
                     */
                    std::string m_engineTypeDetail;
                    bool m_engineTypeDetailHasBeenSet;

                    /**
                     * <p>SQL 类型</p>
                     */
                    std::string m_sQLType;
                    bool m_sQLTypeHasBeenSet;

                    /**
                     * <p>SQL</p>
                     */
                    std::string m_sQL;
                    bool m_sQLHasBeenSet;

                    /**
                     * <p>是否截断</p>
                     */
                    bool m_isSQLCutOff;
                    bool m_isSQLCutOffHasBeenSet;

                    /**
                     * <p>数据库名称</p>
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * <p>引擎 ID</p>
                     */
                    std::string m_dataEngineId;
                    bool m_dataEngineIdHasBeenSet;

                    /**
                     * <p>资源组名称</p>
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                    /**
                     * <p>JobId</p>
                     */
                    std::string m_sparkJobId;
                    bool m_sparkJobIdHasBeenSet;

                    /**
                     * <p>Job 名称</p>
                     */
                    std::string m_sparkJobName;
                    bool m_sparkJobNameHasBeenSet;

                    /**
                     * <p>操作人 Uin</p>
                     */
                    std::string m_operateUin;
                    bool m_operateUinHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>开始时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>引擎耗时</p><p>单位：毫秒</p>
                     */
                    int64_t m_usedTime;
                    bool m_usedTimeHasBeenSet;

                    /**
                     * <p>执行总耗时</p><p>单位：毫秒</p>
                     */
                    int64_t m_totalTime;
                    bool m_totalTimeHasBeenSet;

                    /**
                     * <p>进度</p>
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * <p>输出信息</p>
                     */
                    std::string m_outputMessage;
                    bool m_outputMessageHasBeenSet;

                    /**
                     * <p>结果集</p>
                     */
                    std::string m_dataSet;
                    bool m_dataSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_MCPTASKINFO_H_
