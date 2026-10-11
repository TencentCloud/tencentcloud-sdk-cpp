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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_SUBMITMULTIMODALDOCPARSEJOBREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_SUBMITMULTIMODALDOCPARSEJOBREQUEST_H_

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
                * SubmitMultimodalDocParseJob请求参数结构体
                */
                class SubmitMultimodalDocParseJobRequest : public AbstractModel
                {
                public:
                    SubmitMultimodalDocParseJobRequest();
                    ~SubmitMultimodalDocParseJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>支持解析的文件类型。取值：</p><ul><li>1：PDF 文档</li><li>2：Word 文档（.doc/.docx）</li><li>3：PPT 演示文稿（.ppt/.pptx）</li><li>4：Excel 表格（.xls/.xlsx）</li><li>5：Markdown 文档（.md）</li><li>6：纯文本文件（.txt）</li><li>7：图片文件（.png/.jpg/.jpeg 等）</li><li>8：WPS 文档<br>支持的文件大小：PDF/WORD/PPT 支持 150M 且 300 页。</li></ul>
                     * @return FileType <p>支持解析的文件类型。取值：</p><ul><li>1：PDF 文档</li><li>2：Word 文档（.doc/.docx）</li><li>3：PPT 演示文稿（.ppt/.pptx）</li><li>4：Excel 表格（.xls/.xlsx）</li><li>5：Markdown 文档（.md）</li><li>6：纯文本文件（.txt）</li><li>7：图片文件（.png/.jpg/.jpeg 等）</li><li>8：WPS 文档<br>支持的文件大小：PDF/WORD/PPT 支持 150M 且 300 页。</li></ul>
                     * 
                     */
                    int64_t GetFileType() const;

                    /**
                     * 设置<p>支持解析的文件类型。取值：</p><ul><li>1：PDF 文档</li><li>2：Word 文档（.doc/.docx）</li><li>3：PPT 演示文稿（.ppt/.pptx）</li><li>4：Excel 表格（.xls/.xlsx）</li><li>5：Markdown 文档（.md）</li><li>6：纯文本文件（.txt）</li><li>7：图片文件（.png/.jpg/.jpeg 等）</li><li>8：WPS 文档<br>支持的文件大小：PDF/WORD/PPT 支持 150M 且 300 页。</li></ul>
                     * @param _fileType <p>支持解析的文件类型。取值：</p><ul><li>1：PDF 文档</li><li>2：Word 文档（.doc/.docx）</li><li>3：PPT 演示文稿（.ppt/.pptx）</li><li>4：Excel 表格（.xls/.xlsx）</li><li>5：Markdown 文档（.md）</li><li>6：纯文本文件（.txt）</li><li>7：图片文件（.png/.jpg/.jpeg 等）</li><li>8：WPS 文档<br>支持的文件大小：PDF/WORD/PPT 支持 150M 且 300 页。</li></ul>
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
                     * 获取<p>文件的 Url 地址，支持 FileType 参数对应的文件格式及大小。文件下载时间不超过 3 秒。文件存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议文件存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。</p>
                     * @return FileUrl <p>文件的 Url 地址，支持 FileType 参数对应的文件格式及大小。文件下载时间不超过 3 秒。文件存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议文件存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。</p>
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置<p>文件的 Url 地址，支持 FileType 参数对应的文件格式及大小。文件下载时间不超过 3 秒。文件存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议文件存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。</p>
                     * @param _fileUrl <p>文件的 Url 地址，支持 FileType 参数对应的文件格式及大小。文件下载时间不超过 3 秒。文件存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议文件存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。</p>
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
                     * 获取<p>文件的 Base64 值。支持 FileType 参数对应的文件格式，支持的文件大小不超过 8M。文件下载时间不超过 3 秒。<br>文件的 FileUrl、FileBase64 必须提供一个，如果都提供，只使用 FileUrl。</p>
                     * @return FileBase64 <p>文件的 Base64 值。支持 FileType 参数对应的文件格式，支持的文件大小不超过 8M。文件下载时间不超过 3 秒。<br>文件的 FileUrl、FileBase64 必须提供一个，如果都提供，只使用 FileUrl。</p>
                     * 
                     */
                    std::string GetFileBase64() const;

                    /**
                     * 设置<p>文件的 Base64 值。支持 FileType 参数对应的文件格式，支持的文件大小不超过 8M。文件下载时间不超过 3 秒。<br>文件的 FileUrl、FileBase64 必须提供一个，如果都提供，只使用 FileUrl。</p>
                     * @param _fileBase64 <p>文件的 Base64 值。支持 FileType 参数对应的文件格式，支持的文件大小不超过 8M。文件下载时间不超过 3 秒。<br>文件的 FileUrl、FileBase64 必须提供一个，如果都提供，只使用 FileUrl。</p>
                     * 
                     */
                    void SetFileBase64(const std::string& _fileBase64);

                    /**
                     * 判断参数 FileBase64 是否已赋值
                     * @return FileBase64 是否已赋值
                     * 
                     */
                    bool FileBase64HasBeenSet() const;

                    /**
                     * 获取<p>输出格式。<br>1：json格式<br>2：markdown格式<br>3：xml格式<br>9：json+markdown+xml格式</p>
                     * @return ResultType <p>输出格式。<br>1：json格式<br>2：markdown格式<br>3：xml格式<br>9：json+markdown+xml格式</p>
                     * 
                     */
                    int64_t GetResultType() const;

                    /**
                     * 设置<p>输出格式。<br>1：json格式<br>2：markdown格式<br>3：xml格式<br>9：json+markdown+xml格式</p>
                     * @param _resultType <p>输出格式。<br>1：json格式<br>2：markdown格式<br>3：xml格式<br>9：json+markdown+xml格式</p>
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
                     * 获取<p>是否开启子图提取，默认为 false。</p>
                     * @return EnableSubImg <p>是否开启子图提取，默认为 false。</p>
                     * 
                     */
                    bool GetEnableSubImg() const;

                    /**
                     * 设置<p>是否开启子图提取，默认为 false。</p>
                     * @param _enableSubImg <p>是否开启子图提取，默认为 false。</p>
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
                     * 获取<p>文档的起始页码。用来指定识别的起始页码，识别的页码包含当前值，不填时默认从文档第一页开始解析。本参数与 FileEndPageNumber 可分开填写，也可只填其中一个。</p>
                     * @return FileStartPageNumber <p>文档的起始页码。用来指定识别的起始页码，识别的页码包含当前值，不填时默认从文档第一页开始解析。本参数与 FileEndPageNumber 可分开填写，也可只填其中一个。</p>
                     * 
                     */
                    int64_t GetFileStartPageNumber() const;

                    /**
                     * 设置<p>文档的起始页码。用来指定识别的起始页码，识别的页码包含当前值，不填时默认从文档第一页开始解析。本参数与 FileEndPageNumber 可分开填写，也可只填其中一个。</p>
                     * @param _fileStartPageNumber <p>文档的起始页码。用来指定识别的起始页码，识别的页码包含当前值，不填时默认从文档第一页开始解析。本参数与 FileEndPageNumber 可分开填写，也可只填其中一个。</p>
                     * 
                     */
                    void SetFileStartPageNumber(const int64_t& _fileStartPageNumber);

                    /**
                     * 判断参数 FileStartPageNumber 是否已赋值
                     * @return FileStartPageNumber 是否已赋值
                     * 
                     */
                    bool FileStartPageNumberHasBeenSet() const;

                    /**
                     * 获取<p>文档的结束页码。用来指定识别的结束页码，识别的页码包含当前值，不填时默认解析到文档最后一页。本参数与 FileStartPageNumber 可分开填写，也可只填其中一个。</p>
                     * @return FileEndPageNumber <p>文档的结束页码。用来指定识别的结束页码，识别的页码包含当前值，不填时默认解析到文档最后一页。本参数与 FileStartPageNumber 可分开填写，也可只填其中一个。</p>
                     * 
                     */
                    int64_t GetFileEndPageNumber() const;

                    /**
                     * 设置<p>文档的结束页码。用来指定识别的结束页码，识别的页码包含当前值，不填时默认解析到文档最后一页。本参数与 FileStartPageNumber 可分开填写，也可只填其中一个。</p>
                     * @param _fileEndPageNumber <p>文档的结束页码。用来指定识别的结束页码，识别的页码包含当前值，不填时默认解析到文档最后一页。本参数与 FileStartPageNumber 可分开填写，也可只填其中一个。</p>
                     * 
                     */
                    void SetFileEndPageNumber(const int64_t& _fileEndPageNumber);

                    /**
                     * 判断参数 FileEndPageNumber 是否已赋值
                     * @return FileEndPageNumber 是否已赋值
                     * 
                     */
                    bool FileEndPageNumberHasBeenSet() const;

                    /**
                     * 获取<p>任务类型，默认为 0。取值：</p><ul><li>0：默认</li><li>1：Free OCR</li><li>2：OCR</li><li>3：表格识别</li><li>4：代码识别</li></ul>
                     * @return TaskType <p>任务类型，默认为 0。取值：</p><ul><li>0：默认</li><li>1：Free OCR</li><li>2：OCR</li><li>3：表格识别</li><li>4：代码识别</li></ul>
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置<p>任务类型，默认为 0。取值：</p><ul><li>0：默认</li><li>1：Free OCR</li><li>2：OCR</li><li>3：表格识别</li><li>4：代码识别</li></ul>
                     * @param _taskType <p>任务类型，默认为 0。取值：</p><ul><li>0：默认</li><li>1：Free OCR</li><li>2：OCR</li><li>3：表格识别</li><li>4：代码识别</li></ul>
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                private:

                    /**
                     * <p>支持解析的文件类型。取值：</p><ul><li>1：PDF 文档</li><li>2：Word 文档（.doc/.docx）</li><li>3：PPT 演示文稿（.ppt/.pptx）</li><li>4：Excel 表格（.xls/.xlsx）</li><li>5：Markdown 文档（.md）</li><li>6：纯文本文件（.txt）</li><li>7：图片文件（.png/.jpg/.jpeg 等）</li><li>8：WPS 文档<br>支持的文件大小：PDF/WORD/PPT 支持 150M 且 300 页。</li></ul>
                     */
                    int64_t m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * <p>文件的 Url 地址，支持 FileType 参数对应的文件格式及大小。文件下载时间不超过 3 秒。文件存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议文件存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。</p>
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * <p>文件的 Base64 值。支持 FileType 参数对应的文件格式，支持的文件大小不超过 8M。文件下载时间不超过 3 秒。<br>文件的 FileUrl、FileBase64 必须提供一个，如果都提供，只使用 FileUrl。</p>
                     */
                    std::string m_fileBase64;
                    bool m_fileBase64HasBeenSet;

                    /**
                     * <p>输出格式。<br>1：json格式<br>2：markdown格式<br>3：xml格式<br>9：json+markdown+xml格式</p>
                     */
                    int64_t m_resultType;
                    bool m_resultTypeHasBeenSet;

                    /**
                     * <p>是否开启子图提取，默认为 false。</p>
                     */
                    bool m_enableSubImg;
                    bool m_enableSubImgHasBeenSet;

                    /**
                     * <p>文档的起始页码。用来指定识别的起始页码，识别的页码包含当前值，不填时默认从文档第一页开始解析。本参数与 FileEndPageNumber 可分开填写，也可只填其中一个。</p>
                     */
                    int64_t m_fileStartPageNumber;
                    bool m_fileStartPageNumberHasBeenSet;

                    /**
                     * <p>文档的结束页码。用来指定识别的结束页码，识别的页码包含当前值，不填时默认解析到文档最后一页。本参数与 FileStartPageNumber 可分开填写，也可只填其中一个。</p>
                     */
                    int64_t m_fileEndPageNumber;
                    bool m_fileEndPageNumberHasBeenSet;

                    /**
                     * <p>任务类型，默认为 0。取值：</p><ul><li>0：默认</li><li>1：Free OCR</li><li>2：OCR</li><li>3：表格识别</li><li>4：代码识别</li></ul>
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_SUBMITMULTIMODALDOCPARSEJOBREQUEST_H_
