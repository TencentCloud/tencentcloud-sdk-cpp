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

#include <tencentcloud/ocr/v20181119/model/VatInvoiceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

VatInvoiceInfo::VatInvoiceInfo() :
    m_checkCodeHasBeenSet(false),
    m_formTypeHasBeenSet(false),
    m_travelTaxHasBeenSet(false),
    m_buyerAddrTelHasBeenSet(false),
    m_buyerBankAccountHasBeenSet(false),
    m_companySealContentHasBeenSet(false),
    m_taxSealContentHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_qRCodeMarkHasBeenSet(false),
    m_agentMarkHasBeenSet(false),
    m_transitMarkHasBeenSet(false),
    m_oilMarkHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_numberHasBeenSet(false),
    m_numberConfirmHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_totalCnHasBeenSet(false),
    m_pretaxAmountHasBeenSet(false),
    m_taxHasBeenSet(false),
    m_machineCodeHasBeenSet(false),
    m_ciphertextHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_sellerHasBeenSet(false),
    m_sellerTaxIDHasBeenSet(false),
    m_sellerAddrTelHasBeenSet(false),
    m_sellerBankAccountHasBeenSet(false),
    m_buyerHasBeenSet(false),
    m_buyerTaxIDHasBeenSet(false),
    m_companySealMarkHasBeenSet(false),
    m_issuerHasBeenSet(false),
    m_reviewerHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_vatInvoiceItemInfosHasBeenSet(false),
    m_codeConfirmHasBeenSet(false),
    m_receiptorHasBeenSet(false),
    m_electronicFullMarkHasBeenSet(false),
    m_electronicFullNumberHasBeenSet(false),
    m_formNameHasBeenSet(false),
    m_blockChainMarkHasBeenSet(false),
    m_acquisitionMarkHasBeenSet(false),
    m_subTotalHasBeenSet(false),
    m_subTaxHasBeenSet(false)
{
}

CoreInternalOutcome VatInvoiceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CheckCode") && !value["CheckCode"].IsNull())
    {
        if (!value["CheckCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.CheckCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkCode = string(value["CheckCode"].GetString());
        m_checkCodeHasBeenSet = true;
    }

    if (value.HasMember("FormType") && !value["FormType"].IsNull())
    {
        if (!value["FormType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.FormType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_formType = string(value["FormType"].GetString());
        m_formTypeHasBeenSet = true;
    }

    if (value.HasMember("TravelTax") && !value["TravelTax"].IsNull())
    {
        if (!value["TravelTax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.TravelTax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_travelTax = string(value["TravelTax"].GetString());
        m_travelTaxHasBeenSet = true;
    }

    if (value.HasMember("BuyerAddrTel") && !value["BuyerAddrTel"].IsNull())
    {
        if (!value["BuyerAddrTel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.BuyerAddrTel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyerAddrTel = string(value["BuyerAddrTel"].GetString());
        m_buyerAddrTelHasBeenSet = true;
    }

    if (value.HasMember("BuyerBankAccount") && !value["BuyerBankAccount"].IsNull())
    {
        if (!value["BuyerBankAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.BuyerBankAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyerBankAccount = string(value["BuyerBankAccount"].GetString());
        m_buyerBankAccountHasBeenSet = true;
    }

    if (value.HasMember("CompanySealContent") && !value["CompanySealContent"].IsNull())
    {
        if (!value["CompanySealContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.CompanySealContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companySealContent = string(value["CompanySealContent"].GetString());
        m_companySealContentHasBeenSet = true;
    }

    if (value.HasMember("TaxSealContent") && !value["TaxSealContent"].IsNull())
    {
        if (!value["TaxSealContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.TaxSealContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxSealContent = string(value["TaxSealContent"].GetString());
        m_taxSealContentHasBeenSet = true;
    }

    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("QRCodeMark") && !value["QRCodeMark"].IsNull())
    {
        if (!value["QRCodeMark"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.QRCodeMark` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_qRCodeMark = value["QRCodeMark"].GetInt64();
        m_qRCodeMarkHasBeenSet = true;
    }

    if (value.HasMember("AgentMark") && !value["AgentMark"].IsNull())
    {
        if (!value["AgentMark"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.AgentMark` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_agentMark = value["AgentMark"].GetInt64();
        m_agentMarkHasBeenSet = true;
    }

    if (value.HasMember("TransitMark") && !value["TransitMark"].IsNull())
    {
        if (!value["TransitMark"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.TransitMark` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_transitMark = value["TransitMark"].GetInt64();
        m_transitMarkHasBeenSet = true;
    }

    if (value.HasMember("OilMark") && !value["OilMark"].IsNull())
    {
        if (!value["OilMark"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.OilMark` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_oilMark = value["OilMark"].GetInt64();
        m_oilMarkHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.Kind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kind = string(value["Kind"].GetString());
        m_kindHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Number") && !value["Number"].IsNull())
    {
        if (!value["Number"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.Number` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_number = string(value["Number"].GetString());
        m_numberHasBeenSet = true;
    }

    if (value.HasMember("NumberConfirm") && !value["NumberConfirm"].IsNull())
    {
        if (!value["NumberConfirm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.NumberConfirm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_numberConfirm = string(value["NumberConfirm"].GetString());
        m_numberConfirmHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.Total` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_total = string(value["Total"].GetString());
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("TotalCn") && !value["TotalCn"].IsNull())
    {
        if (!value["TotalCn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.TotalCn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCn = string(value["TotalCn"].GetString());
        m_totalCnHasBeenSet = true;
    }

    if (value.HasMember("PretaxAmount") && !value["PretaxAmount"].IsNull())
    {
        if (!value["PretaxAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.PretaxAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pretaxAmount = string(value["PretaxAmount"].GetString());
        m_pretaxAmountHasBeenSet = true;
    }

    if (value.HasMember("Tax") && !value["Tax"].IsNull())
    {
        if (!value["Tax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.Tax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tax = string(value["Tax"].GetString());
        m_taxHasBeenSet = true;
    }

    if (value.HasMember("MachineCode") && !value["MachineCode"].IsNull())
    {
        if (!value["MachineCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.MachineCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineCode = string(value["MachineCode"].GetString());
        m_machineCodeHasBeenSet = true;
    }

    if (value.HasMember("Ciphertext") && !value["Ciphertext"].IsNull())
    {
        if (!value["Ciphertext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.Ciphertext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ciphertext = string(value["Ciphertext"].GetString());
        m_ciphertextHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("Seller") && !value["Seller"].IsNull())
    {
        if (!value["Seller"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.Seller` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seller = string(value["Seller"].GetString());
        m_sellerHasBeenSet = true;
    }

    if (value.HasMember("SellerTaxID") && !value["SellerTaxID"].IsNull())
    {
        if (!value["SellerTaxID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.SellerTaxID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sellerTaxID = string(value["SellerTaxID"].GetString());
        m_sellerTaxIDHasBeenSet = true;
    }

    if (value.HasMember("SellerAddrTel") && !value["SellerAddrTel"].IsNull())
    {
        if (!value["SellerAddrTel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.SellerAddrTel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sellerAddrTel = string(value["SellerAddrTel"].GetString());
        m_sellerAddrTelHasBeenSet = true;
    }

    if (value.HasMember("SellerBankAccount") && !value["SellerBankAccount"].IsNull())
    {
        if (!value["SellerBankAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.SellerBankAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sellerBankAccount = string(value["SellerBankAccount"].GetString());
        m_sellerBankAccountHasBeenSet = true;
    }

    if (value.HasMember("Buyer") && !value["Buyer"].IsNull())
    {
        if (!value["Buyer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.Buyer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyer = string(value["Buyer"].GetString());
        m_buyerHasBeenSet = true;
    }

    if (value.HasMember("BuyerTaxID") && !value["BuyerTaxID"].IsNull())
    {
        if (!value["BuyerTaxID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.BuyerTaxID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyerTaxID = string(value["BuyerTaxID"].GetString());
        m_buyerTaxIDHasBeenSet = true;
    }

    if (value.HasMember("CompanySealMark") && !value["CompanySealMark"].IsNull())
    {
        if (!value["CompanySealMark"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.CompanySealMark` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_companySealMark = value["CompanySealMark"].GetInt64();
        m_companySealMarkHasBeenSet = true;
    }

    if (value.HasMember("Issuer") && !value["Issuer"].IsNull())
    {
        if (!value["Issuer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.Issuer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuer = string(value["Issuer"].GetString());
        m_issuerHasBeenSet = true;
    }

    if (value.HasMember("Reviewer") && !value["Reviewer"].IsNull())
    {
        if (!value["Reviewer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.Reviewer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reviewer = string(value["Reviewer"].GetString());
        m_reviewerHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("VatInvoiceItemInfos") && !value["VatInvoiceItemInfos"].IsNull())
    {
        if (!value["VatInvoiceItemInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.VatInvoiceItemInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["VatInvoiceItemInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VatInvoiceItemInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vatInvoiceItemInfos.push_back(item);
        }
        m_vatInvoiceItemInfosHasBeenSet = true;
    }

    if (value.HasMember("CodeConfirm") && !value["CodeConfirm"].IsNull())
    {
        if (!value["CodeConfirm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.CodeConfirm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeConfirm = string(value["CodeConfirm"].GetString());
        m_codeConfirmHasBeenSet = true;
    }

    if (value.HasMember("Receiptor") && !value["Receiptor"].IsNull())
    {
        if (!value["Receiptor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.Receiptor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receiptor = string(value["Receiptor"].GetString());
        m_receiptorHasBeenSet = true;
    }

    if (value.HasMember("ElectronicFullMark") && !value["ElectronicFullMark"].IsNull())
    {
        if (!value["ElectronicFullMark"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.ElectronicFullMark` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_electronicFullMark = value["ElectronicFullMark"].GetInt64();
        m_electronicFullMarkHasBeenSet = true;
    }

    if (value.HasMember("ElectronicFullNumber") && !value["ElectronicFullNumber"].IsNull())
    {
        if (!value["ElectronicFullNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.ElectronicFullNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_electronicFullNumber = string(value["ElectronicFullNumber"].GetString());
        m_electronicFullNumberHasBeenSet = true;
    }

    if (value.HasMember("FormName") && !value["FormName"].IsNull())
    {
        if (!value["FormName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.FormName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_formName = string(value["FormName"].GetString());
        m_formNameHasBeenSet = true;
    }

    if (value.HasMember("BlockChainMark") && !value["BlockChainMark"].IsNull())
    {
        if (!value["BlockChainMark"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.BlockChainMark` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockChainMark = value["BlockChainMark"].GetInt64();
        m_blockChainMarkHasBeenSet = true;
    }

    if (value.HasMember("AcquisitionMark") && !value["AcquisitionMark"].IsNull())
    {
        if (!value["AcquisitionMark"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.AcquisitionMark` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_acquisitionMark = value["AcquisitionMark"].GetInt64();
        m_acquisitionMarkHasBeenSet = true;
    }

    if (value.HasMember("SubTotal") && !value["SubTotal"].IsNull())
    {
        if (!value["SubTotal"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.SubTotal` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subTotal = string(value["SubTotal"].GetString());
        m_subTotalHasBeenSet = true;
    }

    if (value.HasMember("SubTax") && !value["SubTax"].IsNull())
    {
        if (!value["SubTax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceInfo.SubTax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subTax = string(value["SubTax"].GetString());
        m_subTaxHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VatInvoiceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_checkCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkCode.c_str(), allocator).Move(), allocator);
    }

    if (m_formTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FormType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_formType.c_str(), allocator).Move(), allocator);
    }

    if (m_travelTaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TravelTax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_travelTax.c_str(), allocator).Move(), allocator);
    }

    if (m_buyerAddrTelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyerAddrTel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyerAddrTel.c_str(), allocator).Move(), allocator);
    }

    if (m_buyerBankAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyerBankAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyerBankAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_companySealContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanySealContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companySealContent.c_str(), allocator).Move(), allocator);
    }

    if (m_taxSealContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxSealContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxSealContent.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_qRCodeMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QRCodeMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qRCodeMark, allocator);
    }

    if (m_agentMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_agentMark, allocator);
    }

    if (m_transitMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransitMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transitMark, allocator);
    }

    if (m_oilMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OilMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_oilMark, allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kind.c_str(), allocator).Move(), allocator);
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

    if (m_numberConfirmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumberConfirm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_numberConfirm.c_str(), allocator).Move(), allocator);
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

    if (m_pretaxAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PretaxAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pretaxAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_taxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tax.c_str(), allocator).Move(), allocator);
    }

    if (m_machineCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineCode.c_str(), allocator).Move(), allocator);
    }

    if (m_ciphertextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ciphertext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ciphertext.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
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

    if (m_sellerAddrTelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SellerAddrTel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sellerAddrTel.c_str(), allocator).Move(), allocator);
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

    if (m_companySealMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanySealMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_companySealMark, allocator);
    }

    if (m_issuerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Issuer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuer.c_str(), allocator).Move(), allocator);
    }

    if (m_reviewerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reviewer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reviewer.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

    if (m_vatInvoiceItemInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VatInvoiceItemInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vatInvoiceItemInfos.begin(); itr != m_vatInvoiceItemInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_codeConfirmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeConfirm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeConfirm.c_str(), allocator).Move(), allocator);
    }

    if (m_receiptorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Receiptor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receiptor.c_str(), allocator).Move(), allocator);
    }

    if (m_electronicFullMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElectronicFullMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_electronicFullMark, allocator);
    }

    if (m_electronicFullNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElectronicFullNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_electronicFullNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_formNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FormName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_formName.c_str(), allocator).Move(), allocator);
    }

    if (m_blockChainMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockChainMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockChainMark, allocator);
    }

    if (m_acquisitionMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AcquisitionMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_acquisitionMark, allocator);
    }

    if (m_subTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subTotal.c_str(), allocator).Move(), allocator);
    }

    if (m_subTaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubTax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subTax.c_str(), allocator).Move(), allocator);
    }

}


string VatInvoiceInfo::GetCheckCode() const
{
    return m_checkCode;
}

void VatInvoiceInfo::SetCheckCode(const string& _checkCode)
{
    m_checkCode = _checkCode;
    m_checkCodeHasBeenSet = true;
}

bool VatInvoiceInfo::CheckCodeHasBeenSet() const
{
    return m_checkCodeHasBeenSet;
}

string VatInvoiceInfo::GetFormType() const
{
    return m_formType;
}

void VatInvoiceInfo::SetFormType(const string& _formType)
{
    m_formType = _formType;
    m_formTypeHasBeenSet = true;
}

bool VatInvoiceInfo::FormTypeHasBeenSet() const
{
    return m_formTypeHasBeenSet;
}

string VatInvoiceInfo::GetTravelTax() const
{
    return m_travelTax;
}

void VatInvoiceInfo::SetTravelTax(const string& _travelTax)
{
    m_travelTax = _travelTax;
    m_travelTaxHasBeenSet = true;
}

bool VatInvoiceInfo::TravelTaxHasBeenSet() const
{
    return m_travelTaxHasBeenSet;
}

string VatInvoiceInfo::GetBuyerAddrTel() const
{
    return m_buyerAddrTel;
}

void VatInvoiceInfo::SetBuyerAddrTel(const string& _buyerAddrTel)
{
    m_buyerAddrTel = _buyerAddrTel;
    m_buyerAddrTelHasBeenSet = true;
}

bool VatInvoiceInfo::BuyerAddrTelHasBeenSet() const
{
    return m_buyerAddrTelHasBeenSet;
}

string VatInvoiceInfo::GetBuyerBankAccount() const
{
    return m_buyerBankAccount;
}

void VatInvoiceInfo::SetBuyerBankAccount(const string& _buyerBankAccount)
{
    m_buyerBankAccount = _buyerBankAccount;
    m_buyerBankAccountHasBeenSet = true;
}

bool VatInvoiceInfo::BuyerBankAccountHasBeenSet() const
{
    return m_buyerBankAccountHasBeenSet;
}

string VatInvoiceInfo::GetCompanySealContent() const
{
    return m_companySealContent;
}

void VatInvoiceInfo::SetCompanySealContent(const string& _companySealContent)
{
    m_companySealContent = _companySealContent;
    m_companySealContentHasBeenSet = true;
}

bool VatInvoiceInfo::CompanySealContentHasBeenSet() const
{
    return m_companySealContentHasBeenSet;
}

string VatInvoiceInfo::GetTaxSealContent() const
{
    return m_taxSealContent;
}

void VatInvoiceInfo::SetTaxSealContent(const string& _taxSealContent)
{
    m_taxSealContent = _taxSealContent;
    m_taxSealContentHasBeenSet = true;
}

bool VatInvoiceInfo::TaxSealContentHasBeenSet() const
{
    return m_taxSealContentHasBeenSet;
}

string VatInvoiceInfo::GetServiceName() const
{
    return m_serviceName;
}

void VatInvoiceInfo::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool VatInvoiceInfo::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string VatInvoiceInfo::GetCity() const
{
    return m_city;
}

void VatInvoiceInfo::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool VatInvoiceInfo::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

int64_t VatInvoiceInfo::GetQRCodeMark() const
{
    return m_qRCodeMark;
}

void VatInvoiceInfo::SetQRCodeMark(const int64_t& _qRCodeMark)
{
    m_qRCodeMark = _qRCodeMark;
    m_qRCodeMarkHasBeenSet = true;
}

bool VatInvoiceInfo::QRCodeMarkHasBeenSet() const
{
    return m_qRCodeMarkHasBeenSet;
}

int64_t VatInvoiceInfo::GetAgentMark() const
{
    return m_agentMark;
}

void VatInvoiceInfo::SetAgentMark(const int64_t& _agentMark)
{
    m_agentMark = _agentMark;
    m_agentMarkHasBeenSet = true;
}

bool VatInvoiceInfo::AgentMarkHasBeenSet() const
{
    return m_agentMarkHasBeenSet;
}

int64_t VatInvoiceInfo::GetTransitMark() const
{
    return m_transitMark;
}

void VatInvoiceInfo::SetTransitMark(const int64_t& _transitMark)
{
    m_transitMark = _transitMark;
    m_transitMarkHasBeenSet = true;
}

bool VatInvoiceInfo::TransitMarkHasBeenSet() const
{
    return m_transitMarkHasBeenSet;
}

int64_t VatInvoiceInfo::GetOilMark() const
{
    return m_oilMark;
}

void VatInvoiceInfo::SetOilMark(const int64_t& _oilMark)
{
    m_oilMark = _oilMark;
    m_oilMarkHasBeenSet = true;
}

bool VatInvoiceInfo::OilMarkHasBeenSet() const
{
    return m_oilMarkHasBeenSet;
}

string VatInvoiceInfo::GetTitle() const
{
    return m_title;
}

void VatInvoiceInfo::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool VatInvoiceInfo::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string VatInvoiceInfo::GetKind() const
{
    return m_kind;
}

void VatInvoiceInfo::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool VatInvoiceInfo::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string VatInvoiceInfo::GetCode() const
{
    return m_code;
}

void VatInvoiceInfo::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool VatInvoiceInfo::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string VatInvoiceInfo::GetNumber() const
{
    return m_number;
}

void VatInvoiceInfo::SetNumber(const string& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool VatInvoiceInfo::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

string VatInvoiceInfo::GetNumberConfirm() const
{
    return m_numberConfirm;
}

void VatInvoiceInfo::SetNumberConfirm(const string& _numberConfirm)
{
    m_numberConfirm = _numberConfirm;
    m_numberConfirmHasBeenSet = true;
}

bool VatInvoiceInfo::NumberConfirmHasBeenSet() const
{
    return m_numberConfirmHasBeenSet;
}

string VatInvoiceInfo::GetDate() const
{
    return m_date;
}

void VatInvoiceInfo::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool VatInvoiceInfo::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string VatInvoiceInfo::GetTotal() const
{
    return m_total;
}

void VatInvoiceInfo::SetTotal(const string& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool VatInvoiceInfo::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

string VatInvoiceInfo::GetTotalCn() const
{
    return m_totalCn;
}

void VatInvoiceInfo::SetTotalCn(const string& _totalCn)
{
    m_totalCn = _totalCn;
    m_totalCnHasBeenSet = true;
}

bool VatInvoiceInfo::TotalCnHasBeenSet() const
{
    return m_totalCnHasBeenSet;
}

string VatInvoiceInfo::GetPretaxAmount() const
{
    return m_pretaxAmount;
}

void VatInvoiceInfo::SetPretaxAmount(const string& _pretaxAmount)
{
    m_pretaxAmount = _pretaxAmount;
    m_pretaxAmountHasBeenSet = true;
}

bool VatInvoiceInfo::PretaxAmountHasBeenSet() const
{
    return m_pretaxAmountHasBeenSet;
}

string VatInvoiceInfo::GetTax() const
{
    return m_tax;
}

void VatInvoiceInfo::SetTax(const string& _tax)
{
    m_tax = _tax;
    m_taxHasBeenSet = true;
}

bool VatInvoiceInfo::TaxHasBeenSet() const
{
    return m_taxHasBeenSet;
}

string VatInvoiceInfo::GetMachineCode() const
{
    return m_machineCode;
}

void VatInvoiceInfo::SetMachineCode(const string& _machineCode)
{
    m_machineCode = _machineCode;
    m_machineCodeHasBeenSet = true;
}

bool VatInvoiceInfo::MachineCodeHasBeenSet() const
{
    return m_machineCodeHasBeenSet;
}

string VatInvoiceInfo::GetCiphertext() const
{
    return m_ciphertext;
}

void VatInvoiceInfo::SetCiphertext(const string& _ciphertext)
{
    m_ciphertext = _ciphertext;
    m_ciphertextHasBeenSet = true;
}

bool VatInvoiceInfo::CiphertextHasBeenSet() const
{
    return m_ciphertextHasBeenSet;
}

string VatInvoiceInfo::GetRemark() const
{
    return m_remark;
}

void VatInvoiceInfo::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool VatInvoiceInfo::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string VatInvoiceInfo::GetSeller() const
{
    return m_seller;
}

void VatInvoiceInfo::SetSeller(const string& _seller)
{
    m_seller = _seller;
    m_sellerHasBeenSet = true;
}

bool VatInvoiceInfo::SellerHasBeenSet() const
{
    return m_sellerHasBeenSet;
}

string VatInvoiceInfo::GetSellerTaxID() const
{
    return m_sellerTaxID;
}

void VatInvoiceInfo::SetSellerTaxID(const string& _sellerTaxID)
{
    m_sellerTaxID = _sellerTaxID;
    m_sellerTaxIDHasBeenSet = true;
}

bool VatInvoiceInfo::SellerTaxIDHasBeenSet() const
{
    return m_sellerTaxIDHasBeenSet;
}

string VatInvoiceInfo::GetSellerAddrTel() const
{
    return m_sellerAddrTel;
}

void VatInvoiceInfo::SetSellerAddrTel(const string& _sellerAddrTel)
{
    m_sellerAddrTel = _sellerAddrTel;
    m_sellerAddrTelHasBeenSet = true;
}

bool VatInvoiceInfo::SellerAddrTelHasBeenSet() const
{
    return m_sellerAddrTelHasBeenSet;
}

string VatInvoiceInfo::GetSellerBankAccount() const
{
    return m_sellerBankAccount;
}

void VatInvoiceInfo::SetSellerBankAccount(const string& _sellerBankAccount)
{
    m_sellerBankAccount = _sellerBankAccount;
    m_sellerBankAccountHasBeenSet = true;
}

bool VatInvoiceInfo::SellerBankAccountHasBeenSet() const
{
    return m_sellerBankAccountHasBeenSet;
}

string VatInvoiceInfo::GetBuyer() const
{
    return m_buyer;
}

void VatInvoiceInfo::SetBuyer(const string& _buyer)
{
    m_buyer = _buyer;
    m_buyerHasBeenSet = true;
}

bool VatInvoiceInfo::BuyerHasBeenSet() const
{
    return m_buyerHasBeenSet;
}

string VatInvoiceInfo::GetBuyerTaxID() const
{
    return m_buyerTaxID;
}

void VatInvoiceInfo::SetBuyerTaxID(const string& _buyerTaxID)
{
    m_buyerTaxID = _buyerTaxID;
    m_buyerTaxIDHasBeenSet = true;
}

bool VatInvoiceInfo::BuyerTaxIDHasBeenSet() const
{
    return m_buyerTaxIDHasBeenSet;
}

int64_t VatInvoiceInfo::GetCompanySealMark() const
{
    return m_companySealMark;
}

void VatInvoiceInfo::SetCompanySealMark(const int64_t& _companySealMark)
{
    m_companySealMark = _companySealMark;
    m_companySealMarkHasBeenSet = true;
}

bool VatInvoiceInfo::CompanySealMarkHasBeenSet() const
{
    return m_companySealMarkHasBeenSet;
}

string VatInvoiceInfo::GetIssuer() const
{
    return m_issuer;
}

void VatInvoiceInfo::SetIssuer(const string& _issuer)
{
    m_issuer = _issuer;
    m_issuerHasBeenSet = true;
}

bool VatInvoiceInfo::IssuerHasBeenSet() const
{
    return m_issuerHasBeenSet;
}

string VatInvoiceInfo::GetReviewer() const
{
    return m_reviewer;
}

void VatInvoiceInfo::SetReviewer(const string& _reviewer)
{
    m_reviewer = _reviewer;
    m_reviewerHasBeenSet = true;
}

bool VatInvoiceInfo::ReviewerHasBeenSet() const
{
    return m_reviewerHasBeenSet;
}

string VatInvoiceInfo::GetProvince() const
{
    return m_province;
}

void VatInvoiceInfo::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool VatInvoiceInfo::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

vector<VatInvoiceItemInfo> VatInvoiceInfo::GetVatInvoiceItemInfos() const
{
    return m_vatInvoiceItemInfos;
}

void VatInvoiceInfo::SetVatInvoiceItemInfos(const vector<VatInvoiceItemInfo>& _vatInvoiceItemInfos)
{
    m_vatInvoiceItemInfos = _vatInvoiceItemInfos;
    m_vatInvoiceItemInfosHasBeenSet = true;
}

bool VatInvoiceInfo::VatInvoiceItemInfosHasBeenSet() const
{
    return m_vatInvoiceItemInfosHasBeenSet;
}

string VatInvoiceInfo::GetCodeConfirm() const
{
    return m_codeConfirm;
}

void VatInvoiceInfo::SetCodeConfirm(const string& _codeConfirm)
{
    m_codeConfirm = _codeConfirm;
    m_codeConfirmHasBeenSet = true;
}

bool VatInvoiceInfo::CodeConfirmHasBeenSet() const
{
    return m_codeConfirmHasBeenSet;
}

string VatInvoiceInfo::GetReceiptor() const
{
    return m_receiptor;
}

void VatInvoiceInfo::SetReceiptor(const string& _receiptor)
{
    m_receiptor = _receiptor;
    m_receiptorHasBeenSet = true;
}

bool VatInvoiceInfo::ReceiptorHasBeenSet() const
{
    return m_receiptorHasBeenSet;
}

int64_t VatInvoiceInfo::GetElectronicFullMark() const
{
    return m_electronicFullMark;
}

void VatInvoiceInfo::SetElectronicFullMark(const int64_t& _electronicFullMark)
{
    m_electronicFullMark = _electronicFullMark;
    m_electronicFullMarkHasBeenSet = true;
}

bool VatInvoiceInfo::ElectronicFullMarkHasBeenSet() const
{
    return m_electronicFullMarkHasBeenSet;
}

string VatInvoiceInfo::GetElectronicFullNumber() const
{
    return m_electronicFullNumber;
}

void VatInvoiceInfo::SetElectronicFullNumber(const string& _electronicFullNumber)
{
    m_electronicFullNumber = _electronicFullNumber;
    m_electronicFullNumberHasBeenSet = true;
}

bool VatInvoiceInfo::ElectronicFullNumberHasBeenSet() const
{
    return m_electronicFullNumberHasBeenSet;
}

string VatInvoiceInfo::GetFormName() const
{
    return m_formName;
}

void VatInvoiceInfo::SetFormName(const string& _formName)
{
    m_formName = _formName;
    m_formNameHasBeenSet = true;
}

bool VatInvoiceInfo::FormNameHasBeenSet() const
{
    return m_formNameHasBeenSet;
}

int64_t VatInvoiceInfo::GetBlockChainMark() const
{
    return m_blockChainMark;
}

void VatInvoiceInfo::SetBlockChainMark(const int64_t& _blockChainMark)
{
    m_blockChainMark = _blockChainMark;
    m_blockChainMarkHasBeenSet = true;
}

bool VatInvoiceInfo::BlockChainMarkHasBeenSet() const
{
    return m_blockChainMarkHasBeenSet;
}

int64_t VatInvoiceInfo::GetAcquisitionMark() const
{
    return m_acquisitionMark;
}

void VatInvoiceInfo::SetAcquisitionMark(const int64_t& _acquisitionMark)
{
    m_acquisitionMark = _acquisitionMark;
    m_acquisitionMarkHasBeenSet = true;
}

bool VatInvoiceInfo::AcquisitionMarkHasBeenSet() const
{
    return m_acquisitionMarkHasBeenSet;
}

string VatInvoiceInfo::GetSubTotal() const
{
    return m_subTotal;
}

void VatInvoiceInfo::SetSubTotal(const string& _subTotal)
{
    m_subTotal = _subTotal;
    m_subTotalHasBeenSet = true;
}

bool VatInvoiceInfo::SubTotalHasBeenSet() const
{
    return m_subTotalHasBeenSet;
}

string VatInvoiceInfo::GetSubTax() const
{
    return m_subTax;
}

void VatInvoiceInfo::SetSubTax(const string& _subTax)
{
    m_subTax = _subTax;
    m_subTaxHasBeenSet = true;
}

bool VatInvoiceInfo::SubTaxHasBeenSet() const
{
    return m_subTaxHasBeenSet;
}

