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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_CREATINGPROGRESS_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_CREATINGPROGRESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdai/v20250717/model/CreatingStepInfo.h>


namespace TencentCloud
{
    namespace Tdai
    {
        namespace V20250717
        {
            namespace Model
            {
                /**
                * 发货步骤描述
                */
                class CreatingProgress : public AbstractModel
                {
                public:
                    CreatingProgress();
                    ~CreatingProgress() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>总步骤数</p>
                     * @return TotalSteps <p>总步骤数</p>
                     * 
                     */
                    int64_t GetTotalSteps() const;

                    /**
                     * 设置<p>总步骤数</p>
                     * @param _totalSteps <p>总步骤数</p>
                     * 
                     */
                    void SetTotalSteps(const int64_t& _totalSteps);

                    /**
                     * 判断参数 TotalSteps 是否已赋值
                     * @return TotalSteps 是否已赋值
                     * 
                     */
                    bool TotalStepsHasBeenSet() const;

                    /**
                     * 获取<p>当前步骤</p>
                     * @return CurrentStep <p>当前步骤</p>
                     * 
                     */
                    int64_t GetCurrentStep() const;

                    /**
                     * 设置<p>当前步骤</p>
                     * @param _currentStep <p>当前步骤</p>
                     * 
                     */
                    void SetCurrentStep(const int64_t& _currentStep);

                    /**
                     * 判断参数 CurrentStep 是否已赋值
                     * @return CurrentStep 是否已赋值
                     * 
                     */
                    bool CurrentStepHasBeenSet() const;

                    /**
                     * 获取<p>步骤详情</p>
                     * @return Steps <p>步骤详情</p>
                     * 
                     */
                    std::vector<CreatingStepInfo> GetSteps() const;

                    /**
                     * 设置<p>步骤详情</p>
                     * @param _steps <p>步骤详情</p>
                     * 
                     */
                    void SetSteps(const std::vector<CreatingStepInfo>& _steps);

                    /**
                     * 判断参数 Steps 是否已赋值
                     * @return Steps 是否已赋值
                     * 
                     */
                    bool StepsHasBeenSet() const;

                private:

                    /**
                     * <p>总步骤数</p>
                     */
                    int64_t m_totalSteps;
                    bool m_totalStepsHasBeenSet;

                    /**
                     * <p>当前步骤</p>
                     */
                    int64_t m_currentStep;
                    bool m_currentStepHasBeenSet;

                    /**
                     * <p>步骤详情</p>
                     */
                    std::vector<CreatingStepInfo> m_steps;
                    bool m_stepsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_CREATINGPROGRESS_H_
