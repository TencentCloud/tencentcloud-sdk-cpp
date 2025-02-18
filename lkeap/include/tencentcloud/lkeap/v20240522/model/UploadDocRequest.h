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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_UPLOADDOCREQUEST_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_UPLOADDOCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lkeap/v20240522/model/AttributeLabelReferItem.h>
#include <tencentcloud/lkeap/v20240522/model/SegmentationConfig.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * UploadDoc请求参数结构体
                */
                class UploadDocRequest : public AbstractModel
                {
                public:
                    UploadDocRequest();
                    ~UploadDocRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取知识库ID
                     * @return KnowledgeBaseId 知识库ID
                     * 
                     */
                    std::string GetKnowledgeBaseId() const;

                    /**
                     * 设置知识库ID
                     * @param _knowledgeBaseId 知识库ID
                     * 
                     */
                    void SetKnowledgeBaseId(const std::string& _knowledgeBaseId);

                    /**
                     * 判断参数 KnowledgeBaseId 是否已赋值
                     * @return KnowledgeBaseId 是否已赋值
                     * 
                     */
                    bool KnowledgeBaseIdHasBeenSet() const;

                    /**
                     * 获取文件名。
**需带文件类型后缀**
                     * @return FileName 文件名。
**需带文件类型后缀**
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名。
**需带文件类型后缀**
                     * @param _fileName 文件名。
**需带文件类型后缀**
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
                     * 获取文件类型。

**支持的文件类型：**
- `PDF`、`DOC`、`DOCX`、`XLS`、`XLSX`、`PPT`、`PPTX`、`MD`、`TXT`、`PNG`、`JPG`、`JPEG`、`CSV`

**支持的文件大小：**
 - `PDF`、`DOCX`、`DOC`、`PPT`、`PPTX` 最大 200M
 - `TXT`、`MD` 最大10M
 - 其他 最大20M

                     * @return FileType 文件类型。

**支持的文件类型：**
- `PDF`、`DOC`、`DOCX`、`XLS`、`XLSX`、`PPT`、`PPTX`、`MD`、`TXT`、`PNG`、`JPG`、`JPEG`、`CSV`

**支持的文件大小：**
 - `PDF`、`DOCX`、`DOC`、`PPT`、`PPTX` 最大 200M
 - `TXT`、`MD` 最大10M
 - 其他 最大20M

                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置文件类型。

**支持的文件类型：**
- `PDF`、`DOC`、`DOCX`、`XLS`、`XLSX`、`PPT`、`PPTX`、`MD`、`TXT`、`PNG`、`JPG`、`JPEG`、`CSV`

**支持的文件大小：**
 - `PDF`、`DOCX`、`DOC`、`PPT`、`PPTX` 最大 200M
 - `TXT`、`MD` 最大10M
 - 其他 最大20M

                     * @param _fileType 文件类型。

**支持的文件类型：**
- `PDF`、`DOC`、`DOCX`、`XLS`、`XLSX`、`PPT`、`PPTX`、`MD`、`TXT`、`PNG`、`JPG`、`JPEG`、`CSV`

**支持的文件大小：**
 - `PDF`、`DOCX`、`DOC`、`PPT`、`PPTX` 最大 200M
 - `TXT`、`MD` 最大10M
 - 其他 最大20M

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
                     * 获取文件的 URL 地址。
文件存储于腾讯云的 URL 可保障更高的下载速度和稳定性，建议文件存储于腾讯云。 非腾讯云存储的 URL 速度和稳定性可能受一定影响。
参考：[腾讯云COS文档](https://cloud.tencent.com/document/product/436/7749)
                     * @return FileUrl 文件的 URL 地址。
文件存储于腾讯云的 URL 可保障更高的下载速度和稳定性，建议文件存储于腾讯云。 非腾讯云存储的 URL 速度和稳定性可能受一定影响。
参考：[腾讯云COS文档](https://cloud.tencent.com/document/product/436/7749)
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置文件的 URL 地址。
文件存储于腾讯云的 URL 可保障更高的下载速度和稳定性，建议文件存储于腾讯云。 非腾讯云存储的 URL 速度和稳定性可能受一定影响。
参考：[腾讯云COS文档](https://cloud.tencent.com/document/product/436/7749)
                     * @param _fileUrl 文件的 URL 地址。
文件存储于腾讯云的 URL 可保障更高的下载速度和稳定性，建议文件存储于腾讯云。 非腾讯云存储的 URL 速度和稳定性可能受一定影响。
参考：[腾讯云COS文档](https://cloud.tencent.com/document/product/436/7749)
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
                     * 获取属性标签引用
                     * @return AttributeLabel 属性标签引用
                     * @deprecated
                     */
                    std::vector<AttributeLabelReferItem> GetAttributeLabel() const;

                    /**
                     * 设置属性标签引用
                     * @param _attributeLabel 属性标签引用
                     * @deprecated
                     */
                    void SetAttributeLabel(const std::vector<AttributeLabelReferItem>& _attributeLabel);

                    /**
                     * 判断参数 AttributeLabel 是否已赋值
                     * @return AttributeLabel 是否已赋值
                     * @deprecated
                     */
                    bool AttributeLabelHasBeenSet() const;

                    /**
                     * 获取属性标签引用
                     * @return AttributeLabels 属性标签引用
                     * 
                     */
                    std::vector<AttributeLabelReferItem> GetAttributeLabels() const;

                    /**
                     * 设置属性标签引用
                     * @param _attributeLabels 属性标签引用
                     * 
                     */
                    void SetAttributeLabels(const std::vector<AttributeLabelReferItem>& _attributeLabels);

                    /**
                     * 判断参数 AttributeLabels 是否已赋值
                     * @return AttributeLabels 是否已赋值
                     * 
                     */
                    bool AttributeLabelsHasBeenSet() const;

                    /**
                     * 获取分段信息
                     * @return Config 分段信息
                     * 
                     */
                    SegmentationConfig GetConfig() const;

                    /**
                     * 设置分段信息
                     * @param _config 分段信息
                     * 
                     */
                    void SetConfig(const SegmentationConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                private:

                    /**
                     * 知识库ID
                     */
                    std::string m_knowledgeBaseId;
                    bool m_knowledgeBaseIdHasBeenSet;

                    /**
                     * 文件名。
**需带文件类型后缀**
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 文件类型。

**支持的文件类型：**
- `PDF`、`DOC`、`DOCX`、`XLS`、`XLSX`、`PPT`、`PPTX`、`MD`、`TXT`、`PNG`、`JPG`、`JPEG`、`CSV`

**支持的文件大小：**
 - `PDF`、`DOCX`、`DOC`、`PPT`、`PPTX` 最大 200M
 - `TXT`、`MD` 最大10M
 - 其他 最大20M

                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 文件的 URL 地址。
文件存储于腾讯云的 URL 可保障更高的下载速度和稳定性，建议文件存储于腾讯云。 非腾讯云存储的 URL 速度和稳定性可能受一定影响。
参考：[腾讯云COS文档](https://cloud.tencent.com/document/product/436/7749)
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * 属性标签引用
                     */
                    std::vector<AttributeLabelReferItem> m_attributeLabel;
                    bool m_attributeLabelHasBeenSet;

                    /**
                     * 属性标签引用
                     */
                    std::vector<AttributeLabelReferItem> m_attributeLabels;
                    bool m_attributeLabelsHasBeenSet;

                    /**
                     * 分段信息
                     */
                    SegmentationConfig m_config;
                    bool m_configHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_UPLOADDOCREQUEST_H_
