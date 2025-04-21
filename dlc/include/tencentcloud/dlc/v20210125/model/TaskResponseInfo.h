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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_TASKRESPONSEINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_TASKRESPONSEINFO_H_

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
                class TaskResponseInfo : public AbstractModel
                {
                public:
                    TaskResponseInfo();
                    ~TaskResponseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务所属Database的名称。
                     * @return DatabaseName 任务所属Database的名称。
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置任务所属Database的名称。
                     * @param _databaseName 任务所属Database的名称。
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
                     * 获取任务数据量。
                     * @return DataAmount 任务数据量。
                     * 
                     */
                    int64_t GetDataAmount() const;

                    /**
                     * 设置任务数据量。
                     * @param _dataAmount 任务数据量。
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
                     * 获取任务Id。
                     * @return Id 任务Id。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置任务Id。
                     * @param _id 任务Id。
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
                     * 获取计算耗时，单位： ms
                     * @return UsedTime 计算耗时，单位： ms
                     * 
                     */
                    int64_t GetUsedTime() const;

                    /**
                     * 设置计算耗时，单位： ms
                     * @param _usedTime 计算耗时，单位： ms
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
                     * 获取任务输出路径。
                     * @return OutputPath 任务输出路径。
                     * 
                     */
                    std::string GetOutputPath() const;

                    /**
                     * 设置任务输出路径。
                     * @param _outputPath 任务输出路径。
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
                     * 获取任务创建时间。
                     * @return CreateTime 任务创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务创建时间。
                     * @param _createTime 任务创建时间。
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
                     * 获取任务状态：0 初始化， 1 执行中， 2 执行成功，3 数据写入中，4 排队中。-1 执行失败，-3 已取消。
                     * @return State 任务状态：0 初始化， 1 执行中， 2 执行成功，3 数据写入中，4 排队中。-1 执行失败，-3 已取消。
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置任务状态：0 初始化， 1 执行中， 2 执行成功，3 数据写入中，4 排队中。-1 执行失败，-3 已取消。
                     * @param _state 任务状态：0 初始化， 1 执行中， 2 执行成功，3 数据写入中，4 排队中。-1 执行失败，-3 已取消。
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
                     * 获取任务SQL类型，DDL|DML等
                     * @return SQLType 任务SQL类型，DDL|DML等
                     * 
                     */
                    std::string GetSQLType() const;

                    /**
                     * 设置任务SQL类型，DDL|DML等
                     * @param _sQLType 任务SQL类型，DDL|DML等
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
                     * 获取任务SQL语句
                     * @return SQL 任务SQL语句
                     * 
                     */
                    std::string GetSQL() const;

                    /**
                     * 设置任务SQL语句
                     * @param _sQL 任务SQL语句
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
                     * 获取结果是否过期。
                     * @return ResultExpired 结果是否过期。
                     * 
                     */
                    bool GetResultExpired() const;

                    /**
                     * 设置结果是否过期。
                     * @param _resultExpired 结果是否过期。
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
                     * 获取数据影响统计信息。
                     * @return RowAffectInfo 数据影响统计信息。
                     * 
                     */
                    std::string GetRowAffectInfo() const;

                    /**
                     * 设置数据影响统计信息。
                     * @param _rowAffectInfo 数据影响统计信息。
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
                     * 获取任务结果数据表。
                     * @return DataSet 任务结果数据表。
                     * 
                     */
                    std::string GetDataSet() const;

                    /**
                     * 设置任务结果数据表。
                     * @param _dataSet 任务结果数据表。
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
                     * 获取失败信息, 例如：errorMessage。该字段已废弃。
                     * @return Error 失败信息, 例如：errorMessage。该字段已废弃。
                     * 
                     */
                    std::string GetError() const;

                    /**
                     * 设置失败信息, 例如：errorMessage。该字段已废弃。
                     * @param _error 失败信息, 例如：errorMessage。该字段已废弃。
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
                     * 获取任务执行进度num/100(%)
                     * @return Percentage 任务执行进度num/100(%)
                     * 
                     */
                    int64_t GetPercentage() const;

                    /**
                     * 设置任务执行进度num/100(%)
                     * @param _percentage 任务执行进度num/100(%)
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
                     * 获取任务执行输出信息。
                     * @return OutputMessage 任务执行输出信息。
                     * 
                     */
                    std::string GetOutputMessage() const;

                    /**
                     * 设置任务执行输出信息。
                     * @param _outputMessage 任务执行输出信息。
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
                     * 获取执行SQL的引擎类型
                     * @return TaskType 执行SQL的引擎类型
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置执行SQL的引擎类型
                     * @param _taskType 执行SQL的引擎类型
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
                     * 获取任务进度明细
                     * @return ProgressDetail 任务进度明细
                     * 
                     */
                    std::string GetProgressDetail() const;

                    /**
                     * 设置任务进度明细
                     * @param _progressDetail 任务进度明细
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
                     * 获取任务结束时间
                     * @return UpdateTime 任务结束时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置任务结束时间
                     * @param _updateTime 任务结束时间
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
                     * 获取计算资源id
                     * @return DataEngineId 计算资源id
                     * 
                     */
                    std::string GetDataEngineId() const;

                    /**
                     * 设置计算资源id
                     * @param _dataEngineId 计算资源id
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
                     * 获取执行sql的子uin
                     * @return OperateUin 执行sql的子uin
                     * 
                     */
                    std::string GetOperateUin() const;

                    /**
                     * 设置执行sql的子uin
                     * @param _operateUin 执行sql的子uin
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
                     * 获取计算资源名字
                     * @return DataEngineName 计算资源名字
                     * 
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 设置计算资源名字
                     * @param _dataEngineName 计算资源名字
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
                     * 获取导入类型是本地导入还是cos
                     * @return InputType 导入类型是本地导入还是cos
                     * 
                     */
                    std::string GetInputType() const;

                    /**
                     * 设置导入类型是本地导入还是cos
                     * @param _inputType 导入类型是本地导入还是cos
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
                     * 获取导入配置
                     * @return InputConf 导入配置
                     * 
                     */
                    std::string GetInputConf() const;

                    /**
                     * 设置导入配置
                     * @param _inputConf 导入配置
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
                     * 获取数据条数
                     * @return DataNumber 数据条数
                     * 
                     */
                    int64_t GetDataNumber() const;

                    /**
                     * 设置数据条数
                     * @param _dataNumber 数据条数
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
                     * 获取查询数据能不能下载
                     * @return CanDownload 查询数据能不能下载
                     * 
                     */
                    bool GetCanDownload() const;

                    /**
                     * 设置查询数据能不能下载
                     * @param _canDownload 查询数据能不能下载
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
                     * 获取用户别名
                     * @return UserAlias 用户别名
                     * 
                     */
                    std::string GetUserAlias() const;

                    /**
                     * 设置用户别名
                     * @param _userAlias 用户别名
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
                     * 获取spark应用作业名
                     * @return SparkJobName spark应用作业名
                     * 
                     */
                    std::string GetSparkJobName() const;

                    /**
                     * 设置spark应用作业名
                     * @param _sparkJobName spark应用作业名
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
                     * 获取spark应用作业Id
                     * @return SparkJobId spark应用作业Id
                     * 
                     */
                    std::string GetSparkJobId() const;

                    /**
                     * 设置spark应用作业Id
                     * @param _sparkJobId spark应用作业Id
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
                     * 获取spark应用入口jar文件
                     * @return SparkJobFile spark应用入口jar文件
                     * 
                     */
                    std::string GetSparkJobFile() const;

                    /**
                     * 设置spark应用入口jar文件
                     * @param _sparkJobFile spark应用入口jar文件
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
                     * 获取spark ui url
                     * @return UiUrl spark ui url
                     * 
                     */
                    std::string GetUiUrl() const;

                    /**
                     * 设置spark ui url
                     * @param _uiUrl spark ui url
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
                     * 获取任务耗时，单位： ms
                     * @return TotalTime 任务耗时，单位： ms
                     * 
                     */
                    int64_t GetTotalTime() const;

                    /**
                     * 设置任务耗时，单位： ms
                     * @param _totalTime 任务耗时，单位： ms
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
                     * 获取spark app job执行task的程序入口参数
                     * @return CmdArgs spark app job执行task的程序入口参数
                     * 
                     */
                    std::string GetCmdArgs() const;

                    /**
                     * 设置spark app job执行task的程序入口参数
                     * @param _cmdArgs spark app job执行task的程序入口参数
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
                     * 获取集群镜像大版本名称
                     * @return ImageVersion 集群镜像大版本名称
                     * 
                     */
                    std::string GetImageVersion() const;

                    /**
                     * 设置集群镜像大版本名称
                     * @param _imageVersion 集群镜像大版本名称
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
                     * 获取driver规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge
                     * @return DriverSize driver规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge
                     * 
                     */
                    std::string GetDriverSize() const;

                    /**
                     * 设置driver规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge
                     * @param _driverSize driver规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge
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
                     * 获取executor规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge
                     * @return ExecutorSize executor规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge
                     * 
                     */
                    std::string GetExecutorSize() const;

                    /**
                     * 设置executor规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge
                     * @param _executorSize executor规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge
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
                     * 获取指定executor数量，最小值为1，最大值小于集群规格
                     * @return ExecutorNums 指定executor数量，最小值为1，最大值小于集群规格
                     * 
                     */
                    uint64_t GetExecutorNums() const;

                    /**
                     * 设置指定executor数量，最小值为1，最大值小于集群规格
                     * @param _executorNums 指定executor数量，最小值为1，最大值小于集群规格
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
                     * 获取指定executor max数量（动态配置场景下），最小值为1，最大值小于集群规格（当ExecutorMaxNumbers小于ExecutorNums时，改值设定为ExecutorNums）
                     * @return ExecutorMaxNumbers 指定executor max数量（动态配置场景下），最小值为1，最大值小于集群规格（当ExecutorMaxNumbers小于ExecutorNums时，改值设定为ExecutorNums）
                     * 
                     */
                    uint64_t GetExecutorMaxNumbers() const;

                    /**
                     * 设置指定executor max数量（动态配置场景下），最小值为1，最大值小于集群规格（当ExecutorMaxNumbers小于ExecutorNums时，改值设定为ExecutorNums）
                     * @param _executorMaxNumbers 指定executor max数量（动态配置场景下），最小值为1，最大值小于集群规格（当ExecutorMaxNumbers小于ExecutorNums时，改值设定为ExecutorNums）
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
                     * 获取任务公共指标数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CommonMetrics 任务公共指标数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CommonMetrics GetCommonMetrics() const;

                    /**
                     * 设置任务公共指标数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _commonMetrics 任务公共指标数据
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
                     * 获取spark任务指标数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SparkMonitorMetrics spark任务指标数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SparkMonitorMetrics GetSparkMonitorMetrics() const;

                    /**
                     * 设置spark任务指标数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sparkMonitorMetrics spark任务指标数据
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
                     * 获取presto任务指标数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrestoMonitorMetrics presto任务指标数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PrestoMonitorMetrics GetPrestoMonitorMetrics() const;

                    /**
                     * 设置presto任务指标数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _prestoMonitorMetrics presto任务指标数据
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
                     * 获取结果文件格式：默认为csv
                     * @return ResultFormat 结果文件格式：默认为csv
                     * 
                     */
                    std::string GetResultFormat() const;

                    /**
                     * 设置结果文件格式：默认为csv
                     * @param _resultFormat 结果文件格式：默认为csv
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
                     * 获取引擎类型，SparkSQL：SparkSQL 引擎；SparkBatch：Spark作业引擎；PrestoSQL：Presto引擎
                     * @return EngineTypeDetail 引擎类型，SparkSQL：SparkSQL 引擎；SparkBatch：Spark作业引擎；PrestoSQL：Presto引擎
                     * 
                     */
                    std::string GetEngineTypeDetail() const;

                    /**
                     * 设置引擎类型，SparkSQL：SparkSQL 引擎；SparkBatch：Spark作业引擎；PrestoSQL：Presto引擎
                     * @param _engineTypeDetail 引擎类型，SparkSQL：SparkSQL 引擎；SparkBatch：Spark作业引擎；PrestoSQL：Presto引擎
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
                     * 获取spark引擎资源组名称
                     * @return ResourceGroupName spark引擎资源组名称
                     * 
                     */
                    std::string GetResourceGroupName() const;

                    /**
                     * 设置spark引擎资源组名称
                     * @param _resourceGroupName spark引擎资源组名称
                     * 
                     */
                    void SetResourceGroupName(const std::string& _resourceGroupName);

                    /**
                     * 判断参数 ResourceGroupName 是否已赋值
                     * @return ResourceGroupName 是否已赋值
                     * 
                     */
                    bool ResourceGroupNameHasBeenSet() const;

                private:

                    /**
                     * 任务所属Database的名称。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 任务数据量。
                     */
                    int64_t m_dataAmount;
                    bool m_dataAmountHasBeenSet;

                    /**
                     * 任务Id。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 计算耗时，单位： ms
                     */
                    int64_t m_usedTime;
                    bool m_usedTimeHasBeenSet;

                    /**
                     * 任务输出路径。
                     */
                    std::string m_outputPath;
                    bool m_outputPathHasBeenSet;

                    /**
                     * 任务创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务状态：0 初始化， 1 执行中， 2 执行成功，3 数据写入中，4 排队中。-1 执行失败，-3 已取消。
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 任务SQL类型，DDL|DML等
                     */
                    std::string m_sQLType;
                    bool m_sQLTypeHasBeenSet;

                    /**
                     * 任务SQL语句
                     */
                    std::string m_sQL;
                    bool m_sQLHasBeenSet;

                    /**
                     * 结果是否过期。
                     */
                    bool m_resultExpired;
                    bool m_resultExpiredHasBeenSet;

                    /**
                     * 数据影响统计信息。
                     */
                    std::string m_rowAffectInfo;
                    bool m_rowAffectInfoHasBeenSet;

                    /**
                     * 任务结果数据表。
                     */
                    std::string m_dataSet;
                    bool m_dataSetHasBeenSet;

                    /**
                     * 失败信息, 例如：errorMessage。该字段已废弃。
                     */
                    std::string m_error;
                    bool m_errorHasBeenSet;

                    /**
                     * 任务执行进度num/100(%)
                     */
                    int64_t m_percentage;
                    bool m_percentageHasBeenSet;

                    /**
                     * 任务执行输出信息。
                     */
                    std::string m_outputMessage;
                    bool m_outputMessageHasBeenSet;

                    /**
                     * 执行SQL的引擎类型
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 任务进度明细
                     */
                    std::string m_progressDetail;
                    bool m_progressDetailHasBeenSet;

                    /**
                     * 任务结束时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 计算资源id
                     */
                    std::string m_dataEngineId;
                    bool m_dataEngineIdHasBeenSet;

                    /**
                     * 执行sql的子uin
                     */
                    std::string m_operateUin;
                    bool m_operateUinHasBeenSet;

                    /**
                     * 计算资源名字
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                    /**
                     * 导入类型是本地导入还是cos
                     */
                    std::string m_inputType;
                    bool m_inputTypeHasBeenSet;

                    /**
                     * 导入配置
                     */
                    std::string m_inputConf;
                    bool m_inputConfHasBeenSet;

                    /**
                     * 数据条数
                     */
                    int64_t m_dataNumber;
                    bool m_dataNumberHasBeenSet;

                    /**
                     * 查询数据能不能下载
                     */
                    bool m_canDownload;
                    bool m_canDownloadHasBeenSet;

                    /**
                     * 用户别名
                     */
                    std::string m_userAlias;
                    bool m_userAliasHasBeenSet;

                    /**
                     * spark应用作业名
                     */
                    std::string m_sparkJobName;
                    bool m_sparkJobNameHasBeenSet;

                    /**
                     * spark应用作业Id
                     */
                    std::string m_sparkJobId;
                    bool m_sparkJobIdHasBeenSet;

                    /**
                     * spark应用入口jar文件
                     */
                    std::string m_sparkJobFile;
                    bool m_sparkJobFileHasBeenSet;

                    /**
                     * spark ui url
                     */
                    std::string m_uiUrl;
                    bool m_uiUrlHasBeenSet;

                    /**
                     * 任务耗时，单位： ms
                     */
                    int64_t m_totalTime;
                    bool m_totalTimeHasBeenSet;

                    /**
                     * spark app job执行task的程序入口参数
                     */
                    std::string m_cmdArgs;
                    bool m_cmdArgsHasBeenSet;

                    /**
                     * 集群镜像大版本名称
                     */
                    std::string m_imageVersion;
                    bool m_imageVersionHasBeenSet;

                    /**
                     * driver规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge
                     */
                    std::string m_driverSize;
                    bool m_driverSizeHasBeenSet;

                    /**
                     * executor规格：small,medium,large,xlarge；内存型(引擎类型)：m.small,m.medium,m.large,m.xlarge
                     */
                    std::string m_executorSize;
                    bool m_executorSizeHasBeenSet;

                    /**
                     * 指定executor数量，最小值为1，最大值小于集群规格
                     */
                    uint64_t m_executorNums;
                    bool m_executorNumsHasBeenSet;

                    /**
                     * 指定executor max数量（动态配置场景下），最小值为1，最大值小于集群规格（当ExecutorMaxNumbers小于ExecutorNums时，改值设定为ExecutorNums）
                     */
                    uint64_t m_executorMaxNumbers;
                    bool m_executorMaxNumbersHasBeenSet;

                    /**
                     * 任务公共指标数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CommonMetrics m_commonMetrics;
                    bool m_commonMetricsHasBeenSet;

                    /**
                     * spark任务指标数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SparkMonitorMetrics m_sparkMonitorMetrics;
                    bool m_sparkMonitorMetricsHasBeenSet;

                    /**
                     * presto任务指标数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PrestoMonitorMetrics m_prestoMonitorMetrics;
                    bool m_prestoMonitorMetricsHasBeenSet;

                    /**
                     * 结果文件格式：默认为csv
                     */
                    std::string m_resultFormat;
                    bool m_resultFormatHasBeenSet;

                    /**
                     * 引擎类型，SparkSQL：SparkSQL 引擎；SparkBatch：Spark作业引擎；PrestoSQL：Presto引擎
                     */
                    std::string m_engineTypeDetail;
                    bool m_engineTypeDetailHasBeenSet;

                    /**
                     * spark引擎资源组名称
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_TASKRESPONSEINFO_H_
