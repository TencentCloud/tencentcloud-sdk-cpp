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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_AGENTDEBUGINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_AGENTDEBUGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Agent调试信息
                */
                class AgentDebugInfo : public AbstractModel
                {
                public:
                    AgentDebugInfo();
                    ~AgentDebugInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工具、大模型的输入信息，json
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Input 工具、大模型的输入信息，json
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInput() const;

                    /**
                     * 设置工具、大模型的输入信息，json
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _input 工具、大模型的输入信息，json
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取工具、大模型的输出信息，json
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Output 工具、大模型的输出信息，json
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutput() const;

                    /**
                     * 设置工具、大模型的输出信息，json
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _output 工具、大模型的输出信息，json
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutput(const std::string& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                private:

                    /**
                     * 工具、大模型的输入信息，json
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * 工具、大模型的输出信息，json
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_output;
                    bool m_outputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_AGENTDEBUGINFO_H_
