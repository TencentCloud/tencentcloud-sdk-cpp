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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SEARCHVALUEINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SEARCHVALUEINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 视频检索的检索输入
                */
                class SearchValueInput : public AbstractModel
                {
                public:
                    SearchValueInput();
                    ~SearchValueInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检索输入的类型，目前支持：
Text：文本检索
                     * @return SearchValueType 检索输入的类型，目前支持：
Text：文本检索
                     * 
                     */
                    std::string GetSearchValueType() const;

                    /**
                     * 设置检索输入的类型，目前支持：
Text：文本检索
                     * @param _searchValueType 检索输入的类型，目前支持：
Text：文本检索
                     * 
                     */
                    void SetSearchValueType(const std::string& _searchValueType);

                    /**
                     * 判断参数 SearchValueType 是否已赋值
                     * @return SearchValueType 是否已赋值
                     * 
                     */
                    bool SearchValueTypeHasBeenSet() const;

                    /**
                     * 获取当SearchValueType为Text时有效且必填，用于检索视频的文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TextInput 当SearchValueType为Text时有效且必填，用于检索视频的文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTextInput() const;

                    /**
                     * 设置当SearchValueType为Text时有效且必填，用于检索视频的文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _textInput 当SearchValueType为Text时有效且必填，用于检索视频的文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTextInput(const std::string& _textInput);

                    /**
                     * 判断参数 TextInput 是否已赋值
                     * @return TextInput 是否已赋值
                     * 
                     */
                    bool TextInputHasBeenSet() const;

                private:

                    /**
                     * 检索输入的类型，目前支持：
Text：文本检索
                     */
                    std::string m_searchValueType;
                    bool m_searchValueTypeHasBeenSet;

                    /**
                     * 当SearchValueType为Text时有效且必填，用于检索视频的文本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_textInput;
                    bool m_textInputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SEARCHVALUEINPUT_H_
