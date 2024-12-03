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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_REFERENCE_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_REFERENCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * 翻译对话参考示例
                */
                class Reference : public AbstractModel
                {
                public:
                    Reference();
                    ~Reference() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取翻译文本类型，枚举"sentence"表示句子, "term"表示术语
                     * @return Type 翻译文本类型，枚举"sentence"表示句子, "term"表示术语
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置翻译文本类型，枚举"sentence"表示句子, "term"表示术语
                     * @param _type 翻译文本类型，枚举"sentence"表示句子, "term"表示术语
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取原文
                     * @return Text 原文
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置原文
                     * @param _text 原文
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
                     * 获取译文
                     * @return Translation 译文
                     * 
                     */
                    std::string GetTranslation() const;

                    /**
                     * 设置译文
                     * @param _translation 译文
                     * 
                     */
                    void SetTranslation(const std::string& _translation);

                    /**
                     * 判断参数 Translation 是否已赋值
                     * @return Translation 是否已赋值
                     * 
                     */
                    bool TranslationHasBeenSet() const;

                private:

                    /**
                     * 翻译文本类型，枚举"sentence"表示句子, "term"表示术语
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 原文
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 译文
                     */
                    std::string m_translation;
                    bool m_translationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_REFERENCE_H_
