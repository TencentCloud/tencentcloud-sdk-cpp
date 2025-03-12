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
                     * 获取步骤序列
                     * @return StepNo 步骤序列
                     * 
                     */
                    uint64_t GetStepNo() const;

                    /**
                     * 设置步骤序列
                     * @param _stepNo 步骤序列
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
                     * 获取步骤展现名称
                     * @return StepName 步骤展现名称
                     * 
                     */
                    std::string GetStepName() const;

                    /**
                     * 设置步骤展现名称
                     * @param _stepName 步骤展现名称
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
                     * 获取步骤英文标识
                     * @return StepId 步骤英文标识
                     * 
                     */
                    std::string GetStepId() const;

                    /**
                     * 设置步骤英文标识
                     * @param _stepId 步骤英文标识
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
                     * 获取步骤状态:success(成功)、failed(失败)、running(执行中)、notStarted(未执行)、默认为notStarted
                     * @return Status 步骤状态:success(成功)、failed(失败)、running(执行中)、notStarted(未执行)、默认为notStarted
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置步骤状态:success(成功)、failed(失败)、running(执行中)、notStarted(未执行)、默认为notStarted
                     * @param _status 步骤状态:success(成功)、failed(失败)、running(执行中)、notStarted(未执行)、默认为notStarted
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
                     * 获取当前步骤开始的时间，格式为"yyyy-mm-dd hh:mm:ss"，该字段不存在或者为空是无意义 注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 当前步骤开始的时间，格式为"yyyy-mm-dd hh:mm:ss"，该字段不存在或者为空是无意义 注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置当前步骤开始的时间，格式为"yyyy-mm-dd hh:mm:ss"，该字段不存在或者为空是无意义 注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 当前步骤开始的时间，格式为"yyyy-mm-dd hh:mm:ss"，该字段不存在或者为空是无意义 注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取步骤错误信息
                     * @return StepMessage 步骤错误信息
                     * 
                     */
                    std::string GetStepMessage() const;

                    /**
                     * 设置步骤错误信息
                     * @param _stepMessage 步骤错误信息
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
                     * 获取执行进度
                     * @return Percent 执行进度
                     * 
                     */
                    uint64_t GetPercent() const;

                    /**
                     * 设置执行进度
                     * @param _percent 执行进度
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
                     * 获取错误信息
                     * @return Errors 错误信息
                     * 
                     */
                    std::vector<ProcessStepTip> GetErrors() const;

                    /**
                     * 设置错误信息
                     * @param _errors 错误信息
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
                     * 获取告警提示
                     * @return Warnings 告警提示
                     * 
                     */
                    std::vector<ProcessStepTip> GetWarnings() const;

                    /**
                     * 设置告警提示
                     * @param _warnings 告警提示
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
                     * 步骤序列
                     */
                    uint64_t m_stepNo;
                    bool m_stepNoHasBeenSet;

                    /**
                     * 步骤展现名称
                     */
                    std::string m_stepName;
                    bool m_stepNameHasBeenSet;

                    /**
                     * 步骤英文标识
                     */
                    std::string m_stepId;
                    bool m_stepIdHasBeenSet;

                    /**
                     * 步骤状态:success(成功)、failed(失败)、running(执行中)、notStarted(未执行)、默认为notStarted
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 当前步骤开始的时间，格式为"yyyy-mm-dd hh:mm:ss"，该字段不存在或者为空是无意义 注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 步骤错误信息
                     */
                    std::string m_stepMessage;
                    bool m_stepMessageHasBeenSet;

                    /**
                     * 执行进度
                     */
                    uint64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * 错误信息
                     */
                    std::vector<ProcessStepTip> m_errors;
                    bool m_errorsHasBeenSet;

                    /**
                     * 告警提示
                     */
                    std::vector<ProcessStepTip> m_warnings;
                    bool m_warningsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_STEPDETAILINFO_H_
