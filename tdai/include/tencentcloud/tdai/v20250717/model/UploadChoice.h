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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_UPLOADCHOICE_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_UPLOADCHOICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdai/v20250717/model/UploadDelta.h>


namespace TencentCloud
{
    namespace Tdai
    {
        namespace V20250717
        {
            namespace Model
            {
                /**
                * 流式输出消息数据体
                */
                class UploadChoice : public AbstractModel
                {
                public:
                    UploadChoice();
                    ~UploadChoice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取消息索引
                     * @return Index 消息索引
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置消息索引
                     * @param _index 消息索引
                     * 
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取当前消息步骤
                     * @return StepNo 当前消息步骤
                     * 
                     */
                    int64_t GetStepNo() const;

                    /**
                     * 设置当前消息步骤
                     * @param _stepNo 当前消息步骤
                     * 
                     */
                    void SetStepNo(const int64_t& _stepNo);

                    /**
                     * 判断参数 StepNo 是否已赋值
                     * @return StepNo 是否已赋值
                     * 
                     */
                    bool StepNoHasBeenSet() const;

                    /**
                     * 获取当前步骤
                     * @return CurrentStep 当前步骤
                     * 
                     */
                    std::string GetCurrentStep() const;

                    /**
                     * 设置当前步骤
                     * @param _currentStep 当前步骤
                     * 
                     */
                    void SetCurrentStep(const std::string& _currentStep);

                    /**
                     * 判断参数 CurrentStep 是否已赋值
                     * @return CurrentStep 是否已赋值
                     * 
                     */
                    bool CurrentStepHasBeenSet() const;

                    /**
                     * 获取增量信息
                     * @return Delta 增量信息
                     * 
                     */
                    UploadDelta GetDelta() const;

                    /**
                     * 设置增量信息
                     * @param _delta 增量信息
                     * 
                     */
                    void SetDelta(const UploadDelta& _delta);

                    /**
                     * 判断参数 Delta 是否已赋值
                     * @return Delta 是否已赋值
                     * 
                     */
                    bool DeltaHasBeenSet() const;

                    /**
                     * 获取结束原因
                     * @return FinishReason 结束原因
                     * 
                     */
                    std::string GetFinishReason() const;

                    /**
                     * 设置结束原因
                     * @param _finishReason 结束原因
                     * 
                     */
                    void SetFinishReason(const std::string& _finishReason);

                    /**
                     * 判断参数 FinishReason 是否已赋值
                     * @return FinishReason 是否已赋值
                     * 
                     */
                    bool FinishReasonHasBeenSet() const;

                    /**
                     * 获取错误信息，FinishReason为error时有效
                     * @return ErrorMessage 错误信息，FinishReason为error时有效
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置错误信息，FinishReason为error时有效
                     * @param _errorMessage 错误信息，FinishReason为error时有效
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                private:

                    /**
                     * 消息索引
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 当前消息步骤
                     */
                    int64_t m_stepNo;
                    bool m_stepNoHasBeenSet;

                    /**
                     * 当前步骤
                     */
                    std::string m_currentStep;
                    bool m_currentStepHasBeenSet;

                    /**
                     * 增量信息
                     */
                    UploadDelta m_delta;
                    bool m_deltaHasBeenSet;

                    /**
                     * 结束原因
                     */
                    std::string m_finishReason;
                    bool m_finishReasonHasBeenSet;

                    /**
                     * 错误信息，FinishReason为error时有效
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_UPLOADCHOICE_H_
