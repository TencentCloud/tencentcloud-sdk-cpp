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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_EXTRACTDOCMULTIREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_EXTRACTDOCMULTIREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/ConfigAdvanced.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * ExtractDocMulti请求参数结构体
                */
                class ExtractDocMultiRequest : public AbstractModel
                {
                public:
                    ExtractDocMultiRequest();
                    ~ExtractDocMultiRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图片的 Url 地址。支持的图片格式：PNG、JPG、JPEG，WORD，EXCEL，暂不支持 GIF 格式。支持的图片大小：所下载图片经 Base64 编码后不超过 7M。图片下载时间不超过 3 秒。支持的图片像素：需介于20-10000px之间。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * @return ImageUrl 图片的 Url 地址。支持的图片格式：PNG、JPG、JPEG，WORD，EXCEL，暂不支持 GIF 格式。支持的图片大小：所下载图片经 Base64 编码后不超过 7M。图片下载时间不超过 3 秒。支持的图片像素：需介于20-10000px之间。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置图片的 Url 地址。支持的图片格式：PNG、JPG、JPEG，WORD，EXCEL，暂不支持 GIF 格式。支持的图片大小：所下载图片经 Base64 编码后不超过 7M。图片下载时间不超过 3 秒。支持的图片像素：需介于20-10000px之间。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * @param _imageUrl 图片的 Url 地址。支持的图片格式：PNG、JPG、JPEG，WORD，EXCEL，暂不支持 GIF 格式。支持的图片大小：所下载图片经 Base64 编码后不超过 7M。图片下载时间不超过 3 秒。支持的图片像素：需介于20-10000px之间。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。
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
                     * 获取图片的 Base64 值。支持的图片格式：PNG、JPG、JPEG，WORD，EXCEL，暂不支持 GIF 格式。支持的图片大小：所下载图片经Base64编码后不超过 7M。图片下载时间不超过 3 秒。支持的图片像素：需介于20-10000px之间。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     * @return ImageBase64 图片的 Base64 值。支持的图片格式：PNG、JPG、JPEG，WORD，EXCEL，暂不支持 GIF 格式。支持的图片大小：所下载图片经Base64编码后不超过 7M。图片下载时间不超过 3 秒。支持的图片像素：需介于20-10000px之间。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置图片的 Base64 值。支持的图片格式：PNG、JPG、JPEG，WORD，EXCEL，暂不支持 GIF 格式。支持的图片大小：所下载图片经Base64编码后不超过 7M。图片下载时间不超过 3 秒。支持的图片像素：需介于20-10000px之间。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     * @param _imageBase64 图片的 Base64 值。支持的图片格式：PNG、JPG、JPEG，WORD，EXCEL，暂不支持 GIF 格式。支持的图片大小：所下载图片经Base64编码后不超过 7M。图片下载时间不超过 3 秒。支持的图片像素：需介于20-10000px之间。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
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
                     * 获取需要识别的PDF页面的对应页码，仅支持PDF单页识别，当上传文件为PDF且IsPdf参数值为true时有效，默认值为前3页。
                     * @return PdfPageNumber 需要识别的PDF页面的对应页码，仅支持PDF单页识别，当上传文件为PDF且IsPdf参数值为true时有效，默认值为前3页。
                     * 
                     */
                    uint64_t GetPdfPageNumber() const;

                    /**
                     * 设置需要识别的PDF页面的对应页码，仅支持PDF单页识别，当上传文件为PDF且IsPdf参数值为true时有效，默认值为前3页。
                     * @param _pdfPageNumber 需要识别的PDF页面的对应页码，仅支持PDF单页识别，当上传文件为PDF且IsPdf参数值为true时有效，默认值为前3页。
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
                     * 获取自定义结构化功能需返回的字段名称，例：若客户想新增返回姓名、性别两个字段的识别结果，则输入ItemNames=["姓名","性别"]
                     * @return ItemNames 自定义结构化功能需返回的字段名称，例：若客户想新增返回姓名、性别两个字段的识别结果，则输入ItemNames=["姓名","性别"]
                     * 
                     */
                    std::vector<std::string> GetItemNames() const;

                    /**
                     * 设置自定义结构化功能需返回的字段名称，例：若客户想新增返回姓名、性别两个字段的识别结果，则输入ItemNames=["姓名","性别"]
                     * @param _itemNames 自定义结构化功能需返回的字段名称，例：若客户想新增返回姓名、性别两个字段的识别结果，则输入ItemNames=["姓名","性别"]
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
                     * 获取true：仅输出自定义字段
flase：输出默认字段+自定义字段
默认true
                     * @return ItemNamesShowMode true：仅输出自定义字段
flase：输出默认字段+自定义字段
默认true
                     * 
                     */
                    bool GetItemNamesShowMode() const;

                    /**
                     * 设置true：仅输出自定义字段
flase：输出默认字段+自定义字段
默认true
                     * @param _itemNamesShowMode true：仅输出自定义字段
flase：输出默认字段+自定义字段
默认true
                     * 
                     */
                    void SetItemNamesShowMode(const bool& _itemNamesShowMode);

                    /**
                     * 判断参数 ItemNamesShowMode 是否已赋值
                     * @return ItemNamesShowMode 是否已赋值
                     * 
                     */
                    bool ItemNamesShowModeHasBeenSet() const;

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
InvoiceEng -- 国际invoice模版 
WayBillEng --海运订单模板
CustomsDeclaration -- 进出口报关单
WeightNote -- 磅单
MedicalMeter -- 血压仪表识别
BillOfLading -- 海运提单
EntrustmentBook -- 海运托书
Statement -- 对账单识别模板
BookingConfirmation -- 配舱通知书识别模板
AirWayBill -- 航空运单识别模板
Table -- 表格模版
SteelLabel -- 实物标签识别模板
CarInsurance -- 车辆保险单识别模板
                     * @return ConfigId 配置id支持：
General -- 通用场景 
InvoiceEng -- 国际invoice模版 
WayBillEng --海运订单模板
CustomsDeclaration -- 进出口报关单
WeightNote -- 磅单
MedicalMeter -- 血压仪表识别
BillOfLading -- 海运提单
EntrustmentBook -- 海运托书
Statement -- 对账单识别模板
BookingConfirmation -- 配舱通知书识别模板
AirWayBill -- 航空运单识别模板
Table -- 表格模版
SteelLabel -- 实物标签识别模板
CarInsurance -- 车辆保险单识别模板
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置配置id支持：
General -- 通用场景 
InvoiceEng -- 国际invoice模版 
WayBillEng --海运订单模板
CustomsDeclaration -- 进出口报关单
WeightNote -- 磅单
MedicalMeter -- 血压仪表识别
BillOfLading -- 海运提单
EntrustmentBook -- 海运托书
Statement -- 对账单识别模板
BookingConfirmation -- 配舱通知书识别模板
AirWayBill -- 航空运单识别模板
Table -- 表格模版
SteelLabel -- 实物标签识别模板
CarInsurance -- 车辆保险单识别模板
                     * @param _configId 配置id支持：
General -- 通用场景 
InvoiceEng -- 国际invoice模版 
WayBillEng --海运订单模板
CustomsDeclaration -- 进出口报关单
WeightNote -- 磅单
MedicalMeter -- 血压仪表识别
BillOfLading -- 海运提单
EntrustmentBook -- 海运托书
Statement -- 对账单识别模板
BookingConfirmation -- 配舱通知书识别模板
AirWayBill -- 航空运单识别模板
Table -- 表格模版
SteelLabel -- 实物标签识别模板
CarInsurance -- 车辆保险单识别模板
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
                     * 获取是否开启全文字段坐标值的识别
                     * @return EnableCoord 是否开启全文字段坐标值的识别
                     * 
                     */
                    bool GetEnableCoord() const;

                    /**
                     * 设置是否开启全文字段坐标值的识别
                     * @param _enableCoord 是否开启全文字段坐标值的识别
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
                     * 获取是否开启父子key识别，默认是
                     * @return OutputParentKey 是否开启父子key识别，默认是
                     * 
                     */
                    bool GetOutputParentKey() const;

                    /**
                     * 设置是否开启父子key识别，默认是
                     * @param _outputParentKey 是否开启父子key识别，默认是
                     * 
                     */
                    void SetOutputParentKey(const bool& _outputParentKey);

                    /**
                     * 判断参数 OutputParentKey 是否已赋值
                     * @return OutputParentKey 是否已赋值
                     * 
                     */
                    bool OutputParentKeyHasBeenSet() const;

                    /**
                     * 获取模版的单个属性配置
                     * @return ConfigAdvanced 模版的单个属性配置
                     * 
                     */
                    ConfigAdvanced GetConfigAdvanced() const;

                    /**
                     * 设置模版的单个属性配置
                     * @param _configAdvanced 模版的单个属性配置
                     * 
                     */
                    void SetConfigAdvanced(const ConfigAdvanced& _configAdvanced);

                    /**
                     * 判断参数 ConfigAdvanced 是否已赋值
                     * @return ConfigAdvanced 是否已赋值
                     * 
                     */
                    bool ConfigAdvancedHasBeenSet() const;

                private:

                    /**
                     * 图片的 Url 地址。支持的图片格式：PNG、JPG、JPEG，WORD，EXCEL，暂不支持 GIF 格式。支持的图片大小：所下载图片经 Base64 编码后不超过 7M。图片下载时间不超过 3 秒。支持的图片像素：需介于20-10000px之间。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 图片的 Base64 值。支持的图片格式：PNG、JPG、JPEG，WORD，EXCEL，暂不支持 GIF 格式。支持的图片大小：所下载图片经Base64编码后不超过 7M。图片下载时间不超过 3 秒。支持的图片像素：需介于20-10000px之间。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * 需要识别的PDF页面的对应页码，仅支持PDF单页识别，当上传文件为PDF且IsPdf参数值为true时有效，默认值为前3页。
                     */
                    uint64_t m_pdfPageNumber;
                    bool m_pdfPageNumberHasBeenSet;

                    /**
                     * 自定义结构化功能需返回的字段名称，例：若客户想新增返回姓名、性别两个字段的识别结果，则输入ItemNames=["姓名","性别"]
                     */
                    std::vector<std::string> m_itemNames;
                    bool m_itemNamesHasBeenSet;

                    /**
                     * true：仅输出自定义字段
flase：输出默认字段+自定义字段
默认true
                     */
                    bool m_itemNamesShowMode;
                    bool m_itemNamesShowModeHasBeenSet;

                    /**
                     * 是否开启全文字段识别
                     */
                    bool m_returnFullText;
                    bool m_returnFullTextHasBeenSet;

                    /**
                     * 配置id支持：
General -- 通用场景 
InvoiceEng -- 国际invoice模版 
WayBillEng --海运订单模板
CustomsDeclaration -- 进出口报关单
WeightNote -- 磅单
MedicalMeter -- 血压仪表识别
BillOfLading -- 海运提单
EntrustmentBook -- 海运托书
Statement -- 对账单识别模板
BookingConfirmation -- 配舱通知书识别模板
AirWayBill -- 航空运单识别模板
Table -- 表格模版
SteelLabel -- 实物标签识别模板
CarInsurance -- 车辆保险单识别模板
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * 是否开启全文字段坐标值的识别
                     */
                    bool m_enableCoord;
                    bool m_enableCoordHasBeenSet;

                    /**
                     * 是否开启父子key识别，默认是
                     */
                    bool m_outputParentKey;
                    bool m_outputParentKeyHasBeenSet;

                    /**
                     * 模版的单个属性配置
                     */
                    ConfigAdvanced m_configAdvanced;
                    bool m_configAdvancedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_EXTRACTDOCMULTIREQUEST_H_
