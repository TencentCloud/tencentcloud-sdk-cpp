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
                     * 获取<p>开发时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime <p>开发时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开发时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime <p>开发时间</p>
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
                     * 获取<p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime <p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime <p>结束时间</p>
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
                     * 获取<p>执行平台执行id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionJobId <p>执行平台执行id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionJobId() const;

                    /**
                     * 设置<p>执行平台执行id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionJobId <p>执行平台执行id</p>
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
                     * 获取<p>执行平台子执行jobid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionSubJobId <p>执行平台子执行jobid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionSubJobId() const;

                    /**
                     * 设置<p>执行平台子执行jobid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionSubJobId <p>执行平台子执行jobid</p>
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
                     * 获取<p>开发侧提交的jobid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobId <p>开发侧提交的jobid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置<p>开发侧提交的jobid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobId <p>开发侧提交的jobid</p>
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
                     * 获取<p>子记录id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DetailId <p>子记录id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDetailId() const;

                    /**
                     * 设置<p>子记录id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _detailId <p>子记录id</p>
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
                     * 获取<p>试运行记录id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordId <p>试运行记录id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRecordId() const;

                    /**
                     * 设置<p>试运行记录id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recordId <p>试运行记录id</p>
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
                     * 获取<p>脚本内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScriptContent <p>脚本内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScriptContent() const;

                    /**
                     * 设置<p>脚本内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scriptContent <p>脚本内容</p>
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
                     * 获取<p>状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>状态</p>
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
                     * 获取<p>耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeCost <p>耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimeCost() const;

                    /**
                     * 设置<p>耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeCost <p>耗时</p>
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
                     * 获取<p>结果总行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultTotalCount <p>结果总行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetResultTotalCount() const;

                    /**
                     * 设置<p>结果总行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resultTotalCount <p>结果总行数</p>
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
                     * 获取<p>预览结果行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultPreviewCount <p>预览结果行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetResultPreviewCount() const;

                    /**
                     * 设置<p>预览结果行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resultPreviewCount <p>预览结果行数</p>
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
                     * 获取<p>结果文件路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultFilePath <p>结果文件路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResultFilePath() const;

                    /**
                     * 设置<p>结果文件路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resultFilePath <p>结果文件路径</p>
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
                     * 获取<p>预览结果文件路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultPreviewFilePath <p>预览结果文件路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResultPreviewFilePath() const;

                    /**
                     * 设置<p>预览结果文件路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resultPreviewFilePath <p>预览结果文件路径</p>
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
                     * 获取<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime <p>更新时间</p>
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
                     * 获取<p>序号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Sequence <p>序号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSequence() const;

                    /**
                     * 设置<p>序号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sequence <p>序号</p>
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
                     * 获取<p>日志路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogFilePath <p>日志路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogFilePath() const;

                    /**
                     * 设置<p>日志路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logFilePath <p>日志路径</p>
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
                     * 获取<p>是否包含子结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HasSubResultSet <p>是否包含子结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetHasSubResultSet() const;

                    /**
                     * 设置<p>是否包含子结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hasSubResultSet <p>是否包含子结果</p>
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

                    /**
                     * 获取<p>脚本内容是否被截断</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScriptContentTruncated <p>脚本内容是否被截断</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetScriptContentTruncated() const;

                    /**
                     * 设置<p>脚本内容是否被截断</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scriptContentTruncated <p>脚本内容是否被截断</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScriptContentTruncated(const bool& _scriptContentTruncated);

                    /**
                     * 判断参数 ScriptContentTruncated 是否已赋值
                     * @return ScriptContentTruncated 是否已赋值
                     * 
                     */
                    bool ScriptContentTruncatedHasBeenSet() const;

                    /**
                     * 获取<p>结果集表字符信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchemaInfoFilePath <p>结果集表字符信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchemaInfoFilePath() const;

                    /**
                     * 设置<p>结果集表字符信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schemaInfoFilePath <p>结果集表字符信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSchemaInfoFilePath(const std::string& _schemaInfoFilePath);

                    /**
                     * 判断参数 SchemaInfoFilePath 是否已赋值
                     * @return SchemaInfoFilePath 是否已赋值
                     * 
                     */
                    bool SchemaInfoFilePathHasBeenSet() const;

                private:

                    /**
                     * <p>开发时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>执行平台执行id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionJobId;
                    bool m_executionJobIdHasBeenSet;

                    /**
                     * <p>执行平台子执行jobid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionSubJobId;
                    bool m_executionSubJobIdHasBeenSet;

                    /**
                     * <p>开发侧提交的jobid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>子记录id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_detailId;
                    bool m_detailIdHasBeenSet;

                    /**
                     * <p>试运行记录id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * <p>脚本内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scriptContent;
                    bool m_scriptContentHasBeenSet;

                    /**
                     * <p>状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timeCost;
                    bool m_timeCostHasBeenSet;

                    /**
                     * <p>结果总行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_resultTotalCount;
                    bool m_resultTotalCountHasBeenSet;

                    /**
                     * <p>预览结果行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_resultPreviewCount;
                    bool m_resultPreviewCountHasBeenSet;

                    /**
                     * <p>结果文件路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resultFilePath;
                    bool m_resultFilePathHasBeenSet;

                    /**
                     * <p>预览结果文件路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resultPreviewFilePath;
                    bool m_resultPreviewFilePathHasBeenSet;

                    /**
                     * <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>序号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sequence;
                    bool m_sequenceHasBeenSet;

                    /**
                     * <p>日志路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logFilePath;
                    bool m_logFilePathHasBeenSet;

                    /**
                     * <p>是否包含子结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_hasSubResultSet;
                    bool m_hasSubResultSetHasBeenSet;

                    /**
                     * <p>脚本内容是否被截断</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_scriptContentTruncated;
                    bool m_scriptContentTruncatedHasBeenSet;

                    /**
                     * <p>结果集表字符信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schemaInfoFilePath;
                    bool m_schemaInfoFilePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TESTRUNNINGSUBRECORD_H_
