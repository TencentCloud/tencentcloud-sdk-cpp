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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_GENERALACCURATEOCRREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_GENERALACCURATEOCRREQUEST_H_

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
                * GeneralAccurateOCR请求参数结构体
                */
                class GeneralAccurateOCRRequest : public AbstractModel
                {
                public:
                    GeneralAccurateOCRRequest();
                    ~GeneralAccurateOCRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>图片/PDF的 Base64 值。要求图片经Base64编码后不超过 10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。</p>
                     * @return ImageBase64 <p>图片/PDF的 Base64 值。要求图片经Base64编码后不超过 10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。</p>
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置<p>图片/PDF的 Base64 值。要求图片经Base64编码后不超过 10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。</p>
                     * @param _imageBase64 <p>图片/PDF的 Base64 值。要求图片经Base64编码后不超过 10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。</p>
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
                     * 获取<p>是否返回单字信息，默认值为false，注：仅ConfigID配置为OCR时支持。</p>
                     * @return IsWords <p>是否返回单字信息，默认值为false，注：仅ConfigID配置为OCR时支持。</p>
                     * 
                     */
                    bool GetIsWords() const;

                    /**
                     * 设置<p>是否返回单字信息，默认值为false，注：仅ConfigID配置为OCR时支持。</p>
                     * @param _isWords <p>是否返回单字信息，默认值为false，注：仅ConfigID配置为OCR时支持。</p>
                     * 
                     */
                    void SetIsWords(const bool& _isWords);

                    /**
                     * 判断参数 IsWords 是否已赋值
                     * @return IsWords 是否已赋值
                     * 
                     */
                    bool IsWordsHasBeenSet() const;

                    /**
                     * 获取<p>是否开启原图切图检测功能，开启后可提升“整图面积大，但单字符占比面积小”（例如：试卷）场景下的识别效果，默认关，注：仅ConfigID配置为OCR时支持。</p>
                     * @return EnableDetectSplit <p>是否开启原图切图检测功能，开启后可提升“整图面积大，但单字符占比面积小”（例如：试卷）场景下的识别效果，默认关，注：仅ConfigID配置为OCR时支持。</p>
                     * 
                     */
                    bool GetEnableDetectSplit() const;

                    /**
                     * 设置<p>是否开启原图切图检测功能，开启后可提升“整图面积大，但单字符占比面积小”（例如：试卷）场景下的识别效果，默认关，注：仅ConfigID配置为OCR时支持。</p>
                     * @param _enableDetectSplit <p>是否开启原图切图检测功能，开启后可提升“整图面积大，但单字符占比面积小”（例如：试卷）场景下的识别效果，默认关，注：仅ConfigID配置为OCR时支持。</p>
                     * 
                     */
                    void SetEnableDetectSplit(const bool& _enableDetectSplit);

                    /**
                     * 判断参数 EnableDetectSplit 是否已赋值
                     * @return EnableDetectSplit 是否已赋值
                     * 
                     */
                    bool EnableDetectSplitHasBeenSet() const;

                    /**
                     * 获取<p>是否开启PDF识别，默认值为false，开启后可同时支持图片和PDF的识别。</p>
                     * @return IsPdf <p>是否开启PDF识别，默认值为false，开启后可同时支持图片和PDF的识别。</p>
                     * 
                     */
                    bool GetIsPdf() const;

                    /**
                     * 设置<p>是否开启PDF识别，默认值为false，开启后可同时支持图片和PDF的识别。</p>
                     * @param _isPdf <p>是否开启PDF识别，默认值为false，开启后可同时支持图片和PDF的识别。</p>
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
                     * 获取<p>需要识别的PDF页面的对应页码，仅支持PDF单页识别，当上传文件为PDF且IsPdf参数值为true时有效，默认值为1。</p>
                     * @return PdfPageNumber <p>需要识别的PDF页面的对应页码，仅支持PDF单页识别，当上传文件为PDF且IsPdf参数值为true时有效，默认值为1。</p>
                     * 
                     */
                    uint64_t GetPdfPageNumber() const;

                    /**
                     * 设置<p>需要识别的PDF页面的对应页码，仅支持PDF单页识别，当上传文件为PDF且IsPdf参数值为true时有效，默认值为1。</p>
                     * @param _pdfPageNumber <p>需要识别的PDF页面的对应页码，仅支持PDF单页识别，当上传文件为PDF且IsPdf参数值为true时有效，默认值为1。</p>
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
                     * 获取<p>文本检测开关，默认为true。设置为false可直接进行单行识别，适用于仅包含正向单行文本的图片场景。</p>
                     * @return EnableDetectText <p>文本检测开关，默认为true。设置为false可直接进行单行识别，适用于仅包含正向单行文本的图片场景。</p>
                     * 
                     */
                    bool GetEnableDetectText() const;

                    /**
                     * 设置<p>文本检测开关，默认为true。设置为false可直接进行单行识别，适用于仅包含正向单行文本的图片场景。</p>
                     * @param _enableDetectText <p>文本检测开关，默认为true。设置为false可直接进行单行识别，适用于仅包含正向单行文本的图片场景。</p>
                     * 
                     */
                    void SetEnableDetectText(const bool& _enableDetectText);

                    /**
                     * 判断参数 EnableDetectText 是否已赋值
                     * @return EnableDetectText 是否已赋值
                     * 
                     */
                    bool EnableDetectTextHasBeenSet() const;

                    /**
                     * 获取<p>配置ID支持： OCR -- 通用场景 MulOCR--多语种场景，默认值为OCR</p>
                     * @return ConfigID <p>配置ID支持： OCR -- 通用场景 MulOCR--多语种场景，默认值为OCR</p>
                     * 
                     */
                    std::string GetConfigID() const;

                    /**
                     * 设置<p>配置ID支持： OCR -- 通用场景 MulOCR--多语种场景，默认值为OCR</p>
                     * @param _configID <p>配置ID支持： OCR -- 通用场景 MulOCR--多语种场景，默认值为OCR</p>
                     * 
                     */
                    void SetConfigID(const std::string& _configID);

                    /**
                     * 判断参数 ConfigID 是否已赋值
                     * @return ConfigID 是否已赋值
                     * 
                     */
                    bool ConfigIDHasBeenSet() const;

                    /**
                     * 获取<p>需要识别的文字类型，默认识别全部类型的文字。 0：自动识别全部类型文字 1：仅识别手写体文字 2：仅识别印刷体文字</p><p>当config id=OCR 且 iswords 是false 时 才生效</p>
                     * @return WordsType <p>需要识别的文字类型，默认识别全部类型的文字。 0：自动识别全部类型文字 1：仅识别手写体文字 2：仅识别印刷体文字</p><p>当config id=OCR 且 iswords 是false 时 才生效</p>
                     * 
                     */
                    std::string GetWordsType() const;

                    /**
                     * 设置<p>需要识别的文字类型，默认识别全部类型的文字。 0：自动识别全部类型文字 1：仅识别手写体文字 2：仅识别印刷体文字</p><p>当config id=OCR 且 iswords 是false 时 才生效</p>
                     * @param _wordsType <p>需要识别的文字类型，默认识别全部类型的文字。 0：自动识别全部类型文字 1：仅识别手写体文字 2：仅识别印刷体文字</p><p>当config id=OCR 且 iswords 是false 时 才生效</p>
                     * 
                     */
                    void SetWordsType(const std::string& _wordsType);

                    /**
                     * 判断参数 WordsType 是否已赋值
                     * @return WordsType 是否已赋值
                     * 
                     */
                    bool WordsTypeHasBeenSet() const;

                private:

                    /**
                     * <p>图片/PDF的 Base64 值。要求图片经Base64编码后不超过 10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。</p>
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * <p>图片/PDF的 Url 地址。要求图片经Base64编码后不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片下载时间不超过 3 秒。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。</p>
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * <p>是否返回单字信息，默认值为false，注：仅ConfigID配置为OCR时支持。</p>
                     */
                    bool m_isWords;
                    bool m_isWordsHasBeenSet;

                    /**
                     * <p>是否开启原图切图检测功能，开启后可提升“整图面积大，但单字符占比面积小”（例如：试卷）场景下的识别效果，默认关，注：仅ConfigID配置为OCR时支持。</p>
                     */
                    bool m_enableDetectSplit;
                    bool m_enableDetectSplitHasBeenSet;

                    /**
                     * <p>是否开启PDF识别，默认值为false，开启后可同时支持图片和PDF的识别。</p>
                     */
                    bool m_isPdf;
                    bool m_isPdfHasBeenSet;

                    /**
                     * <p>需要识别的PDF页面的对应页码，仅支持PDF单页识别，当上传文件为PDF且IsPdf参数值为true时有效，默认值为1。</p>
                     */
                    uint64_t m_pdfPageNumber;
                    bool m_pdfPageNumberHasBeenSet;

                    /**
                     * <p>文本检测开关，默认为true。设置为false可直接进行单行识别，适用于仅包含正向单行文本的图片场景。</p>
                     */
                    bool m_enableDetectText;
                    bool m_enableDetectTextHasBeenSet;

                    /**
                     * <p>配置ID支持： OCR -- 通用场景 MulOCR--多语种场景，默认值为OCR</p>
                     */
                    std::string m_configID;
                    bool m_configIDHasBeenSet;

                    /**
                     * <p>需要识别的文字类型，默认识别全部类型的文字。 0：自动识别全部类型文字 1：仅识别手写体文字 2：仅识别印刷体文字</p><p>当config id=OCR 且 iswords 是false 时 才生效</p>
                     */
                    std::string m_wordsType;
                    bool m_wordsTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_GENERALACCURATEOCRREQUEST_H_
