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

#ifndef TENCENTCLOUD_TMT_V20180321_MODEL_FILETRANSLATEREQUEST_H_
#define TENCENTCLOUD_TMT_V20180321_MODEL_FILETRANSLATEREQUEST_H_

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
                * FileTranslate请求参数结构体
                */
                class FileTranslateRequest : public AbstractModel
                {
                public:
                    FileTranslateRequest();
                    ~FileTranslateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取源语言，支持
zh：简体中文
zh-HK：繁体中文
zh-TW：繁体中文
zh-TR：繁体中文
en：英语
ar：阿拉伯语
de：德语
es：西班牙语
fr：法语
it：意大利语
ja：日语
pt：葡萄牙语
ru：俄语
ko：韩语
tr：土耳其语
vi：越南语
th：泰语
                     * @return Source 源语言，支持
zh：简体中文
zh-HK：繁体中文
zh-TW：繁体中文
zh-TR：繁体中文
en：英语
ar：阿拉伯语
de：德语
es：西班牙语
fr：法语
it：意大利语
ja：日语
pt：葡萄牙语
ru：俄语
ko：韩语
tr：土耳其语
vi：越南语
th：泰语
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置源语言，支持
zh：简体中文
zh-HK：繁体中文
zh-TW：繁体中文
zh-TR：繁体中文
en：英语
ar：阿拉伯语
de：德语
es：西班牙语
fr：法语
it：意大利语
ja：日语
pt：葡萄牙语
ru：俄语
ko：韩语
tr：土耳其语
vi：越南语
th：泰语
                     * @param _source 源语言，支持
zh：简体中文
zh-HK：繁体中文
zh-TW：繁体中文
zh-TR：繁体中文
en：英语
ar：阿拉伯语
de：德语
es：西班牙语
fr：法语
it：意大利语
ja：日语
pt：葡萄牙语
ru：俄语
ko：韩语
tr：土耳其语
vi：越南语
th：泰语
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
                     * 获取目标语言，各源语言的目标语言支持列表如下
zh（简体中文）：en（英语）、ar（阿拉伯语）、de（德语）、es（西班牙语）、fr（法语）、it（意大利语）、ja（日语）、pt（葡萄牙语）、ru（俄语）、ko（韩语）、tr（土耳其语）、vi（越南语）、th（泰语）
zh-HK（繁体中文）：en（英语）、ar（阿拉伯语）、de（德语）、es（西班牙语）、fr（法语）、it（意大利语）、ja（日语）、pt（葡萄牙语）、ru（俄语）、ko（韩语）、tr（土耳其语）、vi（越南语）、th（泰语）
zh-TW（繁体中文）：en（英语）、ar（阿拉伯语）、de（德语）、es（西班牙语）、fr（法语）、it（意大利语）、ja（日语）、pt（葡萄牙语）、ru（俄语）、ko（韩语）、tr（土耳其语）、vi（越南语）、th（泰语）
zh-TR（繁体中文）:en（英语）、ar（阿拉伯语）、de（德语）、es（西班牙语）、fr（法语）、it（意大利语）、ja（日语）、pt（葡萄牙语）、ru（俄语）、ko（韩语）、tr（土耳其语）、vi（越南语）、th（泰语）
en（英语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、ar（阿拉伯语）、de（德语）、es（西班牙语）、fr（法语）、it（意大利语）、ja（日语）、pt（葡萄牙语）、ru（俄语）、ko（韩语）、tr（土耳其语）、vi（越南语）、th（泰语）
ar（阿拉伯语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
de（德语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
es（西班牙语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）、fr（法语）
fr（法语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）、es（西班牙语）
it（意大利语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
ja（日语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
pt（葡萄牙语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
ru（俄语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
ko（韩语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
tr（土耳其语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
vi（越南语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
th（泰语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
                     * @return Target 目标语言，各源语言的目标语言支持列表如下
zh（简体中文）：en（英语）、ar（阿拉伯语）、de（德语）、es（西班牙语）、fr（法语）、it（意大利语）、ja（日语）、pt（葡萄牙语）、ru（俄语）、ko（韩语）、tr（土耳其语）、vi（越南语）、th（泰语）
zh-HK（繁体中文）：en（英语）、ar（阿拉伯语）、de（德语）、es（西班牙语）、fr（法语）、it（意大利语）、ja（日语）、pt（葡萄牙语）、ru（俄语）、ko（韩语）、tr（土耳其语）、vi（越南语）、th（泰语）
zh-TW（繁体中文）：en（英语）、ar（阿拉伯语）、de（德语）、es（西班牙语）、fr（法语）、it（意大利语）、ja（日语）、pt（葡萄牙语）、ru（俄语）、ko（韩语）、tr（土耳其语）、vi（越南语）、th（泰语）
zh-TR（繁体中文）:en（英语）、ar（阿拉伯语）、de（德语）、es（西班牙语）、fr（法语）、it（意大利语）、ja（日语）、pt（葡萄牙语）、ru（俄语）、ko（韩语）、tr（土耳其语）、vi（越南语）、th（泰语）
en（英语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、ar（阿拉伯语）、de（德语）、es（西班牙语）、fr（法语）、it（意大利语）、ja（日语）、pt（葡萄牙语）、ru（俄语）、ko（韩语）、tr（土耳其语）、vi（越南语）、th（泰语）
ar（阿拉伯语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
de（德语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
es（西班牙语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）、fr（法语）
fr（法语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）、es（西班牙语）
it（意大利语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
ja（日语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
pt（葡萄牙语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
ru（俄语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
ko（韩语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
tr（土耳其语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
vi（越南语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
th（泰语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置目标语言，各源语言的目标语言支持列表如下
zh（简体中文）：en（英语）、ar（阿拉伯语）、de（德语）、es（西班牙语）、fr（法语）、it（意大利语）、ja（日语）、pt（葡萄牙语）、ru（俄语）、ko（韩语）、tr（土耳其语）、vi（越南语）、th（泰语）
zh-HK（繁体中文）：en（英语）、ar（阿拉伯语）、de（德语）、es（西班牙语）、fr（法语）、it（意大利语）、ja（日语）、pt（葡萄牙语）、ru（俄语）、ko（韩语）、tr（土耳其语）、vi（越南语）、th（泰语）
zh-TW（繁体中文）：en（英语）、ar（阿拉伯语）、de（德语）、es（西班牙语）、fr（法语）、it（意大利语）、ja（日语）、pt（葡萄牙语）、ru（俄语）、ko（韩语）、tr（土耳其语）、vi（越南语）、th（泰语）
zh-TR（繁体中文）:en（英语）、ar（阿拉伯语）、de（德语）、es（西班牙语）、fr（法语）、it（意大利语）、ja（日语）、pt（葡萄牙语）、ru（俄语）、ko（韩语）、tr（土耳其语）、vi（越南语）、th（泰语）
en（英语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、ar（阿拉伯语）、de（德语）、es（西班牙语）、fr（法语）、it（意大利语）、ja（日语）、pt（葡萄牙语）、ru（俄语）、ko（韩语）、tr（土耳其语）、vi（越南语）、th（泰语）
ar（阿拉伯语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
de（德语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
es（西班牙语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）、fr（法语）
fr（法语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）、es（西班牙语）
it（意大利语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
ja（日语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
pt（葡萄牙语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
ru（俄语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
ko（韩语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
tr（土耳其语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
vi（越南语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
th（泰语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
                     * @param _target 目标语言，各源语言的目标语言支持列表如下
zh（简体中文）：en（英语）、ar（阿拉伯语）、de（德语）、es（西班牙语）、fr（法语）、it（意大利语）、ja（日语）、pt（葡萄牙语）、ru（俄语）、ko（韩语）、tr（土耳其语）、vi（越南语）、th（泰语）
zh-HK（繁体中文）：en（英语）、ar（阿拉伯语）、de（德语）、es（西班牙语）、fr（法语）、it（意大利语）、ja（日语）、pt（葡萄牙语）、ru（俄语）、ko（韩语）、tr（土耳其语）、vi（越南语）、th（泰语）
zh-TW（繁体中文）：en（英语）、ar（阿拉伯语）、de（德语）、es（西班牙语）、fr（法语）、it（意大利语）、ja（日语）、pt（葡萄牙语）、ru（俄语）、ko（韩语）、tr（土耳其语）、vi（越南语）、th（泰语）
zh-TR（繁体中文）:en（英语）、ar（阿拉伯语）、de（德语）、es（西班牙语）、fr（法语）、it（意大利语）、ja（日语）、pt（葡萄牙语）、ru（俄语）、ko（韩语）、tr（土耳其语）、vi（越南语）、th（泰语）
en（英语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、ar（阿拉伯语）、de（德语）、es（西班牙语）、fr（法语）、it（意大利语）、ja（日语）、pt（葡萄牙语）、ru（俄语）、ko（韩语）、tr（土耳其语）、vi（越南语）、th（泰语）
ar（阿拉伯语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
de（德语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
es（西班牙语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）、fr（法语）
fr（法语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）、es（西班牙语）
it（意大利语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
ja（日语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
pt（葡萄牙语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
ru（俄语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
ko（韩语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
tr（土耳其语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
vi（越南语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
th（泰语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
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
                     * 获取文档类型：可支持以下几种(pdf,docx,pptx,xlsx,txt,xml,html,markdown,properties)
                     * @return DocumentType 文档类型：可支持以下几种(pdf,docx,pptx,xlsx,txt,xml,html,markdown,properties)
                     * 
                     */
                    std::string GetDocumentType() const;

                    /**
                     * 设置文档类型：可支持以下几种(pdf,docx,pptx,xlsx,txt,xml,html,markdown,properties)
                     * @param _documentType 文档类型：可支持以下几种(pdf,docx,pptx,xlsx,txt,xml,html,markdown,properties)
                     * 
                     */
                    void SetDocumentType(const std::string& _documentType);

                    /**
                     * 判断参数 DocumentType 是否已赋值
                     * @return DocumentType 是否已赋值
                     * 
                     */
                    bool DocumentTypeHasBeenSet() const;

                    /**
                     * 获取数据来源，0：url，1：直接传文件编码后数据
                     * @return SourceType 数据来源，0：url，1：直接传文件编码后数据
                     * 
                     */
                    int64_t GetSourceType() const;

                    /**
                     * 设置数据来源，0：url，1：直接传文件编码后数据
                     * @param _sourceType 数据来源，0：url，1：直接传文件编码后数据
                     * 
                     */
                    void SetSourceType(const int64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取需要翻译文件url，URL长度不能超过1000字符。文件限制如下：docx/xIsx/html/markdown文件不超过800万字符，doc/pdf/pptx文件不超过300页，txt/po文件不超过10MB，pdf/docx/pptx/xlsx不超过40MB
                     * @return Url 需要翻译文件url，URL长度不能超过1000字符。文件限制如下：docx/xIsx/html/markdown文件不超过800万字符，doc/pdf/pptx文件不超过300页，txt/po文件不超过10MB，pdf/docx/pptx/xlsx不超过40MB
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置需要翻译文件url，URL长度不能超过1000字符。文件限制如下：docx/xIsx/html/markdown文件不超过800万字符，doc/pdf/pptx文件不超过300页，txt/po文件不超过10MB，pdf/docx/pptx/xlsx不超过40MB
                     * @param _url 需要翻译文件url，URL长度不能超过1000字符。文件限制如下：docx/xIsx/html/markdown文件不超过800万字符，doc/pdf/pptx文件不超过300页，txt/po文件不超过10MB，pdf/docx/pptx/xlsx不超过40MB
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取原始文档类型。该参数为高级参数，请留空，如需使用，请与工作人员确认后再使用。
                     * @return BasicDocumentType 原始文档类型。该参数为高级参数，请留空，如需使用，请与工作人员确认后再使用。
                     * 
                     */
                    std::string GetBasicDocumentType() const;

                    /**
                     * 设置原始文档类型。该参数为高级参数，请留空，如需使用，请与工作人员确认后再使用。
                     * @param _basicDocumentType 原始文档类型。该参数为高级参数，请留空，如需使用，请与工作人员确认后再使用。
                     * 
                     */
                    void SetBasicDocumentType(const std::string& _basicDocumentType);

                    /**
                     * 判断参数 BasicDocumentType 是否已赋值
                     * @return BasicDocumentType 是否已赋值
                     * 
                     */
                    bool BasicDocumentTypeHasBeenSet() const;

                    /**
                     * 获取回调url，URL长度不能超过256字符。文件大于10MB或字符较多时，建议采用回调方式；回调时，所有内容会放入 Body 中，具体请参见[文件翻译回调说明](https://cloud.tencent.com/document/product/551/91138)。
                     * @return CallbackUrl 回调url，URL长度不能超过256字符。文件大于10MB或字符较多时，建议采用回调方式；回调时，所有内容会放入 Body 中，具体请参见[文件翻译回调说明](https://cloud.tencent.com/document/product/551/91138)。
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置回调url，URL长度不能超过256字符。文件大于10MB或字符较多时，建议采用回调方式；回调时，所有内容会放入 Body 中，具体请参见[文件翻译回调说明](https://cloud.tencent.com/document/product/551/91138)。
                     * @param _callbackUrl 回调url，URL长度不能超过256字符。文件大于10MB或字符较多时，建议采用回调方式；回调时，所有内容会放入 Body 中，具体请参见[文件翻译回调说明](https://cloud.tencent.com/document/product/551/91138)。
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取文件数据，当SourceType 值为1时必须填写，为0可不写。要base64编码(采用python语言时注意读取文件应该为string而不是byte，以byte格式读取后要decode()。编码后的数据不可带有回车换行符)。数据要小于5MB。
                     * @return Data 文件数据，当SourceType 值为1时必须填写，为0可不写。要base64编码(采用python语言时注意读取文件应该为string而不是byte，以byte格式读取后要decode()。编码后的数据不可带有回车换行符)。数据要小于5MB。
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 设置文件数据，当SourceType 值为1时必须填写，为0可不写。要base64编码(采用python语言时注意读取文件应该为string而不是byte，以byte格式读取后要decode()。编码后的数据不可带有回车换行符)。数据要小于5MB。
                     * @param _data 文件数据，当SourceType 值为1时必须填写，为0可不写。要base64编码(采用python语言时注意读取文件应该为string而不是byte，以byte格式读取后要decode()。编码后的数据不可带有回车换行符)。数据要小于5MB。
                     * 
                     */
                    void SetData(const std::string& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 源语言，支持
zh：简体中文
zh-HK：繁体中文
zh-TW：繁体中文
zh-TR：繁体中文
en：英语
ar：阿拉伯语
de：德语
es：西班牙语
fr：法语
it：意大利语
ja：日语
pt：葡萄牙语
ru：俄语
ko：韩语
tr：土耳其语
vi：越南语
th：泰语
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 目标语言，各源语言的目标语言支持列表如下
zh（简体中文）：en（英语）、ar（阿拉伯语）、de（德语）、es（西班牙语）、fr（法语）、it（意大利语）、ja（日语）、pt（葡萄牙语）、ru（俄语）、ko（韩语）、tr（土耳其语）、vi（越南语）、th（泰语）
zh-HK（繁体中文）：en（英语）、ar（阿拉伯语）、de（德语）、es（西班牙语）、fr（法语）、it（意大利语）、ja（日语）、pt（葡萄牙语）、ru（俄语）、ko（韩语）、tr（土耳其语）、vi（越南语）、th（泰语）
zh-TW（繁体中文）：en（英语）、ar（阿拉伯语）、de（德语）、es（西班牙语）、fr（法语）、it（意大利语）、ja（日语）、pt（葡萄牙语）、ru（俄语）、ko（韩语）、tr（土耳其语）、vi（越南语）、th（泰语）
zh-TR（繁体中文）:en（英语）、ar（阿拉伯语）、de（德语）、es（西班牙语）、fr（法语）、it（意大利语）、ja（日语）、pt（葡萄牙语）、ru（俄语）、ko（韩语）、tr（土耳其语）、vi（越南语）、th（泰语）
en（英语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、ar（阿拉伯语）、de（德语）、es（西班牙语）、fr（法语）、it（意大利语）、ja（日语）、pt（葡萄牙语）、ru（俄语）、ko（韩语）、tr（土耳其语）、vi（越南语）、th（泰语）
ar（阿拉伯语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
de（德语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
es（西班牙语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）、fr（法语）
fr（法语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）、es（西班牙语）
it（意大利语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
ja（日语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
pt（葡萄牙语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
ru（俄语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
ko（韩语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
tr（土耳其语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
vi（越南语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
th（泰语）：zh（简体中文）、zh-HK（繁体中文）、zh-TW（繁体中文）、zh-TR（繁体中文）、en（英语）
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * 文档类型：可支持以下几种(pdf,docx,pptx,xlsx,txt,xml,html,markdown,properties)
                     */
                    std::string m_documentType;
                    bool m_documentTypeHasBeenSet;

                    /**
                     * 数据来源，0：url，1：直接传文件编码后数据
                     */
                    int64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 需要翻译文件url，URL长度不能超过1000字符。文件限制如下：docx/xIsx/html/markdown文件不超过800万字符，doc/pdf/pptx文件不超过300页，txt/po文件不超过10MB，pdf/docx/pptx/xlsx不超过40MB
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 原始文档类型。该参数为高级参数，请留空，如需使用，请与工作人员确认后再使用。
                     */
                    std::string m_basicDocumentType;
                    bool m_basicDocumentTypeHasBeenSet;

                    /**
                     * 回调url，URL长度不能超过256字符。文件大于10MB或字符较多时，建议采用回调方式；回调时，所有内容会放入 Body 中，具体请参见[文件翻译回调说明](https://cloud.tencent.com/document/product/551/91138)。
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 文件数据，当SourceType 值为1时必须填写，为0可不写。要base64编码(采用python语言时注意读取文件应该为string而不是byte，以byte格式读取后要decode()。编码后的数据不可带有回车换行符)。数据要小于5MB。
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMT_V20180321_MODEL_FILETRANSLATEREQUEST_H_
