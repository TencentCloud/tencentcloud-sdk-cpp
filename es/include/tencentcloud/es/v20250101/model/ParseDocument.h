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

#ifndef TENCENTCLOUD_ES_V20250101_MODEL_PARSEDOCUMENT_H_
#define TENCENTCLOUD_ES_V20250101_MODEL_PARSEDOCUMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20250101/model/DocumentParseConfig.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20250101
        {
            namespace Model
            {
                /**
                * 文档信息
                */
                class ParseDocument : public AbstractModel
                {
                public:
                    ParseDocument();
                    ~ParseDocument() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件类型。
支持的文件类型：PDF、DOC、DOCX、PPT、PPTX、MD、TXT、XLS、XLSX、CSV、PNG、JPG、JPEG、BMP、GIF、WEBP、HEIC、EPS、ICNS、IM、PCX、PPM、TIFF、XBM、HEIF、JP2
支持的文件大小：
- PDF、DOC、DOCX、PPT、PPTX 支持100M
- MD、TXT、XLS、XLSX、CSV 支持10M
- 其他支持20M
                     * @return FileType 文件类型。
支持的文件类型：PDF、DOC、DOCX、PPT、PPTX、MD、TXT、XLS、XLSX、CSV、PNG、JPG、JPEG、BMP、GIF、WEBP、HEIC、EPS、ICNS、IM、PCX、PPM、TIFF、XBM、HEIF、JP2
支持的文件大小：
- PDF、DOC、DOCX、PPT、PPTX 支持100M
- MD、TXT、XLS、XLSX、CSV 支持10M
- 其他支持20M
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置文件类型。
支持的文件类型：PDF、DOC、DOCX、PPT、PPTX、MD、TXT、XLS、XLSX、CSV、PNG、JPG、JPEG、BMP、GIF、WEBP、HEIC、EPS、ICNS、IM、PCX、PPM、TIFF、XBM、HEIF、JP2
支持的文件大小：
- PDF、DOC、DOCX、PPT、PPTX 支持100M
- MD、TXT、XLS、XLSX、CSV 支持10M
- 其他支持20M
                     * @param _fileType 文件类型。
支持的文件类型：PDF、DOC、DOCX、PPT、PPTX、MD、TXT、XLS、XLSX、CSV、PNG、JPG、JPEG、BMP、GIF、WEBP、HEIC、EPS、ICNS、IM、PCX、PPM、TIFF、XBM、HEIF、JP2
支持的文件大小：
- PDF、DOC、DOCX、PPT、PPTX 支持100M
- MD、TXT、XLS、XLSX、CSV 支持10M
- 其他支持20M
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
                     * 获取文件存储于腾讯云的 URL 可保障更高的下载速度和稳定性，使用腾讯云COS 文件地址。
                     * @return FileUrl 文件存储于腾讯云的 URL 可保障更高的下载速度和稳定性，使用腾讯云COS 文件地址。
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置文件存储于腾讯云的 URL 可保障更高的下载速度和稳定性，使用腾讯云COS 文件地址。
                     * @param _fileUrl 文件存储于腾讯云的 URL 可保障更高的下载速度和稳定性，使用腾讯云COS 文件地址。
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
                     * 获取文件的 base64 值，携带 MineType前缀信息。编码后的后的文件不超过 10M。
支持的文件大小：所下载文件经Base64编码后不超过 8M。文件下载时间不超过3秒。
支持的图片像素：单边介于20-10000px之间。
                     * @return FileContent 文件的 base64 值，携带 MineType前缀信息。编码后的后的文件不超过 10M。
支持的文件大小：所下载文件经Base64编码后不超过 8M。文件下载时间不超过3秒。
支持的图片像素：单边介于20-10000px之间。
                     * 
                     */
                    std::string GetFileContent() const;

                    /**
                     * 设置文件的 base64 值，携带 MineType前缀信息。编码后的后的文件不超过 10M。
支持的文件大小：所下载文件经Base64编码后不超过 8M。文件下载时间不超过3秒。
支持的图片像素：单边介于20-10000px之间。
                     * @param _fileContent 文件的 base64 值，携带 MineType前缀信息。编码后的后的文件不超过 10M。
支持的文件大小：所下载文件经Base64编码后不超过 8M。文件下载时间不超过3秒。
支持的图片像素：单边介于20-10000px之间。
                     * 
                     */
                    void SetFileContent(const std::string& _fileContent);

                    /**
                     * 判断参数 FileContent 是否已赋值
                     * @return FileContent 是否已赋值
                     * 
                     */
                    bool FileContentHasBeenSet() const;

                    /**
                     * 获取文档解析配置
                     * @return DocumentParseConfig 文档解析配置
                     * 
                     */
                    DocumentParseConfig GetDocumentParseConfig() const;

                    /**
                     * 设置文档解析配置
                     * @param _documentParseConfig 文档解析配置
                     * 
                     */
                    void SetDocumentParseConfig(const DocumentParseConfig& _documentParseConfig);

                    /**
                     * 判断参数 DocumentParseConfig 是否已赋值
                     * @return DocumentParseConfig 是否已赋值
                     * 
                     */
                    bool DocumentParseConfigHasBeenSet() const;

                    /**
                     * 获取文档的起始页码
                     * @return FileStartPageNumber 文档的起始页码
                     * 
                     */
                    int64_t GetFileStartPageNumber() const;

                    /**
                     * 设置文档的起始页码
                     * @param _fileStartPageNumber 文档的起始页码
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
                     * 获取文档的结束页码
                     * @return FileEndPageNumber 文档的结束页码
                     * 
                     */
                    int64_t GetFileEndPageNumber() const;

                    /**
                     * 设置文档的结束页码
                     * @param _fileEndPageNumber 文档的结束页码
                     * 
                     */
                    void SetFileEndPageNumber(const int64_t& _fileEndPageNumber);

                    /**
                     * 判断参数 FileEndPageNumber 是否已赋值
                     * @return FileEndPageNumber 是否已赋值
                     * 
                     */
                    bool FileEndPageNumberHasBeenSet() const;

                private:

                    /**
                     * 文件类型。
支持的文件类型：PDF、DOC、DOCX、PPT、PPTX、MD、TXT、XLS、XLSX、CSV、PNG、JPG、JPEG、BMP、GIF、WEBP、HEIC、EPS、ICNS、IM、PCX、PPM、TIFF、XBM、HEIF、JP2
支持的文件大小：
- PDF、DOC、DOCX、PPT、PPTX 支持100M
- MD、TXT、XLS、XLSX、CSV 支持10M
- 其他支持20M
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 文件存储于腾讯云的 URL 可保障更高的下载速度和稳定性，使用腾讯云COS 文件地址。
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * 文件的 base64 值，携带 MineType前缀信息。编码后的后的文件不超过 10M。
支持的文件大小：所下载文件经Base64编码后不超过 8M。文件下载时间不超过3秒。
支持的图片像素：单边介于20-10000px之间。
                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                    /**
                     * 文档解析配置
                     */
                    DocumentParseConfig m_documentParseConfig;
                    bool m_documentParseConfigHasBeenSet;

                    /**
                     * 文档的起始页码
                     */
                    int64_t m_fileStartPageNumber;
                    bool m_fileStartPageNumberHasBeenSet;

                    /**
                     * 文档的结束页码
                     */
                    int64_t m_fileEndPageNumber;
                    bool m_fileEndPageNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20250101_MODEL_PARSEDOCUMENT_H_
