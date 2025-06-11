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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_EXTRACTDOCBASICREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_EXTRACTDOCBASICREQUEST_H_

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
                * ExtractDocBasic请求参数结构体
                */
                class ExtractDocBasicRequest : public AbstractModel
                {
                public:
                    ExtractDocBasicRequest();
                    ~ExtractDocBasicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图片的 Url 地址。支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。支持的图片大小：所下载图片经 Base64 编码后不超过 10M。图片下载时间不超过 3 秒。支持的图片像素：需介于20-10000px之间。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * @return ImageUrl 图片的 Url 地址。支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。支持的图片大小：所下载图片经 Base64 编码后不超过 10M。图片下载时间不超过 3 秒。支持的图片像素：需介于20-10000px之间。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置图片的 Url 地址。支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。支持的图片大小：所下载图片经 Base64 编码后不超过 10M。图片下载时间不超过 3 秒。支持的图片像素：需介于20-10000px之间。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * @param _imageUrl 图片的 Url 地址。支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。支持的图片大小：所下载图片经 Base64 编码后不超过 10M。图片下载时间不超过 3 秒。支持的图片像素：需介于20-10000px之间。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。
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
                     * 获取图片的 Base64 值。支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。支持的图片大小：所下载图片经Base64编码后不超过 10M。图片下载时间不超过 3 秒。支持的图片像素：需介于20-10000px之间。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     * @return ImageBase64 图片的 Base64 值。支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。支持的图片大小：所下载图片经Base64编码后不超过 10M。图片下载时间不超过 3 秒。支持的图片像素：需介于20-10000px之间。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置图片的 Base64 值。支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。支持的图片大小：所下载图片经Base64编码后不超过 10M。图片下载时间不超过 3 秒。支持的图片像素：需介于20-10000px之间。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     * @param _imageBase64 图片的 Base64 值。支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。支持的图片大小：所下载图片经Base64编码后不超过 10M。图片下载时间不超过 3 秒。支持的图片像素：需介于20-10000px之间。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
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

                    /**
                     * 获取自定义结构化功能需返回的字段名称，例：
若客户只想返回姓名、性别两个字段的识别结果，则输入
ItemNames=["姓名","性别"]
                     * @return ItemNames 自定义结构化功能需返回的字段名称，例：
若客户只想返回姓名、性别两个字段的识别结果，则输入
ItemNames=["姓名","性别"]
                     * 
                     */
                    std::vector<std::string> GetItemNames() const;

                    /**
                     * 设置自定义结构化功能需返回的字段名称，例：
若客户只想返回姓名、性别两个字段的识别结果，则输入
ItemNames=["姓名","性别"]
                     * @param _itemNames 自定义结构化功能需返回的字段名称，例：
若客户只想返回姓名、性别两个字段的识别结果，则输入
ItemNames=["姓名","性别"]
                     * 
                     */
                    void SetItemNames(const std::vector<std::string>& _itemNames);

                    /**
                     * 判断参数 ItemNames 是否已赋值
                     * @return ItemNames 是否已赋值
                     * 
                     */
                    bool ItemNamesHasBeenSet() const;

                    /**
                     * 获取是否开启全文字段识别
                     * @return ReturnFullText 是否开启全文字段识别
                     * 
                     */
                    bool GetReturnFullText() const;

                    /**
                     * 设置是否开启全文字段识别
                     * @param _returnFullText 是否开启全文字段识别
                     * 
                     */
                    void SetReturnFullText(const bool& _returnFullText);

                    /**
                     * 判断参数 ReturnFullText 是否已赋值
                     * @return ReturnFullText 是否已赋值
                     * 
                     */
                    bool ReturnFullTextHasBeenSet() const;

                    /**
                     * 获取配置id支持：
General -- 通用场景
OnlineTaxiItinerary -- 网约车行程单
RideHailingDriverLicense -- 网约车驾驶证
RideHailingTransportLicense -- 网约车运输证
WayBill -- 快递运单
AccountOpeningPermit -- 银行开户许可证
InvoiceEng -- 海外发票模版
Coin --钱币识别模板
OnboardingDocuments -- 入职材料识别
PropertyOwnershipCertificate -- 房产证识别
RealEstateCertificate --不动产权证识别
HouseEncumbranceCertificate -- 他权证识别
CarInsurance -- 车险保单
MultiRealEstateCertificate -- 房产证、不动产证、产权证等材料合一模板
                     * @return ConfigId 配置id支持：
General -- 通用场景
OnlineTaxiItinerary -- 网约车行程单
RideHailingDriverLicense -- 网约车驾驶证
RideHailingTransportLicense -- 网约车运输证
WayBill -- 快递运单
AccountOpeningPermit -- 银行开户许可证
InvoiceEng -- 海外发票模版
Coin --钱币识别模板
OnboardingDocuments -- 入职材料识别
PropertyOwnershipCertificate -- 房产证识别
RealEstateCertificate --不动产权证识别
HouseEncumbranceCertificate -- 他权证识别
CarInsurance -- 车险保单
MultiRealEstateCertificate -- 房产证、不动产证、产权证等材料合一模板
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置配置id支持：
General -- 通用场景
OnlineTaxiItinerary -- 网约车行程单
RideHailingDriverLicense -- 网约车驾驶证
RideHailingTransportLicense -- 网约车运输证
WayBill -- 快递运单
AccountOpeningPermit -- 银行开户许可证
InvoiceEng -- 海外发票模版
Coin --钱币识别模板
OnboardingDocuments -- 入职材料识别
PropertyOwnershipCertificate -- 房产证识别
RealEstateCertificate --不动产权证识别
HouseEncumbranceCertificate -- 他权证识别
CarInsurance -- 车险保单
MultiRealEstateCertificate -- 房产证、不动产证、产权证等材料合一模板
                     * @param _configId 配置id支持：
General -- 通用场景
OnlineTaxiItinerary -- 网约车行程单
RideHailingDriverLicense -- 网约车驾驶证
RideHailingTransportLicense -- 网约车运输证
WayBill -- 快递运单
AccountOpeningPermit -- 银行开户许可证
InvoiceEng -- 海外发票模版
Coin --钱币识别模板
OnboardingDocuments -- 入职材料识别
PropertyOwnershipCertificate -- 房产证识别
RealEstateCertificate --不动产权证识别
HouseEncumbranceCertificate -- 他权证识别
CarInsurance -- 车险保单
MultiRealEstateCertificate -- 房产证、不动产证、产权证等材料合一模板
                     * 
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取是否打开印章识别
                     * @return EnableSealRecognize 是否打开印章识别
                     * 
                     */
                    bool GetEnableSealRecognize() const;

                    /**
                     * 设置是否打开印章识别
                     * @param _enableSealRecognize 是否打开印章识别
                     * 
                     */
                    void SetEnableSealRecognize(const bool& _enableSealRecognize);

                    /**
                     * 判断参数 EnableSealRecognize 是否已赋值
                     * @return EnableSealRecognize 是否已赋值
                     * 
                     */
                    bool EnableSealRecognizeHasBeenSet() const;

                private:

                    /**
                     * 图片的 Url 地址。支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。支持的图片大小：所下载图片经 Base64 编码后不超过 10M。图片下载时间不超过 3 秒。支持的图片像素：需介于20-10000px之间。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 图片的 Base64 值。支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。支持的图片大小：所下载图片经Base64编码后不超过 10M。图片下载时间不超过 3 秒。支持的图片像素：需介于20-10000px之间。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

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

                    /**
                     * 自定义结构化功能需返回的字段名称，例：
若客户只想返回姓名、性别两个字段的识别结果，则输入
ItemNames=["姓名","性别"]
                     */
                    std::vector<std::string> m_itemNames;
                    bool m_itemNamesHasBeenSet;

                    /**
                     * 是否开启全文字段识别
                     */
                    bool m_returnFullText;
                    bool m_returnFullTextHasBeenSet;

                    /**
                     * 配置id支持：
General -- 通用场景
OnlineTaxiItinerary -- 网约车行程单
RideHailingDriverLicense -- 网约车驾驶证
RideHailingTransportLicense -- 网约车运输证
WayBill -- 快递运单
AccountOpeningPermit -- 银行开户许可证
InvoiceEng -- 海外发票模版
Coin --钱币识别模板
OnboardingDocuments -- 入职材料识别
PropertyOwnershipCertificate -- 房产证识别
RealEstateCertificate --不动产权证识别
HouseEncumbranceCertificate -- 他权证识别
CarInsurance -- 车险保单
MultiRealEstateCertificate -- 房产证、不动产证、产权证等材料合一模板
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * 是否打开印章识别
                     */
                    bool m_enableSealRecognize;
                    bool m_enableSealRecognizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_EXTRACTDOCBASICREQUEST_H_
