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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_STEPINFO_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_STEPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/StepTip.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 单个步骤的详细信息
                */
                class StepInfo : public AbstractModel
                {
                public:
                    StepInfo();
                    ~StepInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>步骤编号</p>
                     * @return StepNo <p>步骤编号</p>
                     * 
                     */
                    uint64_t GetStepNo() const;

                    /**
                     * 设置<p>步骤编号</p>
                     * @param _stepNo <p>步骤编号</p>
                     * 
                     */
                    void SetStepNo(const uint64_t& _stepNo);

                    /**
                     * 判断参数 StepNo 是否已赋值
                     * @return StepNo 是否已赋值
                     * 
                     */
                    bool StepNoHasBeenSet() const;

                    /**
                     * 获取<p>步骤名</p>
                     * @return StepName <p>步骤名</p>
                     * 
                     */
                    std::string GetStepName() const;

                    /**
                     * 设置<p>步骤名</p>
                     * @param _stepName <p>步骤名</p>
                     * 
                     */
                    void SetStepName(const std::string& _stepName);

                    /**
                     * 判断参数 StepName 是否已赋值
                     * @return StepName 是否已赋值
                     * 
                     */
                    bool StepNameHasBeenSet() const;

                    /**
                     * 获取<p>步骤标号</p>
                     * @return StepId <p>步骤标号</p>
                     * 
                     */
                    std::string GetStepId() const;

                    /**
                     * 设置<p>步骤标号</p>
                     * @param _stepId <p>步骤标号</p>
                     * 
                     */
                    void SetStepId(const std::string& _stepId);

                    /**
                     * 判断参数 StepId 是否已赋值
                     * @return StepId 是否已赋值
                     * 
                     */
                    bool StepIdHasBeenSet() const;

                    /**
                     * 获取<p>当前步骤状态,可能返回有 notStarted(未开始)、running(校验中)、failed(校验任务失败)、finished(完成)、skipped(跳过)、paused(暂停)</p>
                     * @return Status <p>当前步骤状态,可能返回有 notStarted(未开始)、running(校验中)、failed(校验任务失败)、finished(完成)、skipped(跳过)、paused(暂停)</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>当前步骤状态,可能返回有 notStarted(未开始)、running(校验中)、failed(校验任务失败)、finished(完成)、skipped(跳过)、paused(暂停)</p>
                     * @param _status <p>当前步骤状态,可能返回有 notStarted(未开始)、running(校验中)、failed(校验任务失败)、finished(完成)、skipped(跳过)、paused(暂停)</p>
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
                     * 获取<p>步骤开始时间，可能为空</p>
                     * @return StartTime <p>步骤开始时间，可能为空</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>步骤开始时间，可能为空</p>
                     * @param _startTime <p>步骤开始时间，可能为空</p>
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
                     * 获取<p>完成时间</p>
                     * @return FinishTime <p>完成时间</p>
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置<p>完成时间</p>
                     * @param _finishTime <p>完成时间</p>
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取<p>错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Errors <p>错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<StepTip> GetErrors() const;

                    /**
                     * 设置<p>错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errors <p>错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrors(const std::vector<StepTip>& _errors);

                    /**
                     * 判断参数 Errors 是否已赋值
                     * @return Errors 是否已赋值
                     * 
                     */
                    bool ErrorsHasBeenSet() const;

                    /**
                     * 获取<p>警告信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Warnings <p>警告信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<StepTip> GetWarnings() const;

                    /**
                     * 设置<p>警告信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _warnings <p>警告信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWarnings(const std::vector<StepTip>& _warnings);

                    /**
                     * 判断参数 Warnings 是否已赋值
                     * @return Warnings 是否已赋值
                     * 
                     */
                    bool WarningsHasBeenSet() const;

                    /**
                     * 获取<p>当前步骤进度，范围为[0-100]，若为-1表示当前步骤不支持查看进度</p>
                     * @return Progress <p>当前步骤进度，范围为[0-100]，若为-1表示当前步骤不支持查看进度</p>
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置<p>当前步骤进度，范围为[0-100]，若为-1表示当前步骤不支持查看进度</p>
                     * @param _progress <p>当前步骤进度，范围为[0-100]，若为-1表示当前步骤不支持查看进度</p>
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                private:

                    /**
                     * <p>步骤编号</p>
                     */
                    uint64_t m_stepNo;
                    bool m_stepNoHasBeenSet;

                    /**
                     * <p>步骤名</p>
                     */
                    std::string m_stepName;
                    bool m_stepNameHasBeenSet;

                    /**
                     * <p>步骤标号</p>
                     */
                    std::string m_stepId;
                    bool m_stepIdHasBeenSet;

                    /**
                     * <p>当前步骤状态,可能返回有 notStarted(未开始)、running(校验中)、failed(校验任务失败)、finished(完成)、skipped(跳过)、paused(暂停)</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>步骤开始时间，可能为空</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>完成时间</p>
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * <p>错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<StepTip> m_errors;
                    bool m_errorsHasBeenSet;

                    /**
                     * <p>警告信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<StepTip> m_warnings;
                    bool m_warningsHasBeenSet;

                    /**
                     * <p>当前步骤进度，范围为[0-100]，若为-1表示当前步骤不支持查看进度</p>
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_STEPINFO_H_
