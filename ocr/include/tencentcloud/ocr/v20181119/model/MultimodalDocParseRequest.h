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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_MULTIMODALDOCPARSEREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_MULTIMODALDOCPARSEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * MultimodalDocParse请求参数结构体
                */
                class MultimodalDocParseRequest : public AbstractModel
                {
                public:
                    MultimodalDocParseRequest();
                    ~MultimodalDocParseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>文件的 Url 地址，支持FileType参数对应的文件格式及大小。文件下载时间不超过3秒。文件存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议文件存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。</p>
                     * @return FileUrl <p>文件的 Url 地址，支持FileType参数对应的文件格式及大小。文件下载时间不超过3秒。文件存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议文件存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。</p>
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置<p>文件的 Url 地址，支持FileType参数对应的文件格式及大小。文件下载时间不超过3秒。文件存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议文件存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。</p>
                     * @param _fileUrl <p>文件的 Url 地址，支持FileType参数对应的文件格式及大小。文件下载时间不超过3秒。文件存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议文件存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。</p>
                     * 
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     * 
                     */
                    bool FileUrlHasBeenSet() const;

                    /**
                     * 获取<p>支持解析的文件类型。</p><p>1：PDF 文档；</p><p>2：Word 文档（.doc / .docx）；</p><p>3：PPT 演示文稿（.ppt / .pptx）；</p><p>4：Excel 表格（.xls / .xlsx）；</p><p>5：Markdown 文档（.md）；</p><p>6：纯文本文件（.txt）；</p><p>7：图片文件（.png / .jpg / .jpeg 等）；</p><p>8：WPS 文档；</p><p>0：未知文件类型。</p><p></p><p>支持的文件大小：</p><p>PDF/WORD/PPT支持150M且300页以内、EXCEL支持10M以内、TXT支持10M以内、图片文件支持70M以内。</p><p></p><p>默认值：1</p>
                     * @return FileType <p>支持解析的文件类型。</p><p>1：PDF 文档；</p><p>2：Word 文档（.doc / .docx）；</p><p>3：PPT 演示文稿（.ppt / .pptx）；</p><p>4：Excel 表格（.xls / .xlsx）；</p><p>5：Markdown 文档（.md）；</p><p>6：纯文本文件（.txt）；</p><p>7：图片文件（.png / .jpg / .jpeg 等）；</p><p>8：WPS 文档；</p><p>0：未知文件类型。</p><p></p><p>支持的文件大小：</p><p>PDF/WORD/PPT支持150M且300页以内、EXCEL支持10M以内、TXT支持10M以内、图片文件支持70M以内。</p><p></p><p>默认值：1</p>
                     * 
                     */
                    int64_t GetFileType() const;

                    /**
                     * 设置<p>支持解析的文件类型。</p><p>1：PDF 文档；</p><p>2：Word 文档（.doc / .docx）；</p><p>3：PPT 演示文稿（.ppt / .pptx）；</p><p>4：Excel 表格（.xls / .xlsx）；</p><p>5：Markdown 文档（.md）；</p><p>6：纯文本文件（.txt）；</p><p>7：图片文件（.png / .jpg / .jpeg 等）；</p><p>8：WPS 文档；</p><p>0：未知文件类型。</p><p></p><p>支持的文件大小：</p><p>PDF/WORD/PPT支持150M且300页以内、EXCEL支持10M以内、TXT支持10M以内、图片文件支持70M以内。</p><p></p><p>默认值：1</p>
                     * @param _fileType <p>支持解析的文件类型。</p><p>1：PDF 文档；</p><p>2：Word 文档（.doc / .docx）；</p><p>3：PPT 演示文稿（.ppt / .pptx）；</p><p>4：Excel 表格（.xls / .xlsx）；</p><p>5：Markdown 文档（.md）；</p><p>6：纯文本文件（.txt）；</p><p>7：图片文件（.png / .jpg / .jpeg 等）；</p><p>8：WPS 文档；</p><p>0：未知文件类型。</p><p></p><p>支持的文件大小：</p><p>PDF/WORD/PPT支持150M且300页以内、EXCEL支持10M以内、TXT支持10M以内、图片文件支持70M以内。</p><p></p><p>默认值：1</p>
                     * 
                     */
                    void SetFileType(const int64_t& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取<p>输出格式。</p><p>1：json格式</p><p>2：markdown格式</p><p>3：xml格式</p><p>9：json+markdown+xml格式</p><p></p><p>默认值：9</p>
                     * @return ResultType <p>输出格式。</p><p>1：json格式</p><p>2：markdown格式</p><p>3：xml格式</p><p>9：json+markdown+xml格式</p><p></p><p>默认值：9</p>
                     * 
                     */
                    int64_t GetResultType() const;

                    /**
                     * 设置<p>输出格式。</p><p>1：json格式</p><p>2：markdown格式</p><p>3：xml格式</p><p>9：json+markdown+xml格式</p><p></p><p>默认值：9</p>
                     * @param _resultType <p>输出格式。</p><p>1：json格式</p><p>2：markdown格式</p><p>3：xml格式</p><p>9：json+markdown+xml格式</p><p></p><p>默认值：9</p>
                     * 
                     */
                    void SetResultType(const int64_t& _resultType);

                    /**
                     * 判断参数 ResultType 是否已赋值
                     * @return ResultType 是否已赋值
                     * 
                     */
                    bool ResultTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否支持子图解析。</p><p></p><p>默认值：false</p>
                     * @return EnableSubImg <p>是否支持子图解析。</p><p></p><p>默认值：false</p>
                     * 
                     */
                    bool GetEnableSubImg() const;

                    /**
                     * 设置<p>是否支持子图解析。</p><p></p><p>默认值：false</p>
                     * @param _enableSubImg <p>是否支持子图解析。</p><p></p><p>默认值：false</p>
                     * 
                     */
                    void SetEnableSubImg(const bool& _enableSubImg);

                    /**
                     * 判断参数 EnableSubImg 是否已赋值
                     * @return EnableSubImg 是否已赋值
                     * 
                     */
                    bool EnableSubImgHasBeenSet() const;

                    /**
                     * 获取<p>需要识别的页码范围，单次调用最多支持300页。</p><p>参数格式：1-10</p>
                     * @return PageRange <p>需要识别的页码范围，单次调用最多支持300页。</p><p>参数格式：1-10</p>
                     * 
                     */
                    std::string GetPageRange() const;

                    /**
                     * 设置<p>需要识别的页码范围，单次调用最多支持300页。</p><p>参数格式：1-10</p>
                     * @param _pageRange <p>需要识别的页码范围，单次调用最多支持300页。</p><p>参数格式：1-10</p>
                     * 
                     */
                    void SetPageRange(const std::string& _pageRange);

                    /**
                     * 判断参数 PageRange 是否已赋值
                     * @return PageRange 是否已赋值
                     * 
                     */
                    bool PageRangeHasBeenSet() const;

                private:

                    /**
                     * <p>文件的 Url 地址，支持FileType参数对应的文件格式及大小。文件下载时间不超过3秒。文件存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议文件存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。</p>
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * <p>支持解析的文件类型。</p><p>1：PDF 文档；</p><p>2：Word 文档（.doc / .docx）；</p><p>3：PPT 演示文稿（.ppt / .pptx）；</p><p>4：Excel 表格（.xls / .xlsx）；</p><p>5：Markdown 文档（.md）；</p><p>6：纯文本文件（.txt）；</p><p>7：图片文件（.png / .jpg / .jpeg 等）；</p><p>8：WPS 文档；</p><p>0：未知文件类型。</p><p></p><p>支持的文件大小：</p><p>PDF/WORD/PPT支持150M且300页以内、EXCEL支持10M以内、TXT支持10M以内、图片文件支持70M以内。</p><p></p><p>默认值：1</p>
                     */
                    int64_t m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * <p>输出格式。</p><p>1：json格式</p><p>2：markdown格式</p><p>3：xml格式</p><p>9：json+markdown+xml格式</p><p></p><p>默认值：9</p>
                     */
                    int64_t m_resultType;
                    bool m_resultTypeHasBeenSet;

                    /**
                     * <p>是否支持子图解析。</p><p></p><p>默认值：false</p>
                     */
                    bool m_enableSubImg;
                    bool m_enableSubImgHasBeenSet;

                    /**
                     * <p>需要识别的页码范围，单次调用最多支持300页。</p><p>参数格式：1-10</p>
                     */
                    std::string m_pageRange;
                    bool m_pageRangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_MULTIMODALDOCPARSEREQUEST_H_
