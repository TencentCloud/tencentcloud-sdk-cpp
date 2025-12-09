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

#ifndef TENCENTCLOUD_TMS_V20201229_MODEL_CREATEFINANCIALLLMTASKREQUEST_H_
#define TENCENTCLOUD_TMS_V20201229_MODEL_CREATEFINANCIALLLMTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * CreateFinancialLLMTask请求参数结构体
                */
                class CreateFinancialLLMTaskRequest : public AbstractModel
                {
                public:
                    CreateFinancialLLMTaskRequest();
                    ~CreateFinancialLLMTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取接口使用的识别策略 ID，请参考 [快速指引](https://cloud.tencent.com/document/product/1124/124604) 获取该值。  
                     * @return BizType 接口使用的识别策略 ID，请参考 [快速指引](https://cloud.tencent.com/document/product/1124/124604) 获取该值。  
                     * 
                     */
                    std::string GetBizType() const;

                    /**
                     * 设置接口使用的识别策略 ID，请参考 [快速指引](https://cloud.tencent.com/document/product/1124/124604) 获取该值。  
                     * @param _bizType 接口使用的识别策略 ID，请参考 [快速指引](https://cloud.tencent.com/document/product/1124/124604) 获取该值。  
                     * 
                     */
                    void SetBizType(const std::string& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取送审内容的格式，有两个可选值：
- 1：代表送审内容为**文档**，如DOC文档
- 2：代表送审内容为**纯文本**
                     * @return ContentType 送审内容的格式，有两个可选值：
- 1：代表送审内容为**文档**，如DOC文档
- 2：代表送审内容为**纯文本**
                     * 
                     */
                    int64_t GetContentType() const;

                    /**
                     * 设置送审内容的格式，有两个可选值：
- 1：代表送审内容为**文档**，如DOC文档
- 2：代表送审内容为**纯文本**
                     * @param _contentType 送审内容的格式，有两个可选值：
- 1：代表送审内容为**文档**，如DOC文档
- 2：代表送审内容为**纯文本**
                     * 
                     */
                    void SetContentType(const int64_t& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                    /**
                     * 获取若送审内容为文档（ContentType=1），需要传入具体格式，当前支持：DOC、DOCX、PDF。  
说明：若送审内容为纯文本（ContentType=2），则本字段传空（FileType=""）。
                     * @return FileType 若送审内容为文档（ContentType=1），需要传入具体格式，当前支持：DOC、DOCX、PDF。  
说明：若送审内容为纯文本（ContentType=2），则本字段传空（FileType=""）。
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置若送审内容为文档（ContentType=1），需要传入具体格式，当前支持：DOC、DOCX、PDF。  
说明：若送审内容为纯文本（ContentType=2），则本字段传空（FileType=""）。
                     * @param _fileType 若送审内容为文档（ContentType=1），需要传入具体格式，当前支持：DOC、DOCX、PDF。  
说明：若送审内容为纯文本（ContentType=2），则本字段传空（FileType=""）。
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取送审内容的传入方式如下：
- 若为文档类，需传入文档的URL（原文档文字数不超过10,000字），例如：http://xxxxxxxxxxxx/financial_test.doc
- 若为纯文本类，请以UTF-8格式进行Base64编码后传入（编码后字符数不超过10,000字），例如：5piO5aSpNjAz5LiA5a6a5rao
                     * @return Content 送审内容的传入方式如下：
- 若为文档类，需传入文档的URL（原文档文字数不超过10,000字），例如：http://xxxxxxxxxxxx/financial_test.doc
- 若为纯文本类，请以UTF-8格式进行Base64编码后传入（编码后字符数不超过10,000字），例如：5piO5aSpNjAz5LiA5a6a5rao
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置送审内容的传入方式如下：
- 若为文档类，需传入文档的URL（原文档文字数不超过10,000字），例如：http://xxxxxxxxxxxx/financial_test.doc
- 若为纯文本类，请以UTF-8格式进行Base64编码后传入（编码后字符数不超过10,000字），例如：5piO5aSpNjAz5LiA5a6a5rao
                     * @param _content 送审内容的传入方式如下：
- 若为文档类，需传入文档的URL（原文档文字数不超过10,000字），例如：http://xxxxxxxxxxxx/financial_test.doc
- 若为纯文本类，请以UTF-8格式进行Base64编码后传入（编码后字符数不超过10,000字），例如：5piO5aSpNjAz5LiA5a6a5rao
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 接口使用的识别策略 ID，请参考 [快速指引](https://cloud.tencent.com/document/product/1124/124604) 获取该值。  
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * 送审内容的格式，有两个可选值：
- 1：代表送审内容为**文档**，如DOC文档
- 2：代表送审内容为**纯文本**
                     */
                    int64_t m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * 若送审内容为文档（ContentType=1），需要传入具体格式，当前支持：DOC、DOCX、PDF。  
说明：若送审内容为纯文本（ContentType=2），则本字段传空（FileType=""）。
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 送审内容的传入方式如下：
- 若为文档类，需传入文档的URL（原文档文字数不超过10,000字），例如：http://xxxxxxxxxxxx/financial_test.doc
- 若为纯文本类，请以UTF-8格式进行Base64编码后传入（编码后字符数不超过10,000字），例如：5piO5aSpNjAz5LiA5a6a5rao
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20201229_MODEL_CREATEFINANCIALLLMTASKREQUEST_H_
