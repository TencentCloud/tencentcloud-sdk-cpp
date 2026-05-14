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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_SUBMITEXTRACTDOCAGENTJOBREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_SUBMITEXTRACTDOCAGENTJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/ItemNames.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * SubmitExtractDocAgentJob请求参数结构体
                */
                class SubmitExtractDocAgentJobRequest : public AbstractModel
                {
                public:
                    SubmitExtractDocAgentJobRequest();
                    ~SubmitExtractDocAgentJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>图片/PDF的 Base64 值。要求Base64不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。</p>
                     * @return ImageBase64 <p>图片/PDF的 Base64 值。要求Base64不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。</p>
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置<p>图片/PDF的 Base64 值。要求Base64不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。</p>
                     * @param _imageBase64 <p>图片/PDF的 Base64 值。要求Base64不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。</p>
                     * 
                     */
                    void SetImageBase64(const std::string& _imageBase64);

                    /**
                     * 判断参数 ImageBase64 是否已赋值
                     * @return ImageBase64 是否已赋值
                     * 
                     */
                    bool ImageBase64HasBeenSet() const;

                    /**
                     * 获取<p>图片/PDF的 Url 地址。要求图片经Base64编码后不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片下载时间不超过 3 秒。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。</p>
                     * @return ImageUrl <p>图片/PDF的 Url 地址。要求图片经Base64编码后不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片下载时间不超过 3 秒。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。</p>
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置<p>图片/PDF的 Url 地址。要求图片经Base64编码后不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片下载时间不超过 3 秒。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。</p>
                     * @param _imageUrl <p>图片/PDF的 Url 地址。要求图片经Base64编码后不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片下载时间不超过 3 秒。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。</p>
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取<p>需要识别的PDF页面的对应页码，仅支持PDF单页识别，当上传文件为PDF且IsPdf参数值为true时有效，默认值为前5页。</p>
                     * @return PdfPageNumber <p>需要识别的PDF页面的对应页码，仅支持PDF单页识别，当上传文件为PDF且IsPdf参数值为true时有效，默认值为前5页。</p>
                     * @deprecated
                     */
                    int64_t GetPdfPageNumber() const;

                    /**
                     * 设置<p>需要识别的PDF页面的对应页码，仅支持PDF单页识别，当上传文件为PDF且IsPdf参数值为true时有效，默认值为前5页。</p>
                     * @param _pdfPageNumber <p>需要识别的PDF页面的对应页码，仅支持PDF单页识别，当上传文件为PDF且IsPdf参数值为true时有效，默认值为前5页。</p>
                     * @deprecated
                     */
                    void SetPdfPageNumber(const int64_t& _pdfPageNumber);

                    /**
                     * 判断参数 PdfPageNumber 是否已赋值
                     * @return PdfPageNumber 是否已赋值
                     * @deprecated
                     */
                    bool PdfPageNumberHasBeenSet() const;

                    /**
                     * 获取<p>自定义抽取需要的字段名称、字段类型、字段提示词。</p>
                     * @return ItemNames <p>自定义抽取需要的字段名称、字段类型、字段提示词。</p>
                     * 
                     */
                    std::vector<ItemNames> GetItemNames() const;

                    /**
                     * 设置<p>自定义抽取需要的字段名称、字段类型、字段提示词。</p>
                     * @param _itemNames <p>自定义抽取需要的字段名称、字段类型、字段提示词。</p>
                     * 
                     */
                    void SetItemNames(const std::vector<ItemNames>& _itemNames);

                    /**
                     * 判断参数 ItemNames 是否已赋值
                     * @return ItemNames 是否已赋值
                     * 
                     */
                    bool ItemNamesHasBeenSet() const;

                    /**
                     * 获取<p>是否需要返回坐标，默认false。</p>
                     * @return EnableCoord <p>是否需要返回坐标，默认false。</p>
                     * 
                     */
                    bool GetEnableCoord() const;

                    /**
                     * 设置<p>是否需要返回坐标，默认false。</p>
                     * @param _enableCoord <p>是否需要返回坐标，默认false。</p>
                     * 
                     */
                    void SetEnableCoord(const bool& _enableCoord);

                    /**
                     * 判断参数 EnableCoord 是否已赋值
                     * @return EnableCoord 是否已赋值
                     * 
                     */
                    bool EnableCoordHasBeenSet() const;

                    /**
                     * 获取<p>起始页</p>
                     * @return FileStartPageNumber <p>起始页</p>
                     * 
                     */
                    uint64_t GetFileStartPageNumber() const;

                    /**
                     * 设置<p>起始页</p>
                     * @param _fileStartPageNumber <p>起始页</p>
                     * 
                     */
                    void SetFileStartPageNumber(const uint64_t& _fileStartPageNumber);

                    /**
                     * 判断参数 FileStartPageNumber 是否已赋值
                     * @return FileStartPageNumber 是否已赋值
                     * 
                     */
                    bool FileStartPageNumberHasBeenSet() const;

                    /**
                     * 获取<p>结束页</p>
                     * @return FileEndPageNumber <p>结束页</p>
                     * 
                     */
                    uint64_t GetFileEndPageNumber() const;

                    /**
                     * 设置<p>结束页</p>
                     * @param _fileEndPageNumber <p>结束页</p>
                     * 
                     */
                    void SetFileEndPageNumber(const uint64_t& _fileEndPageNumber);

                    /**
                     * 判断参数 FileEndPageNumber 是否已赋值
                     * @return FileEndPageNumber 是否已赋值
                     * 
                     */
                    bool FileEndPageNumberHasBeenSet() const;

                    /**
                     * 获取<p>model_hunyuan:选择混元底座视觉大模型精调抽取任务  model_youtu：选择优图底座多模态大模型精调抽取任务</p>
                     * @return ModelConfig <p>model_hunyuan:选择混元底座视觉大模型精调抽取任务  model_youtu：选择优图底座多模态大模型精调抽取任务</p>
                     * 
                     */
                    std::string GetModelConfig() const;

                    /**
                     * 设置<p>model_hunyuan:选择混元底座视觉大模型精调抽取任务  model_youtu：选择优图底座多模态大模型精调抽取任务</p>
                     * @param _modelConfig <p>model_hunyuan:选择混元底座视觉大模型精调抽取任务  model_youtu：选择优图底座多模态大模型精调抽取任务</p>
                     * 
                     */
                    void SetModelConfig(const std::string& _modelConfig);

                    /**
                     * 判断参数 ModelConfig 是否已赋值
                     * @return ModelConfig 是否已赋值
                     * 
                     */
                    bool ModelConfigHasBeenSet() const;

                private:

                    /**
                     * <p>图片/PDF的 Base64 值。要求Base64不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。</p>
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * <p>图片/PDF的 Url 地址。要求图片经Base64编码后不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片下载时间不超过 3 秒。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。</p>
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * <p>需要识别的PDF页面的对应页码，仅支持PDF单页识别，当上传文件为PDF且IsPdf参数值为true时有效，默认值为前5页。</p>
                     */
                    int64_t m_pdfPageNumber;
                    bool m_pdfPageNumberHasBeenSet;

                    /**
                     * <p>自定义抽取需要的字段名称、字段类型、字段提示词。</p>
                     */
                    std::vector<ItemNames> m_itemNames;
                    bool m_itemNamesHasBeenSet;

                    /**
                     * <p>是否需要返回坐标，默认false。</p>
                     */
                    bool m_enableCoord;
                    bool m_enableCoordHasBeenSet;

                    /**
                     * <p>起始页</p>
                     */
                    uint64_t m_fileStartPageNumber;
                    bool m_fileStartPageNumberHasBeenSet;

                    /**
                     * <p>结束页</p>
                     */
                    uint64_t m_fileEndPageNumber;
                    bool m_fileEndPageNumberHasBeenSet;

                    /**
                     * <p>model_hunyuan:选择混元底座视觉大模型精调抽取任务  model_youtu：选择优图底座多模态大模型精调抽取任务</p>
                     */
                    std::string m_modelConfig;
                    bool m_modelConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_SUBMITEXTRACTDOCAGENTJOBREQUEST_H_
