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

#ifndef TENCENTCLOUD_CLOUDMATE_V20251030_MODEL_CHATEVENTCONTENTPART_H_
#define TENCENTCLOUD_CLOUDMATE_V20251030_MODEL_CHATEVENTCONTENTPART_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudmate
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * 智能诊断时间内容分片结构
                */
                class ChatEventContentPart : public AbstractModel
                {
                public:
                    ChatEventContentPart();
                    ~ChatEventContentPart() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文本内容（流式或完整）
                     * @return Text 文本内容（流式或完整）
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置文本内容（流式或完整）
                     * @param _text 文本内容（流式或完整）
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取函数调用信息
                     * @return FunctionCall 函数调用信息
                     * 
                     */
                    std::string GetFunctionCall() const;

                    /**
                     * 设置函数调用信息
                     * @param _functionCall 函数调用信息
                     * 
                     */
                    void SetFunctionCall(const std::string& _functionCall);

                    /**
                     * 判断参数 FunctionCall 是否已赋值
                     * @return FunctionCall 是否已赋值
                     * 
                     */
                    bool FunctionCallHasBeenSet() const;

                    /**
                     * 获取函数返回结果
                     * @return FunctionResponse 函数返回结果
                     * 
                     */
                    std::string GetFunctionResponse() const;

                    /**
                     * 设置函数返回结果
                     * @param _functionResponse 函数返回结果
                     * 
                     */
                    void SetFunctionResponse(const std::string& _functionResponse);

                    /**
                     * 判断参数 FunctionResponse 是否已赋值
                     * @return FunctionResponse 是否已赋值
                     * 
                     */
                    bool FunctionResponseHasBeenSet() const;

                private:

                    /**
                     * 文本内容（流式或完整）
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 函数调用信息
                     */
                    std::string m_functionCall;
                    bool m_functionCallHasBeenSet;

                    /**
                     * 函数返回结果
                     */
                    std::string m_functionResponse;
                    bool m_functionResponseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDMATE_V20251030_MODEL_CHATEVENTCONTENTPART_H_
