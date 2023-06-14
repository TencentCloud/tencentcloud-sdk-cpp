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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_STEP_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_STEP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/Execution.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 执行步骤
                */
                class Step : public AbstractModel
                {
                public:
                    Step();
                    ~Step() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取执行步骤名称。
                     * @return Name 执行步骤名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置执行步骤名称。
                     * @param _name 执行步骤名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取执行动作。
                     * @return ExecutionStep 执行动作。
                     * 
                     */
                    Execution GetExecutionStep() const;

                    /**
                     * 设置执行动作。
                     * @param _executionStep 执行动作。
                     * 
                     */
                    void SetExecutionStep(const Execution& _executionStep);

                    /**
                     * 判断参数 ExecutionStep 是否已赋值
                     * @return ExecutionStep 是否已赋值
                     * 
                     */
                    bool ExecutionStepHasBeenSet() const;

                    /**
                     * 获取执行失败策略。
1. TERMINATE_CLUSTER 执行失败时退出并销毁集群。
2. CONTINUE 执行失败时跳过并执行后续步骤。
                     * @return ActionOnFailure 执行失败策略。
1. TERMINATE_CLUSTER 执行失败时退出并销毁集群。
2. CONTINUE 执行失败时跳过并执行后续步骤。
                     * 
                     */
                    std::string GetActionOnFailure() const;

                    /**
                     * 设置执行失败策略。
1. TERMINATE_CLUSTER 执行失败时退出并销毁集群。
2. CONTINUE 执行失败时跳过并执行后续步骤。
                     * @param _actionOnFailure 执行失败策略。
1. TERMINATE_CLUSTER 执行失败时退出并销毁集群。
2. CONTINUE 执行失败时跳过并执行后续步骤。
                     * 
                     */
                    void SetActionOnFailure(const std::string& _actionOnFailure);

                    /**
                     * 判断参数 ActionOnFailure 是否已赋值
                     * @return ActionOnFailure 是否已赋值
                     * 
                     */
                    bool ActionOnFailureHasBeenSet() const;

                    /**
                     * 获取指定执行Step时的用户名，非必须，默认为hadoop。
                     * @return User 指定执行Step时的用户名，非必须，默认为hadoop。
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置指定执行Step时的用户名，非必须，默认为hadoop。
                     * @param _user 指定执行Step时的用户名，非必须，默认为hadoop。
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                private:

                    /**
                     * 执行步骤名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 执行动作。
                     */
                    Execution m_executionStep;
                    bool m_executionStepHasBeenSet;

                    /**
                     * 执行失败策略。
1. TERMINATE_CLUSTER 执行失败时退出并销毁集群。
2. CONTINUE 执行失败时跳过并执行后续步骤。
                     */
                    std::string m_actionOnFailure;
                    bool m_actionOnFailureHasBeenSet;

                    /**
                     * 指定执行Step时的用户名，非必须，默认为hadoop。
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_STEP_H_
