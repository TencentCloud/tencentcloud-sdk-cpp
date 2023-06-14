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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEMEDICALINVOICEOCRREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEMEDICALINVOICEOCRREQUEST_H_

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
                * RecognizeMedicalInvoiceOCR请求参数结构体
                */
                class RecognizeMedicalInvoiceOCRRequest : public AbstractModel
                {
                public:
                    RecognizeMedicalInvoiceOCRRequest();
                    ~RecognizeMedicalInvoiceOCRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图片的Base64 值。
支持的文件格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载文件经Base64编码后不超过 7M。文件下载时间不超过 3 秒。
输入参数 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     * @return ImageBase64 图片的Base64 值。
支持的文件格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载文件经Base64编码后不超过 7M。文件下载时间不超过 3 秒。
输入参数 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置图片的Base64 值。
支持的文件格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载文件经Base64编码后不超过 7M。文件下载时间不超过 3 秒。
输入参数 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     * @param _imageBase64 图片的Base64 值。
支持的文件格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载文件经Base64编码后不超过 7M。文件下载时间不超过 3 秒。
输入参数 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
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
                     * 获取图片的Url 地址。
支持的文件格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载文件经 Base64 编码后不超过 7M。文件下载时间不超过 3 秒。
图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * @return ImageUrl 图片的Url 地址。
支持的文件格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载文件经 Base64 编码后不超过 7M。文件下载时间不超过 3 秒。
图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置图片的Url 地址。
支持的文件格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载文件经 Base64 编码后不超过 7M。文件下载时间不超过 3 秒。
图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * @param _imageUrl 图片的Url 地址。
支持的文件格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载文件经 Base64 编码后不超过 7M。文件下载时间不超过 3 秒。
图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
非腾讯云存储的 Url 速度和稳定性可能受一定影响。
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
                     * 获取是否需要返回识别出的文本行在原图上的四点坐标，默认不返回
                     * @return ReturnVertex 是否需要返回识别出的文本行在原图上的四点坐标，默认不返回
                     * 
                     */
                    bool GetReturnVertex() const;

                    /**
                     * 设置是否需要返回识别出的文本行在原图上的四点坐标，默认不返回
                     * @param _returnVertex 是否需要返回识别出的文本行在原图上的四点坐标，默认不返回
                     * 
                     */
                    void SetReturnVertex(const bool& _returnVertex);

                    /**
                     * 判断参数 ReturnVertex 是否已赋值
                     * @return ReturnVertex 是否已赋值
                     * 
                     */
                    bool ReturnVertexHasBeenSet() const;

                    /**
                     * 获取是否需要返回识别出的文本行在旋转纠正之后的图像中的四点坐标，默认不返回
                     * @return ReturnCoord 是否需要返回识别出的文本行在旋转纠正之后的图像中的四点坐标，默认不返回
                     * 
                     */
                    bool GetReturnCoord() const;

                    /**
                     * 设置是否需要返回识别出的文本行在旋转纠正之后的图像中的四点坐标，默认不返回
                     * @param _returnCoord 是否需要返回识别出的文本行在旋转纠正之后的图像中的四点坐标，默认不返回
                     * 
                     */
                    void SetReturnCoord(const bool& _returnCoord);

                    /**
                     * 判断参数 ReturnCoord 是否已赋值
                     * @return ReturnCoord 是否已赋值
                     * 
                     */
                    bool ReturnCoordHasBeenSet() const;

                    /**
                     * 获取是否开启PDF识别，默认值为true，开启后可同时支持图片和PDF的识别。
                     * @return IsPdf 是否开启PDF识别，默认值为true，开启后可同时支持图片和PDF的识别。
                     * 
                     */
                    bool GetIsPdf() const;

                    /**
                     * 设置是否开启PDF识别，默认值为true，开启后可同时支持图片和PDF的识别。
                     * @param _isPdf 是否开启PDF识别，默认值为true，开启后可同时支持图片和PDF的识别。
                     * 
                     */
                    void SetIsPdf(const bool& _isPdf);

                    /**
                     * 判断参数 IsPdf 是否已赋值
                     * @return IsPdf 是否已赋值
                     * 
                     */
                    bool IsPdfHasBeenSet() const;

                    /**
                     * 获取需要识别的PDF页面的对应页码，仅支持PDF单页识别，当上传文件为PDF且IsPdf参数值为true时有效，默认值为1。
                     * @return PdfPageNumber 需要识别的PDF页面的对应页码，仅支持PDF单页识别，当上传文件为PDF且IsPdf参数值为true时有效，默认值为1。
                     * 
                     */
                    int64_t GetPdfPageNumber() const;

                    /**
                     * 设置需要识别的PDF页面的对应页码，仅支持PDF单页识别，当上传文件为PDF且IsPdf参数值为true时有效，默认值为1。
                     * @param _pdfPageNumber 需要识别的PDF页面的对应页码，仅支持PDF单页识别，当上传文件为PDF且IsPdf参数值为true时有效，默认值为1。
                     * 
                     */
                    void SetPdfPageNumber(const int64_t& _pdfPageNumber);

                    /**
                     * 判断参数 PdfPageNumber 是否已赋值
                     * @return PdfPageNumber 是否已赋值
                     * 
                     */
                    bool PdfPageNumberHasBeenSet() const;

                private:

                    /**
                     * 图片的Base64 值。
支持的文件格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载文件经Base64编码后不超过 7M。文件下载时间不超过 3 秒。
输入参数 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * 图片的Url 地址。
支持的文件格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载文件经 Base64 编码后不超过 7M。文件下载时间不超过 3 秒。
图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 是否需要返回识别出的文本行在原图上的四点坐标，默认不返回
                     */
                    bool m_returnVertex;
                    bool m_returnVertexHasBeenSet;

                    /**
                     * 是否需要返回识别出的文本行在旋转纠正之后的图像中的四点坐标，默认不返回
                     */
                    bool m_returnCoord;
                    bool m_returnCoordHasBeenSet;

                    /**
                     * 是否开启PDF识别，默认值为true，开启后可同时支持图片和PDF的识别。
                     */
                    bool m_isPdf;
                    bool m_isPdfHasBeenSet;

                    /**
                     * 需要识别的PDF页面的对应页码，仅支持PDF单页识别，当上传文件为PDF且IsPdf参数值为true时有效，默认值为1。
                     */
                    int64_t m_pdfPageNumber;
                    bool m_pdfPageNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEMEDICALINVOICEOCRREQUEST_H_
