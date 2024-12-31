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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_AUTOSCALERECORD_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_AUTOSCALERECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 弹性扩缩容记录
                */
                class AutoScaleRecord : public AbstractModel
                {
                public:
                    AutoScaleRecord();
                    ~AutoScaleRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取扩缩容规则名。
                     * @return StrategyName 扩缩容规则名。
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置扩缩容规则名。
                     * @param _strategyName 扩缩容规则名。
                     * 
                     */
                    void SetStrategyName(const std::string& _strategyName);

                    /**
                     * 判断参数 StrategyName 是否已赋值
                     * @return StrategyName 是否已赋值
                     * 
                     */
                    bool StrategyNameHasBeenSet() const;

                    /**
                     * 获取"SCALE_OUT"和"SCALE_IN"，分别表示扩容和缩容。
                     * @return ScaleAction "SCALE_OUT"和"SCALE_IN"，分别表示扩容和缩容。
                     * 
                     */
                    std::string GetScaleAction() const;

                    /**
                     * 设置"SCALE_OUT"和"SCALE_IN"，分别表示扩容和缩容。
                     * @param _scaleAction "SCALE_OUT"和"SCALE_IN"，分别表示扩容和缩容。
                     * 
                     */
                    void SetScaleAction(const std::string& _scaleAction);

                    /**
                     * 判断参数 ScaleAction 是否已赋值
                     * @return ScaleAction 是否已赋值
                     * 
                     */
                    bool ScaleActionHasBeenSet() const;

                    /**
                     * 获取取值为"SUCCESS","FAILED","PART_SUCCESS","IN_PROCESS"，分别表示成功、失败、部分成功和流程中。
                     * @return ActionStatus 取值为"SUCCESS","FAILED","PART_SUCCESS","IN_PROCESS"，分别表示成功、失败、部分成功和流程中。
                     * 
                     */
                    std::string GetActionStatus() const;

                    /**
                     * 设置取值为"SUCCESS","FAILED","PART_SUCCESS","IN_PROCESS"，分别表示成功、失败、部分成功和流程中。
                     * @param _actionStatus 取值为"SUCCESS","FAILED","PART_SUCCESS","IN_PROCESS"，分别表示成功、失败、部分成功和流程中。
                     * 
                     */
                    void SetActionStatus(const std::string& _actionStatus);

                    /**
                     * 判断参数 ActionStatus 是否已赋值
                     * @return ActionStatus 是否已赋值
                     * 
                     */
                    bool ActionStatusHasBeenSet() const;

                    /**
                     * 获取流程触发时间。
                     * @return ActionTime 流程触发时间。
                     * 
                     */
                    std::string GetActionTime() const;

                    /**
                     * 设置流程触发时间。
                     * @param _actionTime 流程触发时间。
                     * 
                     */
                    void SetActionTime(const std::string& _actionTime);

                    /**
                     * 判断参数 ActionTime 是否已赋值
                     * @return ActionTime 是否已赋值
                     * 
                     */
                    bool ActionTimeHasBeenSet() const;

                    /**
                     * 获取扩缩容相关描述信息。
                     * @return ScaleInfo 扩缩容相关描述信息。
                     * 
                     */
                    std::string GetScaleInfo() const;

                    /**
                     * 设置扩缩容相关描述信息。
                     * @param _scaleInfo 扩缩容相关描述信息。
                     * 
                     */
                    void SetScaleInfo(const std::string& _scaleInfo);

                    /**
                     * 判断参数 ScaleInfo 是否已赋值
                     * @return ScaleInfo 是否已赋值
                     * 
                     */
                    bool ScaleInfoHasBeenSet() const;

                    /**
                     * 获取只在ScaleAction为SCALE_OUT时有效。
                     * @return ExpectScaleNum 只在ScaleAction为SCALE_OUT时有效。
                     * 
                     */
                    int64_t GetExpectScaleNum() const;

                    /**
                     * 设置只在ScaleAction为SCALE_OUT时有效。
                     * @param _expectScaleNum 只在ScaleAction为SCALE_OUT时有效。
                     * 
                     */
                    void SetExpectScaleNum(const int64_t& _expectScaleNum);

                    /**
                     * 判断参数 ExpectScaleNum 是否已赋值
                     * @return ExpectScaleNum 是否已赋值
                     * 
                     */
                    bool ExpectScaleNumHasBeenSet() const;

                    /**
                     * 获取流程结束时间。
                     * @return EndTime 流程结束时间。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置流程结束时间。
                     * @param _endTime 流程结束时间。
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
                     * 获取策略类型，按负载或者按时间，1表示负载伸缩，2表示时间伸缩
                     * @return StrategyType 策略类型，按负载或者按时间，1表示负载伸缩，2表示时间伸缩
                     * 
                     */
                    int64_t GetStrategyType() const;

                    /**
                     * 设置策略类型，按负载或者按时间，1表示负载伸缩，2表示时间伸缩
                     * @param _strategyType 策略类型，按负载或者按时间，1表示负载伸缩，2表示时间伸缩
                     * 
                     */
                    void SetStrategyType(const int64_t& _strategyType);

                    /**
                     * 判断参数 StrategyType 是否已赋值
                     * @return StrategyType 是否已赋值
                     * 
                     */
                    bool StrategyTypeHasBeenSet() const;

                    /**
                     * 获取扩容时所使用规格信息。
                     * @return SpecInfo 扩容时所使用规格信息。
                     * 
                     */
                    std::string GetSpecInfo() const;

                    /**
                     * 设置扩容时所使用规格信息。
                     * @param _specInfo 扩容时所使用规格信息。
                     * 
                     */
                    void SetSpecInfo(const std::string& _specInfo);

                    /**
                     * 判断参数 SpecInfo 是否已赋值
                     * @return SpecInfo 是否已赋值
                     * 
                     */
                    bool SpecInfoHasBeenSet() const;

                    /**
                     * 获取补偿扩容，0表示不开启，1表示开启
                     * @return CompensateFlag 补偿扩容，0表示不开启，1表示开启
                     * 
                     */
                    int64_t GetCompensateFlag() const;

                    /**
                     * 设置补偿扩容，0表示不开启，1表示开启
                     * @param _compensateFlag 补偿扩容，0表示不开启，1表示开启
                     * 
                     */
                    void SetCompensateFlag(const int64_t& _compensateFlag);

                    /**
                     * 判断参数 CompensateFlag 是否已赋值
                     * @return CompensateFlag 是否已赋值
                     * 
                     */
                    bool CompensateFlagHasBeenSet() const;

                    /**
                     * 获取补偿次数
                     * @return CompensateCount 补偿次数
                     * 
                     */
                    int64_t GetCompensateCount() const;

                    /**
                     * 设置补偿次数
                     * @param _compensateCount 补偿次数
                     * 
                     */
                    void SetCompensateCount(const int64_t& _compensateCount);

                    /**
                     * 判断参数 CompensateCount 是否已赋值
                     * @return CompensateCount 是否已赋值
                     * 
                     */
                    bool CompensateCountHasBeenSet() const;

                    /**
                     * 获取重试次数
                     * @return RetryCount 重试次数
                     * 
                     */
                    uint64_t GetRetryCount() const;

                    /**
                     * 设置重试次数
                     * @param _retryCount 重试次数
                     * 
                     */
                    void SetRetryCount(const uint64_t& _retryCount);

                    /**
                     * 判断参数 RetryCount 是否已赋值
                     * @return RetryCount 是否已赋值
                     * 
                     */
                    bool RetryCountHasBeenSet() const;

                    /**
                     * 获取重试信息
                     * @return RetryInfo 重试信息
                     * 
                     */
                    std::string GetRetryInfo() const;

                    /**
                     * 设置重试信息
                     * @param _retryInfo 重试信息
                     * 
                     */
                    void SetRetryInfo(const std::string& _retryInfo);

                    /**
                     * 判断参数 RetryInfo 是否已赋值
                     * @return RetryInfo 是否已赋值
                     * 
                     */
                    bool RetryInfoHasBeenSet() const;

                    /**
                     * 获取重试英文描述
                     * @return RetryEnReason 重试英文描述
                     * 
                     */
                    std::string GetRetryEnReason() const;

                    /**
                     * 设置重试英文描述
                     * @param _retryEnReason 重试英文描述
                     * 
                     */
                    void SetRetryEnReason(const std::string& _retryEnReason);

                    /**
                     * 判断参数 RetryEnReason 是否已赋值
                     * @return RetryEnReason 是否已赋值
                     * 
                     */
                    bool RetryEnReasonHasBeenSet() const;

                    /**
                     * 获取重试描述
                     * @return RetryReason 重试描述
                     * 
                     */
                    std::string GetRetryReason() const;

                    /**
                     * 设置重试描述
                     * @param _retryReason 重试描述
                     * 
                     */
                    void SetRetryReason(const std::string& _retryReason);

                    /**
                     * 判断参数 RetryReason 是否已赋值
                     * @return RetryReason 是否已赋值
                     * 
                     */
                    bool RetryReasonHasBeenSet() const;

                private:

                    /**
                     * 扩缩容规则名。
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * "SCALE_OUT"和"SCALE_IN"，分别表示扩容和缩容。
                     */
                    std::string m_scaleAction;
                    bool m_scaleActionHasBeenSet;

                    /**
                     * 取值为"SUCCESS","FAILED","PART_SUCCESS","IN_PROCESS"，分别表示成功、失败、部分成功和流程中。
                     */
                    std::string m_actionStatus;
                    bool m_actionStatusHasBeenSet;

                    /**
                     * 流程触发时间。
                     */
                    std::string m_actionTime;
                    bool m_actionTimeHasBeenSet;

                    /**
                     * 扩缩容相关描述信息。
                     */
                    std::string m_scaleInfo;
                    bool m_scaleInfoHasBeenSet;

                    /**
                     * 只在ScaleAction为SCALE_OUT时有效。
                     */
                    int64_t m_expectScaleNum;
                    bool m_expectScaleNumHasBeenSet;

                    /**
                     * 流程结束时间。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 策略类型，按负载或者按时间，1表示负载伸缩，2表示时间伸缩
                     */
                    int64_t m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * 扩容时所使用规格信息。
                     */
                    std::string m_specInfo;
                    bool m_specInfoHasBeenSet;

                    /**
                     * 补偿扩容，0表示不开启，1表示开启
                     */
                    int64_t m_compensateFlag;
                    bool m_compensateFlagHasBeenSet;

                    /**
                     * 补偿次数
                     */
                    int64_t m_compensateCount;
                    bool m_compensateCountHasBeenSet;

                    /**
                     * 重试次数
                     */
                    uint64_t m_retryCount;
                    bool m_retryCountHasBeenSet;

                    /**
                     * 重试信息
                     */
                    std::string m_retryInfo;
                    bool m_retryInfoHasBeenSet;

                    /**
                     * 重试英文描述
                     */
                    std::string m_retryEnReason;
                    bool m_retryEnReasonHasBeenSet;

                    /**
                     * 重试描述
                     */
                    std::string m_retryReason;
                    bool m_retryReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_AUTOSCALERECORD_H_
