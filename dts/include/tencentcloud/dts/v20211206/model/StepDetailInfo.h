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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_STEPDETAILINFO_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_STEPDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/ProcessStepTip.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 步骤信息
                */
                class StepDetailInfo : public AbstractModel
                {
                public:
                    StepDetailInfo();
                    ~StepDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>步骤序列</p>
                     * @return StepNo <p>步骤序列</p>
                     * 
                     */
                    uint64_t GetStepNo() const;

                    /**
                     * 设置<p>步骤序列</p>
                     * @param _stepNo <p>步骤序列</p>
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
                     * 获取<p>步骤展现名称</p>
                     * @return StepName <p>步骤展现名称</p>
                     * 
                     */
                    std::string GetStepName() const;

                    /**
                     * 设置<p>步骤展现名称</p>
                     * @param _stepName <p>步骤展现名称</p>
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
                     * 获取<p>步骤英文标识</p>
                     * @return StepId <p>步骤英文标识</p>
                     * 
                     */
                    std::string GetStepId() const;

                    /**
                     * 设置<p>步骤英文标识</p>
                     * @param _stepId <p>步骤英文标识</p>
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
                     * 获取<p>步骤状态:success(成功)、failed(失败)、running(执行中)、notStarted(未执行)、默认为notStarted</p>
                     * @return Status <p>步骤状态:success(成功)、failed(失败)、running(执行中)、notStarted(未执行)、默认为notStarted</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>步骤状态:success(成功)、failed(失败)、running(执行中)、notStarted(未执行)、默认为notStarted</p>
                     * @param _status <p>步骤状态:success(成功)、failed(失败)、running(执行中)、notStarted(未执行)、默认为notStarted</p>
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
                     * 获取<p>当前步骤开始的时间，格式为&quot;yyyy-mm-dd hh:mm:ss&quot;，该字段不存在或者为空是无意义 注意：此字段可能返回 null，表示取不到有效值。</p>
                     * @return StartTime <p>当前步骤开始的时间，格式为&quot;yyyy-mm-dd hh:mm:ss&quot;，该字段不存在或者为空是无意义 注意：此字段可能返回 null，表示取不到有效值。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>当前步骤开始的时间，格式为&quot;yyyy-mm-dd hh:mm:ss&quot;，该字段不存在或者为空是无意义 注意：此字段可能返回 null，表示取不到有效值。</p>
                     * @param _startTime <p>当前步骤开始的时间，格式为&quot;yyyy-mm-dd hh:mm:ss&quot;，该字段不存在或者为空是无意义 注意：此字段可能返回 null，表示取不到有效值。</p>
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
                     * 获取<p>步骤错误信息</p>
                     * @return StepMessage <p>步骤错误信息</p>
                     * 
                     */
                    std::string GetStepMessage() const;

                    /**
                     * 设置<p>步骤错误信息</p>
                     * @param _stepMessage <p>步骤错误信息</p>
                     * 
                     */
                    void SetStepMessage(const std::string& _stepMessage);

                    /**
                     * 判断参数 StepMessage 是否已赋值
                     * @return StepMessage 是否已赋值
                     * 
                     */
                    bool StepMessageHasBeenSet() const;

                    /**
                     * 获取<p>执行进度</p>
                     * @return Percent <p>执行进度</p>
                     * 
                     */
                    uint64_t GetPercent() const;

                    /**
                     * 设置<p>执行进度</p>
                     * @param _percent <p>执行进度</p>
                     * 
                     */
                    void SetPercent(const uint64_t& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取<p>错误信息</p>
                     * @return Errors <p>错误信息</p>
                     * 
                     */
                    std::vector<ProcessStepTip> GetErrors() const;

                    /**
                     * 设置<p>错误信息</p>
                     * @param _errors <p>错误信息</p>
                     * 
                     */
                    void SetErrors(const std::vector<ProcessStepTip>& _errors);

                    /**
                     * 判断参数 Errors 是否已赋值
                     * @return Errors 是否已赋值
                     * 
                     */
                    bool ErrorsHasBeenSet() const;

                    /**
                     * 获取<p>告警提示</p>
                     * @return Warnings <p>告警提示</p>
                     * 
                     */
                    std::vector<ProcessStepTip> GetWarnings() const;

                    /**
                     * 设置<p>告警提示</p>
                     * @param _warnings <p>告警提示</p>
                     * 
                     */
                    void SetWarnings(const std::vector<ProcessStepTip>& _warnings);

                    /**
                     * 判断参数 Warnings 是否已赋值
                     * @return Warnings 是否已赋值
                     * 
                     */
                    bool WarningsHasBeenSet() const;

                private:

                    /**
                     * <p>步骤序列</p>
                     */
                    uint64_t m_stepNo;
                    bool m_stepNoHasBeenSet;

                    /**
                     * <p>步骤展现名称</p>
                     */
                    std::string m_stepName;
                    bool m_stepNameHasBeenSet;

                    /**
                     * <p>步骤英文标识</p>
                     */
                    std::string m_stepId;
                    bool m_stepIdHasBeenSet;

                    /**
                     * <p>步骤状态:success(成功)、failed(失败)、running(执行中)、notStarted(未执行)、默认为notStarted</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>当前步骤开始的时间，格式为&quot;yyyy-mm-dd hh:mm:ss&quot;，该字段不存在或者为空是无意义 注意：此字段可能返回 null，表示取不到有效值。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>完成时间</p>
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * <p>步骤错误信息</p>
                     */
                    std::string m_stepMessage;
                    bool m_stepMessageHasBeenSet;

                    /**
                     * <p>执行进度</p>
                     */
                    uint64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * <p>错误信息</p>
                     */
                    std::vector<ProcessStepTip> m_errors;
                    bool m_errorsHasBeenSet;

                    /**
                     * <p>告警提示</p>
                     */
                    std::vector<ProcessStepTip> m_warnings;
                    bool m_warningsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_STEPDETAILINFO_H_
