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

#include <tencentcloud/ocr/v20181119/model/MotorVehicleSaleInvoice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

MotorVehicleSaleInvoice::MotorVehicleSaleInvoice() :
    m_titleHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_numberHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_pretaxAmountHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_totalCnHasBeenSet(false),
    m_sellerHasBeenSet(false),
    m_sellerTaxIDHasBeenSet(false),
    m_sellerTelHasBeenSet(false),
    m_sellerAddressHasBeenSet(false),
    m_sellerBankHasBeenSet(false),
    m_sellerBankAccountHasBeenSet(false),
    m_buyerHasBeenSet(false),
    m_buyerTaxIDHasBeenSet(false),
    m_buyerIDHasBeenSet(false),
    m_taxAuthoritiesHasBeenSet(false),
    m_taxAuthoritiesCodeHasBeenSet(false),
    m_vINHasBeenSet(false),
    m_vehicleModelHasBeenSet(false),
    m_vehicleEngineCodeHasBeenSet(false),
    m_certificateNumberHasBeenSet(false),
    m_inspectionNumberHasBeenSet(false),
    m_machineIDHasBeenSet(false),
    m_vehicleTypeHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_taxHasBeenSet(false),
    m_taxRateHasBeenSet(false),
    m_companySealMarkHasBeenSet(false),
    m_tonnageHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_formTypeHasBeenSet(false),
    m_formNameHasBeenSet(false),
    m_issuerHasBeenSet(false),
    m_taxNumHasBeenSet(false),
    m_taxPayNumHasBeenSet(false),
    m_taxCodeHasBeenSet(false),
    m_maxPeopleNumHasBeenSet(false),
    m_originHasBeenSet(false),
    m_machineCodeHasBeenSet(false),
    m_machineNumberHasBeenSet(false),
    m_qRCodeMarkHasBeenSet(false)
{
}

CoreInternalOutcome MotorVehicleSaleInvoice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Number") && !value["Number"].IsNull())
    {
        if (!value["Number"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.Number` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_number = string(value["Number"].GetString());
        m_numberHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("PretaxAmount") && !value["PretaxAmount"].IsNull())
    {
        if (!value["PretaxAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.PretaxAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pretaxAmount = string(value["PretaxAmount"].GetString());
        m_pretaxAmountHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.Total` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_total = string(value["Total"].GetString());
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("TotalCn") && !value["TotalCn"].IsNull())
    {
        if (!value["TotalCn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.TotalCn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCn = string(value["TotalCn"].GetString());
        m_totalCnHasBeenSet = true;
    }

    if (value.HasMember("Seller") && !value["Seller"].IsNull())
    {
        if (!value["Seller"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.Seller` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seller = string(value["Seller"].GetString());
        m_sellerHasBeenSet = true;
    }

    if (value.HasMember("SellerTaxID") && !value["SellerTaxID"].IsNull())
    {
        if (!value["SellerTaxID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.SellerTaxID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sellerTaxID = string(value["SellerTaxID"].GetString());
        m_sellerTaxIDHasBeenSet = true;
    }

    if (value.HasMember("SellerTel") && !value["SellerTel"].IsNull())
    {
        if (!value["SellerTel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.SellerTel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sellerTel = string(value["SellerTel"].GetString());
        m_sellerTelHasBeenSet = true;
    }

    if (value.HasMember("SellerAddress") && !value["SellerAddress"].IsNull())
    {
        if (!value["SellerAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.SellerAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sellerAddress = string(value["SellerAddress"].GetString());
        m_sellerAddressHasBeenSet = true;
    }

    if (value.HasMember("SellerBank") && !value["SellerBank"].IsNull())
    {
        if (!value["SellerBank"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.SellerBank` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sellerBank = string(value["SellerBank"].GetString());
        m_sellerBankHasBeenSet = true;
    }

    if (value.HasMember("SellerBankAccount") && !value["SellerBankAccount"].IsNull())
    {
        if (!value["SellerBankAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.SellerBankAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sellerBankAccount = string(value["SellerBankAccount"].GetString());
        m_sellerBankAccountHasBeenSet = true;
    }

    if (value.HasMember("Buyer") && !value["Buyer"].IsNull())
    {
        if (!value["Buyer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.Buyer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyer = string(value["Buyer"].GetString());
        m_buyerHasBeenSet = true;
    }

    if (value.HasMember("BuyerTaxID") && !value["BuyerTaxID"].IsNull())
    {
        if (!value["BuyerTaxID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.BuyerTaxID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyerTaxID = string(value["BuyerTaxID"].GetString());
        m_buyerTaxIDHasBeenSet = true;
    }

    if (value.HasMember("BuyerID") && !value["BuyerID"].IsNull())
    {
        if (!value["BuyerID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.BuyerID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyerID = string(value["BuyerID"].GetString());
        m_buyerIDHasBeenSet = true;
    }

    if (value.HasMember("TaxAuthorities") && !value["TaxAuthorities"].IsNull())
    {
        if (!value["TaxAuthorities"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.TaxAuthorities` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxAuthorities = string(value["TaxAuthorities"].GetString());
        m_taxAuthoritiesHasBeenSet = true;
    }

    if (value.HasMember("TaxAuthoritiesCode") && !value["TaxAuthoritiesCode"].IsNull())
    {
        if (!value["TaxAuthoritiesCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.TaxAuthoritiesCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxAuthoritiesCode = string(value["TaxAuthoritiesCode"].GetString());
        m_taxAuthoritiesCodeHasBeenSet = true;
    }

    if (value.HasMember("VIN") && !value["VIN"].IsNull())
    {
        if (!value["VIN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.VIN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vIN = string(value["VIN"].GetString());
        m_vINHasBeenSet = true;
    }

    if (value.HasMember("VehicleModel") && !value["VehicleModel"].IsNull())
    {
        if (!value["VehicleModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.VehicleModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vehicleModel = string(value["VehicleModel"].GetString());
        m_vehicleModelHasBeenSet = true;
    }

    if (value.HasMember("VehicleEngineCode") && !value["VehicleEngineCode"].IsNull())
    {
        if (!value["VehicleEngineCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.VehicleEngineCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vehicleEngineCode = string(value["VehicleEngineCode"].GetString());
        m_vehicleEngineCodeHasBeenSet = true;
    }

    if (value.HasMember("CertificateNumber") && !value["CertificateNumber"].IsNull())
    {
        if (!value["CertificateNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.CertificateNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificateNumber = string(value["CertificateNumber"].GetString());
        m_certificateNumberHasBeenSet = true;
    }

    if (value.HasMember("InspectionNumber") && !value["InspectionNumber"].IsNull())
    {
        if (!value["InspectionNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.InspectionNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inspectionNumber = string(value["InspectionNumber"].GetString());
        m_inspectionNumberHasBeenSet = true;
    }

    if (value.HasMember("MachineID") && !value["MachineID"].IsNull())
    {
        if (!value["MachineID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.MachineID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineID = string(value["MachineID"].GetString());
        m_machineIDHasBeenSet = true;
    }

    if (value.HasMember("VehicleType") && !value["VehicleType"].IsNull())
    {
        if (!value["VehicleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.VehicleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vehicleType = string(value["VehicleType"].GetString());
        m_vehicleTypeHasBeenSet = true;
    }

    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.Kind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kind = string(value["Kind"].GetString());
        m_kindHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("Tax") && !value["Tax"].IsNull())
    {
        if (!value["Tax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.Tax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tax = string(value["Tax"].GetString());
        m_taxHasBeenSet = true;
    }

    if (value.HasMember("TaxRate") && !value["TaxRate"].IsNull())
    {
        if (!value["TaxRate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.TaxRate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxRate = string(value["TaxRate"].GetString());
        m_taxRateHasBeenSet = true;
    }

    if (value.HasMember("CompanySealMark") && !value["CompanySealMark"].IsNull())
    {
        if (!value["CompanySealMark"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.CompanySealMark` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_companySealMark = value["CompanySealMark"].GetInt64();
        m_companySealMarkHasBeenSet = true;
    }

    if (value.HasMember("Tonnage") && !value["Tonnage"].IsNull())
    {
        if (!value["Tonnage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.Tonnage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tonnage = string(value["Tonnage"].GetString());
        m_tonnageHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("FormType") && !value["FormType"].IsNull())
    {
        if (!value["FormType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.FormType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_formType = string(value["FormType"].GetString());
        m_formTypeHasBeenSet = true;
    }

    if (value.HasMember("FormName") && !value["FormName"].IsNull())
    {
        if (!value["FormName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.FormName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_formName = string(value["FormName"].GetString());
        m_formNameHasBeenSet = true;
    }

    if (value.HasMember("Issuer") && !value["Issuer"].IsNull())
    {
        if (!value["Issuer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.Issuer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuer = string(value["Issuer"].GetString());
        m_issuerHasBeenSet = true;
    }

    if (value.HasMember("TaxNum") && !value["TaxNum"].IsNull())
    {
        if (!value["TaxNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.TaxNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxNum = string(value["TaxNum"].GetString());
        m_taxNumHasBeenSet = true;
    }

    if (value.HasMember("TaxPayNum") && !value["TaxPayNum"].IsNull())
    {
        if (!value["TaxPayNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.TaxPayNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxPayNum = string(value["TaxPayNum"].GetString());
        m_taxPayNumHasBeenSet = true;
    }

    if (value.HasMember("TaxCode") && !value["TaxCode"].IsNull())
    {
        if (!value["TaxCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.TaxCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxCode = string(value["TaxCode"].GetString());
        m_taxCodeHasBeenSet = true;
    }

    if (value.HasMember("MaxPeopleNum") && !value["MaxPeopleNum"].IsNull())
    {
        if (!value["MaxPeopleNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.MaxPeopleNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maxPeopleNum = string(value["MaxPeopleNum"].GetString());
        m_maxPeopleNumHasBeenSet = true;
    }

    if (value.HasMember("Origin") && !value["Origin"].IsNull())
    {
        if (!value["Origin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.Origin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_origin = string(value["Origin"].GetString());
        m_originHasBeenSet = true;
    }

    if (value.HasMember("MachineCode") && !value["MachineCode"].IsNull())
    {
        if (!value["MachineCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.MachineCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineCode = string(value["MachineCode"].GetString());
        m_machineCodeHasBeenSet = true;
    }

    if (value.HasMember("MachineNumber") && !value["MachineNumber"].IsNull())
    {
        if (!value["MachineNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.MachineNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineNumber = string(value["MachineNumber"].GetString());
        m_machineNumberHasBeenSet = true;
    }

    if (value.HasMember("QRCodeMark") && !value["QRCodeMark"].IsNull())
    {
        if (!value["QRCodeMark"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MotorVehicleSaleInvoice.QRCodeMark` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_qRCodeMark = value["QRCodeMark"].GetInt64();
        m_qRCodeMarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MotorVehicleSaleInvoice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
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

    if (m_pretaxAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PretaxAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pretaxAmount.c_str(), allocator).Move(), allocator);
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

    if (m_sellerTaxIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SellerTaxID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sellerTaxID.c_str(), allocator).Move(), allocator);
    }

    if (m_sellerTelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SellerTel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sellerTel.c_str(), allocator).Move(), allocator);
    }

    if (m_sellerAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SellerAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sellerAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_sellerBankHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SellerBank";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sellerBank.c_str(), allocator).Move(), allocator);
    }

    if (m_sellerBankAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SellerBankAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sellerBankAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_buyerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Buyer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyer.c_str(), allocator).Move(), allocator);
    }

    if (m_buyerTaxIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyerTaxID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyerTaxID.c_str(), allocator).Move(), allocator);
    }

    if (m_buyerIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyerID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyerID.c_str(), allocator).Move(), allocator);
    }

    if (m_taxAuthoritiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxAuthorities";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxAuthorities.c_str(), allocator).Move(), allocator);
    }

    if (m_taxAuthoritiesCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxAuthoritiesCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxAuthoritiesCode.c_str(), allocator).Move(), allocator);
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

    if (m_vehicleEngineCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VehicleEngineCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vehicleEngineCode.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certificateNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_inspectionNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InspectionNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inspectionNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_machineIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineID.c_str(), allocator).Move(), allocator);
    }

    if (m_vehicleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VehicleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vehicleType.c_str(), allocator).Move(), allocator);
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

    if (m_taxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tax.c_str(), allocator).Move(), allocator);
    }

    if (m_taxRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxRate.c_str(), allocator).Move(), allocator);
    }

    if (m_companySealMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanySealMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_companySealMark, allocator);
    }

    if (m_tonnageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tonnage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tonnage.c_str(), allocator).Move(), allocator);
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

    if (m_issuerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Issuer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuer.c_str(), allocator).Move(), allocator);
    }

    if (m_taxNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxNum.c_str(), allocator).Move(), allocator);
    }

    if (m_taxPayNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxPayNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxPayNum.c_str(), allocator).Move(), allocator);
    }

    if (m_taxCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxCode.c_str(), allocator).Move(), allocator);
    }

    if (m_maxPeopleNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxPeopleNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maxPeopleNum.c_str(), allocator).Move(), allocator);
    }

    if (m_originHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Origin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_origin.c_str(), allocator).Move(), allocator);
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

    if (m_qRCodeMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QRCodeMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qRCodeMark, allocator);
    }

}


string MotorVehicleSaleInvoice::GetTitle() const
{
    return m_title;
}

void MotorVehicleSaleInvoice::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string MotorVehicleSaleInvoice::GetCode() const
{
    return m_code;
}

void MotorVehicleSaleInvoice::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string MotorVehicleSaleInvoice::GetNumber() const
{
    return m_number;
}

void MotorVehicleSaleInvoice::SetNumber(const string& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

string MotorVehicleSaleInvoice::GetDate() const
{
    return m_date;
}

void MotorVehicleSaleInvoice::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string MotorVehicleSaleInvoice::GetPretaxAmount() const
{
    return m_pretaxAmount;
}

void MotorVehicleSaleInvoice::SetPretaxAmount(const string& _pretaxAmount)
{
    m_pretaxAmount = _pretaxAmount;
    m_pretaxAmountHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::PretaxAmountHasBeenSet() const
{
    return m_pretaxAmountHasBeenSet;
}

string MotorVehicleSaleInvoice::GetTotal() const
{
    return m_total;
}

void MotorVehicleSaleInvoice::SetTotal(const string& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

string MotorVehicleSaleInvoice::GetTotalCn() const
{
    return m_totalCn;
}

void MotorVehicleSaleInvoice::SetTotalCn(const string& _totalCn)
{
    m_totalCn = _totalCn;
    m_totalCnHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::TotalCnHasBeenSet() const
{
    return m_totalCnHasBeenSet;
}

string MotorVehicleSaleInvoice::GetSeller() const
{
    return m_seller;
}

void MotorVehicleSaleInvoice::SetSeller(const string& _seller)
{
    m_seller = _seller;
    m_sellerHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::SellerHasBeenSet() const
{
    return m_sellerHasBeenSet;
}

string MotorVehicleSaleInvoice::GetSellerTaxID() const
{
    return m_sellerTaxID;
}

void MotorVehicleSaleInvoice::SetSellerTaxID(const string& _sellerTaxID)
{
    m_sellerTaxID = _sellerTaxID;
    m_sellerTaxIDHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::SellerTaxIDHasBeenSet() const
{
    return m_sellerTaxIDHasBeenSet;
}

string MotorVehicleSaleInvoice::GetSellerTel() const
{
    return m_sellerTel;
}

void MotorVehicleSaleInvoice::SetSellerTel(const string& _sellerTel)
{
    m_sellerTel = _sellerTel;
    m_sellerTelHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::SellerTelHasBeenSet() const
{
    return m_sellerTelHasBeenSet;
}

string MotorVehicleSaleInvoice::GetSellerAddress() const
{
    return m_sellerAddress;
}

void MotorVehicleSaleInvoice::SetSellerAddress(const string& _sellerAddress)
{
    m_sellerAddress = _sellerAddress;
    m_sellerAddressHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::SellerAddressHasBeenSet() const
{
    return m_sellerAddressHasBeenSet;
}

string MotorVehicleSaleInvoice::GetSellerBank() const
{
    return m_sellerBank;
}

void MotorVehicleSaleInvoice::SetSellerBank(const string& _sellerBank)
{
    m_sellerBank = _sellerBank;
    m_sellerBankHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::SellerBankHasBeenSet() const
{
    return m_sellerBankHasBeenSet;
}

string MotorVehicleSaleInvoice::GetSellerBankAccount() const
{
    return m_sellerBankAccount;
}

void MotorVehicleSaleInvoice::SetSellerBankAccount(const string& _sellerBankAccount)
{
    m_sellerBankAccount = _sellerBankAccount;
    m_sellerBankAccountHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::SellerBankAccountHasBeenSet() const
{
    return m_sellerBankAccountHasBeenSet;
}

string MotorVehicleSaleInvoice::GetBuyer() const
{
    return m_buyer;
}

void MotorVehicleSaleInvoice::SetBuyer(const string& _buyer)
{
    m_buyer = _buyer;
    m_buyerHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::BuyerHasBeenSet() const
{
    return m_buyerHasBeenSet;
}

string MotorVehicleSaleInvoice::GetBuyerTaxID() const
{
    return m_buyerTaxID;
}

void MotorVehicleSaleInvoice::SetBuyerTaxID(const string& _buyerTaxID)
{
    m_buyerTaxID = _buyerTaxID;
    m_buyerTaxIDHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::BuyerTaxIDHasBeenSet() const
{
    return m_buyerTaxIDHasBeenSet;
}

string MotorVehicleSaleInvoice::GetBuyerID() const
{
    return m_buyerID;
}

void MotorVehicleSaleInvoice::SetBuyerID(const string& _buyerID)
{
    m_buyerID = _buyerID;
    m_buyerIDHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::BuyerIDHasBeenSet() const
{
    return m_buyerIDHasBeenSet;
}

string MotorVehicleSaleInvoice::GetTaxAuthorities() const
{
    return m_taxAuthorities;
}

void MotorVehicleSaleInvoice::SetTaxAuthorities(const string& _taxAuthorities)
{
    m_taxAuthorities = _taxAuthorities;
    m_taxAuthoritiesHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::TaxAuthoritiesHasBeenSet() const
{
    return m_taxAuthoritiesHasBeenSet;
}

string MotorVehicleSaleInvoice::GetTaxAuthoritiesCode() const
{
    return m_taxAuthoritiesCode;
}

void MotorVehicleSaleInvoice::SetTaxAuthoritiesCode(const string& _taxAuthoritiesCode)
{
    m_taxAuthoritiesCode = _taxAuthoritiesCode;
    m_taxAuthoritiesCodeHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::TaxAuthoritiesCodeHasBeenSet() const
{
    return m_taxAuthoritiesCodeHasBeenSet;
}

string MotorVehicleSaleInvoice::GetVIN() const
{
    return m_vIN;
}

void MotorVehicleSaleInvoice::SetVIN(const string& _vIN)
{
    m_vIN = _vIN;
    m_vINHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::VINHasBeenSet() const
{
    return m_vINHasBeenSet;
}

string MotorVehicleSaleInvoice::GetVehicleModel() const
{
    return m_vehicleModel;
}

void MotorVehicleSaleInvoice::SetVehicleModel(const string& _vehicleModel)
{
    m_vehicleModel = _vehicleModel;
    m_vehicleModelHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::VehicleModelHasBeenSet() const
{
    return m_vehicleModelHasBeenSet;
}

string MotorVehicleSaleInvoice::GetVehicleEngineCode() const
{
    return m_vehicleEngineCode;
}

void MotorVehicleSaleInvoice::SetVehicleEngineCode(const string& _vehicleEngineCode)
{
    m_vehicleEngineCode = _vehicleEngineCode;
    m_vehicleEngineCodeHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::VehicleEngineCodeHasBeenSet() const
{
    return m_vehicleEngineCodeHasBeenSet;
}

string MotorVehicleSaleInvoice::GetCertificateNumber() const
{
    return m_certificateNumber;
}

void MotorVehicleSaleInvoice::SetCertificateNumber(const string& _certificateNumber)
{
    m_certificateNumber = _certificateNumber;
    m_certificateNumberHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::CertificateNumberHasBeenSet() const
{
    return m_certificateNumberHasBeenSet;
}

string MotorVehicleSaleInvoice::GetInspectionNumber() const
{
    return m_inspectionNumber;
}

void MotorVehicleSaleInvoice::SetInspectionNumber(const string& _inspectionNumber)
{
    m_inspectionNumber = _inspectionNumber;
    m_inspectionNumberHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::InspectionNumberHasBeenSet() const
{
    return m_inspectionNumberHasBeenSet;
}

string MotorVehicleSaleInvoice::GetMachineID() const
{
    return m_machineID;
}

void MotorVehicleSaleInvoice::SetMachineID(const string& _machineID)
{
    m_machineID = _machineID;
    m_machineIDHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::MachineIDHasBeenSet() const
{
    return m_machineIDHasBeenSet;
}

string MotorVehicleSaleInvoice::GetVehicleType() const
{
    return m_vehicleType;
}

void MotorVehicleSaleInvoice::SetVehicleType(const string& _vehicleType)
{
    m_vehicleType = _vehicleType;
    m_vehicleTypeHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::VehicleTypeHasBeenSet() const
{
    return m_vehicleTypeHasBeenSet;
}

string MotorVehicleSaleInvoice::GetKind() const
{
    return m_kind;
}

void MotorVehicleSaleInvoice::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string MotorVehicleSaleInvoice::GetProvince() const
{
    return m_province;
}

void MotorVehicleSaleInvoice::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string MotorVehicleSaleInvoice::GetCity() const
{
    return m_city;
}

void MotorVehicleSaleInvoice::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string MotorVehicleSaleInvoice::GetTax() const
{
    return m_tax;
}

void MotorVehicleSaleInvoice::SetTax(const string& _tax)
{
    m_tax = _tax;
    m_taxHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::TaxHasBeenSet() const
{
    return m_taxHasBeenSet;
}

string MotorVehicleSaleInvoice::GetTaxRate() const
{
    return m_taxRate;
}

void MotorVehicleSaleInvoice::SetTaxRate(const string& _taxRate)
{
    m_taxRate = _taxRate;
    m_taxRateHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::TaxRateHasBeenSet() const
{
    return m_taxRateHasBeenSet;
}

int64_t MotorVehicleSaleInvoice::GetCompanySealMark() const
{
    return m_companySealMark;
}

void MotorVehicleSaleInvoice::SetCompanySealMark(const int64_t& _companySealMark)
{
    m_companySealMark = _companySealMark;
    m_companySealMarkHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::CompanySealMarkHasBeenSet() const
{
    return m_companySealMarkHasBeenSet;
}

string MotorVehicleSaleInvoice::GetTonnage() const
{
    return m_tonnage;
}

void MotorVehicleSaleInvoice::SetTonnage(const string& _tonnage)
{
    m_tonnage = _tonnage;
    m_tonnageHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::TonnageHasBeenSet() const
{
    return m_tonnageHasBeenSet;
}

string MotorVehicleSaleInvoice::GetRemark() const
{
    return m_remark;
}

void MotorVehicleSaleInvoice::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string MotorVehicleSaleInvoice::GetFormType() const
{
    return m_formType;
}

void MotorVehicleSaleInvoice::SetFormType(const string& _formType)
{
    m_formType = _formType;
    m_formTypeHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::FormTypeHasBeenSet() const
{
    return m_formTypeHasBeenSet;
}

string MotorVehicleSaleInvoice::GetFormName() const
{
    return m_formName;
}

void MotorVehicleSaleInvoice::SetFormName(const string& _formName)
{
    m_formName = _formName;
    m_formNameHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::FormNameHasBeenSet() const
{
    return m_formNameHasBeenSet;
}

string MotorVehicleSaleInvoice::GetIssuer() const
{
    return m_issuer;
}

void MotorVehicleSaleInvoice::SetIssuer(const string& _issuer)
{
    m_issuer = _issuer;
    m_issuerHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::IssuerHasBeenSet() const
{
    return m_issuerHasBeenSet;
}

string MotorVehicleSaleInvoice::GetTaxNum() const
{
    return m_taxNum;
}

void MotorVehicleSaleInvoice::SetTaxNum(const string& _taxNum)
{
    m_taxNum = _taxNum;
    m_taxNumHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::TaxNumHasBeenSet() const
{
    return m_taxNumHasBeenSet;
}

string MotorVehicleSaleInvoice::GetTaxPayNum() const
{
    return m_taxPayNum;
}

void MotorVehicleSaleInvoice::SetTaxPayNum(const string& _taxPayNum)
{
    m_taxPayNum = _taxPayNum;
    m_taxPayNumHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::TaxPayNumHasBeenSet() const
{
    return m_taxPayNumHasBeenSet;
}

string MotorVehicleSaleInvoice::GetTaxCode() const
{
    return m_taxCode;
}

void MotorVehicleSaleInvoice::SetTaxCode(const string& _taxCode)
{
    m_taxCode = _taxCode;
    m_taxCodeHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::TaxCodeHasBeenSet() const
{
    return m_taxCodeHasBeenSet;
}

string MotorVehicleSaleInvoice::GetMaxPeopleNum() const
{
    return m_maxPeopleNum;
}

void MotorVehicleSaleInvoice::SetMaxPeopleNum(const string& _maxPeopleNum)
{
    m_maxPeopleNum = _maxPeopleNum;
    m_maxPeopleNumHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::MaxPeopleNumHasBeenSet() const
{
    return m_maxPeopleNumHasBeenSet;
}

string MotorVehicleSaleInvoice::GetOrigin() const
{
    return m_origin;
}

void MotorVehicleSaleInvoice::SetOrigin(const string& _origin)
{
    m_origin = _origin;
    m_originHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::OriginHasBeenSet() const
{
    return m_originHasBeenSet;
}

string MotorVehicleSaleInvoice::GetMachineCode() const
{
    return m_machineCode;
}

void MotorVehicleSaleInvoice::SetMachineCode(const string& _machineCode)
{
    m_machineCode = _machineCode;
    m_machineCodeHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::MachineCodeHasBeenSet() const
{
    return m_machineCodeHasBeenSet;
}

string MotorVehicleSaleInvoice::GetMachineNumber() const
{
    return m_machineNumber;
}

void MotorVehicleSaleInvoice::SetMachineNumber(const string& _machineNumber)
{
    m_machineNumber = _machineNumber;
    m_machineNumberHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::MachineNumberHasBeenSet() const
{
    return m_machineNumberHasBeenSet;
}

int64_t MotorVehicleSaleInvoice::GetQRCodeMark() const
{
    return m_qRCodeMark;
}

void MotorVehicleSaleInvoice::SetQRCodeMark(const int64_t& _qRCodeMark)
{
    m_qRCodeMark = _qRCodeMark;
    m_qRCodeMarkHasBeenSet = true;
}

bool MotorVehicleSaleInvoice::QRCodeMarkHasBeenSet() const
{
    return m_qRCodeMarkHasBeenSet;
}

