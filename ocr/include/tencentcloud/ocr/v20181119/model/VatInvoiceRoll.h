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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEROLL_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEROLL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/VatRollItem.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 增值税普通发票(卷票)
                */
                class VatInvoiceRoll : public AbstractModel
                {
                public:
                    VatInvoiceRoll();
                    ~VatInvoiceRoll() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取发票名称
                     * @return Title 发票名称
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置发票名称
                     * @param _title 发票名称
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取发票代码
                     * @return Code 发票代码
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置发票代码
                     * @param _code 发票代码
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取发票号码
                     * @return Number 发票号码
                     * 
                     */
                    std::string GetNumber() const;

                    /**
                     * 设置发票号码
                     * @param _number 发票号码
                     * 
                     */
                    void SetNumber(const std::string& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取机打发票号码
                     * @return NumberConfirm 机打发票号码
                     * 
                     */
                    std::string GetNumberConfirm() const;

                    /**
                     * 设置机打发票号码
                     * @param _numberConfirm 机打发票号码
                     * 
                     */
                    void SetNumberConfirm(const std::string& _numberConfirm);

                    /**
                     * 判断参数 NumberConfirm 是否已赋值
                     * @return NumberConfirm 是否已赋值
                     * 
                     */
                    bool NumberConfirmHasBeenSet() const;

                    /**
                     * 获取开票日期
                     * @return Date 开票日期
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置开票日期
                     * @param _date 开票日期
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取校验码
                     * @return CheckCode 校验码
                     * 
                     */
                    std::string GetCheckCode() const;

                    /**
                     * 设置校验码
                     * @param _checkCode 校验码
                     * 
                     */
                    void SetCheckCode(const std::string& _checkCode);

                    /**
                     * 判断参数 CheckCode 是否已赋值
                     * @return CheckCode 是否已赋值
                     * 
                     */
                    bool CheckCodeHasBeenSet() const;

                    /**
                     * 获取销售方名称
                     * @return Seller 销售方名称
                     * 
                     */
                    std::string GetSeller() const;

                    /**
                     * 设置销售方名称
                     * @param _seller 销售方名称
                     * 
                     */
                    void SetSeller(const std::string& _seller);

                    /**
                     * 判断参数 Seller 是否已赋值
                     * @return Seller 是否已赋值
                     * 
                     */
                    bool SellerHasBeenSet() const;

                    /**
                     * 获取销售方纳税人识别号
                     * @return SellerTaxID 销售方纳税人识别号
                     * 
                     */
                    std::string GetSellerTaxID() const;

                    /**
                     * 设置销售方纳税人识别号
                     * @param _sellerTaxID 销售方纳税人识别号
                     * 
                     */
                    void SetSellerTaxID(const std::string& _sellerTaxID);

                    /**
                     * 判断参数 SellerTaxID 是否已赋值
                     * @return SellerTaxID 是否已赋值
                     * 
                     */
                    bool SellerTaxIDHasBeenSet() const;

                    /**
                     * 获取购买方名称
                     * @return Buyer 购买方名称
                     * 
                     */
                    std::string GetBuyer() const;

                    /**
                     * 设置购买方名称
                     * @param _buyer 购买方名称
                     * 
                     */
                    void SetBuyer(const std::string& _buyer);

                    /**
                     * 判断参数 Buyer 是否已赋值
                     * @return Buyer 是否已赋值
                     * 
                     */
                    bool BuyerHasBeenSet() const;

                    /**
                     * 获取购买方纳税人识别号
                     * @return BuyerTaxID 购买方纳税人识别号
                     * 
                     */
                    std::string GetBuyerTaxID() const;

                    /**
                     * 设置购买方纳税人识别号
                     * @param _buyerTaxID 购买方纳税人识别号
                     * 
                     */
                    void SetBuyerTaxID(const std::string& _buyerTaxID);

                    /**
                     * 判断参数 BuyerTaxID 是否已赋值
                     * @return BuyerTaxID 是否已赋值
                     * 
                     */
                    bool BuyerTaxIDHasBeenSet() const;

                    /**
                     * 获取种类
                     * @return Category 种类
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置种类
                     * @param _category 种类
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取价税合计（小写）
                     * @return Total 价税合计（小写）
                     * 
                     */
                    std::string GetTotal() const;

                    /**
                     * 设置价税合计（小写）
                     * @param _total 价税合计（小写）
                     * 
                     */
                    void SetTotal(const std::string& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取价税合计（大写）
                     * @return TotalCn 价税合计（大写）
                     * 
                     */
                    std::string GetTotalCn() const;

                    /**
                     * 设置价税合计（大写）
                     * @param _totalCn 价税合计（大写）
                     * 
                     */
                    void SetTotalCn(const std::string& _totalCn);

                    /**
                     * 判断参数 TotalCn 是否已赋值
                     * @return TotalCn 是否已赋值
                     * 
                     */
                    bool TotalCnHasBeenSet() const;

                    /**
                     * 获取发票消费类型
                     * @return Kind 发票消费类型
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置发票消费类型
                     * @param _kind 发票消费类型
                     * 
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取省
                     * @return Province 省
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置省
                     * @param _province 省
                     * 
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取市
                     * @return City 市
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置市
                     * @param _city 市
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取是否有公司印章（0：没有，1：有）
                     * @return CompanySealMark 是否有公司印章（0：没有，1：有）
                     * 
                     */
                    int64_t GetCompanySealMark() const;

                    /**
                     * 设置是否有公司印章（0：没有，1：有）
                     * @param _companySealMark 是否有公司印章（0：没有，1：有）
                     * 
                     */
                    void SetCompanySealMark(const int64_t& _companySealMark);

                    /**
                     * 判断参数 CompanySealMark 是否已赋值
                     * @return CompanySealMark 是否已赋值
                     * 
                     */
                    bool CompanySealMarkHasBeenSet() const;

                    /**
                     * 获取是否存在二维码（1：有，0：无）
                     * @return QRCodeMark 是否存在二维码（1：有，0：无）
                     * 
                     */
                    int64_t GetQRCodeMark() const;

                    /**
                     * 设置是否存在二维码（1：有，0：无）
                     * @param _qRCodeMark 是否存在二维码（1：有，0：无）
                     * 
                     */
                    void SetQRCodeMark(const int64_t& _qRCodeMark);

                    /**
                     * 判断参数 QRCodeMark 是否已赋值
                     * @return QRCodeMark 是否已赋值
                     * 
                     */
                    bool QRCodeMarkHasBeenSet() const;

                    /**
                     * 获取服务类型
                     * @return ServiceName 服务类型
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置服务类型
                     * @param _serviceName 服务类型
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取公司印章内容
                     * @return CompanySealContent 公司印章内容
                     * 
                     */
                    std::string GetCompanySealContent() const;

                    /**
                     * 设置公司印章内容
                     * @param _companySealContent 公司印章内容
                     * 
                     */
                    void SetCompanySealContent(const std::string& _companySealContent);

                    /**
                     * 判断参数 CompanySealContent 是否已赋值
                     * @return CompanySealContent 是否已赋值
                     * 
                     */
                    bool CompanySealContentHasBeenSet() const;

                    /**
                     * 获取税务局章内容
                     * @return TaxSealContent 税务局章内容
                     * 
                     */
                    std::string GetTaxSealContent() const;

                    /**
                     * 设置税务局章内容
                     * @param _taxSealContent 税务局章内容
                     * 
                     */
                    void SetTaxSealContent(const std::string& _taxSealContent);

                    /**
                     * 判断参数 TaxSealContent 是否已赋值
                     * @return TaxSealContent 是否已赋值
                     * 
                     */
                    bool TaxSealContentHasBeenSet() const;

                    /**
                     * 获取条目
                     * @return VatRollItems 条目
                     * 
                     */
                    std::vector<VatRollItem> GetVatRollItems() const;

                    /**
                     * 设置条目
                     * @param _vatRollItems 条目
                     * 
                     */
                    void SetVatRollItems(const std::vector<VatRollItem>& _vatRollItems);

                    /**
                     * 判断参数 VatRollItems 是否已赋值
                     * @return VatRollItems 是否已赋值
                     * 
                     */
                    bool VatRollItemsHasBeenSet() const;

                private:

                    /**
                     * 发票名称
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 发票代码
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 发票号码
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * 机打发票号码
                     */
                    std::string m_numberConfirm;
                    bool m_numberConfirmHasBeenSet;

                    /**
                     * 开票日期
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 校验码
                     */
                    std::string m_checkCode;
                    bool m_checkCodeHasBeenSet;

                    /**
                     * 销售方名称
                     */
                    std::string m_seller;
                    bool m_sellerHasBeenSet;

                    /**
                     * 销售方纳税人识别号
                     */
                    std::string m_sellerTaxID;
                    bool m_sellerTaxIDHasBeenSet;

                    /**
                     * 购买方名称
                     */
                    std::string m_buyer;
                    bool m_buyerHasBeenSet;

                    /**
                     * 购买方纳税人识别号
                     */
                    std::string m_buyerTaxID;
                    bool m_buyerTaxIDHasBeenSet;

                    /**
                     * 种类
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 价税合计（小写）
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 价税合计（大写）
                     */
                    std::string m_totalCn;
                    bool m_totalCnHasBeenSet;

                    /**
                     * 发票消费类型
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * 省
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 市
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 是否有公司印章（0：没有，1：有）
                     */
                    int64_t m_companySealMark;
                    bool m_companySealMarkHasBeenSet;

                    /**
                     * 是否存在二维码（1：有，0：无）
                     */
                    int64_t m_qRCodeMark;
                    bool m_qRCodeMarkHasBeenSet;

                    /**
                     * 服务类型
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 公司印章内容
                     */
                    std::string m_companySealContent;
                    bool m_companySealContentHasBeenSet;

                    /**
                     * 税务局章内容
                     */
                    std::string m_taxSealContent;
                    bool m_taxSealContentHasBeenSet;

                    /**
                     * 条目
                     */
                    std::vector<VatRollItem> m_vatRollItems;
                    bool m_vatRollItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEROLL_H_
