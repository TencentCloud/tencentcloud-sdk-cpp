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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_NODERUNCONTENT_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_NODERUNCONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 节点运行的内容
                */
                class NodeRunContent : public AbstractModel
                {
                public:
                    NodeRunContent();
                    ~NodeRunContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输入变量信息
                     * @return Input 输入变量信息
                     * 
                     */
                    std::string GetInput() const;

                    /**
                     * 设置输入变量信息
                     * @param _input 输入变量信息
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
                     * 获取输出变量信息
                     * @return Output 输出变量信息
                     * 
                     */
                    std::string GetOutput() const;

                    /**
                     * 设置输出变量信息
                     * @param _output 输出变量信息
                     * 
                     */
                    void SetOutput(const std::string& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取原始输出信息。部分节点才有值，如工具节点、代码节点
                     * @return OriginalOutput 原始输出信息。部分节点才有值，如工具节点、代码节点
                     * 
                     */
                    std::string GetOriginalOutput() const;

                    /**
                     * 设置原始输出信息。部分节点才有值，如工具节点、代码节点
                     * @param _originalOutput 原始输出信息。部分节点才有值，如工具节点、代码节点
                     * 
                     */
                    void SetOriginalOutput(const std::string& _originalOutput);

                    /**
                     * 判断参数 OriginalOutput 是否已赋值
                     * @return OriginalOutput 是否已赋值
                     * 
                     */
                    bool OriginalOutputHasBeenSet() const;

                    /**
                     * 获取节点输入的完整内容的链接。（当Input内容超过限制的时候此字段才有值）
                     * @return InputRef 节点输入的完整内容的链接。（当Input内容超过限制的时候此字段才有值）
                     * 
                     */
                    std::string GetInputRef() const;

                    /**
                     * 设置节点输入的完整内容的链接。（当Input内容超过限制的时候此字段才有值）
                     * @param _inputRef 节点输入的完整内容的链接。（当Input内容超过限制的时候此字段才有值）
                     * 
                     */
                    void SetInputRef(const std::string& _inputRef);

                    /**
                     * 判断参数 InputRef 是否已赋值
                     * @return InputRef 是否已赋值
                     * 
                     */
                    bool InputRefHasBeenSet() const;

                    /**
                     * 获取节点输出的完整内容的链接。（当Output内容超过限制的时候此字段才有值）
                     * @return OutputRef 节点输出的完整内容的链接。（当Output内容超过限制的时候此字段才有值）
                     * 
                     */
                    std::string GetOutputRef() const;

                    /**
                     * 设置节点输出的完整内容的链接。（当Output内容超过限制的时候此字段才有值）
                     * @param _outputRef 节点输出的完整内容的链接。（当Output内容超过限制的时候此字段才有值）
                     * 
                     */
                    void SetOutputRef(const std::string& _outputRef);

                    /**
                     * 判断参数 OutputRef 是否已赋值
                     * @return OutputRef 是否已赋值
                     * 
                     */
                    bool OutputRefHasBeenSet() const;

                    /**
                     * 获取任务的原始输出的完整内容的链接。（当TaskOutput内容超过限制的时候此字段才有值）
                     * @return OriginalOutputRef 任务的原始输出的完整内容的链接。（当TaskOutput内容超过限制的时候此字段才有值）
                     * 
                     */
                    std::string GetOriginalOutputRef() const;

                    /**
                     * 设置任务的原始输出的完整内容的链接。（当TaskOutput内容超过限制的时候此字段才有值）
                     * @param _originalOutputRef 任务的原始输出的完整内容的链接。（当TaskOutput内容超过限制的时候此字段才有值）
                     * 
                     */
                    void SetOriginalOutputRef(const std::string& _originalOutputRef);

                    /**
                     * 判断参数 OriginalOutputRef 是否已赋值
                     * @return OriginalOutputRef 是否已赋值
                     * 
                     */
                    bool OriginalOutputRefHasBeenSet() const;

                private:

                    /**
                     * 输入变量信息
                     */
                    std::string m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * 输出变量信息
                     */
                    std::string m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * 原始输出信息。部分节点才有值，如工具节点、代码节点
                     */
                    std::string m_originalOutput;
                    bool m_originalOutputHasBeenSet;

                    /**
                     * 节点输入的完整内容的链接。（当Input内容超过限制的时候此字段才有值）
                     */
                    std::string m_inputRef;
                    bool m_inputRefHasBeenSet;

                    /**
                     * 节点输出的完整内容的链接。（当Output内容超过限制的时候此字段才有值）
                     */
                    std::string m_outputRef;
                    bool m_outputRefHasBeenSet;

                    /**
                     * 任务的原始输出的完整内容的链接。（当TaskOutput内容超过限制的时候此字段才有值）
                     */
                    std::string m_originalOutputRef;
                    bool m_originalOutputRefHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_NODERUNCONTENT_H_
