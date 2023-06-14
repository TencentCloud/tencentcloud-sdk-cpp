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

#ifndef TENCENTCLOUD_ASW_V20200722_MODEL_STARTEXECUTIONREQUEST_H_
#define TENCENTCLOUD_ASW_V20200722_MODEL_STARTEXECUTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Asw
    {
        namespace V20200722
        {
            namespace Model
            {
                /**
                * StartExecution请求参数结构体
                */
                class StartExecutionRequest : public AbstractModel
                {
                public:
                    StartExecutionRequest();
                    ~StartExecutionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取状态机资源名
                     * @return StateMachineResourceName 状态机资源名
                     * 
                     */
                    std::string GetStateMachineResourceName() const;

                    /**
                     * 设置状态机资源名
                     * @param _stateMachineResourceName 状态机资源名
                     * 
                     */
                    void SetStateMachineResourceName(const std::string& _stateMachineResourceName);

                    /**
                     * 判断参数 StateMachineResourceName 是否已赋值
                     * @return StateMachineResourceName 是否已赋值
                     * 
                     */
                    bool StateMachineResourceNameHasBeenSet() const;

                    /**
                     * 获取输入参数，内容为JsonObject，长度不大于524288字符。
                     * @return Input 输入参数，内容为JsonObject，长度不大于524288字符。
                     * 
                     */
                    std::string GetInput() const;

                    /**
                     * 设置输入参数，内容为JsonObject，长度不大于524288字符。
                     * @param _input 输入参数，内容为JsonObject，长度不大于524288字符。
                     * 
                     */
                    void SetInput(const std::string& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取本次执行名。如果不填，系统会自动生成。如果填，应保证状态机下唯一
                     * @return Name 本次执行名。如果不填，系统会自动生成。如果填，应保证状态机下唯一
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置本次执行名。如果不填，系统会自动生成。如果填，应保证状态机下唯一
                     * @param _name 本次执行名。如果不填，系统会自动生成。如果填，应保证状态机下唯一
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 状态机资源名
                     */
                    std::string m_stateMachineResourceName;
                    bool m_stateMachineResourceNameHasBeenSet;

                    /**
                     * 输入参数，内容为JsonObject，长度不大于524288字符。
                     */
                    std::string m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * 本次执行名。如果不填，系统会自动生成。如果填，应保证状态机下唯一
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASW_V20200722_MODEL_STARTEXECUTIONREQUEST_H_
