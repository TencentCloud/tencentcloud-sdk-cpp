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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEOCRREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEOCRREQUEST_H_

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
                * VatInvoiceOCR请求参数结构体
                */
                class VatInvoiceOCRRequest : public AbstractModel
                {
                public:
                    VatInvoiceOCRRequest();
                    ~VatInvoiceOCRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图片/PDF的 Base64 值。
支持的文件格式：PNG、JPG、JPEG、PDF，暂不支持 GIF 格式。
支持的图片/PDF大小：所下载文件经Base64编码后不超过 7M。文件下载时间不超过 3 秒。
支持的图片像素：需介于20-10000px之间。
输入参数 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     * @return ImageBase64 图片/PDF的 Base64 值。
支持的文件格式：PNG、JPG、JPEG、PDF，暂不支持 GIF 格式。
支持的图片/PDF大小：所下载文件经Base64编码后不超过 7M。文件下载时间不超过 3 秒。
支持的图片像素：需介于20-10000px之间。
输入参数 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置图片/PDF的 Base64 值。
支持的文件格式：PNG、JPG、JPEG、PDF，暂不支持 GIF 格式。
支持的图片/PDF大小：所下载文件经Base64编码后不超过 7M。文件下载时间不超过 3 秒。
支持的图片像素：需介于20-10000px之间。
输入参数 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     * @param ImageBase64 图片/PDF的 Base64 值。
支持的文件格式：PNG、JPG、JPEG、PDF，暂不支持 GIF 格式。
支持的图片/PDF大小：所下载文件经Base64编码后不超过 7M。文件下载时间不超过 3 秒。
支持的图片像素：需介于20-10000px之间。
输入参数 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     */
                    void SetImageBase64(const std::string& _imageBase64);

                    /**
                     * 判断参数 ImageBase64 是否已赋值
                     * @return ImageBase64 是否已赋值
                     */
                    bool ImageBase64HasBeenSet() const;

                    /**
                     * 获取图片/PDF的 Url 地址。
支持的文件格式：PNG、JPG、JPEG、PDF，暂不支持 GIF 格式。
支持的图片/PDF大小：所下载文件经 Base64 编码后不超过 7M。文件下载时间不超过 3 秒。
支持的图片像素：需介于20-10000px之间。
图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * @return ImageUrl 图片/PDF的 Url 地址。
支持的文件格式：PNG、JPG、JPEG、PDF，暂不支持 GIF 格式。
支持的图片/PDF大小：所下载文件经 Base64 编码后不超过 7M。文件下载时间不超过 3 秒。
支持的图片像素：需介于20-10000px之间。
图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置图片/PDF的 Url 地址。
支持的文件格式：PNG、JPG、JPEG、PDF，暂不支持 GIF 格式。
支持的图片/PDF大小：所下载文件经 Base64 编码后不超过 7M。文件下载时间不超过 3 秒。
支持的图片像素：需介于20-10000px之间。
图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * @param ImageUrl 图片/PDF的 Url 地址。
支持的文件格式：PNG、JPG、JPEG、PDF，暂不支持 GIF 格式。
支持的图片/PDF大小：所下载文件经 Base64 编码后不超过 7M。文件下载时间不超过 3 秒。
支持的图片像素：需介于20-10000px之间。
图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取是否开启PDF识别，默认值为false，开启后可同时支持图片和PDF的识别。
                     * @return IsPdf 是否开启PDF识别，默认值为false，开启后可同时支持图片和PDF的识别。
                     */
                    bool GetIsPdf() const;

                    /**
                     * 设置是否开启PDF识别，默认值为false，开启后可同时支持图片和PDF的识别。
                     * @param IsPdf 是否开启PDF识别，默认值为false，开启后可同时支持图片和PDF的识别。
                     */
                    void SetIsPdf(const bool& _isPdf);

                    /**
                     * 判断参数 IsPdf 是否已赋值
                     * @return IsPdf 是否已赋值
                     */
                    bool IsPdfHasBeenSet() const;

                    /**
                     * 获取需要识别的PDF页面的对应页码，仅支持PDF单页识别，当上传文件为PDF且IsPdf参数值为true时有效，默认值为1。
                     * @return PdfPageNumber 需要识别的PDF页面的对应页码，仅支持PDF单页识别，当上传文件为PDF且IsPdf参数值为true时有效，默认值为1。
                     */
                    uint64_t GetPdfPageNumber() const;

                    /**
                     * 设置需要识别的PDF页面的对应页码，仅支持PDF单页识别，当上传文件为PDF且IsPdf参数值为true时有效，默认值为1。
                     * @param PdfPageNumber 需要识别的PDF页面的对应页码，仅支持PDF单页识别，当上传文件为PDF且IsPdf参数值为true时有效，默认值为1。
                     */
                    void SetPdfPageNumber(const uint64_t& _pdfPageNumber);

                    /**
                     * 判断参数 PdfPageNumber 是否已赋值
                     * @return PdfPageNumber 是否已赋值
                     */
                    bool PdfPageNumberHasBeenSet() const;

                private:

                    /**
                     * 图片/PDF的 Base64 值。
支持的文件格式：PNG、JPG、JPEG、PDF，暂不支持 GIF 格式。
支持的图片/PDF大小：所下载文件经Base64编码后不超过 7M。文件下载时间不超过 3 秒。
支持的图片像素：需介于20-10000px之间。
输入参数 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * 图片/PDF的 Url 地址。
支持的文件格式：PNG、JPG、JPEG、PDF，暂不支持 GIF 格式。
支持的图片/PDF大小：所下载文件经 Base64 编码后不超过 7M。文件下载时间不超过 3 秒。
支持的图片像素：需介于20-10000px之间。
图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 是否开启PDF识别，默认值为false，开启后可同时支持图片和PDF的识别。
                     */
                    bool m_isPdf;
                    bool m_isPdfHasBeenSet;

                    /**
                     * 需要识别的PDF页面的对应页码，仅支持PDF单页识别，当上传文件为PDF且IsPdf参数值为true时有效，默认值为1。
                     */
                    uint64_t m_pdfPageNumber;
                    bool m_pdfPageNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEOCRREQUEST_H_
