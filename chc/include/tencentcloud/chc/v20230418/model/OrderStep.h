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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_ORDERSTEP_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_ORDERSTEP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 工单详情中的工单流程步骤
                */
                class OrderStep : public AbstractModel
                {
                public:
                    OrderStep();
                    ~OrderStep() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取步骤名
                     * @return StepName 步骤名
                     * 
                     */
                    std::string GetStepName() const;

                    /**
                     * 设置步骤名
                     * @param _stepName 步骤名
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
                     * 获取处理人
                     * @return OwnerName 处理人
                     * 
                     */
                    std::string GetOwnerName() const;

                    /**
                     * 设置处理人
                     * @param _ownerName 处理人
                     * 
                     */
                    void SetOwnerName(const std::string& _ownerName);

                    /**
                     * 判断参数 OwnerName 是否已赋值
                     * @return OwnerName 是否已赋值
                     * 
                     */
                    bool OwnerNameHasBeenSet() const;

                    /**
                     * 获取处理人手机号
                     * @return OwnerPhone 处理人手机号
                     * 
                     */
                    std::string GetOwnerPhone() const;

                    /**
                     * 设置处理人手机号
                     * @param _ownerPhone 处理人手机号
                     * 
                     */
                    void SetOwnerPhone(const std::string& _ownerPhone);

                    /**
                     * 判断参数 OwnerPhone 是否已赋值
                     * @return OwnerPhone 是否已赋值
                     * 
                     */
                    bool OwnerPhoneHasBeenSet() const;

                    /**
                     * 获取完成时间
                     * @return FinishTime 完成时间
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置完成时间
                     * @param _finishTime 完成时间
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
                     * 获取此步骤状态
                     * @return StepStatus 此步骤状态
                     * 
                     */
                    std::string GetStepStatus() const;

                    /**
                     * 设置此步骤状态
                     * @param _stepStatus 此步骤状态
                     * 
                     */
                    void SetStepStatus(const std::string& _stepStatus);

                    /**
                     * 判断参数 StepStatus 是否已赋值
                     * @return StepStatus 是否已赋值
                     * 
                     */
                    bool StepStatusHasBeenSet() const;

                private:

                    /**
                     * 步骤名
                     */
                    std::string m_stepName;
                    bool m_stepNameHasBeenSet;

                    /**
                     * 处理人
                     */
                    std::string m_ownerName;
                    bool m_ownerNameHasBeenSet;

                    /**
                     * 处理人手机号
                     */
                    std::string m_ownerPhone;
                    bool m_ownerPhoneHasBeenSet;

                    /**
                     * 完成时间
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * 此步骤状态
                     */
                    std::string m_stepStatus;
                    bool m_stepStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_ORDERSTEP_H_
