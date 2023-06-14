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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_TEXTWRITINGREQUEST_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_TEXTWRITINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * TextWriting请求参数结构体
                */
                class TextWritingRequest : public AbstractModel
                {
                public:
                    TextWritingRequest();
                    ~TextWritingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待续写的句子，文本统一使用utf-8格式编码，长度不超过200字符。
                     * @return Text 待续写的句子，文本统一使用utf-8格式编码，长度不超过200字符。
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置待续写的句子，文本统一使用utf-8格式编码，长度不超过200字符。
                     * @param _text 待续写的句子，文本统一使用utf-8格式编码，长度不超过200字符。
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
                     * 获取待续写文本的语言类型，支持语言如下：
zh：中文
en：英文
                     * @return SourceLang 待续写文本的语言类型，支持语言如下：
zh：中文
en：英文
                     * 
                     */
                    std::string GetSourceLang() const;

                    /**
                     * 设置待续写文本的语言类型，支持语言如下：
zh：中文
en：英文
                     * @param _sourceLang 待续写文本的语言类型，支持语言如下：
zh：中文
en：英文
                     * 
                     */
                    void SetSourceLang(const std::string& _sourceLang);

                    /**
                     * 判断参数 SourceLang 是否已赋值
                     * @return SourceLang 是否已赋值
                     * 
                     */
                    bool SourceLangHasBeenSet() const;

                    /**
                     * 获取返回续写结果的个数。数量需>=1且<=5。
（注意实际结果可能小于指定个数）
                     * @return Number 返回续写结果的个数。数量需>=1且<=5。
（注意实际结果可能小于指定个数）
                     * 
                     */
                    int64_t GetNumber() const;

                    /**
                     * 设置返回续写结果的个数。数量需>=1且<=5。
（注意实际结果可能小于指定个数）
                     * @param _number 返回续写结果的个数。数量需>=1且<=5。
（注意实际结果可能小于指定个数）
                     * 
                     */
                    void SetNumber(const int64_t& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取指定续写领域，支持领域如下：
general：通用领域，支持中英文补全
academic：学术领域，仅支持英文补全
默认为general（通用领域）。
                     * @return Domain 指定续写领域，支持领域如下：
general：通用领域，支持中英文补全
academic：学术领域，仅支持英文补全
默认为general（通用领域）。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置指定续写领域，支持领域如下：
general：通用领域，支持中英文补全
academic：学术领域，仅支持英文补全
默认为general（通用领域）。
                     * @param _domain 指定续写领域，支持领域如下：
general：通用领域，支持中英文补全
academic：学术领域，仅支持英文补全
默认为general（通用领域）。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取指定续写风格，支持风格如下：
science_fiction：科幻
military_history：军事
xuanhuan_wuxia：武侠
urban_officialdom：职场
默认为xuanhuan_wuxia（武侠）。
                     * @return Style 指定续写风格，支持风格如下：
science_fiction：科幻
military_history：军事
xuanhuan_wuxia：武侠
urban_officialdom：职场
默认为xuanhuan_wuxia（武侠）。
                     * 
                     */
                    std::string GetStyle() const;

                    /**
                     * 设置指定续写风格，支持风格如下：
science_fiction：科幻
military_history：军事
xuanhuan_wuxia：武侠
urban_officialdom：职场
默认为xuanhuan_wuxia（武侠）。
                     * @param _style 指定续写风格，支持风格如下：
science_fiction：科幻
military_history：军事
xuanhuan_wuxia：武侠
urban_officialdom：职场
默认为xuanhuan_wuxia（武侠）。
                     * 
                     */
                    void SetStyle(const std::string& _style);

                    /**
                     * 判断参数 Style 是否已赋值
                     * @return Style 是否已赋值
                     * 
                     */
                    bool StyleHasBeenSet() const;

                private:

                    /**
                     * 待续写的句子，文本统一使用utf-8格式编码，长度不超过200字符。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 待续写文本的语言类型，支持语言如下：
zh：中文
en：英文
                     */
                    std::string m_sourceLang;
                    bool m_sourceLangHasBeenSet;

                    /**
                     * 返回续写结果的个数。数量需>=1且<=5。
（注意实际结果可能小于指定个数）
                     */
                    int64_t m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * 指定续写领域，支持领域如下：
general：通用领域，支持中英文补全
academic：学术领域，仅支持英文补全
默认为general（通用领域）。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 指定续写风格，支持风格如下：
science_fiction：科幻
military_history：军事
xuanhuan_wuxia：武侠
urban_officialdom：职场
默认为xuanhuan_wuxia（武侠）。
                     */
                    std::string m_style;
                    bool m_styleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_TEXTWRITINGREQUEST_H_
