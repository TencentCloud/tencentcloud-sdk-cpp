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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DOCMETADATA_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DOCMETADATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 文档元信息
                */
                class DocMetadata : public AbstractModel
                {
                public:
                    DocMetadata();
                    ~DocMetadata() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>文档字符数</p>
                     * @return DocCharCount <p>文档字符数</p>
                     * 
                     */
                    std::string GetDocCharCount() const;

                    /**
                     * 设置<p>文档字符数</p>
                     * @param _docCharCount <p>文档字符数</p>
                     * 
                     */
                    void SetDocCharCount(const std::string& _docCharCount);

                    /**
                     * 判断参数 DocCharCount 是否已赋值
                     * @return DocCharCount 是否已赋值
                     * 
                     */
                    bool DocCharCountHasBeenSet() const;

                    /**
                     * 获取<p>文件名</p>
                     * @return FileName <p>文件名</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>文件名</p>
                     * @param _fileName <p>文件名</p>
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取<p>文件大小（字节）</p>
                     * @return FileSize <p>文件大小（字节）</p>
                     * 
                     */
                    std::string GetFileSize() const;

                    /**
                     * 设置<p>文件大小（字节）</p>
                     * @param _fileSize <p>文件大小（字节）</p>
                     * 
                     */
                    void SetFileSize(const std::string& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取<p>文件类型/扩展名</p>
                     * @return FileType <p>文件类型/扩展名</p>
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置<p>文件类型/扩展名</p>
                     * @param _fileType <p>文件类型/扩展名</p>
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
                     * 获取<p>元数据引用字段名列表（用于显示文档哪些分类和属性被设置为元数据）</p>
                     * @return RefFieldNameList <p>元数据引用字段名列表（用于显示文档哪些分类和属性被设置为元数据）</p>
                     * 
                     */
                    std::vector<std::string> GetRefFieldNameList() const;

                    /**
                     * 设置<p>元数据引用字段名列表（用于显示文档哪些分类和属性被设置为元数据）</p>
                     * @param _refFieldNameList <p>元数据引用字段名列表（用于显示文档哪些分类和属性被设置为元数据）</p>
                     * 
                     */
                    void SetRefFieldNameList(const std::vector<std::string>& _refFieldNameList);

                    /**
                     * 判断参数 RefFieldNameList 是否已赋值
                     * @return RefFieldNameList 是否已赋值
                     * 
                     */
                    bool RefFieldNameListHasBeenSet() const;

                    /**
                     * 获取<p>来源描述</p>
                     * @return SourceDesc <p>来源描述</p>
                     * 
                     */
                    std::string GetSourceDesc() const;

                    /**
                     * 设置<p>来源描述</p>
                     * @param _sourceDesc <p>来源描述</p>
                     * 
                     */
                    void SetSourceDesc(const std::string& _sourceDesc);

                    /**
                     * 判断参数 SourceDesc 是否已赋值
                     * @return SourceDesc 是否已赋值
                     * 
                     */
                    bool SourceDescHasBeenSet() const;

                    /**
                     * 获取<p>文档来源类型：1=本地上传，2=网页链接，3=COS 对接，4=外部导入<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>DOC_SOURCE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>DOC_SOURCE_TYPE_LOCAL</td><td>1</td><td>本地上传</td></tr><tr><td>DOC_SOURCE_TYPE_URL</td><td>2</td><td>网页链接</td></tr><tr><td>DOC_SOURCE_TYPE_COS</td><td>3</td><td>COS 对接</td></tr><tr><td>DOC_SOURCE_TYPE_IMPORT</td><td>4</td><td>外部导入</td></tr></tbody></table></p>
                     * @return SourceType <p>文档来源类型：1=本地上传，2=网页链接，3=COS 对接，4=外部导入<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>DOC_SOURCE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>DOC_SOURCE_TYPE_LOCAL</td><td>1</td><td>本地上传</td></tr><tr><td>DOC_SOURCE_TYPE_URL</td><td>2</td><td>网页链接</td></tr><tr><td>DOC_SOURCE_TYPE_COS</td><td>3</td><td>COS 对接</td></tr><tr><td>DOC_SOURCE_TYPE_IMPORT</td><td>4</td><td>外部导入</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetSourceType() const;

                    /**
                     * 设置<p>文档来源类型：1=本地上传，2=网页链接，3=COS 对接，4=外部导入<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>DOC_SOURCE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>DOC_SOURCE_TYPE_LOCAL</td><td>1</td><td>本地上传</td></tr><tr><td>DOC_SOURCE_TYPE_URL</td><td>2</td><td>网页链接</td></tr><tr><td>DOC_SOURCE_TYPE_COS</td><td>3</td><td>COS 对接</td></tr><tr><td>DOC_SOURCE_TYPE_IMPORT</td><td>4</td><td>外部导入</td></tr></tbody></table></p>
                     * @param _sourceType <p>文档来源类型：1=本地上传，2=网页链接，3=COS 对接，4=外部导入<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>DOC_SOURCE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>DOC_SOURCE_TYPE_LOCAL</td><td>1</td><td>本地上传</td></tr><tr><td>DOC_SOURCE_TYPE_URL</td><td>2</td><td>网页链接</td></tr><tr><td>DOC_SOURCE_TYPE_COS</td><td>3</td><td>COS 对接</td></tr><tr><td>DOC_SOURCE_TYPE_IMPORT</td><td>4</td><td>外部导入</td></tr></tbody></table></p>
                     * 
                     */
                    void SetSourceType(const int64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                private:

                    /**
                     * <p>文档字符数</p>
                     */
                    std::string m_docCharCount;
                    bool m_docCharCountHasBeenSet;

                    /**
                     * <p>文件名</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>文件大小（字节）</p>
                     */
                    std::string m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * <p>文件类型/扩展名</p>
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * <p>元数据引用字段名列表（用于显示文档哪些分类和属性被设置为元数据）</p>
                     */
                    std::vector<std::string> m_refFieldNameList;
                    bool m_refFieldNameListHasBeenSet;

                    /**
                     * <p>来源描述</p>
                     */
                    std::string m_sourceDesc;
                    bool m_sourceDescHasBeenSet;

                    /**
                     * <p>文档来源类型：1=本地上传，2=网页链接，3=COS 对接，4=外部导入<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>DOC_SOURCE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>DOC_SOURCE_TYPE_LOCAL</td><td>1</td><td>本地上传</td></tr><tr><td>DOC_SOURCE_TYPE_URL</td><td>2</td><td>网页链接</td></tr><tr><td>DOC_SOURCE_TYPE_COS</td><td>3</td><td>COS 对接</td></tr><tr><td>DOC_SOURCE_TYPE_IMPORT</td><td>4</td><td>外部导入</td></tr></tbody></table></p>
                     */
                    int64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DOCMETADATA_H_
