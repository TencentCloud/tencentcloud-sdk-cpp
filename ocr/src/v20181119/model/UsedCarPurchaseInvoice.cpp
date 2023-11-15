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

#include <tencentcloud/ocr/v20181119/model/UsedCarPurchaseInvoice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

UsedCarPurchaseInvoice::UsedCarPurchaseInvoice() :
    m_titleHasBeenSet(false),
    m_qRCodeMarkHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_numberHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_totalCnHasBeenSet(false),
    m_sellerHasBeenSet(false),
    m_sellerTelHasBeenSet(false),
    m_sellerTaxIDHasBeenSet(false),
    m_sellerAddressHasBeenSet(false),
    m_buyerHasBeenSet(false),
    m_buyerIDHasBeenSet(false),
    m_buyerAddressHasBeenSet(false),
    m_buyerTelHasBeenSet(false),
    m_companyNameHasBeenSet(false),
    m_companyTaxIDHasBeenSet(false),
    m_companyBankAccountHasBeenSet(false),
    m_companyTelHasBeenSet(false),
    m_companyAddressHasBeenSet(false),
    m_transferAdministrationNameHasBeenSet(false),
    m_licensePlateHasBeenSet(false),
    m_registrationNumberHasBeenSet(false),
    m_vINHasBeenSet(false),
    m_vehicleModelHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_vehicleTypeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_formTypeHasBeenSet(false),
    m_formNameHasBeenSet(false),
    m_companySealMarkHasBeenSet(false),
    m_auctionOrgNameHasBeenSet(false),
    m_auctionOrgAddressHasBeenSet(false),
    m_auctionOrgTaxIDHasBeenSet(false),
    m_auctionOrgBankAccountHasBeenSet(false),
    m_auctionOrgPhoneHasBeenSet(false),
    m_issuerHasBeenSet(false),
    m_taxCodeHasBeenSet(false),
    m_machineSerialNumberHasBeenSet(false),
    m_machineCodeHasBeenSet(false),
    m_machineNumberHasBeenSet(false)
{
}

CoreInternalOutcome UsedCarPurchaseInvoice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("QRCodeMark") && !value["QRCodeMark"].IsNull())
    {
        if (!value["QRCodeMark"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.QRCodeMark` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_qRCodeMark = value["QRCodeMark"].GetInt64();
        m_qRCodeMarkHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Number") && !value["Number"].IsNull())
    {
        if (!value["Number"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.Number` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_number = string(value["Number"].GetString());
        m_numberHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.Total` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_total = string(value["Total"].GetString());
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("TotalCn") && !value["TotalCn"].IsNull())
    {
        if (!value["TotalCn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.TotalCn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCn = string(value["TotalCn"].GetString());
        m_totalCnHasBeenSet = true;
    }

    if (value.HasMember("Seller") && !value["Seller"].IsNull())
    {
        if (!value["Seller"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.Seller` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seller = string(value["Seller"].GetString());
        m_sellerHasBeenSet = true;
    }

    if (value.HasMember("SellerTel") && !value["SellerTel"].IsNull())
    {
        if (!value["SellerTel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.SellerTel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sellerTel = string(value["SellerTel"].GetString());
        m_sellerTelHasBeenSet = true;
    }

    if (value.HasMember("SellerTaxID") && !value["SellerTaxID"].IsNull())
    {
        if (!value["SellerTaxID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.SellerTaxID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sellerTaxID = string(value["SellerTaxID"].GetString());
        m_sellerTaxIDHasBeenSet = true;
    }

    if (value.HasMember("SellerAddress") && !value["SellerAddress"].IsNull())
    {
        if (!value["SellerAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.SellerAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sellerAddress = string(value["SellerAddress"].GetString());
        m_sellerAddressHasBeenSet = true;
    }

    if (value.HasMember("Buyer") && !value["Buyer"].IsNull())
    {
        if (!value["Buyer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.Buyer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyer = string(value["Buyer"].GetString());
        m_buyerHasBeenSet = true;
    }

    if (value.HasMember("BuyerID") && !value["BuyerID"].IsNull())
    {
        if (!value["BuyerID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.BuyerID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyerID = string(value["BuyerID"].GetString());
        m_buyerIDHasBeenSet = true;
    }

    if (value.HasMember("BuyerAddress") && !value["BuyerAddress"].IsNull())
    {
        if (!value["BuyerAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.BuyerAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyerAddress = string(value["BuyerAddress"].GetString());
        m_buyerAddressHasBeenSet = true;
    }

    if (value.HasMember("BuyerTel") && !value["BuyerTel"].IsNull())
    {
        if (!value["BuyerTel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.BuyerTel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyerTel = string(value["BuyerTel"].GetString());
        m_buyerTelHasBeenSet = true;
    }

    if (value.HasMember("CompanyName") && !value["CompanyName"].IsNull())
    {
        if (!value["CompanyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.CompanyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyName = string(value["CompanyName"].GetString());
        m_companyNameHasBeenSet = true;
    }

    if (value.HasMember("CompanyTaxID") && !value["CompanyTaxID"].IsNull())
    {
        if (!value["CompanyTaxID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.CompanyTaxID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyTaxID = string(value["CompanyTaxID"].GetString());
        m_companyTaxIDHasBeenSet = true;
    }

    if (value.HasMember("CompanyBankAccount") && !value["CompanyBankAccount"].IsNull())
    {
        if (!value["CompanyBankAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.CompanyBankAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyBankAccount = string(value["CompanyBankAccount"].GetString());
        m_companyBankAccountHasBeenSet = true;
    }

    if (value.HasMember("CompanyTel") && !value["CompanyTel"].IsNull())
    {
        if (!value["CompanyTel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.CompanyTel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyTel = string(value["CompanyTel"].GetString());
        m_companyTelHasBeenSet = true;
    }

    if (value.HasMember("CompanyAddress") && !value["CompanyAddress"].IsNull())
    {
        if (!value["CompanyAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.CompanyAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyAddress = string(value["CompanyAddress"].GetString());
        m_companyAddressHasBeenSet = true;
    }

    if (value.HasMember("TransferAdministrationName") && !value["TransferAdministrationName"].IsNull())
    {
        if (!value["TransferAdministrationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.TransferAdministrationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transferAdministrationName = string(value["TransferAdministrationName"].GetString());
        m_transferAdministrationNameHasBeenSet = true;
    }

    if (value.HasMember("LicensePlate") && !value["LicensePlate"].IsNull())
    {
        if (!value["LicensePlate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.LicensePlate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licensePlate = string(value["LicensePlate"].GetString());
        m_licensePlateHasBeenSet = true;
    }

    if (value.HasMember("RegistrationNumber") && !value["RegistrationNumber"].IsNull())
    {
        if (!value["RegistrationNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.RegistrationNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registrationNumber = string(value["RegistrationNumber"].GetString());
        m_registrationNumberHasBeenSet = true;
    }

    if (value.HasMember("VIN") && !value["VIN"].IsNull())
    {
        if (!value["VIN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.VIN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vIN = string(value["VIN"].GetString());
        m_vINHasBeenSet = true;
    }

    if (value.HasMember("VehicleModel") && !value["VehicleModel"].IsNull())
    {
        if (!value["VehicleModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.VehicleModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vehicleModel = string(value["VehicleModel"].GetString());
        m_vehicleModelHasBeenSet = true;
    }

    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.Kind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kind = string(value["Kind"].GetString());
        m_kindHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("VehicleType") && !value["VehicleType"].IsNull())
    {
        if (!value["VehicleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.VehicleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vehicleType = string(value["VehicleType"].GetString());
        m_vehicleTypeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("FormType") && !value["FormType"].IsNull())
    {
        if (!value["FormType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.FormType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_formType = string(value["FormType"].GetString());
        m_formTypeHasBeenSet = true;
    }

    if (value.HasMember("FormName") && !value["FormName"].IsNull())
    {
        if (!value["FormName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.FormName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_formName = string(value["FormName"].GetString());
        m_formNameHasBeenSet = true;
    }

    if (value.HasMember("CompanySealMark") && !value["CompanySealMark"].IsNull())
    {
        if (!value["CompanySealMark"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.CompanySealMark` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_companySealMark = value["CompanySealMark"].GetInt64();
        m_companySealMarkHasBeenSet = true;
    }

    if (value.HasMember("AuctionOrgName") && !value["AuctionOrgName"].IsNull())
    {
        if (!value["AuctionOrgName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.AuctionOrgName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auctionOrgName = string(value["AuctionOrgName"].GetString());
        m_auctionOrgNameHasBeenSet = true;
    }

    if (value.HasMember("AuctionOrgAddress") && !value["AuctionOrgAddress"].IsNull())
    {
        if (!value["AuctionOrgAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.AuctionOrgAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auctionOrgAddress = string(value["AuctionOrgAddress"].GetString());
        m_auctionOrgAddressHasBeenSet = true;
    }

    if (value.HasMember("AuctionOrgTaxID") && !value["AuctionOrgTaxID"].IsNull())
    {
        if (!value["AuctionOrgTaxID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.AuctionOrgTaxID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auctionOrgTaxID = string(value["AuctionOrgTaxID"].GetString());
        m_auctionOrgTaxIDHasBeenSet = true;
    }

    if (value.HasMember("AuctionOrgBankAccount") && !value["AuctionOrgBankAccount"].IsNull())
    {
        if (!value["AuctionOrgBankAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.AuctionOrgBankAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auctionOrgBankAccount = string(value["AuctionOrgBankAccount"].GetString());
        m_auctionOrgBankAccountHasBeenSet = true;
    }

    if (value.HasMember("AuctionOrgPhone") && !value["AuctionOrgPhone"].IsNull())
    {
        if (!value["AuctionOrgPhone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.AuctionOrgPhone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auctionOrgPhone = string(value["AuctionOrgPhone"].GetString());
        m_auctionOrgPhoneHasBeenSet = true;
    }

    if (value.HasMember("Issuer") && !value["Issuer"].IsNull())
    {
        if (!value["Issuer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.Issuer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuer = string(value["Issuer"].GetString());
        m_issuerHasBeenSet = true;
    }

    if (value.HasMember("TaxCode") && !value["TaxCode"].IsNull())
    {
        if (!value["TaxCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.TaxCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxCode = string(value["TaxCode"].GetString());
        m_taxCodeHasBeenSet = true;
    }

    if (value.HasMember("MachineSerialNumber") && !value["MachineSerialNumber"].IsNull())
    {
        if (!value["MachineSerialNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.MachineSerialNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineSerialNumber = string(value["MachineSerialNumber"].GetString());
        m_machineSerialNumberHasBeenSet = true;
    }

    if (value.HasMember("MachineCode") && !value["MachineCode"].IsNull())
    {
        if (!value["MachineCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.MachineCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineCode = string(value["MachineCode"].GetString());
        m_machineCodeHasBeenSet = true;
    }

    if (value.HasMember("MachineNumber") && !value["MachineNumber"].IsNull())
    {
        if (!value["MachineNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCarPurchaseInvoice.MachineNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineNumber = string(value["MachineNumber"].GetString());
        m_machineNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UsedCarPurchaseInvoice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_qRCodeMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QRCodeMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qRCodeMark, allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_numberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_number.c_str(), allocator).Move(), allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_total.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalCn.c_str(), allocator).Move(), allocator);
    }

    if (m_sellerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seller";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_seller.c_str(), allocator).Move(), allocator);
    }

    if (m_sellerTelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SellerTel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sellerTel.c_str(), allocator).Move(), allocator);
    }

    if (m_sellerTaxIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SellerTaxID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sellerTaxID.c_str(), allocator).Move(), allocator);
    }

    if (m_sellerAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SellerAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sellerAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_buyerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Buyer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyer.c_str(), allocator).Move(), allocator);
    }

    if (m_buyerIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyerID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyerID.c_str(), allocator).Move(), allocator);
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

    if (m_companyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyName.c_str(), allocator).Move(), allocator);
    }

    if (m_companyTaxIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyTaxID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyTaxID.c_str(), allocator).Move(), allocator);
    }

    if (m_companyBankAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyBankAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyBankAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_companyTelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyTel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyTel.c_str(), allocator).Move(), allocator);
    }

    if (m_companyAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_transferAdministrationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferAdministrationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transferAdministrationName.c_str(), allocator).Move(), allocator);
    }

    if (m_licensePlateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicensePlate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licensePlate.c_str(), allocator).Move(), allocator);
    }

    if (m_registrationNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistrationNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registrationNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_vINHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VIN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vIN.c_str(), allocator).Move(), allocator);
    }

    if (m_vehicleModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VehicleModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vehicleModel.c_str(), allocator).Move(), allocator);
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kind.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_vehicleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VehicleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vehicleType.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_formTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FormType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_formType.c_str(), allocator).Move(), allocator);
    }

    if (m_formNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FormName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_formName.c_str(), allocator).Move(), allocator);
    }

    if (m_companySealMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanySealMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_companySealMark, allocator);
    }

    if (m_auctionOrgNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuctionOrgName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auctionOrgName.c_str(), allocator).Move(), allocator);
    }

    if (m_auctionOrgAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuctionOrgAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auctionOrgAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_auctionOrgTaxIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuctionOrgTaxID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auctionOrgTaxID.c_str(), allocator).Move(), allocator);
    }

    if (m_auctionOrgBankAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuctionOrgBankAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auctionOrgBankAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_auctionOrgPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuctionOrgPhone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auctionOrgPhone.c_str(), allocator).Move(), allocator);
    }

    if (m_issuerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Issuer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuer.c_str(), allocator).Move(), allocator);
    }

    if (m_taxCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxCode.c_str(), allocator).Move(), allocator);
    }

    if (m_machineSerialNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineSerialNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineSerialNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_machineCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineCode.c_str(), allocator).Move(), allocator);
    }

    if (m_machineNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineNumber.c_str(), allocator).Move(), allocator);
    }

}


string UsedCarPurchaseInvoice::GetTitle() const
{
    return m_title;
}

void UsedCarPurchaseInvoice::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

int64_t UsedCarPurchaseInvoice::GetQRCodeMark() const
{
    return m_qRCodeMark;
}

void UsedCarPurchaseInvoice::SetQRCodeMark(const int64_t& _qRCodeMark)
{
    m_qRCodeMark = _qRCodeMark;
    m_qRCodeMarkHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::QRCodeMarkHasBeenSet() const
{
    return m_qRCodeMarkHasBeenSet;
}

string UsedCarPurchaseInvoice::GetCode() const
{
    return m_code;
}

void UsedCarPurchaseInvoice::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string UsedCarPurchaseInvoice::GetNumber() const
{
    return m_number;
}

void UsedCarPurchaseInvoice::SetNumber(const string& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

string UsedCarPurchaseInvoice::GetDate() const
{
    return m_date;
}

void UsedCarPurchaseInvoice::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string UsedCarPurchaseInvoice::GetTotal() const
{
    return m_total;
}

void UsedCarPurchaseInvoice::SetTotal(const string& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

string UsedCarPurchaseInvoice::GetTotalCn() const
{
    return m_totalCn;
}

void UsedCarPurchaseInvoice::SetTotalCn(const string& _totalCn)
{
    m_totalCn = _totalCn;
    m_totalCnHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::TotalCnHasBeenSet() const
{
    return m_totalCnHasBeenSet;
}

string UsedCarPurchaseInvoice::GetSeller() const
{
    return m_seller;
}

void UsedCarPurchaseInvoice::SetSeller(const string& _seller)
{
    m_seller = _seller;
    m_sellerHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::SellerHasBeenSet() const
{
    return m_sellerHasBeenSet;
}

string UsedCarPurchaseInvoice::GetSellerTel() const
{
    return m_sellerTel;
}

void UsedCarPurchaseInvoice::SetSellerTel(const string& _sellerTel)
{
    m_sellerTel = _sellerTel;
    m_sellerTelHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::SellerTelHasBeenSet() const
{
    return m_sellerTelHasBeenSet;
}

string UsedCarPurchaseInvoice::GetSellerTaxID() const
{
    return m_sellerTaxID;
}

void UsedCarPurchaseInvoice::SetSellerTaxID(const string& _sellerTaxID)
{
    m_sellerTaxID = _sellerTaxID;
    m_sellerTaxIDHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::SellerTaxIDHasBeenSet() const
{
    return m_sellerTaxIDHasBeenSet;
}

string UsedCarPurchaseInvoice::GetSellerAddress() const
{
    return m_sellerAddress;
}

void UsedCarPurchaseInvoice::SetSellerAddress(const string& _sellerAddress)
{
    m_sellerAddress = _sellerAddress;
    m_sellerAddressHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::SellerAddressHasBeenSet() const
{
    return m_sellerAddressHasBeenSet;
}

string UsedCarPurchaseInvoice::GetBuyer() const
{
    return m_buyer;
}

void UsedCarPurchaseInvoice::SetBuyer(const string& _buyer)
{
    m_buyer = _buyer;
    m_buyerHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::BuyerHasBeenSet() const
{
    return m_buyerHasBeenSet;
}

string UsedCarPurchaseInvoice::GetBuyerID() const
{
    return m_buyerID;
}

void UsedCarPurchaseInvoice::SetBuyerID(const string& _buyerID)
{
    m_buyerID = _buyerID;
    m_buyerIDHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::BuyerIDHasBeenSet() const
{
    return m_buyerIDHasBeenSet;
}

string UsedCarPurchaseInvoice::GetBuyerAddress() const
{
    return m_buyerAddress;
}

void UsedCarPurchaseInvoice::SetBuyerAddress(const string& _buyerAddress)
{
    m_buyerAddress = _buyerAddress;
    m_buyerAddressHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::BuyerAddressHasBeenSet() const
{
    return m_buyerAddressHasBeenSet;
}

string UsedCarPurchaseInvoice::GetBuyerTel() const
{
    return m_buyerTel;
}

void UsedCarPurchaseInvoice::SetBuyerTel(const string& _buyerTel)
{
    m_buyerTel = _buyerTel;
    m_buyerTelHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::BuyerTelHasBeenSet() const
{
    return m_buyerTelHasBeenSet;
}

string UsedCarPurchaseInvoice::GetCompanyName() const
{
    return m_companyName;
}

void UsedCarPurchaseInvoice::SetCompanyName(const string& _companyName)
{
    m_companyName = _companyName;
    m_companyNameHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::CompanyNameHasBeenSet() const
{
    return m_companyNameHasBeenSet;
}

string UsedCarPurchaseInvoice::GetCompanyTaxID() const
{
    return m_companyTaxID;
}

void UsedCarPurchaseInvoice::SetCompanyTaxID(const string& _companyTaxID)
{
    m_companyTaxID = _companyTaxID;
    m_companyTaxIDHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::CompanyTaxIDHasBeenSet() const
{
    return m_companyTaxIDHasBeenSet;
}

string UsedCarPurchaseInvoice::GetCompanyBankAccount() const
{
    return m_companyBankAccount;
}

void UsedCarPurchaseInvoice::SetCompanyBankAccount(const string& _companyBankAccount)
{
    m_companyBankAccount = _companyBankAccount;
    m_companyBankAccountHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::CompanyBankAccountHasBeenSet() const
{
    return m_companyBankAccountHasBeenSet;
}

string UsedCarPurchaseInvoice::GetCompanyTel() const
{
    return m_companyTel;
}

void UsedCarPurchaseInvoice::SetCompanyTel(const string& _companyTel)
{
    m_companyTel = _companyTel;
    m_companyTelHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::CompanyTelHasBeenSet() const
{
    return m_companyTelHasBeenSet;
}

string UsedCarPurchaseInvoice::GetCompanyAddress() const
{
    return m_companyAddress;
}

void UsedCarPurchaseInvoice::SetCompanyAddress(const string& _companyAddress)
{
    m_companyAddress = _companyAddress;
    m_companyAddressHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::CompanyAddressHasBeenSet() const
{
    return m_companyAddressHasBeenSet;
}

string UsedCarPurchaseInvoice::GetTransferAdministrationName() const
{
    return m_transferAdministrationName;
}

void UsedCarPurchaseInvoice::SetTransferAdministrationName(const string& _transferAdministrationName)
{
    m_transferAdministrationName = _transferAdministrationName;
    m_transferAdministrationNameHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::TransferAdministrationNameHasBeenSet() const
{
    return m_transferAdministrationNameHasBeenSet;
}

string UsedCarPurchaseInvoice::GetLicensePlate() const
{
    return m_licensePlate;
}

void UsedCarPurchaseInvoice::SetLicensePlate(const string& _licensePlate)
{
    m_licensePlate = _licensePlate;
    m_licensePlateHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::LicensePlateHasBeenSet() const
{
    return m_licensePlateHasBeenSet;
}

string UsedCarPurchaseInvoice::GetRegistrationNumber() const
{
    return m_registrationNumber;
}

void UsedCarPurchaseInvoice::SetRegistrationNumber(const string& _registrationNumber)
{
    m_registrationNumber = _registrationNumber;
    m_registrationNumberHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::RegistrationNumberHasBeenSet() const
{
    return m_registrationNumberHasBeenSet;
}

string UsedCarPurchaseInvoice::GetVIN() const
{
    return m_vIN;
}

void UsedCarPurchaseInvoice::SetVIN(const string& _vIN)
{
    m_vIN = _vIN;
    m_vINHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::VINHasBeenSet() const
{
    return m_vINHasBeenSet;
}

string UsedCarPurchaseInvoice::GetVehicleModel() const
{
    return m_vehicleModel;
}

void UsedCarPurchaseInvoice::SetVehicleModel(const string& _vehicleModel)
{
    m_vehicleModel = _vehicleModel;
    m_vehicleModelHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::VehicleModelHasBeenSet() const
{
    return m_vehicleModelHasBeenSet;
}

string UsedCarPurchaseInvoice::GetKind() const
{
    return m_kind;
}

void UsedCarPurchaseInvoice::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string UsedCarPurchaseInvoice::GetProvince() const
{
    return m_province;
}

void UsedCarPurchaseInvoice::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string UsedCarPurchaseInvoice::GetCity() const
{
    return m_city;
}

void UsedCarPurchaseInvoice::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string UsedCarPurchaseInvoice::GetVehicleType() const
{
    return m_vehicleType;
}

void UsedCarPurchaseInvoice::SetVehicleType(const string& _vehicleType)
{
    m_vehicleType = _vehicleType;
    m_vehicleTypeHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::VehicleTypeHasBeenSet() const
{
    return m_vehicleTypeHasBeenSet;
}

string UsedCarPurchaseInvoice::GetRemark() const
{
    return m_remark;
}

void UsedCarPurchaseInvoice::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string UsedCarPurchaseInvoice::GetFormType() const
{
    return m_formType;
}

void UsedCarPurchaseInvoice::SetFormType(const string& _formType)
{
    m_formType = _formType;
    m_formTypeHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::FormTypeHasBeenSet() const
{
    return m_formTypeHasBeenSet;
}

string UsedCarPurchaseInvoice::GetFormName() const
{
    return m_formName;
}

void UsedCarPurchaseInvoice::SetFormName(const string& _formName)
{
    m_formName = _formName;
    m_formNameHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::FormNameHasBeenSet() const
{
    return m_formNameHasBeenSet;
}

int64_t UsedCarPurchaseInvoice::GetCompanySealMark() const
{
    return m_companySealMark;
}

void UsedCarPurchaseInvoice::SetCompanySealMark(const int64_t& _companySealMark)
{
    m_companySealMark = _companySealMark;
    m_companySealMarkHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::CompanySealMarkHasBeenSet() const
{
    return m_companySealMarkHasBeenSet;
}

string UsedCarPurchaseInvoice::GetAuctionOrgName() const
{
    return m_auctionOrgName;
}

void UsedCarPurchaseInvoice::SetAuctionOrgName(const string& _auctionOrgName)
{
    m_auctionOrgName = _auctionOrgName;
    m_auctionOrgNameHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::AuctionOrgNameHasBeenSet() const
{
    return m_auctionOrgNameHasBeenSet;
}

string UsedCarPurchaseInvoice::GetAuctionOrgAddress() const
{
    return m_auctionOrgAddress;
}

void UsedCarPurchaseInvoice::SetAuctionOrgAddress(const string& _auctionOrgAddress)
{
    m_auctionOrgAddress = _auctionOrgAddress;
    m_auctionOrgAddressHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::AuctionOrgAddressHasBeenSet() const
{
    return m_auctionOrgAddressHasBeenSet;
}

string UsedCarPurchaseInvoice::GetAuctionOrgTaxID() const
{
    return m_auctionOrgTaxID;
}

void UsedCarPurchaseInvoice::SetAuctionOrgTaxID(const string& _auctionOrgTaxID)
{
    m_auctionOrgTaxID = _auctionOrgTaxID;
    m_auctionOrgTaxIDHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::AuctionOrgTaxIDHasBeenSet() const
{
    return m_auctionOrgTaxIDHasBeenSet;
}

string UsedCarPurchaseInvoice::GetAuctionOrgBankAccount() const
{
    return m_auctionOrgBankAccount;
}

void UsedCarPurchaseInvoice::SetAuctionOrgBankAccount(const string& _auctionOrgBankAccount)
{
    m_auctionOrgBankAccount = _auctionOrgBankAccount;
    m_auctionOrgBankAccountHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::AuctionOrgBankAccountHasBeenSet() const
{
    return m_auctionOrgBankAccountHasBeenSet;
}

string UsedCarPurchaseInvoice::GetAuctionOrgPhone() const
{
    return m_auctionOrgPhone;
}

void UsedCarPurchaseInvoice::SetAuctionOrgPhone(const string& _auctionOrgPhone)
{
    m_auctionOrgPhone = _auctionOrgPhone;
    m_auctionOrgPhoneHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::AuctionOrgPhoneHasBeenSet() const
{
    return m_auctionOrgPhoneHasBeenSet;
}

string UsedCarPurchaseInvoice::GetIssuer() const
{
    return m_issuer;
}

void UsedCarPurchaseInvoice::SetIssuer(const string& _issuer)
{
    m_issuer = _issuer;
    m_issuerHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::IssuerHasBeenSet() const
{
    return m_issuerHasBeenSet;
}

string UsedCarPurchaseInvoice::GetTaxCode() const
{
    return m_taxCode;
}

void UsedCarPurchaseInvoice::SetTaxCode(const string& _taxCode)
{
    m_taxCode = _taxCode;
    m_taxCodeHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::TaxCodeHasBeenSet() const
{
    return m_taxCodeHasBeenSet;
}

string UsedCarPurchaseInvoice::GetMachineSerialNumber() const
{
    return m_machineSerialNumber;
}

void UsedCarPurchaseInvoice::SetMachineSerialNumber(const string& _machineSerialNumber)
{
    m_machineSerialNumber = _machineSerialNumber;
    m_machineSerialNumberHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::MachineSerialNumberHasBeenSet() const
{
    return m_machineSerialNumberHasBeenSet;
}

string UsedCarPurchaseInvoice::GetMachineCode() const
{
    return m_machineCode;
}

void UsedCarPurchaseInvoice::SetMachineCode(const string& _machineCode)
{
    m_machineCode = _machineCode;
    m_machineCodeHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::MachineCodeHasBeenSet() const
{
    return m_machineCodeHasBeenSet;
}

string UsedCarPurchaseInvoice::GetMachineNumber() const
{
    return m_machineNumber;
}

void UsedCarPurchaseInvoice::SetMachineNumber(const string& _machineNumber)
{
    m_machineNumber = _machineNumber;
    m_machineNumberHasBeenSet = true;
}

bool UsedCarPurchaseInvoice::MachineNumberHasBeenSet() const
{
    return m_machineNumberHasBeenSet;
}

