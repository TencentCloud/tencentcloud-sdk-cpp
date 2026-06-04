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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CODETOOLCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CODETOOLCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ToolExample.h>
#include <tencentcloud/adp/v20260520/model/RequestParam.h>
#include <tencentcloud/adp/v20260520/model/ResponseParam.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * CodeToolConfig
                */
                class CodeToolConfig : public AbstractModel
                {
                public:
                    CodeToolConfig();
                    ~CodeToolConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取代码
                     * @return Code 代码
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置代码
                     * @param _code 代码
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取示例
                     * @return Example 示例
                     * 
                     */
                    ToolExample GetExample() const;

                    /**
                     * 设置示例
                     * @param _example 示例
                     * 
                     */
                    void SetExample(const ToolExample& _example);

                    /**
                     * 判断参数 Example 是否已赋值
                     * @return Example 是否已赋值
                     * 
                     */
                    bool ExampleHasBeenSet() const;

                    /**
                     * 获取输入参数
                     * @return Inputs 输入参数
                     * 
                     */
                    std::vector<RequestParam> GetInputs() const;

                    /**
                     * 设置输入参数
                     * @param _inputs 输入参数
                     * 
                     */
                    void SetInputs(const std::vector<RequestParam>& _inputs);

                    /**
                     * 判断参数 Inputs 是否已赋值
                     * @return Inputs 是否已赋值
                     * 
                     */
                    bool InputsHasBeenSet() const;

                    /**
                     * 获取输出参数
                     * @return Outputs 输出参数
                     * 
                     */
                    std::vector<ResponseParam> GetOutputs() const;

                    /**
                     * 设置输出参数
                     * @param _outputs 输出参数
                     * 
                     */
                    void SetOutputs(const std::vector<ResponseParam>& _outputs);

                    /**
                     * 判断参数 Outputs 是否已赋值
                     * @return Outputs 是否已赋值
                     * 
                     */
                    bool OutputsHasBeenSet() const;

                private:

                    /**
                     * 代码
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 示例
                     */
                    ToolExample m_example;
                    bool m_exampleHasBeenSet;

                    /**
                     * 输入参数
                     */
                    std::vector<RequestParam> m_inputs;
                    bool m_inputsHasBeenSet;

                    /**
                     * 输出参数
                     */
                    std::vector<ResponseParam> m_outputs;
                    bool m_outputsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CODETOOLCONFIG_H_
