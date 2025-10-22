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
                     * 获取审核策略BizType
                     * @return BizType 审核策略BizType
                     * 
                     */
                    std::string GetBizType() const;

                    /**
                     * 设置审核策略BizType
                     * @param _bizType 审核策略BizType
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
                     * 获取待审文件类型，目前支持：PDF, DOC, DOCX
                     * @return FileType 待审文件类型，目前支持：PDF, DOC, DOCX
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置待审文件类型，目前支持：PDF, DOC, DOCX
                     * @param _fileType 待审文件类型，目前支持：PDF, DOC, DOCX
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
                     * 获取送审内容类型：1-文档，2-文本
                     * @return ContentType 送审内容类型：1-文档，2-文本
                     * 
                     */
                    int64_t GetContentType() const;

                    /**
                     * 设置送审内容类型：1-文档，2-文本
                     * @param _contentType 送审内容类型：1-文档，2-文本
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
                     * 获取送审内容，根据ContentType字段的取值，传入送审文档的Url链接，或送审文本的Base64编码

文档限制：

- 文件下载时间不超过15秒（文件存储于腾讯云的Url可保障更高的下载速度和稳定性，建议文件存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。）
- 所下载文件经 Base64 编码后不超过支持的文件大小：PDF/DOC/DOCX - 200M
- 文档解析后的纯文本长度不超过 10000字

文本限制：Base64解码后的文本长度不超过10000字

                     * @return Content 送审内容，根据ContentType字段的取值，传入送审文档的Url链接，或送审文本的Base64编码

文档限制：

- 文件下载时间不超过15秒（文件存储于腾讯云的Url可保障更高的下载速度和稳定性，建议文件存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。）
- 所下载文件经 Base64 编码后不超过支持的文件大小：PDF/DOC/DOCX - 200M
- 文档解析后的纯文本长度不超过 10000字

文本限制：Base64解码后的文本长度不超过10000字

                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置送审内容，根据ContentType字段的取值，传入送审文档的Url链接，或送审文本的Base64编码

文档限制：

- 文件下载时间不超过15秒（文件存储于腾讯云的Url可保障更高的下载速度和稳定性，建议文件存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。）
- 所下载文件经 Base64 编码后不超过支持的文件大小：PDF/DOC/DOCX - 200M
- 文档解析后的纯文本长度不超过 10000字

文本限制：Base64解码后的文本长度不超过10000字

                     * @param _content 送审内容，根据ContentType字段的取值，传入送审文档的Url链接，或送审文本的Base64编码

文档限制：

- 文件下载时间不超过15秒（文件存储于腾讯云的Url可保障更高的下载速度和稳定性，建议文件存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。）
- 所下载文件经 Base64 编码后不超过支持的文件大小：PDF/DOC/DOCX - 200M
- 文档解析后的纯文本长度不超过 10000字

文本限制：Base64解码后的文本长度不超过10000字

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
                     * 审核策略BizType
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * 待审文件类型，目前支持：PDF, DOC, DOCX
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 送审内容类型：1-文档，2-文本
                     */
                    int64_t m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * 送审内容，根据ContentType字段的取值，传入送审文档的Url链接，或送审文本的Base64编码

文档限制：

- 文件下载时间不超过15秒（文件存储于腾讯云的Url可保障更高的下载速度和稳定性，建议文件存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。）
- 所下载文件经 Base64 编码后不超过支持的文件大小：PDF/DOC/DOCX - 200M
- 文档解析后的纯文本长度不超过 10000字

文本限制：Base64解码后的文本长度不超过10000字

                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20201229_MODEL_CREATEFINANCIALLLMTASKREQUEST_H_
