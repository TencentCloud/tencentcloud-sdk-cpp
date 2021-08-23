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

#include <tencentcloud/ocr/v20181119/model/UsedVehicleInvoiceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

UsedVehicleInvoiceInfo::UsedVehicleInvoiceInfo() :
    m_taxBureauHasBeenSet(false),
    m_buyerHasBeenSet(false),
    m_buyerNoHasBeenSet(false),
    m_buyerAddressHasBeenSet(false),
    m_buyerTelHasBeenSet(false),
    m_sellerHasBeenSet(false),
    m_sellerNoHasBeenSet(false),
    m_sellerAddressHasBeenSet(false),
    m_sellerTelHasBeenSet(false),
    m_vehicleLicenseNoHasBeenSet(false),
    m_registerNoHasBeenSet(false),
    m_vehicleIdentifyNoHasBeenSet(false),
    m_managementOfficeHasBeenSet(false),
    m_vehicleTotalPriceHasBeenSet(false),
    m_auctioneerHasBeenSet(false),
    m_auctioneerAddressHasBeenSet(false),
    m_auctioneerTaxpayerNumHasBeenSet(false),
    m_auctioneerBankAccountHasBeenSet(false),
    m_auctioneerTelHasBeenSet(false),
    m_marketHasBeenSet(false),
    m_marketTaxpayerNumHasBeenSet(false),
    m_marketAddressHasBeenSet(false),
    m_marketBankAccountHasBeenSet(false),
    m_marketTelHasBeenSet(false)
{
}

CoreInternalOutcome UsedVehicleInvoiceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaxBureau") && !value["TaxBureau"].IsNull())
    {
        if (!value["TaxBureau"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedVehicleInvoiceInfo.TaxBureau` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxBureau = string(value["TaxBureau"].GetString());
        m_taxBureauHasBeenSet = true;
    }

    if (value.HasMember("Buyer") && !value["Buyer"].IsNull())
    {
        if (!value["Buyer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedVehicleInvoiceInfo.Buyer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyer = string(value["Buyer"].GetString());
        m_buyerHasBeenSet = true;
    }

    if (value.HasMember("BuyerNo") && !value["BuyerNo"].IsNull())
    {
        if (!value["BuyerNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedVehicleInvoiceInfo.BuyerNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyerNo = string(value["BuyerNo"].GetString());
        m_buyerNoHasBeenSet = true;
    }

    if (value.HasMember("BuyerAddress") && !value["BuyerAddress"].IsNull())
    {
        if (!value["BuyerAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedVehicleInvoiceInfo.BuyerAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyerAddress = string(value["BuyerAddress"].GetString());
        m_buyerAddressHasBeenSet = true;
    }

    if (value.HasMember("BuyerTel") && !value["BuyerTel"].IsNull())
    {
        if (!value["BuyerTel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedVehicleInvoiceInfo.BuyerTel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyerTel = string(value["BuyerTel"].GetString());
        m_buyerTelHasBeenSet = true;
    }

    if (value.HasMember("Seller") && !value["Seller"].IsNull())
    {
        if (!value["Seller"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedVehicleInvoiceInfo.Seller` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seller = string(value["Seller"].GetString());
        m_sellerHasBeenSet = true;
    }

    if (value.HasMember("SellerNo") && !value["SellerNo"].IsNull())
    {
        if (!value["SellerNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedVehicleInvoiceInfo.SellerNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sellerNo = string(value["SellerNo"].GetString());
        m_sellerNoHasBeenSet = true;
    }

    if (value.HasMember("SellerAddress") && !value["SellerAddress"].IsNull())
    {
        if (!value["SellerAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedVehicleInvoiceInfo.SellerAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sellerAddress = string(value["SellerAddress"].GetString());
        m_sellerAddressHasBeenSet = true;
    }

    if (value.HasMember("SellerTel") && !value["SellerTel"].IsNull())
    {
        if (!value["SellerTel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedVehicleInvoiceInfo.SellerTel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sellerTel = string(value["SellerTel"].GetString());
        m_sellerTelHasBeenSet = true;
    }

    if (value.HasMember("VehicleLicenseNo") && !value["VehicleLicenseNo"].IsNull())
    {
        if (!value["VehicleLicenseNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedVehicleInvoiceInfo.VehicleLicenseNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vehicleLicenseNo = string(value["VehicleLicenseNo"].GetString());
        m_vehicleLicenseNoHasBeenSet = true;
    }

    if (value.HasMember("RegisterNo") && !value["RegisterNo"].IsNull())
    {
        if (!value["RegisterNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedVehicleInvoiceInfo.RegisterNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registerNo = string(value["RegisterNo"].GetString());
        m_registerNoHasBeenSet = true;
    }

    if (value.HasMember("VehicleIdentifyNo") && !value["VehicleIdentifyNo"].IsNull())
    {
        if (!value["VehicleIdentifyNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedVehicleInvoiceInfo.VehicleIdentifyNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vehicleIdentifyNo = string(value["VehicleIdentifyNo"].GetString());
        m_vehicleIdentifyNoHasBeenSet = true;
    }

    if (value.HasMember("ManagementOffice") && !value["ManagementOffice"].IsNull())
    {
        if (!value["ManagementOffice"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedVehicleInvoiceInfo.ManagementOffice` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_managementOffice = string(value["ManagementOffice"].GetString());
        m_managementOfficeHasBeenSet = true;
    }

    if (value.HasMember("VehicleTotalPrice") && !value["VehicleTotalPrice"].IsNull())
    {
        if (!value["VehicleTotalPrice"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedVehicleInvoiceInfo.VehicleTotalPrice` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vehicleTotalPrice = string(value["VehicleTotalPrice"].GetString());
        m_vehicleTotalPriceHasBeenSet = true;
    }

    if (value.HasMember("Auctioneer") && !value["Auctioneer"].IsNull())
    {
        if (!value["Auctioneer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedVehicleInvoiceInfo.Auctioneer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auctioneer = string(value["Auctioneer"].GetString());
        m_auctioneerHasBeenSet = true;
    }

    if (value.HasMember("AuctioneerAddress") && !value["AuctioneerAddress"].IsNull())
    {
        if (!value["AuctioneerAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedVehicleInvoiceInfo.AuctioneerAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auctioneerAddress = string(value["AuctioneerAddress"].GetString());
        m_auctioneerAddressHasBeenSet = true;
    }

    if (value.HasMember("AuctioneerTaxpayerNum") && !value["AuctioneerTaxpayerNum"].IsNull())
    {
        if (!value["AuctioneerTaxpayerNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedVehicleInvoiceInfo.AuctioneerTaxpayerNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auctioneerTaxpayerNum = string(value["AuctioneerTaxpayerNum"].GetString());
        m_auctioneerTaxpayerNumHasBeenSet = true;
    }

    if (value.HasMember("AuctioneerBankAccount") && !value["AuctioneerBankAccount"].IsNull())
    {
        if (!value["AuctioneerBankAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedVehicleInvoiceInfo.AuctioneerBankAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auctioneerBankAccount = string(value["AuctioneerBankAccount"].GetString());
        m_auctioneerBankAccountHasBeenSet = true;
    }

    if (value.HasMember("AuctioneerTel") && !value["AuctioneerTel"].IsNull())
    {
        if (!value["AuctioneerTel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedVehicleInvoiceInfo.AuctioneerTel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auctioneerTel = string(value["AuctioneerTel"].GetString());
        m_auctioneerTelHasBeenSet = true;
    }

    if (value.HasMember("Market") && !value["Market"].IsNull())
    {
        if (!value["Market"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedVehicleInvoiceInfo.Market` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_market = string(value["Market"].GetString());
        m_marketHasBeenSet = true;
    }

    if (value.HasMember("MarketTaxpayerNum") && !value["MarketTaxpayerNum"].IsNull())
    {
        if (!value["MarketTaxpayerNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedVehicleInvoiceInfo.MarketTaxpayerNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_marketTaxpayerNum = string(value["MarketTaxpayerNum"].GetString());
        m_marketTaxpayerNumHasBeenSet = true;
    }

    if (value.HasMember("MarketAddress") && !value["MarketAddress"].IsNull())
    {
        if (!value["MarketAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedVehicleInvoiceInfo.MarketAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_marketAddress = string(value["MarketAddress"].GetString());
        m_marketAddressHasBeenSet = true;
    }

    if (value.HasMember("MarketBankAccount") && !value["MarketBankAccount"].IsNull())
    {
        if (!value["MarketBankAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedVehicleInvoiceInfo.MarketBankAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_marketBankAccount = string(value["MarketBankAccount"].GetString());
        m_marketBankAccountHasBeenSet = true;
    }

    if (value.HasMember("MarketTel") && !value["MarketTel"].IsNull())
    {
        if (!value["MarketTel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedVehicleInvoiceInfo.MarketTel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_marketTel = string(value["MarketTel"].GetString());
        m_marketTelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UsedVehicleInvoiceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taxBureauHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxBureau";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxBureau.c_str(), allocator).Move(), allocator);
    }

    if (m_buyerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Buyer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyer.c_str(), allocator).Move(), allocator);
    }

    if (m_buyerNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyerNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyerNo.c_str(), allocator).Move(), allocator);
    }

    if (m_buyerAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyerAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyerAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_buyerTelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyerTel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyerTel.c_str(), allocator).Move(), allocator);
    }

    if (m_sellerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seller";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_seller.c_str(), allocator).Move(), allocator);
    }

    if (m_sellerNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SellerNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sellerNo.c_str(), allocator).Move(), allocator);
    }

    if (m_sellerAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SellerAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sellerAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_sellerTelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SellerTel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sellerTel.c_str(), allocator).Move(), allocator);
    }

    if (m_vehicleLicenseNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VehicleLicenseNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vehicleLicenseNo.c_str(), allocator).Move(), allocator);
    }

    if (m_registerNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registerNo.c_str(), allocator).Move(), allocator);
    }

    if (m_vehicleIdentifyNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VehicleIdentifyNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vehicleIdentifyNo.c_str(), allocator).Move(), allocator);
    }

    if (m_managementOfficeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagementOffice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_managementOffice.c_str(), allocator).Move(), allocator);
    }

    if (m_vehicleTotalPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VehicleTotalPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vehicleTotalPrice.c_str(), allocator).Move(), allocator);
    }

    if (m_auctioneerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Auctioneer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auctioneer.c_str(), allocator).Move(), allocator);
    }

    if (m_auctioneerAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuctioneerAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auctioneerAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_auctioneerTaxpayerNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuctioneerTaxpayerNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auctioneerTaxpayerNum.c_str(), allocator).Move(), allocator);
    }

    if (m_auctioneerBankAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuctioneerBankAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auctioneerBankAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_auctioneerTelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuctioneerTel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auctioneerTel.c_str(), allocator).Move(), allocator);
    }

    if (m_marketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Market";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_market.c_str(), allocator).Move(), allocator);
    }

    if (m_marketTaxpayerNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarketTaxpayerNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_marketTaxpayerNum.c_str(), allocator).Move(), allocator);
    }

    if (m_marketAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarketAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_marketAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_marketBankAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarketBankAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_marketBankAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_marketTelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarketTel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_marketTel.c_str(), allocator).Move(), allocator);
    }

}


string UsedVehicleInvoiceInfo::GetTaxBureau() const
{
    return m_taxBureau;
}

void UsedVehicleInvoiceInfo::SetTaxBureau(const string& _taxBureau)
{
    m_taxBureau = _taxBureau;
    m_taxBureauHasBeenSet = true;
}

bool UsedVehicleInvoiceInfo::TaxBureauHasBeenSet() const
{
    return m_taxBureauHasBeenSet;
}

string UsedVehicleInvoiceInfo::GetBuyer() const
{
    return m_buyer;
}

void UsedVehicleInvoiceInfo::SetBuyer(const string& _buyer)
{
    m_buyer = _buyer;
    m_buyerHasBeenSet = true;
}

bool UsedVehicleInvoiceInfo::BuyerHasBeenSet() const
{
    return m_buyerHasBeenSet;
}

string UsedVehicleInvoiceInfo::GetBuyerNo() const
{
    return m_buyerNo;
}

void UsedVehicleInvoiceInfo::SetBuyerNo(const string& _buyerNo)
{
    m_buyerNo = _buyerNo;
    m_buyerNoHasBeenSet = true;
}

bool UsedVehicleInvoiceInfo::BuyerNoHasBeenSet() const
{
    return m_buyerNoHasBeenSet;
}

string UsedVehicleInvoiceInfo::GetBuyerAddress() const
{
    return m_buyerAddress;
}

void UsedVehicleInvoiceInfo::SetBuyerAddress(const string& _buyerAddress)
{
    m_buyerAddress = _buyerAddress;
    m_buyerAddressHasBeenSet = true;
}

bool UsedVehicleInvoiceInfo::BuyerAddressHasBeenSet() const
{
    return m_buyerAddressHasBeenSet;
}

string UsedVehicleInvoiceInfo::GetBuyerTel() const
{
    return m_buyerTel;
}

void UsedVehicleInvoiceInfo::SetBuyerTel(const string& _buyerTel)
{
    m_buyerTel = _buyerTel;
    m_buyerTelHasBeenSet = true;
}

bool UsedVehicleInvoiceInfo::BuyerTelHasBeenSet() const
{
    return m_buyerTelHasBeenSet;
}

string UsedVehicleInvoiceInfo::GetSeller() const
{
    return m_seller;
}

void UsedVehicleInvoiceInfo::SetSeller(const string& _seller)
{
    m_seller = _seller;
    m_sellerHasBeenSet = true;
}

bool UsedVehicleInvoiceInfo::SellerHasBeenSet() const
{
    return m_sellerHasBeenSet;
}

string UsedVehicleInvoiceInfo::GetSellerNo() const
{
    return m_sellerNo;
}

void UsedVehicleInvoiceInfo::SetSellerNo(const string& _sellerNo)
{
    m_sellerNo = _sellerNo;
    m_sellerNoHasBeenSet = true;
}

bool UsedVehicleInvoiceInfo::SellerNoHasBeenSet() const
{
    return m_sellerNoHasBeenSet;
}

string UsedVehicleInvoiceInfo::GetSellerAddress() const
{
    return m_sellerAddress;
}

void UsedVehicleInvoiceInfo::SetSellerAddress(const string& _sellerAddress)
{
    m_sellerAddress = _sellerAddress;
    m_sellerAddressHasBeenSet = true;
}

bool UsedVehicleInvoiceInfo::SellerAddressHasBeenSet() const
{
    return m_sellerAddressHasBeenSet;
}

string UsedVehicleInvoiceInfo::GetSellerTel() const
{
    return m_sellerTel;
}

void UsedVehicleInvoiceInfo::SetSellerTel(const string& _sellerTel)
{
    m_sellerTel = _sellerTel;
    m_sellerTelHasBeenSet = true;
}

bool UsedVehicleInvoiceInfo::SellerTelHasBeenSet() const
{
    return m_sellerTelHasBeenSet;
}

string UsedVehicleInvoiceInfo::GetVehicleLicenseNo() const
{
    return m_vehicleLicenseNo;
}

void UsedVehicleInvoiceInfo::SetVehicleLicenseNo(const string& _vehicleLicenseNo)
{
    m_vehicleLicenseNo = _vehicleLicenseNo;
    m_vehicleLicenseNoHasBeenSet = true;
}

bool UsedVehicleInvoiceInfo::VehicleLicenseNoHasBeenSet() const
{
    return m_vehicleLicenseNoHasBeenSet;
}

string UsedVehicleInvoiceInfo::GetRegisterNo() const
{
    return m_registerNo;
}

void UsedVehicleInvoiceInfo::SetRegisterNo(const string& _registerNo)
{
    m_registerNo = _registerNo;
    m_registerNoHasBeenSet = true;
}

bool UsedVehicleInvoiceInfo::RegisterNoHasBeenSet() const
{
    return m_registerNoHasBeenSet;
}

string UsedVehicleInvoiceInfo::GetVehicleIdentifyNo() const
{
    return m_vehicleIdentifyNo;
}

void UsedVehicleInvoiceInfo::SetVehicleIdentifyNo(const string& _vehicleIdentifyNo)
{
    m_vehicleIdentifyNo = _vehicleIdentifyNo;
    m_vehicleIdentifyNoHasBeenSet = true;
}

bool UsedVehicleInvoiceInfo::VehicleIdentifyNoHasBeenSet() const
{
    return m_vehicleIdentifyNoHasBeenSet;
}

string UsedVehicleInvoiceInfo::GetManagementOffice() const
{
    return m_managementOffice;
}

void UsedVehicleInvoiceInfo::SetManagementOffice(const string& _managementOffice)
{
    m_managementOffice = _managementOffice;
    m_managementOfficeHasBeenSet = true;
}

bool UsedVehicleInvoiceInfo::ManagementOfficeHasBeenSet() const
{
    return m_managementOfficeHasBeenSet;
}

string UsedVehicleInvoiceInfo::GetVehicleTotalPrice() const
{
    return m_vehicleTotalPrice;
}

void UsedVehicleInvoiceInfo::SetVehicleTotalPrice(const string& _vehicleTotalPrice)
{
    m_vehicleTotalPrice = _vehicleTotalPrice;
    m_vehicleTotalPriceHasBeenSet = true;
}

bool UsedVehicleInvoiceInfo::VehicleTotalPriceHasBeenSet() const
{
    return m_vehicleTotalPriceHasBeenSet;
}

string UsedVehicleInvoiceInfo::GetAuctioneer() const
{
    return m_auctioneer;
}

void UsedVehicleInvoiceInfo::SetAuctioneer(const string& _auctioneer)
{
    m_auctioneer = _auctioneer;
    m_auctioneerHasBeenSet = true;
}

bool UsedVehicleInvoiceInfo::AuctioneerHasBeenSet() const
{
    return m_auctioneerHasBeenSet;
}

string UsedVehicleInvoiceInfo::GetAuctioneerAddress() const
{
    return m_auctioneerAddress;
}

void UsedVehicleInvoiceInfo::SetAuctioneerAddress(const string& _auctioneerAddress)
{
    m_auctioneerAddress = _auctioneerAddress;
    m_auctioneerAddressHasBeenSet = true;
}

bool UsedVehicleInvoiceInfo::AuctioneerAddressHasBeenSet() const
{
    return m_auctioneerAddressHasBeenSet;
}

string UsedVehicleInvoiceInfo::GetAuctioneerTaxpayerNum() const
{
    return m_auctioneerTaxpayerNum;
}

void UsedVehicleInvoiceInfo::SetAuctioneerTaxpayerNum(const string& _auctioneerTaxpayerNum)
{
    m_auctioneerTaxpayerNum = _auctioneerTaxpayerNum;
    m_auctioneerTaxpayerNumHasBeenSet = true;
}

bool UsedVehicleInvoiceInfo::AuctioneerTaxpayerNumHasBeenSet() const
{
    return m_auctioneerTaxpayerNumHasBeenSet;
}

string UsedVehicleInvoiceInfo::GetAuctioneerBankAccount() const
{
    return m_auctioneerBankAccount;
}

void UsedVehicleInvoiceInfo::SetAuctioneerBankAccount(const string& _auctioneerBankAccount)
{
    m_auctioneerBankAccount = _auctioneerBankAccount;
    m_auctioneerBankAccountHasBeenSet = true;
}

bool UsedVehicleInvoiceInfo::AuctioneerBankAccountHasBeenSet() const
{
    return m_auctioneerBankAccountHasBeenSet;
}

string UsedVehicleInvoiceInfo::GetAuctioneerTel() const
{
    return m_auctioneerTel;
}

void UsedVehicleInvoiceInfo::SetAuctioneerTel(const string& _auctioneerTel)
{
    m_auctioneerTel = _auctioneerTel;
    m_auctioneerTelHasBeenSet = true;
}

bool UsedVehicleInvoiceInfo::AuctioneerTelHasBeenSet() const
{
    return m_auctioneerTelHasBeenSet;
}

string UsedVehicleInvoiceInfo::GetMarket() const
{
    return m_market;
}

void UsedVehicleInvoiceInfo::SetMarket(const string& _market)
{
    m_market = _market;
    m_marketHasBeenSet = true;
}

bool UsedVehicleInvoiceInfo::MarketHasBeenSet() const
{
    return m_marketHasBeenSet;
}

string UsedVehicleInvoiceInfo::GetMarketTaxpayerNum() const
{
    return m_marketTaxpayerNum;
}

void UsedVehicleInvoiceInfo::SetMarketTaxpayerNum(const string& _marketTaxpayerNum)
{
    m_marketTaxpayerNum = _marketTaxpayerNum;
    m_marketTaxpayerNumHasBeenSet = true;
}

bool UsedVehicleInvoiceInfo::MarketTaxpayerNumHasBeenSet() const
{
    return m_marketTaxpayerNumHasBeenSet;
}

string UsedVehicleInvoiceInfo::GetMarketAddress() const
{
    return m_marketAddress;
}

void UsedVehicleInvoiceInfo::SetMarketAddress(const string& _marketAddress)
{
    m_marketAddress = _marketAddress;
    m_marketAddressHasBeenSet = true;
}

bool UsedVehicleInvoiceInfo::MarketAddressHasBeenSet() const
{
    return m_marketAddressHasBeenSet;
}

string UsedVehicleInvoiceInfo::GetMarketBankAccount() const
{
    return m_marketBankAccount;
}

void UsedVehicleInvoiceInfo::SetMarketBankAccount(const string& _marketBankAccount)
{
    m_marketBankAccount = _marketBankAccount;
    m_marketBankAccountHasBeenSet = true;
}

bool UsedVehicleInvoiceInfo::MarketBankAccountHasBeenSet() const
{
    return m_marketBankAccountHasBeenSet;
}

string UsedVehicleInvoiceInfo::GetMarketTel() const
{
    return m_marketTel;
}

void UsedVehicleInvoiceInfo::SetMarketTel(const string& _marketTel)
{
    m_marketTel = _marketTel;
    m_marketTelHasBeenSet = true;
}

bool UsedVehicleInvoiceInfo::MarketTelHasBeenSet() const
{
    return m_marketTelHasBeenSet;
}

