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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VATELECTRONICINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VATELECTRONICINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/VatElectronicItemInfo.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 电子发票返回值
                */
                class VatElectronicInfo : public AbstractModel
                {
                public:
                    VatElectronicInfo();
                    ~VatElectronicInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取发票名称
                     * @return Title 发票名称
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置发票名称
                     * @param Title 发票名称
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取发票号码
                     * @return Number 发票号码
                     */
                    std::string GetNumber() const;

                    /**
                     * 设置发票号码
                     * @param Number 发票号码
                     */
                    void SetNumber(const std::string& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取开票日期
                     * @return Date 开票日期
                     */
                    std::string GetDate() const;

                    /**
                     * 设置开票日期
                     * @param Date 开票日期
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取税前金额
                     * @return PretaxAmount 税前金额
                     */
                    std::string GetPretaxAmount() const;

                    /**
                     * 设置税前金额
                     * @param PretaxAmount 税前金额
                     */
                    void SetPretaxAmount(const std::string& _pretaxAmount);

                    /**
                     * 判断参数 PretaxAmount 是否已赋值
                     * @return PretaxAmount 是否已赋值
                     */
                    bool PretaxAmountHasBeenSet() const;

                    /**
                     * 获取合计税额
                     * @return Tax 合计税额
                     */
                    std::string GetTax() const;

                    /**
                     * 设置合计税额
                     * @param Tax 合计税额
                     */
                    void SetTax(const std::string& _tax);

                    /**
                     * 判断参数 Tax 是否已赋值
                     * @return Tax 是否已赋值
                     */
                    bool TaxHasBeenSet() const;

                    /**
                     * 获取价税合计（小写）
                     * @return Total 价税合计（小写）
                     */
                    std::string GetTotal() const;

                    /**
                     * 设置价税合计（小写）
                     * @param Total 价税合计（小写）
                     */
                    void SetTotal(const std::string& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取价税合计（大写）
                     * @return TotalCn 价税合计（大写）
                     */
                    std::string GetTotalCn() const;

                    /**
                     * 设置价税合计（大写）
                     * @param TotalCn 价税合计（大写）
                     */
                    void SetTotalCn(const std::string& _totalCn);

                    /**
                     * 判断参数 TotalCn 是否已赋值
                     * @return TotalCn 是否已赋值
                     */
                    bool TotalCnHasBeenSet() const;

                    /**
                     * 获取销售方名称
                     * @return Seller 销售方名称
                     */
                    std::string GetSeller() const;

                    /**
                     * 设置销售方名称
                     * @param Seller 销售方名称
                     */
                    void SetSeller(const std::string& _seller);

                    /**
                     * 判断参数 Seller 是否已赋值
                     * @return Seller 是否已赋值
                     */
                    bool SellerHasBeenSet() const;

                    /**
                     * 获取销售方纳税人识别号
                     * @return SellerTaxID 销售方纳税人识别号
                     */
                    std::string GetSellerTaxID() const;

                    /**
                     * 设置销售方纳税人识别号
                     * @param SellerTaxID 销售方纳税人识别号
                     */
                    void SetSellerTaxID(const std::string& _sellerTaxID);

                    /**
                     * 判断参数 SellerTaxID 是否已赋值
                     * @return SellerTaxID 是否已赋值
                     */
                    bool SellerTaxIDHasBeenSet() const;

                    /**
                     * 获取购买方名称
                     * @return Buyer 购买方名称
                     */
                    std::string GetBuyer() const;

                    /**
                     * 设置购买方名称
                     * @param Buyer 购买方名称
                     */
                    void SetBuyer(const std::string& _buyer);

                    /**
                     * 判断参数 Buyer 是否已赋值
                     * @return Buyer 是否已赋值
                     */
                    bool BuyerHasBeenSet() const;

                    /**
                     * 获取购买方纳税人识别号
                     * @return BuyerTaxID 购买方纳税人识别号
                     */
                    std::string GetBuyerTaxID() const;

                    /**
                     * 设置购买方纳税人识别号
                     * @param BuyerTaxID 购买方纳税人识别号
                     */
                    void SetBuyerTaxID(const std::string& _buyerTaxID);

                    /**
                     * 判断参数 BuyerTaxID 是否已赋值
                     * @return BuyerTaxID 是否已赋值
                     */
                    bool BuyerTaxIDHasBeenSet() const;

                    /**
                     * 获取开票人
                     * @return Issuer 开票人
                     */
                    std::string GetIssuer() const;

                    /**
                     * 设置开票人
                     * @param Issuer 开票人
                     */
                    void SetIssuer(const std::string& _issuer);

                    /**
                     * 判断参数 Issuer 是否已赋值
                     * @return Issuer 是否已赋值
                     */
                    bool IssuerHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param Remark 备注
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取小计金额
                     * @return SubTotal 小计金额
                     */
                    std::string GetSubTotal() const;

                    /**
                     * 设置小计金额
                     * @param SubTotal 小计金额
                     */
                    void SetSubTotal(const std::string& _subTotal);

                    /**
                     * 判断参数 SubTotal 是否已赋值
                     * @return SubTotal 是否已赋值
                     */
                    bool SubTotalHasBeenSet() const;

                    /**
                     * 获取小计税额
                     * @return SubTax 小计税额
                     */
                    std::string GetSubTax() const;

                    /**
                     * 设置小计税额
                     * @param SubTax 小计税额
                     */
                    void SetSubTax(const std::string& _subTax);

                    /**
                     * 判断参数 SubTax 是否已赋值
                     * @return SubTax 是否已赋值
                     */
                    bool SubTaxHasBeenSet() const;

                    /**
                     * 获取电子发票详细条目信息
                     * @return VatElectronicItems 电子发票详细条目信息
                     */
                    std::vector<VatElectronicItemInfo> GetVatElectronicItems() const;

                    /**
                     * 设置电子发票详细条目信息
                     * @param VatElectronicItems 电子发票详细条目信息
                     */
                    void SetVatElectronicItems(const std::vector<VatElectronicItemInfo>& _vatElectronicItems);

                    /**
                     * 判断参数 VatElectronicItems 是否已赋值
                     * @return VatElectronicItems 是否已赋值
                     */
                    bool VatElectronicItemsHasBeenSet() const;

                private:

                    /**
                     * 发票名称
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 发票号码
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * 开票日期
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 税前金额
                     */
                    std::string m_pretaxAmount;
                    bool m_pretaxAmountHasBeenSet;

                    /**
                     * 合计税额
                     */
                    std::string m_tax;
                    bool m_taxHasBeenSet;

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
                     * 开票人
                     */
                    std::string m_issuer;
                    bool m_issuerHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 小计金额
                     */
                    std::string m_subTotal;
                    bool m_subTotalHasBeenSet;

                    /**
                     * 小计税额
                     */
                    std::string m_subTax;
                    bool m_subTaxHasBeenSet;

                    /**
                     * 电子发票详细条目信息
                     */
                    std::vector<VatElectronicItemInfo> m_vatElectronicItems;
                    bool m_vatElectronicItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VATELECTRONICINFO_H_
