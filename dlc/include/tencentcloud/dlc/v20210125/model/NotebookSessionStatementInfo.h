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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_NOTEBOOKSESSIONSTATEMENTINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_NOTEBOOKSESSIONSTATEMENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/StatementOutput.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * NotebookSessionStatement详情。
                */
                class NotebookSessionStatementInfo : public AbstractModel
                {
                public:
                    NotebookSessionStatementInfo();
                    ~NotebookSessionStatementInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取完成时间戳
                     * @return Completed 完成时间戳
                     * 
                     */
                    int64_t GetCompleted() const;

                    /**
                     * 设置完成时间戳
                     * @param _completed 完成时间戳
                     * 
                     */
                    void SetCompleted(const int64_t& _completed);

                    /**
                     * 判断参数 Completed 是否已赋值
                     * @return Completed 是否已赋值
                     * 
                     */
                    bool CompletedHasBeenSet() const;

                    /**
                     * 获取开始时间戳
                     * @return Started 开始时间戳
                     * 
                     */
                    int64_t GetStarted() const;

                    /**
                     * 设置开始时间戳
                     * @param _started 开始时间戳
                     * 
                     */
                    void SetStarted(const int64_t& _started);

                    /**
                     * 判断参数 Started 是否已赋值
                     * @return Started 是否已赋值
                     * 
                     */
                    bool StartedHasBeenSet() const;

                    /**
                     * 获取完成进度，百分制
                     * @return Progress 完成进度，百分制
                     * 
                     */
                    double GetProgress() const;

                    /**
                     * 设置完成进度，百分制
                     * @param _progress 完成进度，百分制
                     * 
                     */
                    void SetProgress(const double& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Session Statement唯一标识
                     * @return StatementId Session Statement唯一标识
                     * 
                     */
                    std::string GetStatementId() const;

                    /**
                     * 设置Session Statement唯一标识
                     * @param _statementId Session Statement唯一标识
                     * 
                     */
                    void SetStatementId(const std::string& _statementId);

                    /**
                     * 判断参数 StatementId 是否已赋值
                     * @return StatementId 是否已赋值
                     * 
                     */
                    bool StatementIdHasBeenSet() const;

                    /**
                     * 获取Session Statement状态，包含：waiting（排队中）、running（运行中）、available（正常）、error（异常）、cancelling（取消中）、cancelled（已取消）
                     * @return State Session Statement状态，包含：waiting（排队中）、running（运行中）、available（正常）、error（异常）、cancelling（取消中）、cancelled（已取消）
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Session Statement状态，包含：waiting（排队中）、running（运行中）、available（正常）、error（异常）、cancelling（取消中）、cancelled（已取消）
                     * @param _state Session Statement状态，包含：waiting（排队中）、running（运行中）、available（正常）、error（异常）、cancelling（取消中）、cancelled（已取消）
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Statement输出信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutPut Statement输出信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    StatementOutput GetOutPut() const;

                    /**
                     * 设置Statement输出信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outPut Statement输出信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutPut(const StatementOutput& _outPut);

                    /**
                     * 判断参数 OutPut 是否已赋值
                     * @return OutPut 是否已赋值
                     * 
                     */
                    bool OutPutHasBeenSet() const;

                    /**
                     * 获取批任务id
                     * @return BatchId 批任务id
                     * 
                     */
                    std::string GetBatchId() const;

                    /**
                     * 设置批任务id
                     * @param _batchId 批任务id
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
                     * 获取运行语句
                     * @return Code 运行语句
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置运行语句
                     * @param _code 运行语句
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 完成时间戳
                     */
                    int64_t m_completed;
                    bool m_completedHasBeenSet;

                    /**
                     * 开始时间戳
                     */
                    int64_t m_started;
                    bool m_startedHasBeenSet;

                    /**
                     * 完成进度，百分制
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Session Statement唯一标识
                     */
                    std::string m_statementId;
                    bool m_statementIdHasBeenSet;

                    /**
                     * Session Statement状态，包含：waiting（排队中）、running（运行中）、available（正常）、error（异常）、cancelling（取消中）、cancelled（已取消）
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Statement输出信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StatementOutput m_outPut;
                    bool m_outPutHasBeenSet;

                    /**
                     * 批任务id
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                    /**
                     * 运行语句
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_NOTEBOOKSESSIONSTATEMENTINFO_H_
