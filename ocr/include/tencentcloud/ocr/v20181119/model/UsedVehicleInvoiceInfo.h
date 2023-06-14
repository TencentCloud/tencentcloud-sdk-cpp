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
                     * 获取所属税局
                     * @return TaxBureau 所属税局
                     * 
                     */
                    std::string GetTaxBureau() const;

                    /**
                     * 设置所属税局
                     * @param _taxBureau 所属税局
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
                     * 获取买方单位/个人
                     * @return Buyer 买方单位/个人
                     * 
                     */
                    std::string GetBuyer() const;

                    /**
                     * 设置买方单位/个人
                     * @param _buyer 买方单位/个人
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
                     * 获取买方单位代码/身份证号码
                     * @return BuyerNo 买方单位代码/身份证号码
                     * 
                     */
                    std::string GetBuyerNo() const;

                    /**
                     * 设置买方单位代码/身份证号码
                     * @param _buyerNo 买方单位代码/身份证号码
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
                     * 获取买方单位/个人地址
                     * @return BuyerAddress 买方单位/个人地址
                     * 
                     */
                    std::string GetBuyerAddress() const;

                    /**
                     * 设置买方单位/个人地址
                     * @param _buyerAddress 买方单位/个人地址
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
                     * 获取买方单位电话
                     * @return BuyerTel 买方单位电话
                     * 
                     */
                    std::string GetBuyerTel() const;

                    /**
                     * 设置买方单位电话
                     * @param _buyerTel 买方单位电话
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
                     * 获取卖方单位/个人
                     * @return Seller 卖方单位/个人
                     * 
                     */
                    std::string GetSeller() const;

                    /**
                     * 设置卖方单位/个人
                     * @param _seller 卖方单位/个人
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
                     * 获取卖方单位代码/身份证号码
                     * @return SellerNo 卖方单位代码/身份证号码
                     * 
                     */
                    std::string GetSellerNo() const;

                    /**
                     * 设置卖方单位代码/身份证号码
                     * @param _sellerNo 卖方单位代码/身份证号码
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
                     * 获取卖方单位/个人地址
                     * @return SellerAddress 卖方单位/个人地址
                     * 
                     */
                    std::string GetSellerAddress() const;

                    /**
                     * 设置卖方单位/个人地址
                     * @param _sellerAddress 卖方单位/个人地址
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
                     * 获取卖方单位电话
                     * @return SellerTel 卖方单位电话
                     * 
                     */
                    std::string GetSellerTel() const;

                    /**
                     * 设置卖方单位电话
                     * @param _sellerTel 卖方单位电话
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
                     * 获取车牌照号
                     * @return VehicleLicenseNo 车牌照号
                     * 
                     */
                    std::string GetVehicleLicenseNo() const;

                    /**
                     * 设置车牌照号
                     * @param _vehicleLicenseNo 车牌照号
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
                     * 获取登记证号
                     * @return RegisterNo 登记证号
                     * 
                     */
                    std::string GetRegisterNo() const;

                    /**
                     * 设置登记证号
                     * @param _registerNo 登记证号
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
                     * 获取车架号/车辆识别代码
                     * @return VehicleIdentifyNo 车架号/车辆识别代码
                     * 
                     */
                    std::string GetVehicleIdentifyNo() const;

                    /**
                     * 设置车架号/车辆识别代码
                     * @param _vehicleIdentifyNo 车架号/车辆识别代码
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
                     * 获取转入地车辆管理所名称
                     * @return ManagementOffice 转入地车辆管理所名称
                     * 
                     */
                    std::string GetManagementOffice() const;

                    /**
                     * 设置转入地车辆管理所名称
                     * @param _managementOffice 转入地车辆管理所名称
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
                     * 获取车价合计
                     * @return VehicleTotalPrice 车价合计
                     * 
                     */
                    std::string GetVehicleTotalPrice() const;

                    /**
                     * 设置车价合计
                     * @param _vehicleTotalPrice 车价合计
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
                     * 获取经营、拍卖单位
                     * @return Auctioneer 经营、拍卖单位
                     * 
                     */
                    std::string GetAuctioneer() const;

                    /**
                     * 设置经营、拍卖单位
                     * @param _auctioneer 经营、拍卖单位
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
                     * 获取经营、拍卖单位地址
                     * @return AuctioneerAddress 经营、拍卖单位地址
                     * 
                     */
                    std::string GetAuctioneerAddress() const;

                    /**
                     * 设置经营、拍卖单位地址
                     * @param _auctioneerAddress 经营、拍卖单位地址
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
                     * 获取经营、拍卖单位纳税人识别号
                     * @return AuctioneerTaxpayerNum 经营、拍卖单位纳税人识别号
                     * 
                     */
                    std::string GetAuctioneerTaxpayerNum() const;

                    /**
                     * 设置经营、拍卖单位纳税人识别号
                     * @param _auctioneerTaxpayerNum 经营、拍卖单位纳税人识别号
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
                     * 获取经营、拍卖单位开户银行、账号
                     * @return AuctioneerBankAccount 经营、拍卖单位开户银行、账号
                     * 
                     */
                    std::string GetAuctioneerBankAccount() const;

                    /**
                     * 设置经营、拍卖单位开户银行、账号
                     * @param _auctioneerBankAccount 经营、拍卖单位开户银行、账号
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
                     * 获取经营、拍卖单位电话
                     * @return AuctioneerTel 经营、拍卖单位电话
                     * 
                     */
                    std::string GetAuctioneerTel() const;

                    /**
                     * 设置经营、拍卖单位电话
                     * @param _auctioneerTel 经营、拍卖单位电话
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
                     * 获取二手车市场
                     * @return Market 二手车市场
                     * 
                     */
                    std::string GetMarket() const;

                    /**
                     * 设置二手车市场
                     * @param _market 二手车市场
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
                     * 获取二手车市场纳税人识别号
                     * @return MarketTaxpayerNum 二手车市场纳税人识别号
                     * 
                     */
                    std::string GetMarketTaxpayerNum() const;

                    /**
                     * 设置二手车市场纳税人识别号
                     * @param _marketTaxpayerNum 二手车市场纳税人识别号
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
                     * 获取二手车市场地址
                     * @return MarketAddress 二手车市场地址
                     * 
                     */
                    std::string GetMarketAddress() const;

                    /**
                     * 设置二手车市场地址
                     * @param _marketAddress 二手车市场地址
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
                     * 获取二手车市场开户银行账号
                     * @return MarketBankAccount 二手车市场开户银行账号
                     * 
                     */
                    std::string GetMarketBankAccount() const;

                    /**
                     * 设置二手车市场开户银行账号
                     * @param _marketBankAccount 二手车市场开户银行账号
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
                     * 获取二手车市场电话
                     * @return MarketTel 二手车市场电话
                     * 
                     */
                    std::string GetMarketTel() const;

                    /**
                     * 设置二手车市场电话
                     * @param _marketTel 二手车市场电话
                     * 
                     */
                    void SetMarketTel(const std::string& _marketTel);

                    /**
                     * 判断参数 MarketTel 是否已赋值
                     * @return MarketTel 是否已赋值
                     * 
                     */
                    bool MarketTelHasBeenSet() const;

                private:

                    /**
                     * 所属税局
                     */
                    std::string m_taxBureau;
                    bool m_taxBureauHasBeenSet;

                    /**
                     * 买方单位/个人
                     */
                    std::string m_buyer;
                    bool m_buyerHasBeenSet;

                    /**
                     * 买方单位代码/身份证号码
                     */
                    std::string m_buyerNo;
                    bool m_buyerNoHasBeenSet;

                    /**
                     * 买方单位/个人地址
                     */
                    std::string m_buyerAddress;
                    bool m_buyerAddressHasBeenSet;

                    /**
                     * 买方单位电话
                     */
                    std::string m_buyerTel;
                    bool m_buyerTelHasBeenSet;

                    /**
                     * 卖方单位/个人
                     */
                    std::string m_seller;
                    bool m_sellerHasBeenSet;

                    /**
                     * 卖方单位代码/身份证号码
                     */
                    std::string m_sellerNo;
                    bool m_sellerNoHasBeenSet;

                    /**
                     * 卖方单位/个人地址
                     */
                    std::string m_sellerAddress;
                    bool m_sellerAddressHasBeenSet;

                    /**
                     * 卖方单位电话
                     */
                    std::string m_sellerTel;
                    bool m_sellerTelHasBeenSet;

                    /**
                     * 车牌照号
                     */
                    std::string m_vehicleLicenseNo;
                    bool m_vehicleLicenseNoHasBeenSet;

                    /**
                     * 登记证号
                     */
                    std::string m_registerNo;
                    bool m_registerNoHasBeenSet;

                    /**
                     * 车架号/车辆识别代码
                     */
                    std::string m_vehicleIdentifyNo;
                    bool m_vehicleIdentifyNoHasBeenSet;

                    /**
                     * 转入地车辆管理所名称
                     */
                    std::string m_managementOffice;
                    bool m_managementOfficeHasBeenSet;

                    /**
                     * 车价合计
                     */
                    std::string m_vehicleTotalPrice;
                    bool m_vehicleTotalPriceHasBeenSet;

                    /**
                     * 经营、拍卖单位
                     */
                    std::string m_auctioneer;
                    bool m_auctioneerHasBeenSet;

                    /**
                     * 经营、拍卖单位地址
                     */
                    std::string m_auctioneerAddress;
                    bool m_auctioneerAddressHasBeenSet;

                    /**
                     * 经营、拍卖单位纳税人识别号
                     */
                    std::string m_auctioneerTaxpayerNum;
                    bool m_auctioneerTaxpayerNumHasBeenSet;

                    /**
                     * 经营、拍卖单位开户银行、账号
                     */
                    std::string m_auctioneerBankAccount;
                    bool m_auctioneerBankAccountHasBeenSet;

                    /**
                     * 经营、拍卖单位电话
                     */
                    std::string m_auctioneerTel;
                    bool m_auctioneerTelHasBeenSet;

                    /**
                     * 二手车市场
                     */
                    std::string m_market;
                    bool m_marketHasBeenSet;

                    /**
                     * 二手车市场纳税人识别号
                     */
                    std::string m_marketTaxpayerNum;
                    bool m_marketTaxpayerNumHasBeenSet;

                    /**
                     * 二手车市场地址
                     */
                    std::string m_marketAddress;
                    bool m_marketAddressHasBeenSet;

                    /**
                     * 二手车市场开户银行账号
                     */
                    std::string m_marketBankAccount;
                    bool m_marketBankAccountHasBeenSet;

                    /**
                     * 二手车市场电话
                     */
                    std::string m_marketTel;
                    bool m_marketTelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_USEDVEHICLEINVOICEINFO_H_
