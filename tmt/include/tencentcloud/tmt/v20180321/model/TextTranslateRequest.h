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

#ifndef TENCENTCLOUD_TMT_V20180321_MODEL_TEXTTRANSLATEREQUEST_H_
#define TENCENTCLOUD_TMT_V20180321_MODEL_TEXTTRANSLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tmt
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * TextTranslate请求参数结构体
                */
                class TextTranslateRequest : public AbstractModel
                {
                public:
                    TextTranslateRequest();
                    ~TextTranslateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>待翻译的文本，文本统一使用utf-8格式编码，非utf-8格式编码字符会翻译失败，请传入有效文本，html标记等非常规翻译文本可能会翻译失败。单次请求的文本长度需要低于6000字符。</p>
                     * @return SourceText <p>待翻译的文本，文本统一使用utf-8格式编码，非utf-8格式编码字符会翻译失败，请传入有效文本，html标记等非常规翻译文本可能会翻译失败。单次请求的文本长度需要低于6000字符。</p>
                     * 
                     */
                    std::string GetSourceText() const;

                    /**
                     * 设置<p>待翻译的文本，文本统一使用utf-8格式编码，非utf-8格式编码字符会翻译失败，请传入有效文本，html标记等非常规翻译文本可能会翻译失败。单次请求的文本长度需要低于6000字符。</p>
                     * @param _sourceText <p>待翻译的文本，文本统一使用utf-8格式编码，非utf-8格式编码字符会翻译失败，请传入有效文本，html标记等非常规翻译文本可能会翻译失败。单次请求的文本长度需要低于6000字符。</p>
                     * 
                     */
                    void SetSourceText(const std::string& _sourceText);

                    /**
                     * 判断参数 SourceText 是否已赋值
                     * @return SourceText 是否已赋值
                     * 
                     */
                    bool SourceTextHasBeenSet() const;

                    /**
                     * 获取<p>源语言，支持：<br>zh：简体中文<br>zh-TW：繁体中文<br>en：英语<br>ja：日语<br>ko：韩语<br>fr：法语<br>es：西班牙语<br>it：意大利语<br>de：德语<br>tr：土耳其语<br>ru：俄语<br>pt：葡萄牙语<br>vi：越南语<br>id：印尼语<br>th：泰语<br>ms：马来西亚语<br>ar：阿拉伯语<br>hi：印地语</p>
                     * @return Source <p>源语言，支持：<br>zh：简体中文<br>zh-TW：繁体中文<br>en：英语<br>ja：日语<br>ko：韩语<br>fr：法语<br>es：西班牙语<br>it：意大利语<br>de：德语<br>tr：土耳其语<br>ru：俄语<br>pt：葡萄牙语<br>vi：越南语<br>id：印尼语<br>th：泰语<br>ms：马来西亚语<br>ar：阿拉伯语<br>hi：印地语</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>源语言，支持：<br>zh：简体中文<br>zh-TW：繁体中文<br>en：英语<br>ja：日语<br>ko：韩语<br>fr：法语<br>es：西班牙语<br>it：意大利语<br>de：德语<br>tr：土耳其语<br>ru：俄语<br>pt：葡萄牙语<br>vi：越南语<br>id：印尼语<br>th：泰语<br>ms：马来西亚语<br>ar：阿拉伯语<br>hi：印地语</p>
                     * @param _source <p>源语言，支持：<br>zh：简体中文<br>zh-TW：繁体中文<br>en：英语<br>ja：日语<br>ko：韩语<br>fr：法语<br>es：西班牙语<br>it：意大利语<br>de：德语<br>tr：土耳其语<br>ru：俄语<br>pt：葡萄牙语<br>vi：越南语<br>id：印尼语<br>th：泰语<br>ms：马来西亚语<br>ar：阿拉伯语<br>hi：印地语</p>
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>目标语言，各源语言的目标语言支持列表如下</p><li> zh（简体中文）：zh-TW（繁体中文）、en（英语）、ja（日语）、ko（韩语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）、vi（越南语）、id（印尼语）、th（泰语）、ms（马来语）、ar（阿拉伯语）</li><li>zh-TW（繁体中文）：zh（简体中文）、en（英语）、ja（日语）、ko（韩语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）、vi（越南语）、id（印尼语）、th（泰语）、ms（马来语）、ar（阿拉伯语）</li><li>en（英语）：zh（中文）、zh-TW（繁体中文）、ja（日语）、ko（韩语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）、vi（越南语）、id（印尼语）、th（泰语）、ms（马来语）、ar（阿拉伯语）、hi（印地语）</li><li>ja（日语）：zh（中文）、zh-TW（繁体中文）、en（英语）、ko（韩语）</li><li>ko（韩语）：zh（中文）、zh-TW（繁体中文）、en（英语）、ja（日语）</li><li>fr（法语）：zh（中文）、zh-TW（繁体中文）、en（英语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）</li><li>es（西班牙语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）</li><li>it（意大利语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）</li><li>de（德语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）</li><li>tr（土耳其语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、ru（俄语）、pt（葡萄牙语）</li><li>ru（俄语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、pt（葡萄牙语）</li><li>pt（葡萄牙语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）</li><li>vi（越南语）：zh（中文）、zh-TW（繁体中文）、en（英语）</li><li>id（印尼语）：zh（中文）、zh-TW（繁体中文）、en（英语）</li><li>th（泰语）：zh（中文）、zh-TW（繁体中文）、en（英语）</li><li>ms（马来语）：zh（中文）、zh-TW（繁体中文）、en（英语）</li><li>ar（阿拉伯语）：zh（中文）、zh-TW（繁体中文）、en（英语）</li><li>hi（印地语）：en（英语）</li>
                     * @return Target <p>目标语言，各源语言的目标语言支持列表如下</p><li> zh（简体中文）：zh-TW（繁体中文）、en（英语）、ja（日语）、ko（韩语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）、vi（越南语）、id（印尼语）、th（泰语）、ms（马来语）、ar（阿拉伯语）</li><li>zh-TW（繁体中文）：zh（简体中文）、en（英语）、ja（日语）、ko（韩语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）、vi（越南语）、id（印尼语）、th（泰语）、ms（马来语）、ar（阿拉伯语）</li><li>en（英语）：zh（中文）、zh-TW（繁体中文）、ja（日语）、ko（韩语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）、vi（越南语）、id（印尼语）、th（泰语）、ms（马来语）、ar（阿拉伯语）、hi（印地语）</li><li>ja（日语）：zh（中文）、zh-TW（繁体中文）、en（英语）、ko（韩语）</li><li>ko（韩语）：zh（中文）、zh-TW（繁体中文）、en（英语）、ja（日语）</li><li>fr（法语）：zh（中文）、zh-TW（繁体中文）、en（英语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）</li><li>es（西班牙语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）</li><li>it（意大利语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）</li><li>de（德语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）</li><li>tr（土耳其语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、ru（俄语）、pt（葡萄牙语）</li><li>ru（俄语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、pt（葡萄牙语）</li><li>pt（葡萄牙语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）</li><li>vi（越南语）：zh（中文）、zh-TW（繁体中文）、en（英语）</li><li>id（印尼语）：zh（中文）、zh-TW（繁体中文）、en（英语）</li><li>th（泰语）：zh（中文）、zh-TW（繁体中文）、en（英语）</li><li>ms（马来语）：zh（中文）、zh-TW（繁体中文）、en（英语）</li><li>ar（阿拉伯语）：zh（中文）、zh-TW（繁体中文）、en（英语）</li><li>hi（印地语）：en（英语）</li>
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置<p>目标语言，各源语言的目标语言支持列表如下</p><li> zh（简体中文）：zh-TW（繁体中文）、en（英语）、ja（日语）、ko（韩语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）、vi（越南语）、id（印尼语）、th（泰语）、ms（马来语）、ar（阿拉伯语）</li><li>zh-TW（繁体中文）：zh（简体中文）、en（英语）、ja（日语）、ko（韩语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）、vi（越南语）、id（印尼语）、th（泰语）、ms（马来语）、ar（阿拉伯语）</li><li>en（英语）：zh（中文）、zh-TW（繁体中文）、ja（日语）、ko（韩语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）、vi（越南语）、id（印尼语）、th（泰语）、ms（马来语）、ar（阿拉伯语）、hi（印地语）</li><li>ja（日语）：zh（中文）、zh-TW（繁体中文）、en（英语）、ko（韩语）</li><li>ko（韩语）：zh（中文）、zh-TW（繁体中文）、en（英语）、ja（日语）</li><li>fr（法语）：zh（中文）、zh-TW（繁体中文）、en（英语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）</li><li>es（西班牙语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）</li><li>it（意大利语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）</li><li>de（德语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）</li><li>tr（土耳其语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、ru（俄语）、pt（葡萄牙语）</li><li>ru（俄语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、pt（葡萄牙语）</li><li>pt（葡萄牙语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）</li><li>vi（越南语）：zh（中文）、zh-TW（繁体中文）、en（英语）</li><li>id（印尼语）：zh（中文）、zh-TW（繁体中文）、en（英语）</li><li>th（泰语）：zh（中文）、zh-TW（繁体中文）、en（英语）</li><li>ms（马来语）：zh（中文）、zh-TW（繁体中文）、en（英语）</li><li>ar（阿拉伯语）：zh（中文）、zh-TW（繁体中文）、en（英语）</li><li>hi（印地语）：en（英语）</li>
                     * @param _target <p>目标语言，各源语言的目标语言支持列表如下</p><li> zh（简体中文）：zh-TW（繁体中文）、en（英语）、ja（日语）、ko（韩语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）、vi（越南语）、id（印尼语）、th（泰语）、ms（马来语）、ar（阿拉伯语）</li><li>zh-TW（繁体中文）：zh（简体中文）、en（英语）、ja（日语）、ko（韩语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）、vi（越南语）、id（印尼语）、th（泰语）、ms（马来语）、ar（阿拉伯语）</li><li>en（英语）：zh（中文）、zh-TW（繁体中文）、ja（日语）、ko（韩语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）、vi（越南语）、id（印尼语）、th（泰语）、ms（马来语）、ar（阿拉伯语）、hi（印地语）</li><li>ja（日语）：zh（中文）、zh-TW（繁体中文）、en（英语）、ko（韩语）</li><li>ko（韩语）：zh（中文）、zh-TW（繁体中文）、en（英语）、ja（日语）</li><li>fr（法语）：zh（中文）、zh-TW（繁体中文）、en（英语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）</li><li>es（西班牙语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）</li><li>it（意大利语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）</li><li>de（德语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）</li><li>tr（土耳其语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、ru（俄语）、pt（葡萄牙语）</li><li>ru（俄语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、pt（葡萄牙语）</li><li>pt（葡萄牙语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）</li><li>vi（越南语）：zh（中文）、zh-TW（繁体中文）、en（英语）</li><li>id（印尼语）：zh（中文）、zh-TW（繁体中文）、en（英语）</li><li>th（泰语）：zh（中文）、zh-TW（繁体中文）、en（英语）</li><li>ms（马来语）：zh（中文）、zh-TW（繁体中文）、en（英语）</li><li>ar（阿拉伯语）：zh（中文）、zh-TW（繁体中文）、en（英语）</li><li>hi（印地语）：en（英语）</li>
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取<p>项目ID，可以根据控制台-账号中心-项目管理中的配置填写，如无配置请填写默认项目ID:0</p>
                     * @return ProjectId <p>项目ID，可以根据控制台-账号中心-项目管理中的配置填写，如无配置请填写默认项目ID:0</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>项目ID，可以根据控制台-账号中心-项目管理中的配置填写，如无配置请填写默认项目ID:0</p>
                     * @param _projectId <p>项目ID，可以根据控制台-账号中心-项目管理中的配置填写，如无配置请填写默认项目ID:0</p>
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>用来标记不希望被翻译的文本内容，如句子中的特殊符号、人名、地名等；每次请求只支持配置一个不被翻译的单词；仅支持配置人名、地名等名词，不要配置动词或短语，否则会影响翻译结果。</p>
                     * @return UntranslatedText <p>用来标记不希望被翻译的文本内容，如句子中的特殊符号、人名、地名等；每次请求只支持配置一个不被翻译的单词；仅支持配置人名、地名等名词，不要配置动词或短语，否则会影响翻译结果。</p>
                     * 
                     */
                    std::string GetUntranslatedText() const;

                    /**
                     * 设置<p>用来标记不希望被翻译的文本内容，如句子中的特殊符号、人名、地名等；每次请求只支持配置一个不被翻译的单词；仅支持配置人名、地名等名词，不要配置动词或短语，否则会影响翻译结果。</p>
                     * @param _untranslatedText <p>用来标记不希望被翻译的文本内容，如句子中的特殊符号、人名、地名等；每次请求只支持配置一个不被翻译的单词；仅支持配置人名、地名等名词，不要配置动词或短语，否则会影响翻译结果。</p>
                     * 
                     */
                    void SetUntranslatedText(const std::string& _untranslatedText);

                    /**
                     * 判断参数 UntranslatedText 是否已赋值
                     * @return UntranslatedText 是否已赋值
                     * 
                     */
                    bool UntranslatedTextHasBeenSet() const;

                    /**
                     * 获取<p>需要使用的术语库列表，通过 <a href="https://cloud.tencent.com/document/product/551/107926">术语库操作指南</a> 自行创建术语库获取。</p>
                     * @return TermRepoIDList <p>需要使用的术语库列表，通过 <a href="https://cloud.tencent.com/document/product/551/107926">术语库操作指南</a> 自行创建术语库获取。</p>
                     * 
                     */
                    std::vector<std::string> GetTermRepoIDList() const;

                    /**
                     * 设置<p>需要使用的术语库列表，通过 <a href="https://cloud.tencent.com/document/product/551/107926">术语库操作指南</a> 自行创建术语库获取。</p>
                     * @param _termRepoIDList <p>需要使用的术语库列表，通过 <a href="https://cloud.tencent.com/document/product/551/107926">术语库操作指南</a> 自行创建术语库获取。</p>
                     * 
                     */
                    void SetTermRepoIDList(const std::vector<std::string>& _termRepoIDList);

                    /**
                     * 判断参数 TermRepoIDList 是否已赋值
                     * @return TermRepoIDList 是否已赋值
                     * 
                     */
                    bool TermRepoIDListHasBeenSet() const;

                    /**
                     * 获取<p>需要使用的例句库列表，通过 <a href="https://cloud.tencent.com/document/product/551/107927">例句库操作指南</a> 自行创建例句库获取。</p>
                     * @return SentRepoIDList <p>需要使用的例句库列表，通过 <a href="https://cloud.tencent.com/document/product/551/107927">例句库操作指南</a> 自行创建例句库获取。</p>
                     * 
                     */
                    std::vector<std::string> GetSentRepoIDList() const;

                    /**
                     * 设置<p>需要使用的例句库列表，通过 <a href="https://cloud.tencent.com/document/product/551/107927">例句库操作指南</a> 自行创建例句库获取。</p>
                     * @param _sentRepoIDList <p>需要使用的例句库列表，通过 <a href="https://cloud.tencent.com/document/product/551/107927">例句库操作指南</a> 自行创建例句库获取。</p>
                     * 
                     */
                    void SetSentRepoIDList(const std::vector<std::string>& _sentRepoIDList);

                    /**
                     * 判断参数 SentRepoIDList 是否已赋值
                     * @return SentRepoIDList 是否已赋值
                     * 
                     */
                    bool SentRepoIDListHasBeenSet() const;

                private:

                    /**
                     * <p>待翻译的文本，文本统一使用utf-8格式编码，非utf-8格式编码字符会翻译失败，请传入有效文本，html标记等非常规翻译文本可能会翻译失败。单次请求的文本长度需要低于6000字符。</p>
                     */
                    std::string m_sourceText;
                    bool m_sourceTextHasBeenSet;

                    /**
                     * <p>源语言，支持：<br>zh：简体中文<br>zh-TW：繁体中文<br>en：英语<br>ja：日语<br>ko：韩语<br>fr：法语<br>es：西班牙语<br>it：意大利语<br>de：德语<br>tr：土耳其语<br>ru：俄语<br>pt：葡萄牙语<br>vi：越南语<br>id：印尼语<br>th：泰语<br>ms：马来西亚语<br>ar：阿拉伯语<br>hi：印地语</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>目标语言，各源语言的目标语言支持列表如下</p><li> zh（简体中文）：zh-TW（繁体中文）、en（英语）、ja（日语）、ko（韩语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）、vi（越南语）、id（印尼语）、th（泰语）、ms（马来语）、ar（阿拉伯语）</li><li>zh-TW（繁体中文）：zh（简体中文）、en（英语）、ja（日语）、ko（韩语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）、vi（越南语）、id（印尼语）、th（泰语）、ms（马来语）、ar（阿拉伯语）</li><li>en（英语）：zh（中文）、zh-TW（繁体中文）、ja（日语）、ko（韩语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）、vi（越南语）、id（印尼语）、th（泰语）、ms（马来语）、ar（阿拉伯语）、hi（印地语）</li><li>ja（日语）：zh（中文）、zh-TW（繁体中文）、en（英语）、ko（韩语）</li><li>ko（韩语）：zh（中文）、zh-TW（繁体中文）、en（英语）、ja（日语）</li><li>fr（法语）：zh（中文）、zh-TW（繁体中文）、en（英语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）</li><li>es（西班牙语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）</li><li>it（意大利语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）</li><li>de（德语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）</li><li>tr（土耳其语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、ru（俄语）、pt（葡萄牙语）</li><li>ru（俄语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、pt（葡萄牙语）</li><li>pt（葡萄牙语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）</li><li>vi（越南语）：zh（中文）、zh-TW（繁体中文）、en（英语）</li><li>id（印尼语）：zh（中文）、zh-TW（繁体中文）、en（英语）</li><li>th（泰语）：zh（中文）、zh-TW（繁体中文）、en（英语）</li><li>ms（马来语）：zh（中文）、zh-TW（繁体中文）、en（英语）</li><li>ar（阿拉伯语）：zh（中文）、zh-TW（繁体中文）、en（英语）</li><li>hi（印地语）：en（英语）</li>
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * <p>项目ID，可以根据控制台-账号中心-项目管理中的配置填写，如无配置请填写默认项目ID:0</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>用来标记不希望被翻译的文本内容，如句子中的特殊符号、人名、地名等；每次请求只支持配置一个不被翻译的单词；仅支持配置人名、地名等名词，不要配置动词或短语，否则会影响翻译结果。</p>
                     */
                    std::string m_untranslatedText;
                    bool m_untranslatedTextHasBeenSet;

                    /**
                     * <p>需要使用的术语库列表，通过 <a href="https://cloud.tencent.com/document/product/551/107926">术语库操作指南</a> 自行创建术语库获取。</p>
                     */
                    std::vector<std::string> m_termRepoIDList;
                    bool m_termRepoIDListHasBeenSet;

                    /**
                     * <p>需要使用的例句库列表，通过 <a href="https://cloud.tencent.com/document/product/551/107927">例句库操作指南</a> 自行创建例句库获取。</p>
                     */
                    std::vector<std::string> m_sentRepoIDList;
                    bool m_sentRepoIDListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMT_V20180321_MODEL_TEXTTRANSLATEREQUEST_H_
