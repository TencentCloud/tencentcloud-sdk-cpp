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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZETABLEMULTIOCRREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZETABLEMULTIOCRREQUEST_H_

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
                * RecognizeTableMultiOCR请求参数结构体
                */
                class RecognizeTableMultiOCRRequest : public AbstractModel
                {
                public:
                    RecognizeTableMultiOCRRequest();
                    ~RecognizeTableMultiOCRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图片/PDF的 Base64 值。 要求图片/PDF经Base64编码后不超过 10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。 图片支持的像素范围：需介于20-10000px之间。 图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。 
                     * @return ImageBase64 图片/PDF的 Base64 值。 要求图片/PDF经Base64编码后不超过 10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。 图片支持的像素范围：需介于20-10000px之间。 图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。 
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置图片/PDF的 Base64 值。 要求图片/PDF经Base64编码后不超过 10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。 图片支持的像素范围：需介于20-10000px之间。 图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。 
                     * @param _imageBase64 图片/PDF的 Base64 值。 要求图片/PDF经Base64编码后不超过 10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。 图片支持的像素范围：需介于20-10000px之间。 图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。 
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
                     * 获取图片/PDF的 Url 地址。 要求图片/PDF经Base64编码后不超过 10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。 图片支持的像素范围：需介于20-10000px之间。 图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。 
                     * @return ImageUrl 图片/PDF的 Url 地址。 要求图片/PDF经Base64编码后不超过 10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。 图片支持的像素范围：需介于20-10000px之间。 图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。 
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置图片/PDF的 Url 地址。 要求图片/PDF经Base64编码后不超过 10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。 图片支持的像素范围：需介于20-10000px之间。 图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。 
                     * @param _imageUrl 图片/PDF的 Url 地址。 要求图片/PDF经Base64编码后不超过 10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。 图片支持的像素范围：需介于20-10000px之间。 图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。 
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
                     * 获取文档的起始页码。  当传入文件是PDF型时，用来指定识别的起始页码，识别的页码包含当前值。
                     * @return PdfStartPageNumber 文档的起始页码。  当传入文件是PDF型时，用来指定识别的起始页码，识别的页码包含当前值。
                     * 
                     */
                    int64_t GetPdfStartPageNumber() const;

                    /**
                     * 设置文档的起始页码。  当传入文件是PDF型时，用来指定识别的起始页码，识别的页码包含当前值。
                     * @param _pdfStartPageNumber 文档的起始页码。  当传入文件是PDF型时，用来指定识别的起始页码，识别的页码包含当前值。
                     * 
                     */
                    void SetPdfStartPageNumber(const int64_t& _pdfStartPageNumber);

                    /**
                     * 判断参数 PdfStartPageNumber 是否已赋值
                     * @return PdfStartPageNumber 是否已赋值
                     * 
                     */
                    bool PdfStartPageNumberHasBeenSet() const;

                    /**
                     * 获取文档的结束页码。 当传入文件是PDF类型时，用来指定识别的结束页码，识别的页码包含当前值。单次调用最多支持识别3页内容，即PdfEndPageNumber-PdfStartPageNumber需要不大于3。
                     * @return PdfEndPageNumber 文档的结束页码。 当传入文件是PDF类型时，用来指定识别的结束页码，识别的页码包含当前值。单次调用最多支持识别3页内容，即PdfEndPageNumber-PdfStartPageNumber需要不大于3。
                     * 
                     */
                    int64_t GetPdfEndPageNumber() const;

                    /**
                     * 设置文档的结束页码。 当传入文件是PDF类型时，用来指定识别的结束页码，识别的页码包含当前值。单次调用最多支持识别3页内容，即PdfEndPageNumber-PdfStartPageNumber需要不大于3。
                     * @param _pdfEndPageNumber 文档的结束页码。 当传入文件是PDF类型时，用来指定识别的结束页码，识别的页码包含当前值。单次调用最多支持识别3页内容，即PdfEndPageNumber-PdfStartPageNumber需要不大于3。
                     * 
                     */
                    void SetPdfEndPageNumber(const int64_t& _pdfEndPageNumber);

                    /**
                     * 判断参数 PdfEndPageNumber 是否已赋值
                     * @return PdfEndPageNumber 是否已赋值
                     * 
                     */
                    bool PdfEndPageNumberHasBeenSet() const;

                    /**
                     * 获取配置选项，支持配置输出数据格式。

* **Mdbase64** 返回 base64 编码的 markdown 格式文本。
* **Excelbase64** 返回 base64 编码的 excel 文件。
                     * @return DataFormat 配置选项，支持配置输出数据格式。

* **Mdbase64** 返回 base64 编码的 markdown 格式文本。
* **Excelbase64** 返回 base64 编码的 excel 文件。
                     * 
                     */
                    std::string GetDataFormat() const;

                    /**
                     * 设置配置选项，支持配置输出数据格式。

* **Mdbase64** 返回 base64 编码的 markdown 格式文本。
* **Excelbase64** 返回 base64 编码的 excel 文件。
                     * @param _dataFormat 配置选项，支持配置输出数据格式。

* **Mdbase64** 返回 base64 编码的 markdown 格式文本。
* **Excelbase64** 返回 base64 编码的 excel 文件。
                     * 
                     */
                    void SetDataFormat(const std::string& _dataFormat);

                    /**
                     * 判断参数 DataFormat 是否已赋值
                     * @return DataFormat 是否已赋值
                     * 
                     */
                    bool DataFormatHasBeenSet() const;

                private:

                    /**
                     * 图片/PDF的 Base64 值。 要求图片/PDF经Base64编码后不超过 10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。 图片支持的像素范围：需介于20-10000px之间。 图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。 
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * 图片/PDF的 Url 地址。 要求图片/PDF经Base64编码后不超过 10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。 图片支持的像素范围：需介于20-10000px之间。 图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。 
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 文档的起始页码。  当传入文件是PDF型时，用来指定识别的起始页码，识别的页码包含当前值。
                     */
                    int64_t m_pdfStartPageNumber;
                    bool m_pdfStartPageNumberHasBeenSet;

                    /**
                     * 文档的结束页码。 当传入文件是PDF类型时，用来指定识别的结束页码，识别的页码包含当前值。单次调用最多支持识别3页内容，即PdfEndPageNumber-PdfStartPageNumber需要不大于3。
                     */
                    int64_t m_pdfEndPageNumber;
                    bool m_pdfEndPageNumberHasBeenSet;

                    /**
                     * 配置选项，支持配置输出数据格式。

* **Mdbase64** 返回 base64 编码的 markdown 格式文本。
* **Excelbase64** 返回 base64 编码的 excel 文件。
                     */
                    std::string m_dataFormat;
                    bool m_dataFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZETABLEMULTIOCRREQUEST_H_
