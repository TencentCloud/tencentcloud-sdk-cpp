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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_TASKFULLRESPINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_TASKFULLRESPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/CommonMetrics.h>
#include <tencentcloud/dlc/v20210125/model/SparkMonitorMetrics.h>
#include <tencentcloud/dlc/v20210125/model/PrestoMonitorMetrics.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 任务实例。
                */
                class TaskFullRespInfo : public AbstractModel
                {
                public:
                    TaskFullRespInfo();
                    ~TaskFullRespInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务所属Database的名称。</p>
                     * @return DatabaseName <p>任务所属Database的名称。</p>
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置<p>任务所属Database的名称。</p>
                     * @param _databaseName <p>任务所属Database的名称。</p>
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
                     * 获取<p>任务数据量。</p>
                     * @return DataAmount <p>任务数据量。</p>
                     * 
                     */
                    int64_t GetDataAmount() const;

                    /**
                     * 设置<p>任务数据量。</p>
                     * @param _dataAmount <p>任务数据量。</p>
                     * 
                     */
                    void SetDataAmount(const int64_t& _dataAmount);

                    /**
                     * 判断参数 DataAmount 是否已赋值
                     * @return DataAmount 是否已赋值
                     * 
                     */
                    bool DataAmountHasBeenSet() const;

                    /**
                     * 获取<p>任务Id。</p>
                     * @return Id <p>任务Id。</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>任务Id。</p>
                     * @param _id <p>任务Id。</p>
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
                     * 获取<p>计算耗时，单位： ms</p>
                     * @return UsedTime <p>计算耗时，单位： ms</p>
                     * 
                     */
                    int64_t GetUsedTime() const;

                    /**
                     * 设置<p>计算耗时，单位： ms</p>
                     * @param _usedTime <p>计算耗时，单位： ms</p>
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
                     * 获取<p>任务输出路径。</p>
                     * @return OutputPath <p>任务输出路径。</p>
                     * 
                     */
                    std::string GetOutputPath() const;

                    /**
                     * 设置<p>任务输出路径。</p>
                     * @param _outputPath <p>任务输出路径。</p>
                     * 
                     */
                    void SetOutputPath(const std::string& _outputPath);

                    /**
                     * 判断参数 OutputPath 是否已赋值
                     * @return OutputPath 是否已赋值
                     * 
                     */
                    bool OutputPathHasBeenSet() const;

                    /**
                     * 获取<p>任务创建时间。</p>
                     * @return CreateTime <p>任务创建时间。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>任务创建时间。</p>
                     * @param _createTime <p>任务创建时间。</p>
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
                     * 获取<p>任务状态：0 初始化， 1 执行中， 2 执行成功，3 数据写入中，4 排队中。-1 执行失败，-3 已取消。</p>
                     * @return State <p>任务状态：0 初始化， 1 执行中， 2 执行成功，3 数据写入中，4 排队中。-1 执行失败，-3 已取消。</p>
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置<p>任务状态：0 初始化， 1 执行中， 2 执行成功，3 数据写入中，4 排队中。-1 执行失败，-3 已取消。</p>
                     * @param _state <p>任务状态：0 初始化， 1 执行中， 2 执行成功，3 数据写入中，4 排队中。-1 执行失败，-3 已取消。</p>
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
                     * 获取<p>任务SQL类型，DDL|DML等</p>
                     * @return SQLType <p>任务SQL类型，DDL|DML等</p>
                     * 
                     */
                    std::string GetSQLType() const;

                    /**
                     * 设置<p>任务SQL类型，DDL|DML等</p>
                     * @param _sQLType <p>任务SQL类型，DDL|DML等</p>
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
                     * 获取<p>任务SQL语句</p>
                     * @return SQL <p>任务SQL语句</p>
                     * 
                     */
                    std::string GetSQL() const;

                    /**
                     * 设置<p>任务SQL语句</p>
                     * @param _sQL <p>任务SQL语句</p>
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
                     * 获取<p>结果是否过期。</p>
                     * @return ResultExpired <p>结果是否过期。</p>
                     * 
                     */
                    bool GetResultExpired() const;

                    /**
                     * 设置<p>结果是否过期。</p>
                     * @param _resultExpired <p>结果是否过期。</p>
                     * 
                     */
                    void SetResultExpired(const bool& _resultExpired);

                    /**
                     * 判断参数 ResultExpired 是否已赋值
                     * @return ResultExpired 是否已赋值
                     * 
                     */
                    bool ResultExpiredHasBeenSet() const;

                    /**
                     * 获取<p>数据影响统计信息。</p>
                     * @return RowAffectInfo <p>数据影响统计信息。</p>
                     * 
                     */
                    std::string GetRowAffectInfo() const;

                    /**
                     * 设置<p>数据影响统计信息。</p>
                     * @param _rowAffectInfo <p>数据影响统计信息。</p>
                     * 
                     */
                    void SetRowAffectInfo(const std::string& _rowAffectInfo);

                    /**
                     * 判断参数 RowAffectInfo 是否已赋值
                     * @return RowAffectInfo 是否已赋值
                     * 
                     */
                    bool RowAffectInfoHasBeenSet() const;

                    /**
                     * 获取<p>任务结果数据表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataSet <p>任务结果数据表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataSet() const;

                    /**
                     * 设置<p>任务结果数据表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataSet <p>任务结果数据表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataSet(const std::string& _dataSet);

                    /**
                     * 判断参数 DataSet 是否已赋值
                     * @return DataSet 是否已赋值
                     * 
                     */
                    bool DataSetHasBeenSet() const;

                    /**
                     * 获取<p>失败信息, 例如：errorMessage。该字段已废弃。</p>
                     * @return Error <p>失败信息, 例如：errorMessage。该字段已废弃。</p>
                     * 
                     */
                    std::string GetError() const;

                    /**
                     * 设置<p>失败信息, 例如：errorMessage。该字段已废弃。</p>
                     * @param _error <p>失败信息, 例如：errorMessage。该字段已废弃。</p>
                     * 
                     */
                    void SetError(const std::string& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     * 
                     */
                    bool ErrorHasBeenSet() const;

                    /**
                     * 获取<p>任务执行进度num/100(%)</p>
                     * @return Percentage <p>任务执行进度num/100(%)</p>
                     * 
                     */
                    int64_t GetPercentage() const;

                    /**
                     * 设置<p>任务执行进度num/100(%)</p>
                     * @param _percentage <p>任务执行进度num/100(%)</p>
                     * 
                     */
                    void SetPercentage(const int64_t& _percentage);

                    /**
                     * 判断参数 Percentage 是否已赋值
                     * @return Percentage 是否已赋值
                     * 
                     */
                    bool PercentageHasBeenSet() const;

                    /**
                     * 获取<p>任务执行输出信息。</p>
                     * @return OutputMessage <p>任务执行输出信息。</p>
                     * 
                     */
                    std::string GetOutputMessage() const;

                    /**
                     * 设置<p>任务执行输出信息。</p>
                     * @param _outputMessage <p>任务执行输出信息。</p>
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
                     * 获取<p>执行SQL的引擎类型</p>
                     * @return TaskType <p>执行SQL的引擎类型</p>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置<p>执行SQL的引擎类型</p>
                     * @param _taskType <p>执行SQL的引擎类型</p>
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
                     * 获取<p>任务进度明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProgressDetail <p>任务进度明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProgressDetail() const;

                    /**
                     * 设置<p>任务进度明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _progressDetail <p>任务进度明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProgressDetail(const std::string& _progressDetail);

                    /**
                     * 判断参数 ProgressDetail 是否已赋值
                     * @return ProgressDetail 是否已赋值
                     * 
                     */
                    bool ProgressDetailHasBeenSet() const;

                    /**
                     * 获取<p>任务结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime <p>任务结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>任务结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime <p>任务结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>计算资源id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataEngineId <p>计算资源id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataEngineId() const;

                    /**
                     * 设置<p>计算资源id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataEngineId <p>计算资源id</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>执行sql的子uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperateUin <p>执行sql的子uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOperateUin() const;

                    /**
                     * 设置<p>执行sql的子uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operateUin <p>执行sql的子uin</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>计算资源名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataEngineName <p>计算资源名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 设置<p>计算资源名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataEngineName <p>计算资源名字</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>导入类型是本地导入还是cos</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputType <p>导入类型是本地导入还是cos</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInputType() const;

                    /**
                     * 设置<p>导入类型是本地导入还是cos</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputType <p>导入类型是本地导入还是cos</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInputType(const std::string& _inputType);

                    /**
                     * 判断参数 InputType 是否已赋值
                     * @return InputType 是否已赋值
                     * 
                     */
                    bool InputTypeHasBeenSet() const;

                    /**
                     * 获取<p>导入配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputConf <p>导入配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInputConf() const;

                    /**
                     * 设置<p>导入配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputConf <p>导入配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInputConf(const std::string& _inputConf);

                    /**
                     * 判断参数 InputConf 是否已赋值
                     * @return InputConf 是否已赋值
                     * 
                     */
                    bool InputConfHasBeenSet() const;

                    /**
                     * 获取<p>数据条数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataNumber <p>数据条数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDataNumber() const;

                    /**
                     * 设置<p>数据条数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataNumber <p>数据条数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataNumber(const int64_t& _dataNumber);

                    /**
                     * 判断参数 DataNumber 是否已赋值
                     * @return DataNumber 是否已赋值
                     * 
                     */
                    bool DataNumberHasBeenSet() const;

                    /**
                     * 获取<p>查询数据能不能下载</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CanDownload <p>查询数据能不能下载</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetCanDownload() const;

                    /**
                     * 设置<p>查询数据能不能下载</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _canDownload <p>查询数据能不能下载</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCanDownload(const bool& _canDownload);

                    /**
                     * 判断参数 CanDownload 是否已赋值
                     * @return CanDownload 是否已赋值
                     * 
                     */
                    bool CanDownloadHasBeenSet() const;

                    /**
                     * 获取<p>用户别名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserAlias <p>用户别名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserAlias() const;

                    /**
                     * 设置<p>用户别名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userAlias <p>用户别名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserAlias(const std::string& _userAlias);

                    /**
                     * 判断参数 UserAlias 是否已赋值
                     * @return UserAlias 是否已赋值
                     * 
                     */
                    bool UserAliasHasBeenSet() const;

                    /**
                     * 获取<p>spark应用作业名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SparkJobName <p>spark应用作业名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSparkJobName() const;

                    /**
                     * 设置<p>spark应用作业名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sparkJobName <p>spark应用作业名</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>spark应用作业Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SparkJobId <p>spark应用作业Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSparkJobId() const;

                    /**
                     * 设置<p>spark应用作业Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sparkJobId <p>spark应用作业Id</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>spark应用入口jar文件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SparkJobFile <p>spark应用入口jar文件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSparkJobFile() const;

                    /**
                     * 设置<p>spark应用入口jar文件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sparkJobFile <p>spark应用入口jar文件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSparkJobFile(const std::string& _sparkJobFile);

                    /**
                     * 判断参数 SparkJobFile 是否已赋值
                     * @return SparkJobFile 是否已赋值
                     * 
                     */
                    bool SparkJobFileHasBeenSet() const;

                    /**
                     * 获取<p>spark ui url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UiUrl <p>spark ui url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUiUrl() const;

                    /**
                     * 设置<p>spark ui url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uiUrl <p>spark ui url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUiUrl(const std::string& _uiUrl);

                    /**
                     * 判断参数 UiUrl 是否已赋值
                     * @return UiUrl 是否已赋值
                     * 
                     */
                    bool UiUrlHasBeenSet() const;

                    /**
                     * 获取<p>任务耗时，单位： ms</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalTime <p>任务耗时，单位： ms</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalTime() const;

                    /**
                     * 设置<p>任务耗时，单位： ms</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalTime <p>任务耗时，单位： ms</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>spark app job执行task的程序入口参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CmdArgs <p>spark app job执行task的程序入口参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCmdArgs() const;

                    /**
                     * 设置<p>spark app job执行task的程序入口参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cmdArgs <p>spark app job执行task的程序入口参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCmdArgs(const std::string& _cmdArgs);

                    /**
                     * 判断参数 CmdArgs 是否已赋值
                     * @return CmdArgs 是否已赋值
                     * 
                     */
                    bool CmdArgsHasBeenSet() const;

                    /**
                     * 获取<p>集群镜像大版本名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageVersion <p>集群镜像大版本名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImageVersion() const;

                    /**
                     * 设置<p>集群镜像大版本名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageVersion <p>集群镜像大版本名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageVersion(const std::string& _imageVersion);

                    /**
                     * 判断参数 ImageVersion 是否已赋值
                     * @return ImageVersion 是否已赋值
                     * 
                     */
                    bool ImageVersionHasBeenSet() const;

                    /**
                     * 获取<p>driver规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DriverSize <p>driver规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDriverSize() const;

                    /**
                     * 设置<p>driver规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _driverSize <p>driver规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDriverSize(const std::string& _driverSize);

                    /**
                     * 判断参数 DriverSize 是否已赋值
                     * @return DriverSize 是否已赋值
                     * 
                     */
                    bool DriverSizeHasBeenSet() const;

                    /**
                     * 获取<p>executor规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutorSize <p>executor规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutorSize() const;

                    /**
                     * 设置<p>executor规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executorSize <p>executor规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutorSize(const std::string& _executorSize);

                    /**
                     * 判断参数 ExecutorSize 是否已赋值
                     * @return ExecutorSize 是否已赋值
                     * 
                     */
                    bool ExecutorSizeHasBeenSet() const;

                    /**
                     * 获取<p>指定executor数量，最小值为1，最大值小于集群规格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutorNums <p>指定executor数量，最小值为1，最大值小于集群规格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetExecutorNums() const;

                    /**
                     * 设置<p>指定executor数量，最小值为1，最大值小于集群规格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executorNums <p>指定executor数量，最小值为1，最大值小于集群规格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutorNums(const uint64_t& _executorNums);

                    /**
                     * 判断参数 ExecutorNums 是否已赋值
                     * @return ExecutorNums 是否已赋值
                     * 
                     */
                    bool ExecutorNumsHasBeenSet() const;

                    /**
                     * 获取<p>指定executor max数量（动态配置场景下），最小值为1，最大值小于集群规格（当ExecutorMaxNumbers小于ExecutorNums时，改值设定为ExecutorNums）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutorMaxNumbers <p>指定executor max数量（动态配置场景下），最小值为1，最大值小于集群规格（当ExecutorMaxNumbers小于ExecutorNums时，改值设定为ExecutorNums）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetExecutorMaxNumbers() const;

                    /**
                     * 设置<p>指定executor max数量（动态配置场景下），最小值为1，最大值小于集群规格（当ExecutorMaxNumbers小于ExecutorNums时，改值设定为ExecutorNums）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executorMaxNumbers <p>指定executor max数量（动态配置场景下），最小值为1，最大值小于集群规格（当ExecutorMaxNumbers小于ExecutorNums时，改值设定为ExecutorNums）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutorMaxNumbers(const uint64_t& _executorMaxNumbers);

                    /**
                     * 判断参数 ExecutorMaxNumbers 是否已赋值
                     * @return ExecutorMaxNumbers 是否已赋值
                     * 
                     */
                    bool ExecutorMaxNumbersHasBeenSet() const;

                    /**
                     * 获取<p>任务公共指标数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CommonMetrics <p>任务公共指标数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CommonMetrics GetCommonMetrics() const;

                    /**
                     * 设置<p>任务公共指标数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _commonMetrics <p>任务公共指标数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCommonMetrics(const CommonMetrics& _commonMetrics);

                    /**
                     * 判断参数 CommonMetrics 是否已赋值
                     * @return CommonMetrics 是否已赋值
                     * 
                     */
                    bool CommonMetricsHasBeenSet() const;

                    /**
                     * 获取<p>spark任务指标数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SparkMonitorMetrics <p>spark任务指标数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SparkMonitorMetrics GetSparkMonitorMetrics() const;

                    /**
                     * 设置<p>spark任务指标数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sparkMonitorMetrics <p>spark任务指标数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSparkMonitorMetrics(const SparkMonitorMetrics& _sparkMonitorMetrics);

                    /**
                     * 判断参数 SparkMonitorMetrics 是否已赋值
                     * @return SparkMonitorMetrics 是否已赋值
                     * 
                     */
                    bool SparkMonitorMetricsHasBeenSet() const;

                    /**
                     * 获取<p>presto任务指标数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrestoMonitorMetrics <p>presto任务指标数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PrestoMonitorMetrics GetPrestoMonitorMetrics() const;

                    /**
                     * 设置<p>presto任务指标数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _prestoMonitorMetrics <p>presto任务指标数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrestoMonitorMetrics(const PrestoMonitorMetrics& _prestoMonitorMetrics);

                    /**
                     * 判断参数 PrestoMonitorMetrics 是否已赋值
                     * @return PrestoMonitorMetrics 是否已赋值
                     * 
                     */
                    bool PrestoMonitorMetricsHasBeenSet() const;

                    /**
                     * 获取<p>结果文件格式：默认为csv</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultFormat <p>结果文件格式：默认为csv</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResultFormat() const;

                    /**
                     * 设置<p>结果文件格式：默认为csv</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resultFormat <p>结果文件格式：默认为csv</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResultFormat(const std::string& _resultFormat);

                    /**
                     * 判断参数 ResultFormat 是否已赋值
                     * @return ResultFormat 是否已赋值
                     * 
                     */
                    bool ResultFormatHasBeenSet() const;

                    /**
                     * 获取<p>引擎类型，SparkSQL：SparkSQL 引擎；SparkBatch：Spark作业引擎；PrestoSQL：Presto引擎</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineTypeDetail <p>引擎类型，SparkSQL：SparkSQL 引擎；SparkBatch：Spark作业引擎；PrestoSQL：Presto引擎</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngineTypeDetail() const;

                    /**
                     * 设置<p>引擎类型，SparkSQL：SparkSQL 引擎；SparkBatch：Spark作业引擎；PrestoSQL：Presto引擎</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineTypeDetail <p>引擎类型，SparkSQL：SparkSQL 引擎；SparkBatch：Spark作业引擎；PrestoSQL：Presto引擎</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>spark引擎资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupName <p>spark引擎资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupName() const;

                    /**
                     * 设置<p>spark引擎资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupName <p>spark引擎资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>任务来源信息,如thirdPartyApi,dataExploration, sparkAppTask等</p>
                     * @return Source <p>任务来源信息,如thirdPartyApi,dataExploration, sparkAppTask等</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>任务来源信息,如thirdPartyApi,dataExploration, sparkAppTask等</p>
                     * @param _source <p>任务来源信息,如thirdPartyApi,dataExploration, sparkAppTask等</p>
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>子渠道信息，一般由第三方调用定义</p>
                     * @return SourceExtra <p>子渠道信息，一般由第三方调用定义</p>
                     * 
                     */
                    std::string GetSourceExtra() const;

                    /**
                     * 设置<p>子渠道信息，一般由第三方调用定义</p>
                     * @param _sourceExtra <p>子渠道信息，一般由第三方调用定义</p>
                     * 
                     */
                    void SetSourceExtra(const std::string& _sourceExtra);

                    /**
                     * 判断参数 SourceExtra 是否已赋值
                     * @return SourceExtra 是否已赋值
                     * 
                     */
                    bool SourceExtraHasBeenSet() const;

                    /**
                     * 获取<p>创建人uin</p>
                     * @return CreatorUin <p>创建人uin</p>
                     * 
                     */
                    std::string GetCreatorUin() const;

                    /**
                     * 设置<p>创建人uin</p>
                     * @param _creatorUin <p>创建人uin</p>
                     * 
                     */
                    void SetCreatorUin(const std::string& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     * 
                     */
                    bool CreatorUinHasBeenSet() const;

                    /**
                     * 获取<p>创建人名字</p>
                     * @return CreatorAlias <p>创建人名字</p>
                     * 
                     */
                    std::string GetCreatorAlias() const;

                    /**
                     * 设置<p>创建人名字</p>
                     * @param _creatorAlias <p>创建人名字</p>
                     * 
                     */
                    void SetCreatorAlias(const std::string& _creatorAlias);

                    /**
                     * 判断参数 CreatorAlias 是否已赋值
                     * @return CreatorAlias 是否已赋值
                     * 
                     */
                    bool CreatorAliasHasBeenSet() const;

                    /**
                     * 获取<p>引擎参数</p>
                     * @return CustomizedConf <p>引擎参数</p>
                     * 
                     */
                    std::string GetCustomizedConf() const;

                    /**
                     * 设置<p>引擎参数</p>
                     * @param _customizedConf <p>引擎参数</p>
                     * 
                     */
                    void SetCustomizedConf(const std::string& _customizedConf);

                    /**
                     * 判断参数 CustomizedConf 是否已赋值
                     * @return CustomizedConf 是否已赋值
                     * 
                     */
                    bool CustomizedConfHasBeenSet() const;

                    /**
                     * 获取<p>单位秒，累计 CPU* 秒 ( 累计 CPU * 时 = 累计 CPU* 秒/ 3600)，统计参与计算所用 Spark Executor 每个 core 的 CPU 执行时长总和<br>示例值：4329</p>
                     * @return TaskTimeSum <p>单位秒，累计 CPU* 秒 ( 累计 CPU * 时 = 累计 CPU* 秒/ 3600)，统计参与计算所用 Spark Executor 每个 core 的 CPU 执行时长总和<br>示例值：4329</p>
                     * 
                     */
                    int64_t GetTaskTimeSum() const;

                    /**
                     * 设置<p>单位秒，累计 CPU* 秒 ( 累计 CPU * 时 = 累计 CPU* 秒/ 3600)，统计参与计算所用 Spark Executor 每个 core 的 CPU 执行时长总和<br>示例值：4329</p>
                     * @param _taskTimeSum <p>单位秒，累计 CPU* 秒 ( 累计 CPU * 时 = 累计 CPU* 秒/ 3600)，统计参与计算所用 Spark Executor 每个 core 的 CPU 执行时长总和<br>示例值：4329</p>
                     * 
                     */
                    void SetTaskTimeSum(const int64_t& _taskTimeSum);

                    /**
                     * 判断参数 TaskTimeSum 是否已赋值
                     * @return TaskTimeSum 是否已赋值
                     * 
                     */
                    bool TaskTimeSumHasBeenSet() const;

                    /**
                     * 获取<p>引擎执行时间</p>
                     * @return StageStartTime <p>引擎执行时间</p>
                     * 
                     */
                    int64_t GetStageStartTime() const;

                    /**
                     * 设置<p>引擎执行时间</p>
                     * @param _stageStartTime <p>引擎执行时间</p>
                     * 
                     */
                    void SetStageStartTime(const int64_t& _stageStartTime);

                    /**
                     * 判断参数 StageStartTime 是否已赋值
                     * @return StageStartTime 是否已赋值
                     * 
                     */
                    bool StageStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>数据扫描条数</p>
                     * @return InputRecordsSum <p>数据扫描条数</p>
                     * 
                     */
                    int64_t GetInputRecordsSum() const;

                    /**
                     * 设置<p>数据扫描条数</p>
                     * @param _inputRecordsSum <p>数据扫描条数</p>
                     * 
                     */
                    void SetInputRecordsSum(const int64_t& _inputRecordsSum);

                    /**
                     * 判断参数 InputRecordsSum 是否已赋值
                     * @return InputRecordsSum 是否已赋值
                     * 
                     */
                    bool InputRecordsSumHasBeenSet() const;

                    /**
                     * 获取<p>健康状态</p>
                     * @return AnalysisStatusType <p>健康状态</p>
                     * 
                     */
                    int64_t GetAnalysisStatusType() const;

                    /**
                     * 设置<p>健康状态</p>
                     * @param _analysisStatusType <p>健康状态</p>
                     * 
                     */
                    void SetAnalysisStatusType(const int64_t& _analysisStatusType);

                    /**
                     * 判断参数 AnalysisStatusType 是否已赋值
                     * @return AnalysisStatusType 是否已赋值
                     * 
                     */
                    bool AnalysisStatusTypeHasBeenSet() const;

                    /**
                     * 获取<p>输出总行数</p>
                     * @return OutputRecordsSum <p>输出总行数</p>
                     * 
                     */
                    int64_t GetOutputRecordsSum() const;

                    /**
                     * 设置<p>输出总行数</p>
                     * @param _outputRecordsSum <p>输出总行数</p>
                     * 
                     */
                    void SetOutputRecordsSum(const int64_t& _outputRecordsSum);

                    /**
                     * 判断参数 OutputRecordsSum 是否已赋值
                     * @return OutputRecordsSum 是否已赋值
                     * 
                     */
                    bool OutputRecordsSumHasBeenSet() const;

                    /**
                     * 获取<p>输出总大小</p>
                     * @return OutputBytesSum <p>输出总大小</p>
                     * 
                     */
                    int64_t GetOutputBytesSum() const;

                    /**
                     * 设置<p>输出总大小</p>
                     * @param _outputBytesSum <p>输出总大小</p>
                     * 
                     */
                    void SetOutputBytesSum(const int64_t& _outputBytesSum);

                    /**
                     * 判断参数 OutputBytesSum 是否已赋值
                     * @return OutputBytesSum 是否已赋值
                     * 
                     */
                    bool OutputBytesSumHasBeenSet() const;

                    /**
                     * 获取<p>输出文件个数</p>
                     * @return OutputFilesNum <p>输出文件个数</p>
                     * 
                     */
                    int64_t GetOutputFilesNum() const;

                    /**
                     * 设置<p>输出文件个数</p>
                     * @param _outputFilesNum <p>输出文件个数</p>
                     * 
                     */
                    void SetOutputFilesNum(const int64_t& _outputFilesNum);

                    /**
                     * 判断参数 OutputFilesNum 是否已赋值
                     * @return OutputFilesNum 是否已赋值
                     * 
                     */
                    bool OutputFilesNumHasBeenSet() const;

                    /**
                     * 获取<p>输出小文件个数</p>
                     * @return OutputSmallFilesNum <p>输出小文件个数</p>
                     * 
                     */
                    int64_t GetOutputSmallFilesNum() const;

                    /**
                     * 设置<p>输出小文件个数</p>
                     * @param _outputSmallFilesNum <p>输出小文件个数</p>
                     * 
                     */
                    void SetOutputSmallFilesNum(const int64_t& _outputSmallFilesNum);

                    /**
                     * 判断参数 OutputSmallFilesNum 是否已赋值
                     * @return OutputSmallFilesNum 是否已赋值
                     * 
                     */
                    bool OutputSmallFilesNumHasBeenSet() const;

                    /**
                     * 获取<p>数据shuffle行数</p>
                     * @return ShuffleReadRecordsSum <p>数据shuffle行数</p>
                     * 
                     */
                    int64_t GetShuffleReadRecordsSum() const;

                    /**
                     * 设置<p>数据shuffle行数</p>
                     * @param _shuffleReadRecordsSum <p>数据shuffle行数</p>
                     * 
                     */
                    void SetShuffleReadRecordsSum(const int64_t& _shuffleReadRecordsSum);

                    /**
                     * 判断参数 ShuffleReadRecordsSum 是否已赋值
                     * @return ShuffleReadRecordsSum 是否已赋值
                     * 
                     */
                    bool ShuffleReadRecordsSumHasBeenSet() const;

                    /**
                     * 获取<p>数据shuffle大小</p>
                     * @return ShuffleReadBytesSum <p>数据shuffle大小</p>
                     * 
                     */
                    int64_t GetShuffleReadBytesSum() const;

                    /**
                     * 设置<p>数据shuffle大小</p>
                     * @param _shuffleReadBytesSum <p>数据shuffle大小</p>
                     * 
                     */
                    void SetShuffleReadBytesSum(const int64_t& _shuffleReadBytesSum);

                    /**
                     * 判断参数 ShuffleReadBytesSum 是否已赋值
                     * @return ShuffleReadBytesSum 是否已赋值
                     * 
                     */
                    bool ShuffleReadBytesSumHasBeenSet() const;

                    /**
                     * 获取<p>spark作业id</p>
                     * @return SparkAppId <p>spark作业id</p>
                     * 
                     */
                    std::string GetSparkAppId() const;

                    /**
                     * 设置<p>spark作业id</p>
                     * @param _sparkAppId <p>spark作业id</p>
                     * 
                     */
                    void SetSparkAppId(const std::string& _sparkAppId);

                    /**
                     * 判断参数 SparkAppId 是否已赋值
                     * @return SparkAppId 是否已赋值
                     * 
                     */
                    bool SparkAppIdHasBeenSet() const;

                    /**
                     * 获取<p>任务大类，DLC2.0中任务区分为两大类，sql任务和作业任务</p>
                     * @return TaskCategory <p>任务大类，DLC2.0中任务区分为两大类，sql任务和作业任务</p>
                     * 
                     */
                    std::string GetTaskCategory() const;

                    /**
                     * 设置<p>任务大类，DLC2.0中任务区分为两大类，sql任务和作业任务</p>
                     * @param _taskCategory <p>任务大类，DLC2.0中任务区分为两大类，sql任务和作业任务</p>
                     * 
                     */
                    void SetTaskCategory(const std::string& _taskCategory);

                    /**
                     * 判断参数 TaskCategory 是否已赋值
                     * @return TaskCategory 是否已赋值
                     * 
                     */
                    bool TaskCategoryHasBeenSet() const;

                    /**
                     * 获取<p>任务名称</p>
                     * @return TaskName <p>任务名称</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>任务名称</p>
                     * @param _taskName <p>任务名称</p>
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取<p>引擎类型，用做任务详情页跳转引擎tab</p>
                     * @return EngineType <p>引擎类型，用做任务详情页跳转引擎tab</p>
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置<p>引擎类型，用做任务详情页跳转引擎tab</p>
                     * @param _engineType <p>引擎类型，用做任务详情页跳转引擎tab</p>
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                    /**
                     * 获取<p>引擎是否支持洞察数据采集</p>
                     * @return EngineHasListenerConfig <p>引擎是否支持洞察数据采集</p>
                     * 
                     */
                    bool GetEngineHasListenerConfig() const;

                    /**
                     * 设置<p>引擎是否支持洞察数据采集</p>
                     * @param _engineHasListenerConfig <p>引擎是否支持洞察数据采集</p>
                     * 
                     */
                    void SetEngineHasListenerConfig(const bool& _engineHasListenerConfig);

                    /**
                     * 判断参数 EngineHasListenerConfig 是否已赋值
                     * @return EngineHasListenerConfig 是否已赋值
                     * 
                     */
                    bool EngineHasListenerConfigHasBeenSet() const;

                    /**
                     * 获取<p>spark引擎资源组id</p>
                     * @return ResourceGroupId <p>spark引擎资源组id</p>
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置<p>spark引擎资源组id</p>
                     * @param _resourceGroupId <p>spark引擎资源组id</p>
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>任务计算耗时</p>
                     * @return JobTimeSum <p>任务计算耗时</p>
                     * 
                     */
                    int64_t GetJobTimeSum() const;

                    /**
                     * 设置<p>任务计算耗时</p>
                     * @param _jobTimeSum <p>任务计算耗时</p>
                     * 
                     */
                    void SetJobTimeSum(const int64_t& _jobTimeSum);

                    /**
                     * 判断参数 JobTimeSum 是否已赋值
                     * @return JobTimeSum 是否已赋值
                     * 
                     */
                    bool JobTimeSumHasBeenSet() const;

                    /**
                     * 获取<p>任务启动耗时</p>
                     * @return LaunchTime <p>任务启动耗时</p>
                     * 
                     */
                    std::string GetLaunchTime() const;

                    /**
                     * 设置<p>任务启动耗时</p>
                     * @param _launchTime <p>任务启动耗时</p>
                     * 
                     */
                    void SetLaunchTime(const std::string& _launchTime);

                    /**
                     * 判断参数 LaunchTime 是否已赋值
                     * @return LaunchTime 是否已赋值
                     * 
                     */
                    bool LaunchTimeHasBeenSet() const;

                    /**
                     * 获取<p>Gpu Driver 规格</p>
                     * @return GpuDriverSize <p>Gpu Driver 规格</p>
                     * 
                     */
                    int64_t GetGpuDriverSize() const;

                    /**
                     * 设置<p>Gpu Driver 规格</p>
                     * @param _gpuDriverSize <p>Gpu Driver 规格</p>
                     * 
                     */
                    void SetGpuDriverSize(const int64_t& _gpuDriverSize);

                    /**
                     * 判断参数 GpuDriverSize 是否已赋值
                     * @return GpuDriverSize 是否已赋值
                     * 
                     */
                    bool GpuDriverSizeHasBeenSet() const;

                    /**
                     * 获取<p>Gpu Executor 规格</p>
                     * @return GpuExecutorSize <p>Gpu Executor 规格</p>
                     * 
                     */
                    int64_t GetGpuExecutorSize() const;

                    /**
                     * 设置<p>Gpu Executor 规格</p>
                     * @param _gpuExecutorSize <p>Gpu Executor 规格</p>
                     * 
                     */
                    void SetGpuExecutorSize(const int64_t& _gpuExecutorSize);

                    /**
                     * 判断参数 GpuExecutorSize 是否已赋值
                     * @return GpuExecutorSize 是否已赋值
                     * 
                     */
                    bool GpuExecutorSizeHasBeenSet() const;

                    /**
                     * 获取<p>ShuffleWrite数据量</p>
                     * @return ShuffleWriteBytesSum <p>ShuffleWrite数据量</p>
                     * 
                     */
                    int64_t GetShuffleWriteBytesSum() const;

                    /**
                     * 设置<p>ShuffleWrite数据量</p>
                     * @param _shuffleWriteBytesSum <p>ShuffleWrite数据量</p>
                     * 
                     */
                    void SetShuffleWriteBytesSum(const int64_t& _shuffleWriteBytesSum);

                    /**
                     * 判断参数 ShuffleWriteBytesSum 是否已赋值
                     * @return ShuffleWriteBytesSum 是否已赋值
                     * 
                     */
                    bool ShuffleWriteBytesSumHasBeenSet() const;

                    /**
                     * 获取<p>活跃core</p>
                     * @return ActiveCore <p>活跃core</p>
                     * 
                     */
                    int64_t GetActiveCore() const;

                    /**
                     * 设置<p>活跃core</p>
                     * @param _activeCore <p>活跃core</p>
                     * 
                     */
                    void SetActiveCore(const int64_t& _activeCore);

                    /**
                     * 判断参数 ActiveCore 是否已赋值
                     * @return ActiveCore 是否已赋值
                     * 
                     */
                    bool ActiveCoreHasBeenSet() const;

                private:

                    /**
                     * <p>任务所属Database的名称。</p>
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * <p>任务数据量。</p>
                     */
                    int64_t m_dataAmount;
                    bool m_dataAmountHasBeenSet;

                    /**
                     * <p>任务Id。</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>计算耗时，单位： ms</p>
                     */
                    int64_t m_usedTime;
                    bool m_usedTimeHasBeenSet;

                    /**
                     * <p>任务输出路径。</p>
                     */
                    std::string m_outputPath;
                    bool m_outputPathHasBeenSet;

                    /**
                     * <p>任务创建时间。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>任务状态：0 初始化， 1 执行中， 2 执行成功，3 数据写入中，4 排队中。-1 执行失败，-3 已取消。</p>
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>任务SQL类型，DDL|DML等</p>
                     */
                    std::string m_sQLType;
                    bool m_sQLTypeHasBeenSet;

                    /**
                     * <p>任务SQL语句</p>
                     */
                    std::string m_sQL;
                    bool m_sQLHasBeenSet;

                    /**
                     * <p>结果是否过期。</p>
                     */
                    bool m_resultExpired;
                    bool m_resultExpiredHasBeenSet;

                    /**
                     * <p>数据影响统计信息。</p>
                     */
                    std::string m_rowAffectInfo;
                    bool m_rowAffectInfoHasBeenSet;

                    /**
                     * <p>任务结果数据表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataSet;
                    bool m_dataSetHasBeenSet;

                    /**
                     * <p>失败信息, 例如：errorMessage。该字段已废弃。</p>
                     */
                    std::string m_error;
                    bool m_errorHasBeenSet;

                    /**
                     * <p>任务执行进度num/100(%)</p>
                     */
                    int64_t m_percentage;
                    bool m_percentageHasBeenSet;

                    /**
                     * <p>任务执行输出信息。</p>
                     */
                    std::string m_outputMessage;
                    bool m_outputMessageHasBeenSet;

                    /**
                     * <p>执行SQL的引擎类型</p>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>任务进度明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_progressDetail;
                    bool m_progressDetailHasBeenSet;

                    /**
                     * <p>任务结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>计算资源id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataEngineId;
                    bool m_dataEngineIdHasBeenSet;

                    /**
                     * <p>执行sql的子uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operateUin;
                    bool m_operateUinHasBeenSet;

                    /**
                     * <p>计算资源名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                    /**
                     * <p>导入类型是本地导入还是cos</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inputType;
                    bool m_inputTypeHasBeenSet;

                    /**
                     * <p>导入配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inputConf;
                    bool m_inputConfHasBeenSet;

                    /**
                     * <p>数据条数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dataNumber;
                    bool m_dataNumberHasBeenSet;

                    /**
                     * <p>查询数据能不能下载</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_canDownload;
                    bool m_canDownloadHasBeenSet;

                    /**
                     * <p>用户别名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userAlias;
                    bool m_userAliasHasBeenSet;

                    /**
                     * <p>spark应用作业名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sparkJobName;
                    bool m_sparkJobNameHasBeenSet;

                    /**
                     * <p>spark应用作业Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sparkJobId;
                    bool m_sparkJobIdHasBeenSet;

                    /**
                     * <p>spark应用入口jar文件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sparkJobFile;
                    bool m_sparkJobFileHasBeenSet;

                    /**
                     * <p>spark ui url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uiUrl;
                    bool m_uiUrlHasBeenSet;

                    /**
                     * <p>任务耗时，单位： ms</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalTime;
                    bool m_totalTimeHasBeenSet;

                    /**
                     * <p>spark app job执行task的程序入口参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cmdArgs;
                    bool m_cmdArgsHasBeenSet;

                    /**
                     * <p>集群镜像大版本名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_imageVersion;
                    bool m_imageVersionHasBeenSet;

                    /**
                     * <p>driver规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_driverSize;
                    bool m_driverSizeHasBeenSet;

                    /**
                     * <p>executor规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executorSize;
                    bool m_executorSizeHasBeenSet;

                    /**
                     * <p>指定executor数量，最小值为1，最大值小于集群规格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_executorNums;
                    bool m_executorNumsHasBeenSet;

                    /**
                     * <p>指定executor max数量（动态配置场景下），最小值为1，最大值小于集群规格（当ExecutorMaxNumbers小于ExecutorNums时，改值设定为ExecutorNums）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_executorMaxNumbers;
                    bool m_executorMaxNumbersHasBeenSet;

                    /**
                     * <p>任务公共指标数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CommonMetrics m_commonMetrics;
                    bool m_commonMetricsHasBeenSet;

                    /**
                     * <p>spark任务指标数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SparkMonitorMetrics m_sparkMonitorMetrics;
                    bool m_sparkMonitorMetricsHasBeenSet;

                    /**
                     * <p>presto任务指标数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PrestoMonitorMetrics m_prestoMonitorMetrics;
                    bool m_prestoMonitorMetricsHasBeenSet;

                    /**
                     * <p>结果文件格式：默认为csv</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resultFormat;
                    bool m_resultFormatHasBeenSet;

                    /**
                     * <p>引擎类型，SparkSQL：SparkSQL 引擎；SparkBatch：Spark作业引擎；PrestoSQL：Presto引擎</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineTypeDetail;
                    bool m_engineTypeDetailHasBeenSet;

                    /**
                     * <p>spark引擎资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                    /**
                     * <p>任务来源信息,如thirdPartyApi,dataExploration, sparkAppTask等</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>子渠道信息，一般由第三方调用定义</p>
                     */
                    std::string m_sourceExtra;
                    bool m_sourceExtraHasBeenSet;

                    /**
                     * <p>创建人uin</p>
                     */
                    std::string m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * <p>创建人名字</p>
                     */
                    std::string m_creatorAlias;
                    bool m_creatorAliasHasBeenSet;

                    /**
                     * <p>引擎参数</p>
                     */
                    std::string m_customizedConf;
                    bool m_customizedConfHasBeenSet;

                    /**
                     * <p>单位秒，累计 CPU* 秒 ( 累计 CPU * 时 = 累计 CPU* 秒/ 3600)，统计参与计算所用 Spark Executor 每个 core 的 CPU 执行时长总和<br>示例值：4329</p>
                     */
                    int64_t m_taskTimeSum;
                    bool m_taskTimeSumHasBeenSet;

                    /**
                     * <p>引擎执行时间</p>
                     */
                    int64_t m_stageStartTime;
                    bool m_stageStartTimeHasBeenSet;

                    /**
                     * <p>数据扫描条数</p>
                     */
                    int64_t m_inputRecordsSum;
                    bool m_inputRecordsSumHasBeenSet;

                    /**
                     * <p>健康状态</p>
                     */
                    int64_t m_analysisStatusType;
                    bool m_analysisStatusTypeHasBeenSet;

                    /**
                     * <p>输出总行数</p>
                     */
                    int64_t m_outputRecordsSum;
                    bool m_outputRecordsSumHasBeenSet;

                    /**
                     * <p>输出总大小</p>
                     */
                    int64_t m_outputBytesSum;
                    bool m_outputBytesSumHasBeenSet;

                    /**
                     * <p>输出文件个数</p>
                     */
                    int64_t m_outputFilesNum;
                    bool m_outputFilesNumHasBeenSet;

                    /**
                     * <p>输出小文件个数</p>
                     */
                    int64_t m_outputSmallFilesNum;
                    bool m_outputSmallFilesNumHasBeenSet;

                    /**
                     * <p>数据shuffle行数</p>
                     */
                    int64_t m_shuffleReadRecordsSum;
                    bool m_shuffleReadRecordsSumHasBeenSet;

                    /**
                     * <p>数据shuffle大小</p>
                     */
                    int64_t m_shuffleReadBytesSum;
                    bool m_shuffleReadBytesSumHasBeenSet;

                    /**
                     * <p>spark作业id</p>
                     */
                    std::string m_sparkAppId;
                    bool m_sparkAppIdHasBeenSet;

                    /**
                     * <p>任务大类，DLC2.0中任务区分为两大类，sql任务和作业任务</p>
                     */
                    std::string m_taskCategory;
                    bool m_taskCategoryHasBeenSet;

                    /**
                     * <p>任务名称</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>引擎类型，用做任务详情页跳转引擎tab</p>
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * <p>引擎是否支持洞察数据采集</p>
                     */
                    bool m_engineHasListenerConfig;
                    bool m_engineHasListenerConfigHasBeenSet;

                    /**
                     * <p>spark引擎资源组id</p>
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * <p>任务计算耗时</p>
                     */
                    int64_t m_jobTimeSum;
                    bool m_jobTimeSumHasBeenSet;

                    /**
                     * <p>任务启动耗时</p>
                     */
                    std::string m_launchTime;
                    bool m_launchTimeHasBeenSet;

                    /**
                     * <p>Gpu Driver 规格</p>
                     */
                    int64_t m_gpuDriverSize;
                    bool m_gpuDriverSizeHasBeenSet;

                    /**
                     * <p>Gpu Executor 规格</p>
                     */
                    int64_t m_gpuExecutorSize;
                    bool m_gpuExecutorSizeHasBeenSet;

                    /**
                     * <p>ShuffleWrite数据量</p>
                     */
                    int64_t m_shuffleWriteBytesSum;
                    bool m_shuffleWriteBytesSumHasBeenSet;

                    /**
                     * <p>活跃core</p>
                     */
                    int64_t m_activeCore;
                    bool m_activeCoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_TASKFULLRESPINFO_H_
