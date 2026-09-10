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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_CNAPIGWMCPTOOLIMPORTTASKRESULT_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_CNAPIGWMCPTOOLIMPORTTASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/CNAPIGwMCPToolImportResult.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * MCP Tools导入任务的进度
                */
                class CNAPIGwMCPToolImportTaskResult : public AbstractModel
                {
                public:
                    CNAPIGwMCPToolImportTaskResult();
                    ~CNAPIGwMCPToolImportTaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>导入失败的数量</p>
                     * @return FailedCount <p>导入失败的数量</p>
                     * 
                     */
                    uint64_t GetFailedCount() const;

                    /**
                     * 设置<p>导入失败的数量</p>
                     * @param _failedCount <p>导入失败的数量</p>
                     * 
                     */
                    void SetFailedCount(const uint64_t& _failedCount);

                    /**
                     * 判断参数 FailedCount 是否已赋值
                     * @return FailedCount 是否已赋值
                     * 
                     */
                    bool FailedCountHasBeenSet() const;

                    /**
                     * 获取<p>已处理导入Tool的总数</p>
                     * @return ProcessedCount <p>已处理导入Tool的总数</p>
                     * 
                     */
                    uint64_t GetProcessedCount() const;

                    /**
                     * 设置<p>已处理导入Tool的总数</p>
                     * @param _processedCount <p>已处理导入Tool的总数</p>
                     * 
                     */
                    void SetProcessedCount(const uint64_t& _processedCount);

                    /**
                     * 判断参数 ProcessedCount 是否已赋值
                     * @return ProcessedCount 是否已赋值
                     * 
                     */
                    bool ProcessedCountHasBeenSet() const;

                    /**
                     * 获取<p>成功导入的Tool数量</p>
                     * @return SuccessCount <p>成功导入的Tool数量</p>
                     * 
                     */
                    uint64_t GetSuccessCount() const;

                    /**
                     * 设置<p>成功导入的Tool数量</p>
                     * @param _successCount <p>成功导入的Tool数量</p>
                     * 
                     */
                    void SetSuccessCount(const uint64_t& _successCount);

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取<p>任务结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskEndTime <p>任务结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskEndTime() const;

                    /**
                     * 设置<p>任务结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskEndTime <p>任务结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskEndTime(const std::string& _taskEndTime);

                    /**
                     * 判断参数 TaskEndTime 是否已赋值
                     * @return TaskEndTime 是否已赋值
                     * 
                     */
                    bool TaskEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>任务ID</p>
                     * @return TaskId <p>任务ID</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务ID</p>
                     * @param _taskId <p>任务ID</p>
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
                     * 获取<p>任务开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskStartTime <p>任务开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskStartTime() const;

                    /**
                     * 设置<p>任务开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskStartTime <p>任务开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskStartTime(const std::string& _taskStartTime);

                    /**
                     * 判断参数 TaskStartTime 是否已赋值
                     * @return TaskStartTime 是否已赋值
                     * 
                     */
                    bool TaskStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>任务状态</p><p>枚举值：</p><ul><li>Running： 运行中</li><li>End： 结束</li></ul>
                     * @return TaskStatus <p>任务状态</p><p>枚举值：</p><ul><li>Running： 运行中</li><li>End： 结束</li></ul>
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置<p>任务状态</p><p>枚举值：</p><ul><li>Running： 运行中</li><li>End： 结束</li></ul>
                     * @param _taskStatus <p>任务状态</p><p>枚举值：</p><ul><li>Running： 运行中</li><li>End： 结束</li></ul>
                     * 
                     */
                    void SetTaskStatus(const std::string& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取<p>导入结果详情</p>
                     * @return ToolsImportResult <p>导入结果详情</p>
                     * 
                     */
                    std::vector<CNAPIGwMCPToolImportResult> GetToolsImportResult() const;

                    /**
                     * 设置<p>导入结果详情</p>
                     * @param _toolsImportResult <p>导入结果详情</p>
                     * 
                     */
                    void SetToolsImportResult(const std::vector<CNAPIGwMCPToolImportResult>& _toolsImportResult);

                    /**
                     * 判断参数 ToolsImportResult 是否已赋值
                     * @return ToolsImportResult 是否已赋值
                     * 
                     */
                    bool ToolsImportResultHasBeenSet() const;

                    /**
                     * 获取<p>待导入Tools的总数</p>
                     * @return TotalCount <p>待导入Tools的总数</p>
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置<p>待导入Tools的总数</p>
                     * @param _totalCount <p>待导入Tools的总数</p>
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>导入失败的数量</p>
                     */
                    uint64_t m_failedCount;
                    bool m_failedCountHasBeenSet;

                    /**
                     * <p>已处理导入Tool的总数</p>
                     */
                    uint64_t m_processedCount;
                    bool m_processedCountHasBeenSet;

                    /**
                     * <p>成功导入的Tool数量</p>
                     */
                    uint64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * <p>任务结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskEndTime;
                    bool m_taskEndTimeHasBeenSet;

                    /**
                     * <p>任务ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskStartTime;
                    bool m_taskStartTimeHasBeenSet;

                    /**
                     * <p>任务状态</p><p>枚举值：</p><ul><li>Running： 运行中</li><li>End： 结束</li></ul>
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * <p>导入结果详情</p>
                     */
                    std::vector<CNAPIGwMCPToolImportResult> m_toolsImportResult;
                    bool m_toolsImportResultHasBeenSet;

                    /**
                     * <p>待导入Tools的总数</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_CNAPIGWMCPTOOLIMPORTTASKRESULT_H_
