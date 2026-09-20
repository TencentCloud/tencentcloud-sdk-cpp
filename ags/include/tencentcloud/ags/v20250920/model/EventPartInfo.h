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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_EVENTPARTINFO_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_EVENTPARTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/InlineDataInfo.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * 多模态内容片段信息
                */
                class EventPartInfo : public AbstractModel
                {
                public:
                    EventPartInfo();
                    ~EventPartInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文本内容，最大长度 8192 字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Text 文本内容，最大长度 8192 字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置文本内容，最大长度 8192 字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _text 文本内容，最大长度 8192 字符。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否为思考内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Thought 是否为思考内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetThought() const;

                    /**
                     * 设置是否为思考内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _thought 是否为思考内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetThought(const bool& _thought);

                    /**
                     * 判断参数 Thought 是否已赋值
                     * @return Thought 是否已赋值
                     * 
                     */
                    bool ThoughtHasBeenSet() const;

                    /**
                     * 获取工具调用信息，JSON 字符串，最大长度 8192 字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FunctionCall 工具调用信息，JSON 字符串，最大长度 8192 字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFunctionCall() const;

                    /**
                     * 设置工具调用信息，JSON 字符串，最大长度 8192 字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _functionCall 工具调用信息，JSON 字符串，最大长度 8192 字符。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取工具返回信息，JSON 字符串，最大长度 8192 字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FunctionResponse 工具返回信息，JSON 字符串，最大长度 8192 字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFunctionResponse() const;

                    /**
                     * 设置工具返回信息，JSON 字符串，最大长度 8192 字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _functionResponse 工具返回信息，JSON 字符串，最大长度 8192 字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFunctionResponse(const std::string& _functionResponse);

                    /**
                     * 判断参数 FunctionResponse 是否已赋值
                     * @return FunctionResponse 是否已赋值
                     * 
                     */
                    bool FunctionResponseHasBeenSet() const;

                    /**
                     * 获取内联数据。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InlineData 内联数据。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InlineDataInfo GetInlineData() const;

                    /**
                     * 设置内联数据。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inlineData 内联数据。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInlineData(const InlineDataInfo& _inlineData);

                    /**
                     * 判断参数 InlineData 是否已赋值
                     * @return InlineData 是否已赋值
                     * 
                     */
                    bool InlineDataHasBeenSet() const;

                private:

                    /**
                     * 文本内容，最大长度 8192 字符。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 是否为思考内容。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_thought;
                    bool m_thoughtHasBeenSet;

                    /**
                     * 工具调用信息，JSON 字符串，最大长度 8192 字符。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_functionCall;
                    bool m_functionCallHasBeenSet;

                    /**
                     * 工具返回信息，JSON 字符串，最大长度 8192 字符。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_functionResponse;
                    bool m_functionResponseHasBeenSet;

                    /**
                     * 内联数据。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InlineDataInfo m_inlineData;
                    bool m_inlineDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_EVENTPARTINFO_H_
