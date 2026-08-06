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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_EXTRACTDOCMULTIREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_EXTRACTDOCMULTIREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/ConfigAdvanced.h>
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
                * ExtractDocMulti请求参数结构体
                */
                class ExtractDocMultiRequest : public AbstractModel
                {
                public:
                    ExtractDocMultiRequest();
                    ~ExtractDocMultiRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>需要识别的PDF页面的对应页码，仅支持PDF单页识别。</p>
                     * @return PdfPageNumber <p>需要识别的PDF页面的对应页码，仅支持PDF单页识别。</p>
                     * 
                     */
                    uint64_t GetPdfPageNumber() const;

                    /**
                     * 设置<p>需要识别的PDF页面的对应页码，仅支持PDF单页识别。</p>
                     * @param _pdfPageNumber <p>需要识别的PDF页面的对应页码，仅支持PDF单页识别。</p>
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
                     * 获取<p>自定义结构化功能需返回的字段名称，例：若客户想新增返回姓名、性别两个字段的识别结果，则输入ItemNames=[&quot;姓名&quot;,&quot;性别&quot;]</p>
                     * @return ItemNames <p>自定义结构化功能需返回的字段名称，例：若客户想新增返回姓名、性别两个字段的识别结果，则输入ItemNames=[&quot;姓名&quot;,&quot;性别&quot;]</p>
                     * 
                     */
                    std::vector<std::string> GetItemNames() const;

                    /**
                     * 设置<p>自定义结构化功能需返回的字段名称，例：若客户想新增返回姓名、性别两个字段的识别结果，则输入ItemNames=[&quot;姓名&quot;,&quot;性别&quot;]</p>
                     * @param _itemNames <p>自定义结构化功能需返回的字段名称，例：若客户想新增返回姓名、性别两个字段的识别结果，则输入ItemNames=[&quot;姓名&quot;,&quot;性别&quot;]</p>
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
                     * 获取<p>true：仅输出自定义字段<br>false：输出默认字段+自定义字段<br>默认true</p>
                     * @return ItemNamesShowMode <p>true：仅输出自定义字段<br>false：输出默认字段+自定义字段<br>默认true</p>
                     * 
                     */
                    bool GetItemNamesShowMode() const;

                    /**
                     * 设置<p>true：仅输出自定义字段<br>false：输出默认字段+自定义字段<br>默认true</p>
                     * @param _itemNamesShowMode <p>true：仅输出自定义字段<br>false：输出默认字段+自定义字段<br>默认true</p>
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
                     * 获取<p>是否开启全文字段识别</p>
                     * @return ReturnFullText <p>是否开启全文字段识别</p>
                     * 
                     */
                    bool GetReturnFullText() const;

                    /**
                     * 设置<p>是否开启全文字段识别</p>
                     * @param _returnFullText <p>是否开启全文字段识别</p>
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
                     * 获取<p>配置id支持：<br>General -- 通用场景<br>InvoiceEng -- 国际invoice模板<br>WayBillEng --海运订单模板<br>CustomsDeclaration -- 进出口报关单<br>WeightNote -- 磅单<br>MedicalMeter -- 血压仪表识别<br>BillOfLading -- 海运提单<br>EntrustmentBook -- 海运托书<br>Statement -- 对账单识别模板<br>BookingConfirmation -- 配舱通知书识别模板<br>AirWayBill -- 航空运单识别模板<br>Table -- 表格模板<br>SteelLabel -- 实物标签识别模板<br>CarInsurance -- 车辆保险单识别模板<br>MultiRealEstateCertificate -- 房产材料识别模板<br>MultiRealEstateMaterial -- 房产证明识别模板<br>HongKongUtilityBill -- 中国香港水电煤单识别模板<br>OverseasCheques -- 海外支票<br>RegistrationCertificate -- 备案证<br>u200bGridPhoto -- 电网系统照片<br>u200bSignaturePage -- 签署页<br>u200bSalesDeliveryNote -- 销售发货单</p>
                     * @return ConfigId <p>配置id支持：<br>General -- 通用场景<br>InvoiceEng -- 国际invoice模板<br>WayBillEng --海运订单模板<br>CustomsDeclaration -- 进出口报关单<br>WeightNote -- 磅单<br>MedicalMeter -- 血压仪表识别<br>BillOfLading -- 海运提单<br>EntrustmentBook -- 海运托书<br>Statement -- 对账单识别模板<br>BookingConfirmation -- 配舱通知书识别模板<br>AirWayBill -- 航空运单识别模板<br>Table -- 表格模板<br>SteelLabel -- 实物标签识别模板<br>CarInsurance -- 车辆保险单识别模板<br>MultiRealEstateCertificate -- 房产材料识别模板<br>MultiRealEstateMaterial -- 房产证明识别模板<br>HongKongUtilityBill -- 中国香港水电煤单识别模板<br>OverseasCheques -- 海外支票<br>RegistrationCertificate -- 备案证<br>u200bGridPhoto -- 电网系统照片<br>u200bSignaturePage -- 签署页<br>u200bSalesDeliveryNote -- 销售发货单</p>
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置<p>配置id支持：<br>General -- 通用场景<br>InvoiceEng -- 国际invoice模板<br>WayBillEng --海运订单模板<br>CustomsDeclaration -- 进出口报关单<br>WeightNote -- 磅单<br>MedicalMeter -- 血压仪表识别<br>BillOfLading -- 海运提单<br>EntrustmentBook -- 海运托书<br>Statement -- 对账单识别模板<br>BookingConfirmation -- 配舱通知书识别模板<br>AirWayBill -- 航空运单识别模板<br>Table -- 表格模板<br>SteelLabel -- 实物标签识别模板<br>CarInsurance -- 车辆保险单识别模板<br>MultiRealEstateCertificate -- 房产材料识别模板<br>MultiRealEstateMaterial -- 房产证明识别模板<br>HongKongUtilityBill -- 中国香港水电煤单识别模板<br>OverseasCheques -- 海外支票<br>RegistrationCertificate -- 备案证<br>u200bGridPhoto -- 电网系统照片<br>u200bSignaturePage -- 签署页<br>u200bSalesDeliveryNote -- 销售发货单</p>
                     * @param _configId <p>配置id支持：<br>General -- 通用场景<br>InvoiceEng -- 国际invoice模板<br>WayBillEng --海运订单模板<br>CustomsDeclaration -- 进出口报关单<br>WeightNote -- 磅单<br>MedicalMeter -- 血压仪表识别<br>BillOfLading -- 海运提单<br>EntrustmentBook -- 海运托书<br>Statement -- 对账单识别模板<br>BookingConfirmation -- 配舱通知书识别模板<br>AirWayBill -- 航空运单识别模板<br>Table -- 表格模板<br>SteelLabel -- 实物标签识别模板<br>CarInsurance -- 车辆保险单识别模板<br>MultiRealEstateCertificate -- 房产材料识别模板<br>MultiRealEstateMaterial -- 房产证明识别模板<br>HongKongUtilityBill -- 中国香港水电煤单识别模板<br>OverseasCheques -- 海外支票<br>RegistrationCertificate -- 备案证<br>u200bGridPhoto -- 电网系统照片<br>u200bSignaturePage -- 签署页<br>u200bSalesDeliveryNote -- 销售发货单</p>
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
                     * 获取<p>是否开启全文字段坐标值的识别</p>
                     * @return EnableCoord <p>是否开启全文字段坐标值的识别</p>
                     * 
                     */
                    bool GetEnableCoord() const;

                    /**
                     * 设置<p>是否开启全文字段坐标值的识别</p>
                     * @param _enableCoord <p>是否开启全文字段坐标值的识别</p>
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
                     * 获取<p>是否开启父子key识别，默认是</p>
                     * @return OutputParentKey <p>是否开启父子key识别，默认是</p>
                     * 
                     */
                    bool GetOutputParentKey() const;

                    /**
                     * 设置<p>是否开启父子key识别，默认是</p>
                     * @param _outputParentKey <p>是否开启父子key识别，默认是</p>
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
                     * 获取<p>模板的单个属性配置</p>
                     * @return ConfigAdvanced <p>模板的单个属性配置</p>
                     * 
                     */
                    ConfigAdvanced GetConfigAdvanced() const;

                    /**
                     * 设置<p>模板的单个属性配置</p>
                     * @param _configAdvanced <p>模板的单个属性配置</p>
                     * 
                     */
                    void SetConfigAdvanced(const ConfigAdvanced& _configAdvanced);

                    /**
                     * 判断参数 ConfigAdvanced 是否已赋值
                     * @return ConfigAdvanced 是否已赋值
                     * 
                     */
                    bool ConfigAdvancedHasBeenSet() const;

                    /**
                     * 获取<p>cn时，添加的key为中文<br>en时，添加的key为英语</p>
                     * @return OutputLanguage <p>cn时，添加的key为中文<br>en时，添加的key为英语</p>
                     * 
                     */
                    std::string GetOutputLanguage() const;

                    /**
                     * 设置<p>cn时，添加的key为中文<br>en时，添加的key为英语</p>
                     * @param _outputLanguage <p>cn时，添加的key为中文<br>en时，添加的key为英语</p>
                     * 
                     */
                    void SetOutputLanguage(const std::string& _outputLanguage);

                    /**
                     * 判断参数 OutputLanguage 是否已赋值
                     * @return OutputLanguage 是否已赋值
                     * 
                     */
                    bool OutputLanguageHasBeenSet() const;

                    /**
                     * 获取<p>自定义抽取需要的字段名称、字段类型、字段提示词</p>
                     * @return NewItemNames <p>自定义抽取需要的字段名称、字段类型、字段提示词</p>
                     * 
                     */
                    std::vector<ItemNames> GetNewItemNames() const;

                    /**
                     * 设置<p>自定义抽取需要的字段名称、字段类型、字段提示词</p>
                     * @param _newItemNames <p>自定义抽取需要的字段名称、字段类型、字段提示词</p>
                     * 
                     */
                    void SetNewItemNames(const std::vector<ItemNames>& _newItemNames);

                    /**
                     * 判断参数 NewItemNames 是否已赋值
                     * @return NewItemNames 是否已赋值
                     * 
                     */
                    bool NewItemNamesHasBeenSet() const;

                    /**
                     * 获取<p>文档抽取（多模态）识别服务所用的算法模型版本<br>-目前入参支持“1.0”和“2.0“两个输入。</p><ul><li>2026年7月20日开始，默认为“2.0”，之前使用过本接口的账号若未填写本参数默认为“1.0”。</li><li>2026年7月20日后开通服务的账号仅支持输入“2.0”。</li><li>不同算法模型版本对应的文档抽取识别算法不同，新版本的整体效果会优于旧版本，建议使用“2.0”版本。<br>示例值：2.0</li></ul>
                     * @return MultiModelVersion <p>文档抽取（多模态）识别服务所用的算法模型版本<br>-目前入参支持“1.0”和“2.0“两个输入。</p><ul><li>2026年7月20日开始，默认为“2.0”，之前使用过本接口的账号若未填写本参数默认为“1.0”。</li><li>2026年7月20日后开通服务的账号仅支持输入“2.0”。</li><li>不同算法模型版本对应的文档抽取识别算法不同，新版本的整体效果会优于旧版本，建议使用“2.0”版本。<br>示例值：2.0</li></ul>
                     * 
                     */
                    std::string GetMultiModelVersion() const;

                    /**
                     * 设置<p>文档抽取（多模态）识别服务所用的算法模型版本<br>-目前入参支持“1.0”和“2.0“两个输入。</p><ul><li>2026年7月20日开始，默认为“2.0”，之前使用过本接口的账号若未填写本参数默认为“1.0”。</li><li>2026年7月20日后开通服务的账号仅支持输入“2.0”。</li><li>不同算法模型版本对应的文档抽取识别算法不同，新版本的整体效果会优于旧版本，建议使用“2.0”版本。<br>示例值：2.0</li></ul>
                     * @param _multiModelVersion <p>文档抽取（多模态）识别服务所用的算法模型版本<br>-目前入参支持“1.0”和“2.0“两个输入。</p><ul><li>2026年7月20日开始，默认为“2.0”，之前使用过本接口的账号若未填写本参数默认为“1.0”。</li><li>2026年7月20日后开通服务的账号仅支持输入“2.0”。</li><li>不同算法模型版本对应的文档抽取识别算法不同，新版本的整体效果会优于旧版本，建议使用“2.0”版本。<br>示例值：2.0</li></ul>
                     * 
                     */
                    void SetMultiModelVersion(const std::string& _multiModelVersion);

                    /**
                     * 判断参数 MultiModelVersion 是否已赋值
                     * @return MultiModelVersion 是否已赋值
                     * 
                     */
                    bool MultiModelVersionHasBeenSet() const;

                private:

                    /**
                     * <p>图片/PDF的 Url 地址。要求图片经Base64编码后不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片下载时间不超过 3 秒。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。</p>
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * <p>图片/PDF的 Base64 值。要求Base64不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。</p>
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * <p>需要识别的PDF页面的对应页码，仅支持PDF单页识别。</p>
                     */
                    uint64_t m_pdfPageNumber;
                    bool m_pdfPageNumberHasBeenSet;

                    /**
                     * <p>自定义结构化功能需返回的字段名称，例：若客户想新增返回姓名、性别两个字段的识别结果，则输入ItemNames=[&quot;姓名&quot;,&quot;性别&quot;]</p>
                     */
                    std::vector<std::string> m_itemNames;
                    bool m_itemNamesHasBeenSet;

                    /**
                     * <p>true：仅输出自定义字段<br>false：输出默认字段+自定义字段<br>默认true</p>
                     */
                    bool m_itemNamesShowMode;
                    bool m_itemNamesShowModeHasBeenSet;

                    /**
                     * <p>是否开启全文字段识别</p>
                     */
                    bool m_returnFullText;
                    bool m_returnFullTextHasBeenSet;

                    /**
                     * <p>配置id支持：<br>General -- 通用场景<br>InvoiceEng -- 国际invoice模板<br>WayBillEng --海运订单模板<br>CustomsDeclaration -- 进出口报关单<br>WeightNote -- 磅单<br>MedicalMeter -- 血压仪表识别<br>BillOfLading -- 海运提单<br>EntrustmentBook -- 海运托书<br>Statement -- 对账单识别模板<br>BookingConfirmation -- 配舱通知书识别模板<br>AirWayBill -- 航空运单识别模板<br>Table -- 表格模板<br>SteelLabel -- 实物标签识别模板<br>CarInsurance -- 车辆保险单识别模板<br>MultiRealEstateCertificate -- 房产材料识别模板<br>MultiRealEstateMaterial -- 房产证明识别模板<br>HongKongUtilityBill -- 中国香港水电煤单识别模板<br>OverseasCheques -- 海外支票<br>RegistrationCertificate -- 备案证<br>u200bGridPhoto -- 电网系统照片<br>u200bSignaturePage -- 签署页<br>u200bSalesDeliveryNote -- 销售发货单</p>
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * <p>是否开启全文字段坐标值的识别</p>
                     */
                    bool m_enableCoord;
                    bool m_enableCoordHasBeenSet;

                    /**
                     * <p>是否开启父子key识别，默认是</p>
                     */
                    bool m_outputParentKey;
                    bool m_outputParentKeyHasBeenSet;

                    /**
                     * <p>模板的单个属性配置</p>
                     */
                    ConfigAdvanced m_configAdvanced;
                    bool m_configAdvancedHasBeenSet;

                    /**
                     * <p>cn时，添加的key为中文<br>en时，添加的key为英语</p>
                     */
                    std::string m_outputLanguage;
                    bool m_outputLanguageHasBeenSet;

                    /**
                     * <p>自定义抽取需要的字段名称、字段类型、字段提示词</p>
                     */
                    std::vector<ItemNames> m_newItemNames;
                    bool m_newItemNamesHasBeenSet;

                    /**
                     * <p>文档抽取（多模态）识别服务所用的算法模型版本<br>-目前入参支持“1.0”和“2.0“两个输入。</p><ul><li>2026年7月20日开始，默认为“2.0”，之前使用过本接口的账号若未填写本参数默认为“1.0”。</li><li>2026年7月20日后开通服务的账号仅支持输入“2.0”。</li><li>不同算法模型版本对应的文档抽取识别算法不同，新版本的整体效果会优于旧版本，建议使用“2.0”版本。<br>示例值：2.0</li></ul>
                     */
                    std::string m_multiModelVersion;
                    bool m_multiModelVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_EXTRACTDOCMULTIREQUEST_H_
