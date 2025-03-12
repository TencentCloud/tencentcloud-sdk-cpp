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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_TASKRESULTINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_TASKRESULTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Column.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 任务结果信息。
                */
                class TaskResultInfo : public AbstractModel
                {
                public:
                    TaskResultInfo();
                    ~TaskResultInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务唯一ID
                     * @return TaskId 任务唯一ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务唯一ID
                     * @param _taskId 任务唯一ID
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
                     * 获取数据源名称，当前任务执行时候选中的默认数据源
                     * @return DatasourceConnectionName 数据源名称，当前任务执行时候选中的默认数据源
                     * 
                     */
                    std::string GetDatasourceConnectionName() const;

                    /**
                     * 设置数据源名称，当前任务执行时候选中的默认数据源
                     * @param _datasourceConnectionName 数据源名称，当前任务执行时候选中的默认数据源
                     * 
                     */
                    void SetDatasourceConnectionName(const std::string& _datasourceConnectionName);

                    /**
                     * 判断参数 DatasourceConnectionName 是否已赋值
                     * @return DatasourceConnectionName 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionNameHasBeenSet() const;

                    /**
                     * 获取数据库名称，当前任务执行时候选中的默认数据库
                     * @return DatabaseName 数据库名称，当前任务执行时候选中的默认数据库
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名称，当前任务执行时候选中的默认数据库
                     * @param _databaseName 数据库名称，当前任务执行时候选中的默认数据库
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
                     * 获取当前执行的SQL，一个任务包含一个SQL
                     * @return SQL 当前执行的SQL，一个任务包含一个SQL
                     * 
                     */
                    std::string GetSQL() const;

                    /**
                     * 设置当前执行的SQL，一个任务包含一个SQL
                     * @param _sQL 当前执行的SQL，一个任务包含一个SQL
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
                     * 获取执行任务的类型，现在分为DDL、DML、DQL
                     * @return SQLType 执行任务的类型，现在分为DDL、DML、DQL
                     * 
                     */
                    std::string GetSQLType() const;

                    /**
                     * 设置执行任务的类型，现在分为DDL、DML、DQL
                     * @param _sQLType 执行任务的类型，现在分为DDL、DML、DQL
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
                     * 获取任务当前的状态，0：初始化 1：任务运行中 2：任务执行成功  3：数据写入中 4：排队中 -1：任务执行失败 -3：用户手动终止 。只有任务执行成功的情况下，才会返回任务执行的结果
                     * @return State 任务当前的状态，0：初始化 1：任务运行中 2：任务执行成功  3：数据写入中 4：排队中 -1：任务执行失败 -3：用户手动终止 。只有任务执行成功的情况下，才会返回任务执行的结果
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置任务当前的状态，0：初始化 1：任务运行中 2：任务执行成功  3：数据写入中 4：排队中 -1：任务执行失败 -3：用户手动终止 。只有任务执行成功的情况下，才会返回任务执行的结果
                     * @param _state 任务当前的状态，0：初始化 1：任务运行中 2：任务执行成功  3：数据写入中 4：排队中 -1：任务执行失败 -3：用户手动终止 。只有任务执行成功的情况下，才会返回任务执行的结果
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
                     * 获取扫描的数据量，单位byte
                     * @return DataAmount 扫描的数据量，单位byte
                     * 
                     */
                    int64_t GetDataAmount() const;

                    /**
                     * 设置扫描的数据量，单位byte
                     * @param _dataAmount 扫描的数据量，单位byte
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
                     * 获取任务结果输出的COS桶地址
                     * @return OutputPath 任务结果输出的COS桶地址
                     * 
                     */
                    std::string GetOutputPath() const;

                    /**
                     * 设置任务结果输出的COS桶地址
                     * @param _outputPath 任务结果输出的COS桶地址
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
                     * 获取任务创建时间，时间戳
                     * @return CreateTime 任务创建时间，时间戳
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务创建时间，时间戳
                     * @param _createTime 任务创建时间，时间戳
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
                     * 获取任务执行信息，成功时返回success，失败时返回失败原因
                     * @return OutputMessage 任务执行信息，成功时返回success，失败时返回失败原因
                     * 
                     */
                    std::string GetOutputMessage() const;

                    /**
                     * 设置任务执行信息，成功时返回success，失败时返回失败原因
                     * @param _outputMessage 任务执行信息，成功时返回success，失败时返回失败原因
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
                     * 获取被影响的行数
                     * @return RowAffectInfo 被影响的行数
                     * 
                     */
                    std::string GetRowAffectInfo() const;

                    /**
                     * 设置被影响的行数
                     * @param _rowAffectInfo 被影响的行数
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
                     * 获取结果的schema信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultSchema 结果的schema信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Column> GetResultSchema() const;

                    /**
                     * 设置结果的schema信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resultSchema 结果的schema信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResultSchema(const std::vector<Column>& _resultSchema);

                    /**
                     * 判断参数 ResultSchema 是否已赋值
                     * @return ResultSchema 是否已赋值
                     * 
                     */
                    bool ResultSchemaHasBeenSet() const;

                    /**
                     * 获取结果信息，反转义后，外层数组的每个元素为一行数据
                     * @return ResultSet 结果信息，反转义后，外层数组的每个元素为一行数据
                     * 
                     */
                    std::string GetResultSet() const;

                    /**
                     * 设置结果信息，反转义后，外层数组的每个元素为一行数据
                     * @param _resultSet 结果信息，反转义后，外层数组的每个元素为一行数据
                     * 
                     */
                    void SetResultSet(const std::string& _resultSet);

                    /**
                     * 判断参数 ResultSet 是否已赋值
                     * @return ResultSet 是否已赋值
                     * 
                     */
                    bool ResultSetHasBeenSet() const;

                    /**
                     * 获取分页信息，如果没有更多结果数据，nextToken为空
                     * @return NextToken 分页信息，如果没有更多结果数据，nextToken为空
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置分页信息，如果没有更多结果数据，nextToken为空
                     * @param _nextToken 分页信息，如果没有更多结果数据，nextToken为空
                     * 
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

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
                     * 获取控制台展示格式。table：表格展示 text：文本展示
                     * @return DisplayFormat 控制台展示格式。table：表格展示 text：文本展示
                     * 
                     */
                    std::string GetDisplayFormat() const;

                    /**
                     * 设置控制台展示格式。table：表格展示 text：文本展示
                     * @param _displayFormat 控制台展示格式。table：表格展示 text：文本展示
                     * 
                     */
                    void SetDisplayFormat(const std::string& _displayFormat);

                    /**
                     * 判断参数 DisplayFormat 是否已赋值
                     * @return DisplayFormat 是否已赋值
                     * 
                     */
                    bool DisplayFormatHasBeenSet() const;

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
                     * 获取获取结果消耗的时间
                     * @return QueryResultTime 获取结果消耗的时间
                     * 
                     */
                    double GetQueryResultTime() const;

                    /**
                     * 设置获取结果消耗的时间
                     * @param _queryResultTime 获取结果消耗的时间
                     * 
                     */
                    void SetQueryResultTime(const double& _queryResultTime);

                    /**
                     * 判断参数 QueryResultTime 是否已赋值
                     * @return QueryResultTime 是否已赋值
                     * 
                     */
                    bool QueryResultTimeHasBeenSet() const;

                private:

                    /**
                     * 任务唯一ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 数据源名称，当前任务执行时候选中的默认数据源
                     */
                    std::string m_datasourceConnectionName;
                    bool m_datasourceConnectionNameHasBeenSet;

                    /**
                     * 数据库名称，当前任务执行时候选中的默认数据库
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 当前执行的SQL，一个任务包含一个SQL
                     */
                    std::string m_sQL;
                    bool m_sQLHasBeenSet;

                    /**
                     * 执行任务的类型，现在分为DDL、DML、DQL
                     */
                    std::string m_sQLType;
                    bool m_sQLTypeHasBeenSet;

                    /**
                     * 任务当前的状态，0：初始化 1：任务运行中 2：任务执行成功  3：数据写入中 4：排队中 -1：任务执行失败 -3：用户手动终止 。只有任务执行成功的情况下，才会返回任务执行的结果
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 扫描的数据量，单位byte
                     */
                    int64_t m_dataAmount;
                    bool m_dataAmountHasBeenSet;

                    /**
                     * 计算耗时，单位： ms
                     */
                    int64_t m_usedTime;
                    bool m_usedTimeHasBeenSet;

                    /**
                     * 任务结果输出的COS桶地址
                     */
                    std::string m_outputPath;
                    bool m_outputPathHasBeenSet;

                    /**
                     * 任务创建时间，时间戳
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务执行信息，成功时返回success，失败时返回失败原因
                     */
                    std::string m_outputMessage;
                    bool m_outputMessageHasBeenSet;

                    /**
                     * 被影响的行数
                     */
                    std::string m_rowAffectInfo;
                    bool m_rowAffectInfoHasBeenSet;

                    /**
                     * 结果的schema信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Column> m_resultSchema;
                    bool m_resultSchemaHasBeenSet;

                    /**
                     * 结果信息，反转义后，外层数组的每个元素为一行数据
                     */
                    std::string m_resultSet;
                    bool m_resultSetHasBeenSet;

                    /**
                     * 分页信息，如果没有更多结果数据，nextToken为空
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * 任务执行进度num/100(%)
                     */
                    int64_t m_percentage;
                    bool m_percentageHasBeenSet;

                    /**
                     * 任务进度明细
                     */
                    std::string m_progressDetail;
                    bool m_progressDetailHasBeenSet;

                    /**
                     * 控制台展示格式。table：表格展示 text：文本展示
                     */
                    std::string m_displayFormat;
                    bool m_displayFormatHasBeenSet;

                    /**
                     * 任务耗时，单位： ms
                     */
                    int64_t m_totalTime;
                    bool m_totalTimeHasBeenSet;

                    /**
                     * 获取结果消耗的时间
                     */
                    double m_queryResultTime;
                    bool m_queryResultTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_TASKRESULTINFO_H_
