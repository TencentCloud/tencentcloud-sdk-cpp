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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_CROPENHANCEIMAGEOCRREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_CROPENHANCEIMAGEOCRREQUEST_H_

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
                * CropEnhanceImageOCR请求参数结构体
                */
                class CropEnhanceImageOCRRequest : public AbstractModel
                {
                public:
                    CropEnhanceImageOCRRequest();
                    ~CropEnhanceImageOCRRequest() = default;
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
                     * 获取<p>需要识别的PDF页面的对应页码，仅支持PDF单页识别，默认值为1。</p>
                     * @return PdfPageNumber <p>需要识别的PDF页面的对应页码，仅支持PDF单页识别，默认值为1。</p>
                     * 
                     */
                    int64_t GetPdfPageNumber() const;

                    /**
                     * 设置<p>需要识别的PDF页面的对应页码，仅支持PDF单页识别，默认值为1。</p>
                     * @param _pdfPageNumber <p>需要识别的PDF页面的对应页码，仅支持PDF单页识别，默认值为1。</p>
                     * 
                     */
                    void SetPdfPageNumber(const int64_t& _pdfPageNumber);

                    /**
                     * 判断参数 PdfPageNumber 是否已赋值
                     * @return PdfPageNumber 是否已赋值
                     * 
                     */
                    bool PdfPageNumberHasBeenSet() const;

                    /**
                     * 获取<p>0表示关闭切边<br>1表示开启切边，默认为1</p>
                     * @return Crop <p>0表示关闭切边<br>1表示开启切边，默认为1</p>
                     * 
                     */
                    int64_t GetCrop() const;

                    /**
                     * 设置<p>0表示关闭切边<br>1表示开启切边，默认为1</p>
                     * @param _crop <p>0表示关闭切边<br>1表示开启切边，默认为1</p>
                     * 
                     */
                    void SetCrop(const int64_t& _crop);

                    /**
                     * 判断参数 Crop 是否已赋值
                     * @return Crop 是否已赋值
                     * 
                     */
                    bool CropHasBeenSet() const;

                    /**
                     * 获取<p>0表示关闭弯曲矫正<br>1表示开启弯曲矫正，默认为1</p>
                     * @return Deskew <p>0表示关闭弯曲矫正<br>1表示开启弯曲矫正，默认为1</p>
                     * 
                     */
                    int64_t GetDeskew() const;

                    /**
                     * 设置<p>0表示关闭弯曲矫正<br>1表示开启弯曲矫正，默认为1</p>
                     * @param _deskew <p>0表示关闭弯曲矫正<br>1表示开启弯曲矫正，默认为1</p>
                     * 
                     */
                    void SetDeskew(const int64_t& _deskew);

                    /**
                     * 判断参数 Deskew 是否已赋值
                     * @return Deskew 是否已赋值
                     * 
                     */
                    bool DeskewHasBeenSet() const;

                    /**
                     * 获取<p>0表示返回处理后的图和坐标，默认为0<br>1表示只返回坐标，不返回图片</p>
                     * @return OnlyPosition <p>0表示返回处理后的图和坐标，默认为0<br>1表示只返回坐标，不返回图片</p>
                     * 
                     */
                    int64_t GetOnlyPosition() const;

                    /**
                     * 设置<p>0表示返回处理后的图和坐标，默认为0<br>1表示只返回坐标，不返回图片</p>
                     * @param _onlyPosition <p>0表示返回处理后的图和坐标，默认为0<br>1表示只返回坐标，不返回图片</p>
                     * 
                     */
                    void SetOnlyPosition(const int64_t& _onlyPosition);

                    /**
                     * 判断参数 OnlyPosition 是否已赋值
                     * @return OnlyPosition 是否已赋值
                     * 
                     */
                    bool OnlyPositionHasBeenSet() const;

                    /**
                     * 获取<p>默认-1</p><ul><li>-1 不处理增强</li><li>1 增亮</li><li>2 增强并锐化</li><li>3 黑白</li><li>4 灰度</li><li>5 去阴影增强</li><li>6 点阵图</li></ul>
                     * @return EnhanceType <p>默认-1</p><ul><li>-1 不处理增强</li><li>1 增亮</li><li>2 增强并锐化</li><li>3 黑白</li><li>4 灰度</li><li>5 去阴影增强</li><li>6 点阵图</li></ul>
                     * 
                     */
                    int64_t GetEnhanceType() const;

                    /**
                     * 设置<p>默认-1</p><ul><li>-1 不处理增强</li><li>1 增亮</li><li>2 增强并锐化</li><li>3 黑白</li><li>4 灰度</li><li>5 去阴影增强</li><li>6 点阵图</li></ul>
                     * @param _enhanceType <p>默认-1</p><ul><li>-1 不处理增强</li><li>1 增亮</li><li>2 增强并锐化</li><li>3 黑白</li><li>4 灰度</li><li>5 去阴影增强</li><li>6 点阵图</li></ul>
                     * 
                     */
                    void SetEnhanceType(const int64_t& _enhanceType);

                    /**
                     * 判断参数 EnhanceType 是否已赋值
                     * @return EnhanceType 是否已赋值
                     * 
                     */
                    bool EnhanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>0表示不矫正图像方向，默认为0  1表示矫正图像方向</p>
                     * @return AdjustOrientation <p>0表示不矫正图像方向，默认为0  1表示矫正图像方向</p>
                     * 
                     */
                    int64_t GetAdjustOrientation() const;

                    /**
                     * 设置<p>0表示不矫正图像方向，默认为0  1表示矫正图像方向</p>
                     * @param _adjustOrientation <p>0表示不矫正图像方向，默认为0  1表示矫正图像方向</p>
                     * 
                     */
                    void SetAdjustOrientation(const int64_t& _adjustOrientation);

                    /**
                     * 判断参数 AdjustOrientation 是否已赋值
                     * @return AdjustOrientation 是否已赋值
                     * 
                     */
                    bool AdjustOrientationHasBeenSet() const;

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
                     * <p>需要识别的PDF页面的对应页码，仅支持PDF单页识别，默认值为1。</p>
                     */
                    int64_t m_pdfPageNumber;
                    bool m_pdfPageNumberHasBeenSet;

                    /**
                     * <p>0表示关闭切边<br>1表示开启切边，默认为1</p>
                     */
                    int64_t m_crop;
                    bool m_cropHasBeenSet;

                    /**
                     * <p>0表示关闭弯曲矫正<br>1表示开启弯曲矫正，默认为1</p>
                     */
                    int64_t m_deskew;
                    bool m_deskewHasBeenSet;

                    /**
                     * <p>0表示返回处理后的图和坐标，默认为0<br>1表示只返回坐标，不返回图片</p>
                     */
                    int64_t m_onlyPosition;
                    bool m_onlyPositionHasBeenSet;

                    /**
                     * <p>默认-1</p><ul><li>-1 不处理增强</li><li>1 增亮</li><li>2 增强并锐化</li><li>3 黑白</li><li>4 灰度</li><li>5 去阴影增强</li><li>6 点阵图</li></ul>
                     */
                    int64_t m_enhanceType;
                    bool m_enhanceTypeHasBeenSet;

                    /**
                     * <p>0表示不矫正图像方向，默认为0  1表示矫正图像方向</p>
                     */
                    int64_t m_adjustOrientation;
                    bool m_adjustOrientationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_CROPENHANCEIMAGEOCRREQUEST_H_
