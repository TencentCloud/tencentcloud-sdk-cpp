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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_AGENTINPUT_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_AGENTINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/AgentInputUserInputValue.h>
#include <tencentcloud/lke/v20231130/model/AgentInputSystemVariable.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Agent输入值，支持直接赋值和引用
                */
                class AgentInput : public AbstractModel
                {
                public:
                    AgentInput();
                    ~AgentInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输入来源类型：0 用户输入，3 自定义变量（API参数）
                     * @return InputType 输入来源类型：0 用户输入，3 自定义变量（API参数）
                     * 
                     */
                    uint64_t GetInputType() const;

                    /**
                     * 设置输入来源类型：0 用户输入，3 自定义变量（API参数）
                     * @param _inputType 输入来源类型：0 用户输入，3 自定义变量（API参数）
                     * 
                     */
                    void SetInputType(const uint64_t& _inputType);

                    /**
                     * 判断参数 InputType 是否已赋值
                     * @return InputType 是否已赋值
                     * 
                     */
                    bool InputTypeHasBeenSet() const;

                    /**
                     * 获取用户手写输入
                     * @return UserInputValue 用户手写输入
                     * 
                     */
                    AgentInputUserInputValue GetUserInputValue() const;

                    /**
                     * 设置用户手写输入
                     * @param _userInputValue 用户手写输入
                     * 
                     */
                    void SetUserInputValue(const AgentInputUserInputValue& _userInputValue);

                    /**
                     * 判断参数 UserInputValue 是否已赋值
                     * @return UserInputValue 是否已赋值
                     * 
                     */
                    bool UserInputValueHasBeenSet() const;

                    /**
                     * 获取自定义变量（API参数）
                     * @return CustomVarId 自定义变量（API参数）
                     * 
                     */
                    std::string GetCustomVarId() const;

                    /**
                     * 设置自定义变量（API参数）
                     * @param _customVarId 自定义变量（API参数）
                     * 
                     */
                    void SetCustomVarId(const std::string& _customVarId);

                    /**
                     * 判断参数 CustomVarId 是否已赋值
                     * @return CustomVarId 是否已赋值
                     * 
                     */
                    bool CustomVarIdHasBeenSet() const;

                    /**
                     * 获取环境变量参数
                     * @return EnvVarId 环境变量参数
                     * 
                     */
                    std::string GetEnvVarId() const;

                    /**
                     * 设置环境变量参数
                     * @param _envVarId 环境变量参数
                     * 
                     */
                    void SetEnvVarId(const std::string& _envVarId);

                    /**
                     * 判断参数 EnvVarId 是否已赋值
                     * @return EnvVarId 是否已赋值
                     * 
                     */
                    bool EnvVarIdHasBeenSet() const;

                    /**
                     * 获取应用变量参数
                     * @return AppVarId 应用变量参数
                     * 
                     */
                    std::string GetAppVarId() const;

                    /**
                     * 设置应用变量参数
                     * @param _appVarId 应用变量参数
                     * 
                     */
                    void SetAppVarId(const std::string& _appVarId);

                    /**
                     * 判断参数 AppVarId 是否已赋值
                     * @return AppVarId 是否已赋值
                     * 
                     */
                    bool AppVarIdHasBeenSet() const;

                    /**
                     * 获取系统参数
                     * @return SystemVariable 系统参数
                     * 
                     */
                    AgentInputSystemVariable GetSystemVariable() const;

                    /**
                     * 设置系统参数
                     * @param _systemVariable 系统参数
                     * 
                     */
                    void SetSystemVariable(const AgentInputSystemVariable& _systemVariable);

                    /**
                     * 判断参数 SystemVariable 是否已赋值
                     * @return SystemVariable 是否已赋值
                     * 
                     */
                    bool SystemVariableHasBeenSet() const;

                    /**
                     * 获取工具参数
                     * @return ToolParam 工具参数
                     * 
                     */
                    std::string GetToolParam() const;

                    /**
                     * 设置工具参数
                     * @param _toolParam 工具参数
                     * 
                     */
                    void SetToolParam(const std::string& _toolParam);

                    /**
                     * 判断参数 ToolParam 是否已赋值
                     * @return ToolParam 是否已赋值
                     * 
                     */
                    bool ToolParamHasBeenSet() const;

                private:

                    /**
                     * 输入来源类型：0 用户输入，3 自定义变量（API参数）
                     */
                    uint64_t m_inputType;
                    bool m_inputTypeHasBeenSet;

                    /**
                     * 用户手写输入
                     */
                    AgentInputUserInputValue m_userInputValue;
                    bool m_userInputValueHasBeenSet;

                    /**
                     * 自定义变量（API参数）
                     */
                    std::string m_customVarId;
                    bool m_customVarIdHasBeenSet;

                    /**
                     * 环境变量参数
                     */
                    std::string m_envVarId;
                    bool m_envVarIdHasBeenSet;

                    /**
                     * 应用变量参数
                     */
                    std::string m_appVarId;
                    bool m_appVarIdHasBeenSet;

                    /**
                     * 系统参数
                     */
                    AgentInputSystemVariable m_systemVariable;
                    bool m_systemVariableHasBeenSet;

                    /**
                     * 工具参数
                     */
                    std::string m_toolParam;
                    bool m_toolParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_AGENTINPUT_H_
