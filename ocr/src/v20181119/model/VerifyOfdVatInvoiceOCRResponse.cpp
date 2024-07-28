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

#include <tencentcloud/ocr/v20181119/model/VerifyOfdVatInvoiceOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

VerifyOfdVatInvoiceOCRResponse::VerifyOfdVatInvoiceOCRResponse() :
    m_typeHasBeenSet(false),
    m_invoiceCodeHasBeenSet(false),
    m_invoiceNumberHasBeenSet(false),
    m_issueDateHasBeenSet(false),
    m_invoiceCheckCodeHasBeenSet(false),
    m_machineNumberHasBeenSet(false),
    m_taxControlCodeHasBeenSet(false),
    m_buyerHasBeenSet(false),
    m_sellerHasBeenSet(false),
    m_taxInclusiveTotalAmountHasBeenSet(false),
    m_invoiceClerkHasBeenSet(false),
    m_payeeHasBeenSet(false),
    m_checkerHasBeenSet(false),
    m_taxTotalAmountHasBeenSet(false),
    m_taxExclusiveTotalAmountHasBeenSet(false),
    m_noteHasBeenSet(false),
    m_goodsInfosHasBeenSet(false),
    m_airTicketInfoHasBeenSet(false),
    m_railwayTicketInfoHasBeenSet(false),
    m_invoiceTitleHasBeenSet(false)
{
}

CoreInternalOutcome VerifyOfdVatInvoiceOCRResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(rsp["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("InvoiceCode") && !rsp["InvoiceCode"].IsNull())
    {
        if (!rsp["InvoiceCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvoiceCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invoiceCode = string(rsp["InvoiceCode"].GetString());
        m_invoiceCodeHasBeenSet = true;
    }

    if (rsp.HasMember("InvoiceNumber") && !rsp["InvoiceNumber"].IsNull())
    {
        if (!rsp["InvoiceNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvoiceNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invoiceNumber = string(rsp["InvoiceNumber"].GetString());
        m_invoiceNumberHasBeenSet = true;
    }

    if (rsp.HasMember("IssueDate") && !rsp["IssueDate"].IsNull())
    {
        if (!rsp["IssueDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IssueDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issueDate = string(rsp["IssueDate"].GetString());
        m_issueDateHasBeenSet = true;
    }

    if (rsp.HasMember("InvoiceCheckCode") && !rsp["InvoiceCheckCode"].IsNull())
    {
        if (!rsp["InvoiceCheckCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvoiceCheckCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invoiceCheckCode = string(rsp["InvoiceCheckCode"].GetString());
        m_invoiceCheckCodeHasBeenSet = true;
    }

    if (rsp.HasMember("MachineNumber") && !rsp["MachineNumber"].IsNull())
    {
        if (!rsp["MachineNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineNumber = string(rsp["MachineNumber"].GetString());
        m_machineNumberHasBeenSet = true;
    }

    if (rsp.HasMember("TaxControlCode") && !rsp["TaxControlCode"].IsNull())
    {
        if (!rsp["TaxControlCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaxControlCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxControlCode = string(rsp["TaxControlCode"].GetString());
        m_taxControlCodeHasBeenSet = true;
    }

    if (rsp.HasMember("Buyer") && !rsp["Buyer"].IsNull())
    {
        if (!rsp["Buyer"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Buyer` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_buyer.Deserialize(rsp["Buyer"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_buyerHasBeenSet = true;
    }

    if (rsp.HasMember("Seller") && !rsp["Seller"].IsNull())
    {
        if (!rsp["Seller"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Seller` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_seller.Deserialize(rsp["Seller"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sellerHasBeenSet = true;
    }

    if (rsp.HasMember("TaxInclusiveTotalAmount") && !rsp["TaxInclusiveTotalAmount"].IsNull())
    {
        if (!rsp["TaxInclusiveTotalAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaxInclusiveTotalAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxInclusiveTotalAmount = string(rsp["TaxInclusiveTotalAmount"].GetString());
        m_taxInclusiveTotalAmountHasBeenSet = true;
    }

    if (rsp.HasMember("InvoiceClerk") && !rsp["InvoiceClerk"].IsNull())
    {
        if (!rsp["InvoiceClerk"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvoiceClerk` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invoiceClerk = string(rsp["InvoiceClerk"].GetString());
        m_invoiceClerkHasBeenSet = true;
    }

    if (rsp.HasMember("Payee") && !rsp["Payee"].IsNull())
    {
        if (!rsp["Payee"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Payee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payee = string(rsp["Payee"].GetString());
        m_payeeHasBeenSet = true;
    }

    if (rsp.HasMember("Checker") && !rsp["Checker"].IsNull())
    {
        if (!rsp["Checker"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Checker` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checker = string(rsp["Checker"].GetString());
        m_checkerHasBeenSet = true;
    }

    if (rsp.HasMember("TaxTotalAmount") && !rsp["TaxTotalAmount"].IsNull())
    {
        if (!rsp["TaxTotalAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaxTotalAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxTotalAmount = string(rsp["TaxTotalAmount"].GetString());
        m_taxTotalAmountHasBeenSet = true;
    }

    if (rsp.HasMember("TaxExclusiveTotalAmount") && !rsp["TaxExclusiveTotalAmount"].IsNull())
    {
        if (!rsp["TaxExclusiveTotalAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaxExclusiveTotalAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxExclusiveTotalAmount = string(rsp["TaxExclusiveTotalAmount"].GetString());
        m_taxExclusiveTotalAmountHasBeenSet = true;
    }

    if (rsp.HasMember("Note") && !rsp["Note"].IsNull())
    {
        if (!rsp["Note"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Note` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_note = string(rsp["Note"].GetString());
        m_noteHasBeenSet = true;
    }

    if (rsp.HasMember("GoodsInfos") && !rsp["GoodsInfos"].IsNull())
    {
        if (!rsp["GoodsInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GoodsInfos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["GoodsInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VatInvoiceGoodsInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_goodsInfos.push_back(item);
        }
        m_goodsInfosHasBeenSet = true;
    }

    if (rsp.HasMember("AirTicketInfo") && !rsp["AirTicketInfo"].IsNull())
    {
        if (!rsp["AirTicketInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AirTicketInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_airTicketInfo.Deserialize(rsp["AirTicketInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_airTicketInfoHasBeenSet = true;
    }

    if (rsp.HasMember("RailwayTicketInfo") && !rsp["RailwayTicketInfo"].IsNull())
    {
        if (!rsp["RailwayTicketInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RailwayTicketInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_railwayTicketInfo.Deserialize(rsp["RailwayTicketInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_railwayTicketInfoHasBeenSet = true;
    }

    if (rsp.HasMember("InvoiceTitle") && !rsp["InvoiceTitle"].IsNull())
    {
        if (!rsp["InvoiceTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvoiceTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invoiceTitle = string(rsp["InvoiceTitle"].GetString());
        m_invoiceTitleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string VerifyOfdVatInvoiceOCRResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_invoiceCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvoiceCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invoiceCode.c_str(), allocator).Move(), allocator);
    }

    if (m_invoiceNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvoiceNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invoiceNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_issueDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issueDate.c_str(), allocator).Move(), allocator);
    }

    if (m_invoiceCheckCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvoiceCheckCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invoiceCheckCode.c_str(), allocator).Move(), allocator);
    }

    if (m_machineNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_taxControlCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxControlCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxControlCode.c_str(), allocator).Move(), allocator);
    }

    if (m_buyerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Buyer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_buyer.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sellerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seller";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_seller.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_taxInclusiveTotalAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxInclusiveTotalAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxInclusiveTotalAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_invoiceClerkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvoiceClerk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invoiceClerk.c_str(), allocator).Move(), allocator);
    }

    if (m_payeeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Payee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payee.c_str(), allocator).Move(), allocator);
    }

    if (m_checkerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Checker";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checker.c_str(), allocator).Move(), allocator);
    }

    if (m_taxTotalAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxTotalAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxTotalAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_taxExclusiveTotalAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxExclusiveTotalAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxExclusiveTotalAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_noteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Note";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_note.c_str(), allocator).Move(), allocator);
    }

    if (m_goodsInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_goodsInfos.begin(); itr != m_goodsInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_airTicketInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AirTicketInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_airTicketInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_railwayTicketInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RailwayTicketInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_railwayTicketInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_invoiceTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvoiceTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invoiceTitle.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string VerifyOfdVatInvoiceOCRResponse::GetType() const
{
    return m_type;
}

bool VerifyOfdVatInvoiceOCRResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string VerifyOfdVatInvoiceOCRResponse::GetInvoiceCode() const
{
    return m_invoiceCode;
}

bool VerifyOfdVatInvoiceOCRResponse::InvoiceCodeHasBeenSet() const
{
    return m_invoiceCodeHasBeenSet;
}

string VerifyOfdVatInvoiceOCRResponse::GetInvoiceNumber() const
{
    return m_invoiceNumber;
}

bool VerifyOfdVatInvoiceOCRResponse::InvoiceNumberHasBeenSet() const
{
    return m_invoiceNumberHasBeenSet;
}

string VerifyOfdVatInvoiceOCRResponse::GetIssueDate() const
{
    return m_issueDate;
}

bool VerifyOfdVatInvoiceOCRResponse::IssueDateHasBeenSet() const
{
    return m_issueDateHasBeenSet;
}

string VerifyOfdVatInvoiceOCRResponse::GetInvoiceCheckCode() const
{
    return m_invoiceCheckCode;
}

bool VerifyOfdVatInvoiceOCRResponse::InvoiceCheckCodeHasBeenSet() const
{
    return m_invoiceCheckCodeHasBeenSet;
}

string VerifyOfdVatInvoiceOCRResponse::GetMachineNumber() const
{
    return m_machineNumber;
}

bool VerifyOfdVatInvoiceOCRResponse::MachineNumberHasBeenSet() const
{
    return m_machineNumberHasBeenSet;
}

string VerifyOfdVatInvoiceOCRResponse::GetTaxControlCode() const
{
    return m_taxControlCode;
}

bool VerifyOfdVatInvoiceOCRResponse::TaxControlCodeHasBeenSet() const
{
    return m_taxControlCodeHasBeenSet;
}

VatInvoiceUserInfo VerifyOfdVatInvoiceOCRResponse::GetBuyer() const
{
    return m_buyer;
}

bool VerifyOfdVatInvoiceOCRResponse::BuyerHasBeenSet() const
{
    return m_buyerHasBeenSet;
}

VatInvoiceUserInfo VerifyOfdVatInvoiceOCRResponse::GetSeller() const
{
    return m_seller;
}

bool VerifyOfdVatInvoiceOCRResponse::SellerHasBeenSet() const
{
    return m_sellerHasBeenSet;
}

string VerifyOfdVatInvoiceOCRResponse::GetTaxInclusiveTotalAmount() const
{
    return m_taxInclusiveTotalAmount;
}

bool VerifyOfdVatInvoiceOCRResponse::TaxInclusiveTotalAmountHasBeenSet() const
{
    return m_taxInclusiveTotalAmountHasBeenSet;
}

string VerifyOfdVatInvoiceOCRResponse::GetInvoiceClerk() const
{
    return m_invoiceClerk;
}

bool VerifyOfdVatInvoiceOCRResponse::InvoiceClerkHasBeenSet() const
{
    return m_invoiceClerkHasBeenSet;
}

string VerifyOfdVatInvoiceOCRResponse::GetPayee() const
{
    return m_payee;
}

bool VerifyOfdVatInvoiceOCRResponse::PayeeHasBeenSet() const
{
    return m_payeeHasBeenSet;
}

string VerifyOfdVatInvoiceOCRResponse::GetChecker() const
{
    return m_checker;
}

bool VerifyOfdVatInvoiceOCRResponse::CheckerHasBeenSet() const
{
    return m_checkerHasBeenSet;
}

string VerifyOfdVatInvoiceOCRResponse::GetTaxTotalAmount() const
{
    return m_taxTotalAmount;
}

bool VerifyOfdVatInvoiceOCRResponse::TaxTotalAmountHasBeenSet() const
{
    return m_taxTotalAmountHasBeenSet;
}

string VerifyOfdVatInvoiceOCRResponse::GetTaxExclusiveTotalAmount() const
{
    return m_taxExclusiveTotalAmount;
}

bool VerifyOfdVatInvoiceOCRResponse::TaxExclusiveTotalAmountHasBeenSet() const
{
    return m_taxExclusiveTotalAmountHasBeenSet;
}

string VerifyOfdVatInvoiceOCRResponse::GetNote() const
{
    return m_note;
}

bool VerifyOfdVatInvoiceOCRResponse::NoteHasBeenSet() const
{
    return m_noteHasBeenSet;
}

vector<VatInvoiceGoodsInfo> VerifyOfdVatInvoiceOCRResponse::GetGoodsInfos() const
{
    return m_goodsInfos;
}

bool VerifyOfdVatInvoiceOCRResponse::GoodsInfosHasBeenSet() const
{
    return m_goodsInfosHasBeenSet;
}

AirTicketInfo VerifyOfdVatInvoiceOCRResponse::GetAirTicketInfo() const
{
    return m_airTicketInfo;
}

bool VerifyOfdVatInvoiceOCRResponse::AirTicketInfoHasBeenSet() const
{
    return m_airTicketInfoHasBeenSet;
}

RailwayTicketInfo VerifyOfdVatInvoiceOCRResponse::GetRailwayTicketInfo() const
{
    return m_railwayTicketInfo;
}

bool VerifyOfdVatInvoiceOCRResponse::RailwayTicketInfoHasBeenSet() const
{
    return m_railwayTicketInfoHasBeenSet;
}

string VerifyOfdVatInvoiceOCRResponse::GetInvoiceTitle() const
{
    return m_invoiceTitle;
}

bool VerifyOfdVatInvoiceOCRResponse::InvoiceTitleHasBeenSet() const
{
    return m_invoiceTitleHasBeenSet;
}


