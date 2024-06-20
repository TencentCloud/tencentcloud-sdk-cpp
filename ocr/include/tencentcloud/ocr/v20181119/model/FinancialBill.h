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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_FINANCIALBILL_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_FINANCIALBILL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/FinancialBillItem.h>
#include <tencentcloud/ocr/v20181119/model/FinancialBillItemDetails.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 财务票据查验返回结果
                */
                class FinancialBill : public AbstractModel
                {
                public:
                    FinancialBill();
                    ~FinancialBill() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取票据代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Code 票据代码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置票据代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _code 票据代码
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取票据号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Number 票据号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNumber() const;

                    /**
                     * 设置票据号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _number 票据号码
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取缴款人纳税识别号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BuyerTaxID 缴款人纳税识别号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBuyerTaxID() const;

                    /**
                     * 设置缴款人纳税识别号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _buyerTaxID 缴款人纳税识别号
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取校验码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckCode 校验码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCheckCode() const;

                    /**
                     * 设置校验码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _checkCode 校验码
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取缴款人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Buyer 缴款人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBuyer() const;

                    /**
                     * 设置缴款人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _buyer 缴款人
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取开票日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Date 开票日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置开票日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _date 开票日期
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取收款单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SellerCompany 收款单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSellerCompany() const;

                    /**
                     * 设置收款单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sellerCompany 收款单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSellerCompany(const std::string& _sellerCompany);

                    /**
                     * 判断参数 SellerCompany 是否已赋值
                     * @return SellerCompany 是否已赋值
                     * 
                     */
                    bool SellerCompanyHasBeenSet() const;

                    /**
                     * 获取复核人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Reviewer 复核人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReviewer() const;

                    /**
                     * 设置复核人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reviewer 复核人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReviewer(const std::string& _reviewer);

                    /**
                     * 判断参数 Reviewer 是否已赋值
                     * @return Reviewer 是否已赋值
                     * 
                     */
                    bool ReviewerHasBeenSet() const;

                    /**
                     * 获取收款人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Seller 收款人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSeller() const;

                    /**
                     * 设置收款人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _seller 收款人
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取票据名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Title 票据名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置票据名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _title 票据名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取金额合计
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 金额合计
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTotal() const;

                    /**
                     * 设置金额合计
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _total 金额合计
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取金额合计中文大写
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCn 金额合计中文大写
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTotalCn() const;

                    /**
                     * 设置金额合计中文大写
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalCn 金额合计中文大写
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取冲红
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RushRedStateCode 冲红
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRushRedStateCode() const;

                    /**
                     * 设置冲红
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rushRedStateCode 冲红
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRushRedStateCode(const std::string& _rushRedStateCode);

                    /**
                     * 判断参数 RushRedStateCode 是否已赋值
                     * @return RushRedStateCode 是否已赋值
                     * 
                     */
                    bool RushRedStateCodeHasBeenSet() const;

                    /**
                     * 获取冲红日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RushRedDate 冲红日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRushRedDate() const;

                    /**
                     * 设置冲红日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rushRedDate 冲红日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRushRedDate(const std::string& _rushRedDate);

                    /**
                     * 判断参数 RushRedDate 是否已赋值
                     * @return RushRedDate 是否已赋值
                     * 
                     */
                    bool RushRedDateHasBeenSet() const;

                    /**
                     * 获取冲红时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RushRedTime 冲红时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRushRedTime() const;

                    /**
                     * 设置冲红时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rushRedTime 冲红时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRushRedTime(const std::string& _rushRedTime);

                    /**
                     * 判断参数 RushRedTime 是否已赋值
                     * @return RushRedTime 是否已赋值
                     * 
                     */
                    bool RushRedTimeHasBeenSet() const;

                    /**
                     * 获取冲红原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RushRedReason 冲红原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRushRedReason() const;

                    /**
                     * 设置冲红原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rushRedReason 冲红原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRushRedReason(const std::string& _rushRedReason);

                    /**
                     * 判断参数 RushRedReason 是否已赋值
                     * @return RushRedReason 是否已赋值
                     * 
                     */
                    bool RushRedReasonHasBeenSet() const;

                    /**
                     * 获取项目明细
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FinancialBillItems 项目明细
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FinancialBillItem> GetFinancialBillItems() const;

                    /**
                     * 设置项目明细
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _financialBillItems 项目明细
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFinancialBillItems(const std::vector<FinancialBillItem>& _financialBillItems);

                    /**
                     * 判断参数 FinancialBillItems 是否已赋值
                     * @return FinancialBillItems 是否已赋值
                     * 
                     */
                    bool FinancialBillItemsHasBeenSet() const;

                    /**
                     * 获取项目清单
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FinancialBillItemDetails 项目清单
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FinancialBillItemDetails> GetFinancialBillItemDetails() const;

                    /**
                     * 设置项目清单
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _financialBillItemDetails 项目清单
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFinancialBillItemDetails(const std::vector<FinancialBillItemDetails>& _financialBillItemDetails);

                    /**
                     * 判断参数 FinancialBillItemDetails 是否已赋值
                     * @return FinancialBillItemDetails 是否已赋值
                     * 
                     */
                    bool FinancialBillItemDetailsHasBeenSet() const;

                private:

                    /**
                     * 票据代码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 票据号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * 缴款人纳税识别号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_buyerTaxID;
                    bool m_buyerTaxIDHasBeenSet;

                    /**
                     * 校验码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_checkCode;
                    bool m_checkCodeHasBeenSet;

                    /**
                     * 缴款人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_buyer;
                    bool m_buyerHasBeenSet;

                    /**
                     * 开票日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 收款单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sellerCompany;
                    bool m_sellerCompanyHasBeenSet;

                    /**
                     * 复核人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reviewer;
                    bool m_reviewerHasBeenSet;

                    /**
                     * 收款人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_seller;
                    bool m_sellerHasBeenSet;

                    /**
                     * 票据名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 金额合计
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 金额合计中文大写
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_totalCn;
                    bool m_totalCnHasBeenSet;

                    /**
                     * 冲红
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rushRedStateCode;
                    bool m_rushRedStateCodeHasBeenSet;

                    /**
                     * 冲红日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rushRedDate;
                    bool m_rushRedDateHasBeenSet;

                    /**
                     * 冲红时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rushRedTime;
                    bool m_rushRedTimeHasBeenSet;

                    /**
                     * 冲红原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rushRedReason;
                    bool m_rushRedReasonHasBeenSet;

                    /**
                     * 项目明细
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FinancialBillItem> m_financialBillItems;
                    bool m_financialBillItemsHasBeenSet;

                    /**
                     * 项目清单
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FinancialBillItemDetails> m_financialBillItemDetails;
                    bool m_financialBillItemDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_FINANCIALBILL_H_
