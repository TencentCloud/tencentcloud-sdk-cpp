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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_TASKSTEPINFO_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_TASKSTEPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 任务步骤信息
                */
                class TaskStepInfo : public AbstractModel
                {
                public:
                    TaskStepInfo();
                    ~TaskStepInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取步骤名称
                     * @return Step 步骤名称
                     * 
                     */
                    std::string GetStep() const;

                    /**
                     * 设置步骤名称
                     * @param _step 步骤名称
                     * 
                     */
                    void SetStep(const std::string& _step);

                    /**
                     * 判断参数 Step 是否已赋值
                     * @return Step 是否已赋值
                     * 
                     */
                    bool StepHasBeenSet() const;

                    /**
                     * 获取生命周期
pending : 步骤未开始
running: 步骤执行中
success: 步骤成功完成
failed: 步骤失败
                     * @return LifeState 生命周期
pending : 步骤未开始
running: 步骤执行中
success: 步骤成功完成
failed: 步骤失败
                     * 
                     */
                    std::string GetLifeState() const;

                    /**
                     * 设置生命周期
pending : 步骤未开始
running: 步骤执行中
success: 步骤成功完成
failed: 步骤失败
                     * @param _lifeState 生命周期
pending : 步骤未开始
running: 步骤执行中
success: 步骤成功完成
failed: 步骤失败
                     * 
                     */
                    void SetLifeState(const std::string& _lifeState);

                    /**
                     * 判断参数 LifeState 是否已赋值
                     * @return LifeState 是否已赋值
                     * 
                     */
                    bool LifeStateHasBeenSet() const;

                    /**
                     * 获取步骤开始时间
                     * @return StartAt 步骤开始时间
                     * 
                     */
                    std::string GetStartAt() const;

                    /**
                     * 设置步骤开始时间
                     * @param _startAt 步骤开始时间
                     * 
                     */
                    void SetStartAt(const std::string& _startAt);

                    /**
                     * 判断参数 StartAt 是否已赋值
                     * @return StartAt 是否已赋值
                     * 
                     */
                    bool StartAtHasBeenSet() const;

                    /**
                     * 获取步骤结束时间
                     * @return EndAt 步骤结束时间
                     * 
                     */
                    std::string GetEndAt() const;

                    /**
                     * 设置步骤结束时间
                     * @param _endAt 步骤结束时间
                     * 
                     */
                    void SetEndAt(const std::string& _endAt);

                    /**
                     * 判断参数 EndAt 是否已赋值
                     * @return EndAt 是否已赋值
                     * 
                     */
                    bool EndAtHasBeenSet() const;

                    /**
                     * 获取若步骤生命周期为failed,则此字段显示错误信息
                     * @return FailedMsg 若步骤生命周期为failed,则此字段显示错误信息
                     * 
                     */
                    std::string GetFailedMsg() const;

                    /**
                     * 设置若步骤生命周期为failed,则此字段显示错误信息
                     * @param _failedMsg 若步骤生命周期为failed,则此字段显示错误信息
                     * 
                     */
                    void SetFailedMsg(const std::string& _failedMsg);

                    /**
                     * 判断参数 FailedMsg 是否已赋值
                     * @return FailedMsg 是否已赋值
                     * 
                     */
                    bool FailedMsgHasBeenSet() const;

                private:

                    /**
                     * 步骤名称
                     */
                    std::string m_step;
                    bool m_stepHasBeenSet;

                    /**
                     * 生命周期
pending : 步骤未开始
running: 步骤执行中
success: 步骤成功完成
failed: 步骤失败
                     */
                    std::string m_lifeState;
                    bool m_lifeStateHasBeenSet;

                    /**
                     * 步骤开始时间
                     */
                    std::string m_startAt;
                    bool m_startAtHasBeenSet;

                    /**
                     * 步骤结束时间
                     */
                    std::string m_endAt;
                    bool m_endAtHasBeenSet;

                    /**
                     * 若步骤生命周期为failed,则此字段显示错误信息
                     */
                    std::string m_failedMsg;
                    bool m_failedMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_TASKSTEPINFO_H_
