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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_CUSTOMIMAGEPROCESS_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_CUSTOMIMAGEPROCESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * 镜像制作进度列表
                */
                class CustomImageProcess : public AbstractModel
                {
                public:
                    CustomImageProcess();
                    ~CustomImageProcess() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取步骤
                     * @return StepName 步骤
                     * 
                     */
                    std::string GetStepName() const;

                    /**
                     * 设置步骤
                     * @param _stepName 步骤
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
                     * 获取此步骤开始时间
                     * @return StartTime 此步骤开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置此步骤开始时间
                     * @param _startTime 此步骤开始时间
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
                     * 获取0: 已完成 1: 当前进行 2: 未开始
                     * @return StepType 0: 已完成 1: 当前进行 2: 未开始
                     * 
                     */
                    uint64_t GetStepType() const;

                    /**
                     * 设置0: 已完成 1: 当前进行 2: 未开始
                     * @param _stepType 0: 已完成 1: 当前进行 2: 未开始
                     * 
                     */
                    void SetStepType(const uint64_t& _stepType);

                    /**
                     * 判断参数 StepType 是否已赋值
                     * @return StepType 是否已赋值
                     * 
                     */
                    bool StepTypeHasBeenSet() const;

                private:

                    /**
                     * 步骤
                     */
                    std::string m_stepName;
                    bool m_stepNameHasBeenSet;

                    /**
                     * 此步骤开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 0: 已完成 1: 当前进行 2: 未开始
                     */
                    uint64_t m_stepType;
                    bool m_stepTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_CUSTOMIMAGEPROCESS_H_
