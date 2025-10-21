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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TESTRUNNINGSUBRECORD_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TESTRUNNINGSUBRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 试运行子记录
                */
                class TestRunningSubRecord : public AbstractModel
                {
                public:
                    TestRunningSubRecord();
                    ~TestRunningSubRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取开发时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 开发时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开发时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 开发时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 结束时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取执行平台执行id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionJobId 执行平台执行id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionJobId() const;

                    /**
                     * 设置执行平台执行id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionJobId 执行平台执行id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutionJobId(const std::string& _executionJobId);

                    /**
                     * 判断参数 ExecutionJobId 是否已赋值
                     * @return ExecutionJobId 是否已赋值
                     * 
                     */
                    bool ExecutionJobIdHasBeenSet() const;

                    /**
                     * 获取执行平台子执行jobid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionSubJobId 执行平台子执行jobid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionSubJobId() const;

                    /**
                     * 设置执行平台子执行jobid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionSubJobId 执行平台子执行jobid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutionSubJobId(const std::string& _executionSubJobId);

                    /**
                     * 判断参数 ExecutionSubJobId 是否已赋值
                     * @return ExecutionSubJobId 是否已赋值
                     * 
                     */
                    bool ExecutionSubJobIdHasBeenSet() const;

                    /**
                     * 获取开发侧提交的jobid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobId 开发侧提交的jobid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置开发侧提交的jobid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobId 开发侧提交的jobid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取子记录id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DetailId 子记录id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDetailId() const;

                    /**
                     * 设置子记录id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _detailId 子记录id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDetailId(const int64_t& _detailId);

                    /**
                     * 判断参数 DetailId 是否已赋值
                     * @return DetailId 是否已赋值
                     * 
                     */
                    bool DetailIdHasBeenSet() const;

                    /**
                     * 获取试运行记录id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordId 试运行记录id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRecordId() const;

                    /**
                     * 设置试运行记录id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recordId 试运行记录id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecordId(const int64_t& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取脚本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScriptContent 脚本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScriptContent() const;

                    /**
                     * 设置脚本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scriptContent 脚本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScriptContent(const std::string& _scriptContent);

                    /**
                     * 判断参数 ScriptContent 是否已赋值
                     * @return ScriptContent 是否已赋值
                     * 
                     */
                    bool ScriptContentHasBeenSet() const;

                    /**
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取耗时
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeCost 耗时
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimeCost() const;

                    /**
                     * 设置耗时
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeCost 耗时
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeCost(const int64_t& _timeCost);

                    /**
                     * 判断参数 TimeCost 是否已赋值
                     * @return TimeCost 是否已赋值
                     * 
                     */
                    bool TimeCostHasBeenSet() const;

                    /**
                     * 获取结果总行数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultTotalCount 结果总行数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetResultTotalCount() const;

                    /**
                     * 设置结果总行数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resultTotalCount 结果总行数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResultTotalCount(const int64_t& _resultTotalCount);

                    /**
                     * 判断参数 ResultTotalCount 是否已赋值
                     * @return ResultTotalCount 是否已赋值
                     * 
                     */
                    bool ResultTotalCountHasBeenSet() const;

                    /**
                     * 获取预览结果行数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultPreviewCount 预览结果行数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetResultPreviewCount() const;

                    /**
                     * 设置预览结果行数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resultPreviewCount 预览结果行数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResultPreviewCount(const int64_t& _resultPreviewCount);

                    /**
                     * 判断参数 ResultPreviewCount 是否已赋值
                     * @return ResultPreviewCount 是否已赋值
                     * 
                     */
                    bool ResultPreviewCountHasBeenSet() const;

                    /**
                     * 获取结果文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultFilePath 结果文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResultFilePath() const;

                    /**
                     * 设置结果文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resultFilePath 结果文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResultFilePath(const std::string& _resultFilePath);

                    /**
                     * 判断参数 ResultFilePath 是否已赋值
                     * @return ResultFilePath 是否已赋值
                     * 
                     */
                    bool ResultFilePathHasBeenSet() const;

                    /**
                     * 获取预览结果文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultPreviewFilePath 预览结果文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResultPreviewFilePath() const;

                    /**
                     * 设置预览结果文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resultPreviewFilePath 预览结果文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResultPreviewFilePath(const std::string& _resultPreviewFilePath);

                    /**
                     * 判断参数 ResultPreviewFilePath 是否已赋值
                     * @return ResultPreviewFilePath 是否已赋值
                     * 
                     */
                    bool ResultPreviewFilePathHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
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
                     * 获取序号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Sequence 序号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSequence() const;

                    /**
                     * 设置序号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sequence 序号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSequence(const std::string& _sequence);

                    /**
                     * 判断参数 Sequence 是否已赋值
                     * @return Sequence 是否已赋值
                     * 
                     */
                    bool SequenceHasBeenSet() const;

                    /**
                     * 获取日志路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogFilePath 日志路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogFilePath() const;

                    /**
                     * 设置日志路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logFilePath 日志路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogFilePath(const std::string& _logFilePath);

                    /**
                     * 判断参数 LogFilePath 是否已赋值
                     * @return LogFilePath 是否已赋值
                     * 
                     */
                    bool LogFilePathHasBeenSet() const;

                    /**
                     * 获取是否包含子结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HasSubResultSet 是否包含子结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetHasSubResultSet() const;

                    /**
                     * 设置是否包含子结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hasSubResultSet 是否包含子结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHasSubResultSet(const bool& _hasSubResultSet);

                    /**
                     * 判断参数 HasSubResultSet 是否已赋值
                     * @return HasSubResultSet 是否已赋值
                     * 
                     */
                    bool HasSubResultSetHasBeenSet() const;

                private:

                    /**
                     * 开发时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 执行平台执行id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionJobId;
                    bool m_executionJobIdHasBeenSet;

                    /**
                     * 执行平台子执行jobid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionSubJobId;
                    bool m_executionSubJobIdHasBeenSet;

                    /**
                     * 开发侧提交的jobid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 子记录id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_detailId;
                    bool m_detailIdHasBeenSet;

                    /**
                     * 试运行记录id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * 脚本内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scriptContent;
                    bool m_scriptContentHasBeenSet;

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 耗时
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timeCost;
                    bool m_timeCostHasBeenSet;

                    /**
                     * 结果总行数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_resultTotalCount;
                    bool m_resultTotalCountHasBeenSet;

                    /**
                     * 预览结果行数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_resultPreviewCount;
                    bool m_resultPreviewCountHasBeenSet;

                    /**
                     * 结果文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resultFilePath;
                    bool m_resultFilePathHasBeenSet;

                    /**
                     * 预览结果文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resultPreviewFilePath;
                    bool m_resultPreviewFilePathHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 序号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sequence;
                    bool m_sequenceHasBeenSet;

                    /**
                     * 日志路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logFilePath;
                    bool m_logFilePathHasBeenSet;

                    /**
                     * 是否包含子结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_hasSubResultSet;
                    bool m_hasSubResultSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TESTRUNNINGSUBRECORD_H_
