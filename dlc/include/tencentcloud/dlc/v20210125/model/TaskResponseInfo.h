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
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置任务所属Database的名称。
                     * @param DatabaseName 任务所属Database的名称。
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取任务数据量。
                     * @return DataAmount 任务数据量。
                     */
                    int64_t GetDataAmount() const;

                    /**
                     * 设置任务数据量。
                     * @param DataAmount 任务数据量。
                     */
                    void SetDataAmount(const int64_t& _dataAmount);

                    /**
                     * 判断参数 DataAmount 是否已赋值
                     * @return DataAmount 是否已赋值
                     */
                    bool DataAmountHasBeenSet() const;

                    /**
                     * 获取任务Id。
                     * @return Id 任务Id。
                     */
                    std::string GetId() const;

                    /**
                     * 设置任务Id。
                     * @param Id 任务Id。
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取计算时长，单位： ms。
                     * @return UsedTime 计算时长，单位： ms。
                     */
                    int64_t GetUsedTime() const;

                    /**
                     * 设置计算时长，单位： ms。
                     * @param UsedTime 计算时长，单位： ms。
                     */
                    void SetUsedTime(const int64_t& _usedTime);

                    /**
                     * 判断参数 UsedTime 是否已赋值
                     * @return UsedTime 是否已赋值
                     */
                    bool UsedTimeHasBeenSet() const;

                    /**
                     * 获取任务输出路径。
                     * @return OutputPath 任务输出路径。
                     */
                    std::string GetOutputPath() const;

                    /**
                     * 设置任务输出路径。
                     * @param OutputPath 任务输出路径。
                     */
                    void SetOutputPath(const std::string& _outputPath);

                    /**
                     * 判断参数 OutputPath 是否已赋值
                     * @return OutputPath 是否已赋值
                     */
                    bool OutputPathHasBeenSet() const;

                    /**
                     * 获取任务创建时间。
                     * @return CreateTime 任务创建时间。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务创建时间。
                     * @param CreateTime 任务创建时间。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取任务状态, 0 初始化， 1 执行中， 2 执行成功，3 数据写入中，-1 执行失败。
                     * @return State 任务状态, 0 初始化， 1 执行中， 2 执行成功，3 数据写入中，-1 执行失败。
                     */
                    int64_t GetState() const;

                    /**
                     * 设置任务状态, 0 初始化， 1 执行中， 2 执行成功，3 数据写入中，-1 执行失败。
                     * @param State 任务状态, 0 初始化， 1 执行中， 2 执行成功，3 数据写入中，-1 执行失败。
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取任务SQL类型，DDL|DML等
                     * @return SQLType 任务SQL类型，DDL|DML等
                     */
                    std::string GetSQLType() const;

                    /**
                     * 设置任务SQL类型，DDL|DML等
                     * @param SQLType 任务SQL类型，DDL|DML等
                     */
                    void SetSQLType(const std::string& _sQLType);

                    /**
                     * 判断参数 SQLType 是否已赋值
                     * @return SQLType 是否已赋值
                     */
                    bool SQLTypeHasBeenSet() const;

                    /**
                     * 获取任务SQL语句
                     * @return SQL 任务SQL语句
                     */
                    std::string GetSQL() const;

                    /**
                     * 设置任务SQL语句
                     * @param SQL 任务SQL语句
                     */
                    void SetSQL(const std::string& _sQL);

                    /**
                     * 判断参数 SQL 是否已赋值
                     * @return SQL 是否已赋值
                     */
                    bool SQLHasBeenSet() const;

                    /**
                     * 获取结果是否过期。
                     * @return ResultExpired 结果是否过期。
                     */
                    bool GetResultExpired() const;

                    /**
                     * 设置结果是否过期。
                     * @param ResultExpired 结果是否过期。
                     */
                    void SetResultExpired(const bool& _resultExpired);

                    /**
                     * 判断参数 ResultExpired 是否已赋值
                     * @return ResultExpired 是否已赋值
                     */
                    bool ResultExpiredHasBeenSet() const;

                    /**
                     * 获取数据影响统计信息。
                     * @return RowAffectInfo 数据影响统计信息。
                     */
                    std::string GetRowAffectInfo() const;

                    /**
                     * 设置数据影响统计信息。
                     * @param RowAffectInfo 数据影响统计信息。
                     */
                    void SetRowAffectInfo(const std::string& _rowAffectInfo);

                    /**
                     * 判断参数 RowAffectInfo 是否已赋值
                     * @return RowAffectInfo 是否已赋值
                     */
                    bool RowAffectInfoHasBeenSet() const;

                    /**
                     * 获取任务结果数据表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataSet 任务结果数据表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDataSet() const;

                    /**
                     * 设置任务结果数据表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DataSet 任务结果数据表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDataSet(const std::string& _dataSet);

                    /**
                     * 判断参数 DataSet 是否已赋值
                     * @return DataSet 是否已赋值
                     */
                    bool DataSetHasBeenSet() const;

                    /**
                     * 获取失败信息, 例如：errorMessage。该字段已废弃。
                     * @return Error 失败信息, 例如：errorMessage。该字段已废弃。
                     */
                    std::string GetError() const;

                    /**
                     * 设置失败信息, 例如：errorMessage。该字段已废弃。
                     * @param Error 失败信息, 例如：errorMessage。该字段已废弃。
                     */
                    void SetError(const std::string& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     */
                    bool ErrorHasBeenSet() const;

                    /**
                     * 获取任务执行进度num/100(%)
                     * @return Percentage 任务执行进度num/100(%)
                     */
                    int64_t GetPercentage() const;

                    /**
                     * 设置任务执行进度num/100(%)
                     * @param Percentage 任务执行进度num/100(%)
                     */
                    void SetPercentage(const int64_t& _percentage);

                    /**
                     * 判断参数 Percentage 是否已赋值
                     * @return Percentage 是否已赋值
                     */
                    bool PercentageHasBeenSet() const;

                    /**
                     * 获取任务执行输出信息。
                     * @return OutputMessage 任务执行输出信息。
                     */
                    std::string GetOutputMessage() const;

                    /**
                     * 设置任务执行输出信息。
                     * @param OutputMessage 任务执行输出信息。
                     */
                    void SetOutputMessage(const std::string& _outputMessage);

                    /**
                     * 判断参数 OutputMessage 是否已赋值
                     * @return OutputMessage 是否已赋值
                     */
                    bool OutputMessageHasBeenSet() const;

                    /**
                     * 获取执行SQL的引擎类型
                     * @return TaskType 执行SQL的引擎类型
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置执行SQL的引擎类型
                     * @param TaskType 执行SQL的引擎类型
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     */
                    bool TaskTypeHasBeenSet() const;

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
                     * 计算时长，单位： ms。
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
                     * 任务状态, 0 初始化， 1 执行中， 2 执行成功，3 数据写入中，-1 执行失败。
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
注意：此字段可能返回 null，表示取不到有效值。
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_TASKRESPONSEINFO_H_
