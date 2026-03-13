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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZETABLEACCURATEOCRREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZETABLEACCURATEOCRREQUEST_H_

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
                * RecognizeTableAccurateOCR请求参数结构体
                */
                class RecognizeTableAccurateOCRRequest : public AbstractModel
                {
                public:
                    RecognizeTableAccurateOCRRequest();
                    ~RecognizeTableAccurateOCRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>图片/PDF的 Base64 值。要求图片/PDF经Base64编码后不超过 10M，分辨率建议600*800以上，且长宽比小于3（短边分辨率大于600, 长边分辨率小于等于短边分辨率的三倍）。支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。</p>
                     * @return ImageBase64 <p>图片/PDF的 Base64 值。要求图片/PDF经Base64编码后不超过 10M，分辨率建议600*800以上，且长宽比小于3（短边分辨率大于600, 长边分辨率小于等于短边分辨率的三倍）。支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。</p>
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置<p>图片/PDF的 Base64 值。要求图片/PDF经Base64编码后不超过 10M，分辨率建议600*800以上，且长宽比小于3（短边分辨率大于600, 长边分辨率小于等于短边分辨率的三倍）。支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。</p>
                     * @param _imageBase64 <p>图片/PDF的 Base64 值。要求图片/PDF经Base64编码后不超过 10M，分辨率建议600*800以上，且长宽比小于3（短边分辨率大于600, 长边分辨率小于等于短边分辨率的三倍）。支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。</p>
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
                     * 获取<p>图片/PDF的 Url 地址。要求图片/PDF经Base64编码后不超过 10M，分辨率建议600*800以上，且长宽比小于3（短边分辨率大于600, 长边分辨率小于等于短边分辨率的三倍）。支持PNG、JPG、JPEG、BMP、PDF格式。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。</p>
                     * @return ImageUrl <p>图片/PDF的 Url 地址。要求图片/PDF经Base64编码后不超过 10M，分辨率建议600*800以上，且长宽比小于3（短边分辨率大于600, 长边分辨率小于等于短边分辨率的三倍）。支持PNG、JPG、JPEG、BMP、PDF格式。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。</p>
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置<p>图片/PDF的 Url 地址。要求图片/PDF经Base64编码后不超过 10M，分辨率建议600*800以上，且长宽比小于3（短边分辨率大于600, 长边分辨率小于等于短边分辨率的三倍）。支持PNG、JPG、JPEG、BMP、PDF格式。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。</p>
                     * @param _imageUrl <p>图片/PDF的 Url 地址。要求图片/PDF经Base64编码后不超过 10M，分辨率建议600*800以上，且长宽比小于3（短边分辨率大于600, 长边分辨率小于等于短边分辨率的三倍）。支持PNG、JPG、JPEG、BMP、PDF格式。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。</p>
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
                     * 获取<p>需要识别的PDF页面的对应页码，仅支持PDF单页识别，当上传文件为PDF有效，默认值为1。</p>
                     * @return PdfPageNumber <p>需要识别的PDF页面的对应页码，仅支持PDF单页识别，当上传文件为PDF有效，默认值为1。</p>
                     * 
                     */
                    uint64_t GetPdfPageNumber() const;

                    /**
                     * 设置<p>需要识别的PDF页面的对应页码，仅支持PDF单页识别，当上传文件为PDF有效，默认值为1。</p>
                     * @param _pdfPageNumber <p>需要识别的PDF页面的对应页码，仅支持PDF单页识别，当上传文件为PDF有效，默认值为1。</p>
                     * 
                     */
                    void SetPdfPageNumber(const uint64_t& _pdfPageNumber);

                    /**
                     * 判断参数 PdfPageNumber 是否已赋值
                     * @return PdfPageNumber 是否已赋值
                     * 
                     */
                    bool PdfPageNumberHasBeenSet() const;

                    /**
                     * 获取<p>是否使用新模型</p><p>枚举值：</p><ul><li>false： 使用当前默认模型，耗时短且支持坐标返回</li><li>true： 使用新模型，复杂表格识别效果更好，耗时稍长</li></ul><p>默认值：false</p>
                     * @return UseNewModel <p>是否使用新模型</p><p>枚举值：</p><ul><li>false： 使用当前默认模型，耗时短且支持坐标返回</li><li>true： 使用新模型，复杂表格识别效果更好，耗时稍长</li></ul><p>默认值：false</p>
                     * 
                     */
                    bool GetUseNewModel() const;

                    /**
                     * 设置<p>是否使用新模型</p><p>枚举值：</p><ul><li>false： 使用当前默认模型，耗时短且支持坐标返回</li><li>true： 使用新模型，复杂表格识别效果更好，耗时稍长</li></ul><p>默认值：false</p>
                     * @param _useNewModel <p>是否使用新模型</p><p>枚举值：</p><ul><li>false： 使用当前默认模型，耗时短且支持坐标返回</li><li>true： 使用新模型，复杂表格识别效果更好，耗时稍长</li></ul><p>默认值：false</p>
                     * 
                     */
                    void SetUseNewModel(const bool& _useNewModel);

                    /**
                     * 判断参数 UseNewModel 是否已赋值
                     * @return UseNewModel 是否已赋值
                     * 
                     */
                    bool UseNewModelHasBeenSet() const;

                private:

                    /**
                     * <p>图片/PDF的 Base64 值。要求图片/PDF经Base64编码后不超过 10M，分辨率建议600*800以上，且长宽比小于3（短边分辨率大于600, 长边分辨率小于等于短边分辨率的三倍）。支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。</p>
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * <p>图片/PDF的 Url 地址。要求图片/PDF经Base64编码后不超过 10M，分辨率建议600*800以上，且长宽比小于3（短边分辨率大于600, 长边分辨率小于等于短边分辨率的三倍）。支持PNG、JPG、JPEG、BMP、PDF格式。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。</p>
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * <p>需要识别的PDF页面的对应页码，仅支持PDF单页识别，当上传文件为PDF有效，默认值为1。</p>
                     */
                    uint64_t m_pdfPageNumber;
                    bool m_pdfPageNumberHasBeenSet;

                    /**
                     * <p>是否使用新模型</p><p>枚举值：</p><ul><li>false： 使用当前默认模型，耗时短且支持坐标返回</li><li>true： 使用新模型，复杂表格识别效果更好，耗时稍长</li></ul><p>默认值：false</p>
                     */
                    bool m_useNewModel;
                    bool m_useNewModelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZETABLEACCURATEOCRREQUEST_H_
