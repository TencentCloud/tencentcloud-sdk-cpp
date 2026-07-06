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
                     * 获取<p>扩缩容规则名。</p>
                     * @return StrategyName <p>扩缩容规则名。</p>
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置<p>扩缩容规则名。</p>
                     * @param _strategyName <p>扩缩容规则名。</p>
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
                     * 获取<p>&quot;SCALE_OUT&quot;和&quot;SCALE_IN&quot;，分别表示扩容和缩容。</p>
                     * @return ScaleAction <p>&quot;SCALE_OUT&quot;和&quot;SCALE_IN&quot;，分别表示扩容和缩容。</p>
                     * 
                     */
                    std::string GetScaleAction() const;

                    /**
                     * 设置<p>&quot;SCALE_OUT&quot;和&quot;SCALE_IN&quot;，分别表示扩容和缩容。</p>
                     * @param _scaleAction <p>&quot;SCALE_OUT&quot;和&quot;SCALE_IN&quot;，分别表示扩容和缩容。</p>
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
                     * 获取<p>取值为&quot;SUCCESS&quot;,&quot;FAILED&quot;,&quot;PART_SUCCESS&quot;,&quot;IN_PROCESS&quot;，分别表示成功、失败、部分成功和流程中。</p>
                     * @return ActionStatus <p>取值为&quot;SUCCESS&quot;,&quot;FAILED&quot;,&quot;PART_SUCCESS&quot;,&quot;IN_PROCESS&quot;，分别表示成功、失败、部分成功和流程中。</p>
                     * 
                     */
                    std::string GetActionStatus() const;

                    /**
                     * 设置<p>取值为&quot;SUCCESS&quot;,&quot;FAILED&quot;,&quot;PART_SUCCESS&quot;,&quot;IN_PROCESS&quot;，分别表示成功、失败、部分成功和流程中。</p>
                     * @param _actionStatus <p>取值为&quot;SUCCESS&quot;,&quot;FAILED&quot;,&quot;PART_SUCCESS&quot;,&quot;IN_PROCESS&quot;，分别表示成功、失败、部分成功和流程中。</p>
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
                     * 获取<p>流程触发时间。</p>
                     * @return ActionTime <p>流程触发时间。</p>
                     * 
                     */
                    std::string GetActionTime() const;

                    /**
                     * 设置<p>流程触发时间。</p>
                     * @param _actionTime <p>流程触发时间。</p>
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
                     * 获取<p>扩缩容相关描述信息。</p>
                     * @return ScaleInfo <p>扩缩容相关描述信息。</p>
                     * 
                     */
                    std::string GetScaleInfo() const;

                    /**
                     * 设置<p>扩缩容相关描述信息。</p>
                     * @param _scaleInfo <p>扩缩容相关描述信息。</p>
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
                     * 获取<p>只在ScaleAction为SCALE_OUT时有效。</p>
                     * @return ExpectScaleNum <p>只在ScaleAction为SCALE_OUT时有效。</p>
                     * 
                     */
                    int64_t GetExpectScaleNum() const;

                    /**
                     * 设置<p>只在ScaleAction为SCALE_OUT时有效。</p>
                     * @param _expectScaleNum <p>只在ScaleAction为SCALE_OUT时有效。</p>
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
                     * 获取<p>流程结束时间。</p>
                     * @return EndTime <p>流程结束时间。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>流程结束时间。</p>
                     * @param _endTime <p>流程结束时间。</p>
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
                     * 获取<p>策略类型，按负载或者按时间，1表示负载伸缩，2表示时间伸缩</p>
                     * @return StrategyType <p>策略类型，按负载或者按时间，1表示负载伸缩，2表示时间伸缩</p>
                     * 
                     */
                    int64_t GetStrategyType() const;

                    /**
                     * 设置<p>策略类型，按负载或者按时间，1表示负载伸缩，2表示时间伸缩</p>
                     * @param _strategyType <p>策略类型，按负载或者按时间，1表示负载伸缩，2表示时间伸缩</p>
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
                     * 获取<p>扩容时所使用规格信息。</p>
                     * @return SpecInfo <p>扩容时所使用规格信息。</p>
                     * 
                     */
                    std::string GetSpecInfo() const;

                    /**
                     * 设置<p>扩容时所使用规格信息。</p>
                     * @param _specInfo <p>扩容时所使用规格信息。</p>
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
                     * 获取<p>补偿扩容，0表示不开启，1表示开启</p>
                     * @return CompensateFlag <p>补偿扩容，0表示不开启，1表示开启</p>
                     * 
                     */
                    int64_t GetCompensateFlag() const;

                    /**
                     * 设置<p>补偿扩容，0表示不开启，1表示开启</p>
                     * @param _compensateFlag <p>补偿扩容，0表示不开启，1表示开启</p>
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
                     * 获取<p>补偿次数</p>
                     * @return CompensateCount <p>补偿次数</p>
                     * 
                     */
                    int64_t GetCompensateCount() const;

                    /**
                     * 设置<p>补偿次数</p>
                     * @param _compensateCount <p>补偿次数</p>
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
                     * 获取<p>重试次数</p>
                     * @return RetryCount <p>重试次数</p>
                     * 
                     */
                    uint64_t GetRetryCount() const;

                    /**
                     * 设置<p>重试次数</p>
                     * @param _retryCount <p>重试次数</p>
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
                     * 获取<p>重试信息</p>
                     * @return RetryInfo <p>重试信息</p>
                     * 
                     */
                    std::string GetRetryInfo() const;

                    /**
                     * 设置<p>重试信息</p>
                     * @param _retryInfo <p>重试信息</p>
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
                     * 获取<p>重试英文描述</p>
                     * @return RetryEnReason <p>重试英文描述</p>
                     * 
                     */
                    std::string GetRetryEnReason() const;

                    /**
                     * 设置<p>重试英文描述</p>
                     * @param _retryEnReason <p>重试英文描述</p>
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
                     * 获取<p>重试描述</p>
                     * @return RetryReason <p>重试描述</p>
                     * 
                     */
                    std::string GetRetryReason() const;

                    /**
                     * 设置<p>重试描述</p>
                     * @param _retryReason <p>重试描述</p>
                     * 
                     */
                    void SetRetryReason(const std::string& _retryReason);

                    /**
                     * 判断参数 RetryReason 是否已赋值
                     * @return RetryReason 是否已赋值
                     * 
                     */
                    bool RetryReasonHasBeenSet() const;

                    /**
                     * 获取<p>缺失分类</p>
                     * @return ShortageClass <p>缺失分类</p>
                     * 
                     */
                    int64_t GetShortageClass() const;

                    /**
                     * 设置<p>缺失分类</p>
                     * @param _shortageClass <p>缺失分类</p>
                     * 
                     */
                    void SetShortageClass(const int64_t& _shortageClass);

                    /**
                     * 判断参数 ShortageClass 是否已赋值
                     * @return ShortageClass 是否已赋值
                     * 
                     */
                    bool ShortageClassHasBeenSet() const;

                private:

                    /**
                     * <p>扩缩容规则名。</p>
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * <p>&quot;SCALE_OUT&quot;和&quot;SCALE_IN&quot;，分别表示扩容和缩容。</p>
                     */
                    std::string m_scaleAction;
                    bool m_scaleActionHasBeenSet;

                    /**
                     * <p>取值为&quot;SUCCESS&quot;,&quot;FAILED&quot;,&quot;PART_SUCCESS&quot;,&quot;IN_PROCESS&quot;，分别表示成功、失败、部分成功和流程中。</p>
                     */
                    std::string m_actionStatus;
                    bool m_actionStatusHasBeenSet;

                    /**
                     * <p>流程触发时间。</p>
                     */
                    std::string m_actionTime;
                    bool m_actionTimeHasBeenSet;

                    /**
                     * <p>扩缩容相关描述信息。</p>
                     */
                    std::string m_scaleInfo;
                    bool m_scaleInfoHasBeenSet;

                    /**
                     * <p>只在ScaleAction为SCALE_OUT时有效。</p>
                     */
                    int64_t m_expectScaleNum;
                    bool m_expectScaleNumHasBeenSet;

                    /**
                     * <p>流程结束时间。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>策略类型，按负载或者按时间，1表示负载伸缩，2表示时间伸缩</p>
                     */
                    int64_t m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * <p>扩容时所使用规格信息。</p>
                     */
                    std::string m_specInfo;
                    bool m_specInfoHasBeenSet;

                    /**
                     * <p>补偿扩容，0表示不开启，1表示开启</p>
                     */
                    int64_t m_compensateFlag;
                    bool m_compensateFlagHasBeenSet;

                    /**
                     * <p>补偿次数</p>
                     */
                    int64_t m_compensateCount;
                    bool m_compensateCountHasBeenSet;

                    /**
                     * <p>重试次数</p>
                     */
                    uint64_t m_retryCount;
                    bool m_retryCountHasBeenSet;

                    /**
                     * <p>重试信息</p>
                     */
                    std::string m_retryInfo;
                    bool m_retryInfoHasBeenSet;

                    /**
                     * <p>重试英文描述</p>
                     */
                    std::string m_retryEnReason;
                    bool m_retryEnReasonHasBeenSet;

                    /**
                     * <p>重试描述</p>
                     */
                    std::string m_retryReason;
                    bool m_retryReasonHasBeenSet;

                    /**
                     * <p>缺失分类</p>
                     */
                    int64_t m_shortageClass;
                    bool m_shortageClassHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_AUTOSCALERECORD_H_
