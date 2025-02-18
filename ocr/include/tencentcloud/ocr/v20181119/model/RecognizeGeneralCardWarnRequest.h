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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEGENERALCARDWARNREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEGENERALCARDWARNREQUEST_H_

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
                * RecognizeGeneralCardWarn请求参数结构体
                */
                class RecognizeGeneralCardWarnRequest : public AbstractModel
                {
                public:
                    RecognizeGeneralCardWarnRequest();
                    ~RecognizeGeneralCardWarnRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图片链接
                     * @return ImageUrl 图片链接
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置图片链接
                     * @param _imageUrl 图片链接
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
                     * 获取图片base64
                     * @return ImageBase64 图片base64
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置图片base64
                     * @param _imageBase64 图片base64
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
                     * 获取卡证类型参数，包含以下范围：  
General：通用卡证
IDCard：身份证 
Passport：护照 
BankCard：银行卡
VehicleLicense：行驶证
DriverLicense：驾驶证
BizLicense：营业执照 
HmtResidentPermit：港澳台居住证
ForeignPermanentResident：外国人永居证
MainlandPermit：港澳台来往内地通行证
                     * @return CardType 卡证类型参数，包含以下范围：  
General：通用卡证
IDCard：身份证 
Passport：护照 
BankCard：银行卡
VehicleLicense：行驶证
DriverLicense：驾驶证
BizLicense：营业执照 
HmtResidentPermit：港澳台居住证
ForeignPermanentResident：外国人永居证
MainlandPermit：港澳台来往内地通行证
                     * 
                     */
                    std::string GetCardType() const;

                    /**
                     * 设置卡证类型参数，包含以下范围：  
General：通用卡证
IDCard：身份证 
Passport：护照 
BankCard：银行卡
VehicleLicense：行驶证
DriverLicense：驾驶证
BizLicense：营业执照 
HmtResidentPermit：港澳台居住证
ForeignPermanentResident：外国人永居证
MainlandPermit：港澳台来往内地通行证
                     * @param _cardType 卡证类型参数，包含以下范围：  
General：通用卡证
IDCard：身份证 
Passport：护照 
BankCard：银行卡
VehicleLicense：行驶证
DriverLicense：驾驶证
BizLicense：营业执照 
HmtResidentPermit：港澳台居住证
ForeignPermanentResident：外国人永居证
MainlandPermit：港澳台来往内地通行证
                     * 
                     */
                    void SetCardType(const std::string& _cardType);

                    /**
                     * 判断参数 CardType 是否已赋值
                     * @return CardType 是否已赋值
                     * 
                     */
                    bool CardTypeHasBeenSet() const;

                    /**
                     * 获取是否开启PDF识别，默认值为false，开启后可同时支持图片和PDF的识别。
                     * @return IsPdf 是否开启PDF识别，默认值为false，开启后可同时支持图片和PDF的识别。
                     * 
                     */
                    bool GetIsPdf() const;

                    /**
                     * 设置是否开启PDF识别，默认值为false，开启后可同时支持图片和PDF的识别。
                     * @param _isPdf 是否开启PDF识别，默认值为false，开启后可同时支持图片和PDF的识别。
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
                    uint64_t GetPdfPageNumber() const;

                    /**
                     * 设置需要识别的PDF页面的对应页码，仅支持PDF单页识别，当上传文件为PDF且IsPdf参数值为true时有效，默认值为1。
                     * @param _pdfPageNumber 需要识别的PDF页面的对应页码，仅支持PDF单页识别，当上传文件为PDF且IsPdf参数值为true时有效，默认值为1。
                     * 
                     */
                    void SetPdfPageNumber(const uint64_t& _pdfPageNumber);

                    /**
                     * 判断参数 PdfPageNumber 是否已赋值
                     * @return PdfPageNumber 是否已赋值
                     * 
                     */
                    bool PdfPageNumberHasBeenSet() const;

                private:

                    /**
                     * 图片链接
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 图片base64
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * 卡证类型参数，包含以下范围：  
General：通用卡证
IDCard：身份证 
Passport：护照 
BankCard：银行卡
VehicleLicense：行驶证
DriverLicense：驾驶证
BizLicense：营业执照 
HmtResidentPermit：港澳台居住证
ForeignPermanentResident：外国人永居证
MainlandPermit：港澳台来往内地通行证
                     */
                    std::string m_cardType;
                    bool m_cardTypeHasBeenSet;

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

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEGENERALCARDWARNREQUEST_H_
