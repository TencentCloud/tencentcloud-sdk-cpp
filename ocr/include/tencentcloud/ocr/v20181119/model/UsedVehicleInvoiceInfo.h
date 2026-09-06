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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_USEDVEHICLEINVOICEINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_USEDVEHICLEINVOICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 二手车销售统一发票信息
                */
                class UsedVehicleInvoiceInfo : public AbstractModel
                {
                public:
                    UsedVehicleInvoiceInfo();
                    ~UsedVehicleInvoiceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>所属税局</p>
                     * @return TaxBureau <p>所属税局</p>
                     * 
                     */
                    std::string GetTaxBureau() const;

                    /**
                     * 设置<p>所属税局</p>
                     * @param _taxBureau <p>所属税局</p>
                     * 
                     */
                    void SetTaxBureau(const std::string& _taxBureau);

                    /**
                     * 判断参数 TaxBureau 是否已赋值
                     * @return TaxBureau 是否已赋值
                     * 
                     */
                    bool TaxBureauHasBeenSet() const;

                    /**
                     * 获取<p>买方单位/个人</p>
                     * @return Buyer <p>买方单位/个人</p>
                     * 
                     */
                    std::string GetBuyer() const;

                    /**
                     * 设置<p>买方单位/个人</p>
                     * @param _buyer <p>买方单位/个人</p>
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
                     * 获取<p>买方单位代码/身份证号码</p>
                     * @return BuyerNo <p>买方单位代码/身份证号码</p>
                     * 
                     */
                    std::string GetBuyerNo() const;

                    /**
                     * 设置<p>买方单位代码/身份证号码</p>
                     * @param _buyerNo <p>买方单位代码/身份证号码</p>
                     * 
                     */
                    void SetBuyerNo(const std::string& _buyerNo);

                    /**
                     * 判断参数 BuyerNo 是否已赋值
                     * @return BuyerNo 是否已赋值
                     * 
                     */
                    bool BuyerNoHasBeenSet() const;

                    /**
                     * 获取<p>买方单位/个人地址</p>
                     * @return BuyerAddress <p>买方单位/个人地址</p>
                     * 
                     */
                    std::string GetBuyerAddress() const;

                    /**
                     * 设置<p>买方单位/个人地址</p>
                     * @param _buyerAddress <p>买方单位/个人地址</p>
                     * 
                     */
                    void SetBuyerAddress(const std::string& _buyerAddress);

                    /**
                     * 判断参数 BuyerAddress 是否已赋值
                     * @return BuyerAddress 是否已赋值
                     * 
                     */
                    bool BuyerAddressHasBeenSet() const;

                    /**
                     * 获取<p>买方单位电话</p>
                     * @return BuyerTel <p>买方单位电话</p>
                     * 
                     */
                    std::string GetBuyerTel() const;

                    /**
                     * 设置<p>买方单位电话</p>
                     * @param _buyerTel <p>买方单位电话</p>
                     * 
                     */
                    void SetBuyerTel(const std::string& _buyerTel);

                    /**
                     * 判断参数 BuyerTel 是否已赋值
                     * @return BuyerTel 是否已赋值
                     * 
                     */
                    bool BuyerTelHasBeenSet() const;

                    /**
                     * 获取<p>卖方单位/个人</p>
                     * @return Seller <p>卖方单位/个人</p>
                     * 
                     */
                    std::string GetSeller() const;

                    /**
                     * 设置<p>卖方单位/个人</p>
                     * @param _seller <p>卖方单位/个人</p>
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
                     * 获取<p>卖方单位代码/身份证号码</p>
                     * @return SellerNo <p>卖方单位代码/身份证号码</p>
                     * 
                     */
                    std::string GetSellerNo() const;

                    /**
                     * 设置<p>卖方单位代码/身份证号码</p>
                     * @param _sellerNo <p>卖方单位代码/身份证号码</p>
                     * 
                     */
                    void SetSellerNo(const std::string& _sellerNo);

                    /**
                     * 判断参数 SellerNo 是否已赋值
                     * @return SellerNo 是否已赋值
                     * 
                     */
                    bool SellerNoHasBeenSet() const;

                    /**
                     * 获取<p>卖方单位/个人地址</p>
                     * @return SellerAddress <p>卖方单位/个人地址</p>
                     * 
                     */
                    std::string GetSellerAddress() const;

                    /**
                     * 设置<p>卖方单位/个人地址</p>
                     * @param _sellerAddress <p>卖方单位/个人地址</p>
                     * 
                     */
                    void SetSellerAddress(const std::string& _sellerAddress);

                    /**
                     * 判断参数 SellerAddress 是否已赋值
                     * @return SellerAddress 是否已赋值
                     * 
                     */
                    bool SellerAddressHasBeenSet() const;

                    /**
                     * 获取<p>卖方单位电话</p>
                     * @return SellerTel <p>卖方单位电话</p>
                     * 
                     */
                    std::string GetSellerTel() const;

                    /**
                     * 设置<p>卖方单位电话</p>
                     * @param _sellerTel <p>卖方单位电话</p>
                     * 
                     */
                    void SetSellerTel(const std::string& _sellerTel);

                    /**
                     * 判断参数 SellerTel 是否已赋值
                     * @return SellerTel 是否已赋值
                     * 
                     */
                    bool SellerTelHasBeenSet() const;

                    /**
                     * 获取<p>车牌照号</p>
                     * @return VehicleLicenseNo <p>车牌照号</p>
                     * 
                     */
                    std::string GetVehicleLicenseNo() const;

                    /**
                     * 设置<p>车牌照号</p>
                     * @param _vehicleLicenseNo <p>车牌照号</p>
                     * 
                     */
                    void SetVehicleLicenseNo(const std::string& _vehicleLicenseNo);

                    /**
                     * 判断参数 VehicleLicenseNo 是否已赋值
                     * @return VehicleLicenseNo 是否已赋值
                     * 
                     */
                    bool VehicleLicenseNoHasBeenSet() const;

                    /**
                     * 获取<p>登记证号</p>
                     * @return RegisterNo <p>登记证号</p>
                     * 
                     */
                    std::string GetRegisterNo() const;

                    /**
                     * 设置<p>登记证号</p>
                     * @param _registerNo <p>登记证号</p>
                     * 
                     */
                    void SetRegisterNo(const std::string& _registerNo);

                    /**
                     * 判断参数 RegisterNo 是否已赋值
                     * @return RegisterNo 是否已赋值
                     * 
                     */
                    bool RegisterNoHasBeenSet() const;

                    /**
                     * 获取<p>车架号/车辆识别代码</p>
                     * @return VehicleIdentifyNo <p>车架号/车辆识别代码</p>
                     * 
                     */
                    std::string GetVehicleIdentifyNo() const;

                    /**
                     * 设置<p>车架号/车辆识别代码</p>
                     * @param _vehicleIdentifyNo <p>车架号/车辆识别代码</p>
                     * 
                     */
                    void SetVehicleIdentifyNo(const std::string& _vehicleIdentifyNo);

                    /**
                     * 判断参数 VehicleIdentifyNo 是否已赋值
                     * @return VehicleIdentifyNo 是否已赋值
                     * 
                     */
                    bool VehicleIdentifyNoHasBeenSet() const;

                    /**
                     * 获取<p>转入地车辆管理所名称</p>
                     * @return ManagementOffice <p>转入地车辆管理所名称</p>
                     * 
                     */
                    std::string GetManagementOffice() const;

                    /**
                     * 设置<p>转入地车辆管理所名称</p>
                     * @param _managementOffice <p>转入地车辆管理所名称</p>
                     * 
                     */
                    void SetManagementOffice(const std::string& _managementOffice);

                    /**
                     * 判断参数 ManagementOffice 是否已赋值
                     * @return ManagementOffice 是否已赋值
                     * 
                     */
                    bool ManagementOfficeHasBeenSet() const;

                    /**
                     * 获取<p>车价合计</p>
                     * @return VehicleTotalPrice <p>车价合计</p>
                     * 
                     */
                    std::string GetVehicleTotalPrice() const;

                    /**
                     * 设置<p>车价合计</p>
                     * @param _vehicleTotalPrice <p>车价合计</p>
                     * 
                     */
                    void SetVehicleTotalPrice(const std::string& _vehicleTotalPrice);

                    /**
                     * 判断参数 VehicleTotalPrice 是否已赋值
                     * @return VehicleTotalPrice 是否已赋值
                     * 
                     */
                    bool VehicleTotalPriceHasBeenSet() const;

                    /**
                     * 获取<p>经营、拍卖单位</p>
                     * @return Auctioneer <p>经营、拍卖单位</p>
                     * 
                     */
                    std::string GetAuctioneer() const;

                    /**
                     * 设置<p>经营、拍卖单位</p>
                     * @param _auctioneer <p>经营、拍卖单位</p>
                     * 
                     */
                    void SetAuctioneer(const std::string& _auctioneer);

                    /**
                     * 判断参数 Auctioneer 是否已赋值
                     * @return Auctioneer 是否已赋值
                     * 
                     */
                    bool AuctioneerHasBeenSet() const;

                    /**
                     * 获取<p>经营、拍卖单位地址</p>
                     * @return AuctioneerAddress <p>经营、拍卖单位地址</p>
                     * 
                     */
                    std::string GetAuctioneerAddress() const;

                    /**
                     * 设置<p>经营、拍卖单位地址</p>
                     * @param _auctioneerAddress <p>经营、拍卖单位地址</p>
                     * 
                     */
                    void SetAuctioneerAddress(const std::string& _auctioneerAddress);

                    /**
                     * 判断参数 AuctioneerAddress 是否已赋值
                     * @return AuctioneerAddress 是否已赋值
                     * 
                     */
                    bool AuctioneerAddressHasBeenSet() const;

                    /**
                     * 获取<p>经营、拍卖单位纳税人识别号</p>
                     * @return AuctioneerTaxpayerNum <p>经营、拍卖单位纳税人识别号</p>
                     * 
                     */
                    std::string GetAuctioneerTaxpayerNum() const;

                    /**
                     * 设置<p>经营、拍卖单位纳税人识别号</p>
                     * @param _auctioneerTaxpayerNum <p>经营、拍卖单位纳税人识别号</p>
                     * 
                     */
                    void SetAuctioneerTaxpayerNum(const std::string& _auctioneerTaxpayerNum);

                    /**
                     * 判断参数 AuctioneerTaxpayerNum 是否已赋值
                     * @return AuctioneerTaxpayerNum 是否已赋值
                     * 
                     */
                    bool AuctioneerTaxpayerNumHasBeenSet() const;

                    /**
                     * 获取<p>经营、拍卖单位开户银行、账号</p>
                     * @return AuctioneerBankAccount <p>经营、拍卖单位开户银行、账号</p>
                     * 
                     */
                    std::string GetAuctioneerBankAccount() const;

                    /**
                     * 设置<p>经营、拍卖单位开户银行、账号</p>
                     * @param _auctioneerBankAccount <p>经营、拍卖单位开户银行、账号</p>
                     * 
                     */
                    void SetAuctioneerBankAccount(const std::string& _auctioneerBankAccount);

                    /**
                     * 判断参数 AuctioneerBankAccount 是否已赋值
                     * @return AuctioneerBankAccount 是否已赋值
                     * 
                     */
                    bool AuctioneerBankAccountHasBeenSet() const;

                    /**
                     * 获取<p>经营、拍卖单位电话</p>
                     * @return AuctioneerTel <p>经营、拍卖单位电话</p>
                     * 
                     */
                    std::string GetAuctioneerTel() const;

                    /**
                     * 设置<p>经营、拍卖单位电话</p>
                     * @param _auctioneerTel <p>经营、拍卖单位电话</p>
                     * 
                     */
                    void SetAuctioneerTel(const std::string& _auctioneerTel);

                    /**
                     * 判断参数 AuctioneerTel 是否已赋值
                     * @return AuctioneerTel 是否已赋值
                     * 
                     */
                    bool AuctioneerTelHasBeenSet() const;

                    /**
                     * 获取<p>二手车市场</p>
                     * @return Market <p>二手车市场</p>
                     * 
                     */
                    std::string GetMarket() const;

                    /**
                     * 设置<p>二手车市场</p>
                     * @param _market <p>二手车市场</p>
                     * 
                     */
                    void SetMarket(const std::string& _market);

                    /**
                     * 判断参数 Market 是否已赋值
                     * @return Market 是否已赋值
                     * 
                     */
                    bool MarketHasBeenSet() const;

                    /**
                     * 获取<p>二手车市场纳税人识别号</p>
                     * @return MarketTaxpayerNum <p>二手车市场纳税人识别号</p>
                     * 
                     */
                    std::string GetMarketTaxpayerNum() const;

                    /**
                     * 设置<p>二手车市场纳税人识别号</p>
                     * @param _marketTaxpayerNum <p>二手车市场纳税人识别号</p>
                     * 
                     */
                    void SetMarketTaxpayerNum(const std::string& _marketTaxpayerNum);

                    /**
                     * 判断参数 MarketTaxpayerNum 是否已赋值
                     * @return MarketTaxpayerNum 是否已赋值
                     * 
                     */
                    bool MarketTaxpayerNumHasBeenSet() const;

                    /**
                     * 获取<p>二手车市场地址</p>
                     * @return MarketAddress <p>二手车市场地址</p>
                     * 
                     */
                    std::string GetMarketAddress() const;

                    /**
                     * 设置<p>二手车市场地址</p>
                     * @param _marketAddress <p>二手车市场地址</p>
                     * 
                     */
                    void SetMarketAddress(const std::string& _marketAddress);

                    /**
                     * 判断参数 MarketAddress 是否已赋值
                     * @return MarketAddress 是否已赋值
                     * 
                     */
                    bool MarketAddressHasBeenSet() const;

                    /**
                     * 获取<p>二手车市场开户银行账号</p>
                     * @return MarketBankAccount <p>二手车市场开户银行账号</p>
                     * 
                     */
                    std::string GetMarketBankAccount() const;

                    /**
                     * 设置<p>二手车市场开户银行账号</p>
                     * @param _marketBankAccount <p>二手车市场开户银行账号</p>
                     * 
                     */
                    void SetMarketBankAccount(const std::string& _marketBankAccount);

                    /**
                     * 判断参数 MarketBankAccount 是否已赋值
                     * @return MarketBankAccount 是否已赋值
                     * 
                     */
                    bool MarketBankAccountHasBeenSet() const;

                    /**
                     * 获取<p>二手车市场电话</p>
                     * @return MarketTel <p>二手车市场电话</p>
                     * 
                     */
                    std::string GetMarketTel() const;

                    /**
                     * 设置<p>二手车市场电话</p>
                     * @param _marketTel <p>二手车市场电话</p>
                     * 
                     */
                    void SetMarketTel(const std::string& _marketTel);

                    /**
                     * 判断参数 MarketTel 是否已赋值
                     * @return MarketTel 是否已赋值
                     * 
                     */
                    bool MarketTelHasBeenSet() const;

                    /**
                     * 获取<p>车价合计中文大写</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VehicleTotalPriceCN <p>车价合计中文大写</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVehicleTotalPriceCN() const;

                    /**
                     * 设置<p>车价合计中文大写</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vehicleTotalPriceCN <p>车价合计中文大写</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVehicleTotalPriceCN(const std::string& _vehicleTotalPriceCN);

                    /**
                     * 判断参数 VehicleTotalPriceCN 是否已赋值
                     * @return VehicleTotalPriceCN 是否已赋值
                     * 
                     */
                    bool VehicleTotalPriceCNHasBeenSet() const;

                    /**
                     * 获取<p>发票风险等级</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InvoiceRiskLevel <p>发票风险等级</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInvoiceRiskLevel() const;

                    /**
                     * 设置<p>发票风险等级</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _invoiceRiskLevel <p>发票风险等级</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInvoiceRiskLevel(const std::string& _invoiceRiskLevel);

                    /**
                     * 判断参数 InvoiceRiskLevel 是否已赋值
                     * @return InvoiceRiskLevel 是否已赋值
                     * 
                     */
                    bool InvoiceRiskLevelHasBeenSet() const;

                    /**
                     * 获取<p>车辆类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CarType <p>车辆类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCarType() const;

                    /**
                     * 设置<p>车辆类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _carType <p>车辆类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCarType(const std::string& _carType);

                    /**
                     * 判断参数 CarType 是否已赋值
                     * @return CarType 是否已赋值
                     * 
                     */
                    bool CarTypeHasBeenSet() const;

                    /**
                     * 获取<p>厂牌型号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PlateModel <p>厂牌型号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPlateModel() const;

                    /**
                     * 设置<p>厂牌型号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _plateModel <p>厂牌型号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPlateModel(const std::string& _plateModel);

                    /**
                     * 判断参数 PlateModel 是否已赋值
                     * @return PlateModel 是否已赋值
                     * 
                     */
                    bool PlateModelHasBeenSet() const;

                    /**
                     * 获取<p>作废人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AbandonerName <p>作废人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAbandonerName() const;

                    /**
                     * 设置<p>作废人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _abandonerName <p>作废人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAbandonerName(const std::string& _abandonerName);

                    /**
                     * 判断参数 AbandonerName 是否已赋值
                     * @return AbandonerName 是否已赋值
                     * 
                     */
                    bool AbandonerNameHasBeenSet() const;

                    /**
                     * 获取<p>作废日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AbandonDate <p>作废日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAbandonDate() const;

                    /**
                     * 设置<p>作废日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _abandonDate <p>作废日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAbandonDate(const std::string& _abandonDate);

                    /**
                     * 判断参数 AbandonDate 是否已赋值
                     * @return AbandonDate 是否已赋值
                     * 
                     */
                    bool AbandonDateHasBeenSet() const;

                    /**
                     * 获取<p>开票方类型：1 经营单位，2 拍卖单位，03 二手车市场。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IssuerType <p>开票方类型：1 经营单位，2 拍卖单位，03 二手车市场。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIssuerType() const;

                    /**
                     * 设置<p>开票方类型：1 经营单位，2 拍卖单位，03 二手车市场。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _issuerType <p>开票方类型：1 经营单位，2 拍卖单位，03 二手车市场。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIssuerType(const std::string& _issuerType);

                    /**
                     * 判断参数 IssuerType 是否已赋值
                     * @return IssuerType 是否已赋值
                     * 
                     */
                    bool IssuerTypeHasBeenSet() const;

                    /**
                     * 获取<p>开票方纳税人识别号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IssuerTaxCode <p>开票方纳税人识别号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIssuerTaxCode() const;

                    /**
                     * 设置<p>开票方纳税人识别号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _issuerTaxCode <p>开票方纳税人识别号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIssuerTaxCode(const std::string& _issuerTaxCode);

                    /**
                     * 判断参数 IssuerTaxCode 是否已赋值
                     * @return IssuerTaxCode 是否已赋值
                     * 
                     */
                    bool IssuerTaxCodeHasBeenSet() const;

                    /**
                     * 获取<p>自行编码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomCode <p>自行编码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCustomCode() const;

                    /**
                     * 设置<p>自行编码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customCode <p>自行编码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomCode(const std::string& _customCode);

                    /**
                     * 判断参数 CustomCode 是否已赋值
                     * @return CustomCode 是否已赋值
                     * 
                     */
                    bool CustomCodeHasBeenSet() const;

                    /**
                     * 获取<p>商品编码</p>
                     * @return TaxClassifyCode <p>商品编码</p>
                     * 
                     */
                    std::string GetTaxClassifyCode() const;

                    /**
                     * 设置<p>商品编码</p>
                     * @param _taxClassifyCode <p>商品编码</p>
                     * 
                     */
                    void SetTaxClassifyCode(const std::string& _taxClassifyCode);

                    /**
                     * 判断参数 TaxClassifyCode 是否已赋值
                     * @return TaxClassifyCode 是否已赋值
                     * 
                     */
                    bool TaxClassifyCodeHasBeenSet() const;

                    /**
                     * 获取<p>零税率标识：空：非零税率，0：出口零税，1：免税，2：不征税，3 普通零税率</p>
                     * @return ZeroTaxRateMark <p>零税率标识：空：非零税率，0：出口零税，1：免税，2：不征税，3 普通零税率</p>
                     * 
                     */
                    std::string GetZeroTaxRateMark() const;

                    /**
                     * 设置<p>零税率标识：空：非零税率，0：出口零税，1：免税，2：不征税，3 普通零税率</p>
                     * @param _zeroTaxRateMark <p>零税率标识：空：非零税率，0：出口零税，1：免税，2：不征税，3 普通零税率</p>
                     * 
                     */
                    void SetZeroTaxRateMark(const std::string& _zeroTaxRateMark);

                    /**
                     * 判断参数 ZeroTaxRateMark 是否已赋值
                     * @return ZeroTaxRateMark 是否已赋值
                     * 
                     */
                    bool ZeroTaxRateMarkHasBeenSet() const;

                private:

                    /**
                     * <p>所属税局</p>
                     */
                    std::string m_taxBureau;
                    bool m_taxBureauHasBeenSet;

                    /**
                     * <p>买方单位/个人</p>
                     */
                    std::string m_buyer;
                    bool m_buyerHasBeenSet;

                    /**
                     * <p>买方单位代码/身份证号码</p>
                     */
                    std::string m_buyerNo;
                    bool m_buyerNoHasBeenSet;

                    /**
                     * <p>买方单位/个人地址</p>
                     */
                    std::string m_buyerAddress;
                    bool m_buyerAddressHasBeenSet;

                    /**
                     * <p>买方单位电话</p>
                     */
                    std::string m_buyerTel;
                    bool m_buyerTelHasBeenSet;

                    /**
                     * <p>卖方单位/个人</p>
                     */
                    std::string m_seller;
                    bool m_sellerHasBeenSet;

                    /**
                     * <p>卖方单位代码/身份证号码</p>
                     */
                    std::string m_sellerNo;
                    bool m_sellerNoHasBeenSet;

                    /**
                     * <p>卖方单位/个人地址</p>
                     */
                    std::string m_sellerAddress;
                    bool m_sellerAddressHasBeenSet;

                    /**
                     * <p>卖方单位电话</p>
                     */
                    std::string m_sellerTel;
                    bool m_sellerTelHasBeenSet;

                    /**
                     * <p>车牌照号</p>
                     */
                    std::string m_vehicleLicenseNo;
                    bool m_vehicleLicenseNoHasBeenSet;

                    /**
                     * <p>登记证号</p>
                     */
                    std::string m_registerNo;
                    bool m_registerNoHasBeenSet;

                    /**
                     * <p>车架号/车辆识别代码</p>
                     */
                    std::string m_vehicleIdentifyNo;
                    bool m_vehicleIdentifyNoHasBeenSet;

                    /**
                     * <p>转入地车辆管理所名称</p>
                     */
                    std::string m_managementOffice;
                    bool m_managementOfficeHasBeenSet;

                    /**
                     * <p>车价合计</p>
                     */
                    std::string m_vehicleTotalPrice;
                    bool m_vehicleTotalPriceHasBeenSet;

                    /**
                     * <p>经营、拍卖单位</p>
                     */
                    std::string m_auctioneer;
                    bool m_auctioneerHasBeenSet;

                    /**
                     * <p>经营、拍卖单位地址</p>
                     */
                    std::string m_auctioneerAddress;
                    bool m_auctioneerAddressHasBeenSet;

                    /**
                     * <p>经营、拍卖单位纳税人识别号</p>
                     */
                    std::string m_auctioneerTaxpayerNum;
                    bool m_auctioneerTaxpayerNumHasBeenSet;

                    /**
                     * <p>经营、拍卖单位开户银行、账号</p>
                     */
                    std::string m_auctioneerBankAccount;
                    bool m_auctioneerBankAccountHasBeenSet;

                    /**
                     * <p>经营、拍卖单位电话</p>
                     */
                    std::string m_auctioneerTel;
                    bool m_auctioneerTelHasBeenSet;

                    /**
                     * <p>二手车市场</p>
                     */
                    std::string m_market;
                    bool m_marketHasBeenSet;

                    /**
                     * <p>二手车市场纳税人识别号</p>
                     */
                    std::string m_marketTaxpayerNum;
                    bool m_marketTaxpayerNumHasBeenSet;

                    /**
                     * <p>二手车市场地址</p>
                     */
                    std::string m_marketAddress;
                    bool m_marketAddressHasBeenSet;

                    /**
                     * <p>二手车市场开户银行账号</p>
                     */
                    std::string m_marketBankAccount;
                    bool m_marketBankAccountHasBeenSet;

                    /**
                     * <p>二手车市场电话</p>
                     */
                    std::string m_marketTel;
                    bool m_marketTelHasBeenSet;

                    /**
                     * <p>车价合计中文大写</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vehicleTotalPriceCN;
                    bool m_vehicleTotalPriceCNHasBeenSet;

                    /**
                     * <p>发票风险等级</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_invoiceRiskLevel;
                    bool m_invoiceRiskLevelHasBeenSet;

                    /**
                     * <p>车辆类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_carType;
                    bool m_carTypeHasBeenSet;

                    /**
                     * <p>厂牌型号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_plateModel;
                    bool m_plateModelHasBeenSet;

                    /**
                     * <p>作废人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_abandonerName;
                    bool m_abandonerNameHasBeenSet;

                    /**
                     * <p>作废日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_abandonDate;
                    bool m_abandonDateHasBeenSet;

                    /**
                     * <p>开票方类型：1 经营单位，2 拍卖单位，03 二手车市场。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_issuerType;
                    bool m_issuerTypeHasBeenSet;

                    /**
                     * <p>开票方纳税人识别号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_issuerTaxCode;
                    bool m_issuerTaxCodeHasBeenSet;

                    /**
                     * <p>自行编码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_customCode;
                    bool m_customCodeHasBeenSet;

                    /**
                     * <p>商品编码</p>
                     */
                    std::string m_taxClassifyCode;
                    bool m_taxClassifyCodeHasBeenSet;

                    /**
                     * <p>零税率标识：空：非零税率，0：出口零税，1：免税，2：不征税，3 普通零税率</p>
                     */
                    std::string m_zeroTaxRateMark;
                    bool m_zeroTaxRateMarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_USEDVEHICLEINVOICEINFO_H_
