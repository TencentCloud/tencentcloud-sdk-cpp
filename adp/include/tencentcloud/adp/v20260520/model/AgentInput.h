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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AGENTINPUT_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AGENTINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AgentUserInputValue.h>
#include <tencentcloud/adp/v20260520/model/AgentSystemVariable.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
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
                     * 获取<p>输入来源类型：0 用户输入，3 自定义变量（API参数）</p>
                     * @return InputType <p>输入来源类型：0 用户输入，3 自定义变量（API参数）</p>
                     * 
                     */
                    int64_t GetInputType() const;

                    /**
                     * 设置<p>输入来源类型：0 用户输入，3 自定义变量（API参数）</p>
                     * @param _inputType <p>输入来源类型：0 用户输入，3 自定义变量（API参数）</p>
                     * 
                     */
                    void SetInputType(const int64_t& _inputType);

                    /**
                     * 判断参数 InputType 是否已赋值
                     * @return InputType 是否已赋值
                     * 
                     */
                    bool InputTypeHasBeenSet() const;

                    /**
                     * 获取<p>用户手写输入</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserInputValue <p>用户手写输入</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AgentUserInputValue GetUserInputValue() const;

                    /**
                     * 设置<p>用户手写输入</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userInputValue <p>用户手写输入</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserInputValue(const AgentUserInputValue& _userInputValue);

                    /**
                     * 判断参数 UserInputValue 是否已赋值
                     * @return UserInputValue 是否已赋值
                     * 
                     */
                    bool UserInputValueHasBeenSet() const;

                    /**
                     * 获取<p>系统参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SystemVariable <p>系统参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AgentSystemVariable GetSystemVariable() const;

                    /**
                     * 设置<p>系统参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _systemVariable <p>系统参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSystemVariable(const AgentSystemVariable& _systemVariable);

                    /**
                     * 判断参数 SystemVariable 是否已赋值
                     * @return SystemVariable 是否已赋值
                     * 
                     */
                    bool SystemVariableHasBeenSet() const;

                    /**
                     * 获取<p>自定义变量（API参数）</p>
                     * @return CustomVariableId <p>自定义变量（API参数）</p>
                     * 
                     */
                    std::string GetCustomVariableId() const;

                    /**
                     * 设置<p>自定义变量（API参数）</p>
                     * @param _customVariableId <p>自定义变量（API参数）</p>
                     * 
                     */
                    void SetCustomVariableId(const std::string& _customVariableId);

                    /**
                     * 判断参数 CustomVariableId 是否已赋值
                     * @return CustomVariableId 是否已赋值
                     * 
                     */
                    bool CustomVariableIdHasBeenSet() const;

                    /**
                     * 获取<p>环境变量参数</p>
                     * @return EnvVariableId <p>环境变量参数</p>
                     * 
                     */
                    std::string GetEnvVariableId() const;

                    /**
                     * 设置<p>环境变量参数</p>
                     * @param _envVariableId <p>环境变量参数</p>
                     * 
                     */
                    void SetEnvVariableId(const std::string& _envVariableId);

                    /**
                     * 判断参数 EnvVariableId 是否已赋值
                     * @return EnvVariableId 是否已赋值
                     * 
                     */
                    bool EnvVariableIdHasBeenSet() const;

                    /**
                     * 获取<p>应用变量参数</p>
                     * @return AppVariableId <p>应用变量参数</p>
                     * 
                     */
                    std::string GetAppVariableId() const;

                    /**
                     * 设置<p>应用变量参数</p>
                     * @param _appVariableId <p>应用变量参数</p>
                     * 
                     */
                    void SetAppVariableId(const std::string& _appVariableId);

                    /**
                     * 判断参数 AppVariableId 是否已赋值
                     * @return AppVariableId 是否已赋值
                     * 
                     */
                    bool AppVariableIdHasBeenSet() const;

                private:

                    /**
                     * <p>输入来源类型：0 用户输入，3 自定义变量（API参数）</p>
                     */
                    int64_t m_inputType;
                    bool m_inputTypeHasBeenSet;

                    /**
                     * <p>用户手写输入</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AgentUserInputValue m_userInputValue;
                    bool m_userInputValueHasBeenSet;

                    /**
                     * <p>系统参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AgentSystemVariable m_systemVariable;
                    bool m_systemVariableHasBeenSet;

                    /**
                     * <p>自定义变量（API参数）</p>
                     */
                    std::string m_customVariableId;
                    bool m_customVariableIdHasBeenSet;

                    /**
                     * <p>环境变量参数</p>
                     */
                    std::string m_envVariableId;
                    bool m_envVariableIdHasBeenSet;

                    /**
                     * <p>应用变量参数</p>
                     */
                    std::string m_appVariableId;
                    bool m_appVariableIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AGENTINPUT_H_
