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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_JOBEXECUTIONDTO_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_JOBEXECUTIONDTO_H_

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
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 业务提交JOB的子任务
                */
                class JobExecutionDto : public AbstractModel
                {
                public:
                    JobExecutionDto();
                    ~JobExecutionDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据探索任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobId 数据探索任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置数据探索任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobId 数据探索任务ID
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
                     * 获取子查询任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobExecutionId 子查询任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJobExecutionId() const;

                    /**
                     * 设置子查询任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobExecutionId 子查询任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobExecutionId(const std::string& _jobExecutionId);

                    /**
                     * 判断参数 JobExecutionId 是否已赋值
                     * @return JobExecutionId 是否已赋值
                     * 
                     */
                    bool JobExecutionIdHasBeenSet() const;

                    /**
                     * 获取子查询名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobExecutionName 子查询名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJobExecutionName() const;

                    /**
                     * 设置子查询名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobExecutionName 子查询名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobExecutionName(const std::string& _jobExecutionName);

                    /**
                     * 判断参数 JobExecutionName 是否已赋值
                     * @return JobExecutionName 是否已赋值
                     * 
                     */
                    bool JobExecutionNameHasBeenSet() const;

                    /**
                     * 获取子查询sql内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScriptContent 子查询sql内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScriptContent() const;

                    /**
                     * 设置子查询sql内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scriptContent 子查询sql内容
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
                     * 获取子查询状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 子查询状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置子查询状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 子查询状态
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
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取执行阶段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecuteStageInfo 执行阶段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecuteStageInfo() const;

                    /**
                     * 设置执行阶段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executeStageInfo 执行阶段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecuteStageInfo(const std::string& _executeStageInfo);

                    /**
                     * 判断参数 ExecuteStageInfo 是否已赋值
                     * @return ExecuteStageInfo 是否已赋值
                     * 
                     */
                    bool ExecuteStageInfoHasBeenSet() const;

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
                     * 获取下载结果路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultFilePath 下载结果路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResultFilePath() const;

                    /**
                     * 设置下载结果路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resultFilePath 下载结果路径
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
                     * 获取预览结果路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultPreviewFilePath 预览结果路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResultPreviewFilePath() const;

                    /**
                     * 设置预览结果路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resultPreviewFilePath 预览结果路径
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
                     * 获取任务执行的结果总行数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultTotalCount 任务执行的结果总行数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetResultTotalCount() const;

                    /**
                     * 设置任务执行的结果总行数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resultTotalCount 任务执行的结果总行数
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
                     * 获取上下文SQL内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContextScriptContent 上下文SQL内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetContextScriptContent() const;

                    /**
                     * 设置上下文SQL内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contextScriptContent 上下文SQL内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContextScriptContent(const std::vector<std::string>& _contextScriptContent);

                    /**
                     * 判断参数 ContextScriptContent 是否已赋值
                     * @return ContextScriptContent 是否已赋值
                     * 
                     */
                    bool ContextScriptContentHasBeenSet() const;

                    /**
                     * 获取任务执行的结果预览行数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultPreviewCount 任务执行的结果预览行数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetResultPreviewCount() const;

                    /**
                     * 设置任务执行的结果预览行数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resultPreviewCount 任务执行的结果预览行数
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
                     * 获取任务执行的结果影响行数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultEffectCount 任务执行的结果影响行数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetResultEffectCount() const;

                    /**
                     * 设置任务执行的结果影响行数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resultEffectCount 任务执行的结果影响行数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResultEffectCount(const int64_t& _resultEffectCount);

                    /**
                     * 判断参数 ResultEffectCount 是否已赋值
                     * @return ResultEffectCount 是否已赋值
                     * 
                     */
                    bool ResultEffectCountHasBeenSet() const;

                    /**
                     * 获取是否正在收集全量结果：默认false，true表示正在收集全量结果，用于前端判断是否需要继续轮询
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CollectingTotalResult 是否正在收集全量结果：默认false，true表示正在收集全量结果，用于前端判断是否需要继续轮询
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetCollectingTotalResult() const;

                    /**
                     * 设置是否正在收集全量结果：默认false，true表示正在收集全量结果，用于前端判断是否需要继续轮询
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _collectingTotalResult 是否正在收集全量结果：默认false，true表示正在收集全量结果，用于前端判断是否需要继续轮询
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCollectingTotalResult(const bool& _collectingTotalResult);

                    /**
                     * 判断参数 CollectingTotalResult 是否已赋值
                     * @return CollectingTotalResult 是否已赋值
                     * 
                     */
                    bool CollectingTotalResultHasBeenSet() const;

                    /**
                     * 获取是否需要截断脚本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScriptContentTruncate 是否需要截断脚本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetScriptContentTruncate() const;

                    /**
                     * 设置是否需要截断脚本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scriptContentTruncate 是否需要截断脚本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScriptContentTruncate(const bool& _scriptContentTruncate);

                    /**
                     * 判断参数 ScriptContentTruncate 是否已赋值
                     * @return ScriptContentTruncate 是否已赋值
                     * 
                     */
                    bool ScriptContentTruncateHasBeenSet() const;

                private:

                    /**
                     * 数据探索任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 子查询任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobExecutionId;
                    bool m_jobExecutionIdHasBeenSet;

                    /**
                     * 子查询名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobExecutionName;
                    bool m_jobExecutionNameHasBeenSet;

                    /**
                     * 子查询sql内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scriptContent;
                    bool m_scriptContentHasBeenSet;

                    /**
                     * 子查询状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 执行阶段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executeStageInfo;
                    bool m_executeStageInfoHasBeenSet;

                    /**
                     * 日志路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logFilePath;
                    bool m_logFilePathHasBeenSet;

                    /**
                     * 下载结果路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resultFilePath;
                    bool m_resultFilePathHasBeenSet;

                    /**
                     * 预览结果路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resultPreviewFilePath;
                    bool m_resultPreviewFilePathHasBeenSet;

                    /**
                     * 任务执行的结果总行数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_resultTotalCount;
                    bool m_resultTotalCountHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 耗时
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timeCost;
                    bool m_timeCostHasBeenSet;

                    /**
                     * 上下文SQL内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_contextScriptContent;
                    bool m_contextScriptContentHasBeenSet;

                    /**
                     * 任务执行的结果预览行数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_resultPreviewCount;
                    bool m_resultPreviewCountHasBeenSet;

                    /**
                     * 任务执行的结果影响行数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_resultEffectCount;
                    bool m_resultEffectCountHasBeenSet;

                    /**
                     * 是否正在收集全量结果：默认false，true表示正在收集全量结果，用于前端判断是否需要继续轮询
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_collectingTotalResult;
                    bool m_collectingTotalResultHasBeenSet;

                    /**
                     * 是否需要截断脚本内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_scriptContentTruncate;
                    bool m_scriptContentTruncateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_JOBEXECUTIONDTO_H_
