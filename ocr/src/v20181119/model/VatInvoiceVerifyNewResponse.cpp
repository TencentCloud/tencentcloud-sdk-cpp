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

#include <tencentcloud/ocr/v20181119/model/VatInvoiceVerifyNewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

VatInvoiceVerifyNewResponse::VatInvoiceVerifyNewResponse() :
    m_invoiceHasBeenSet(false),
    m_vehicleInvoiceInfoHasBeenSet(false),
    m_usedVehicleInvoiceInfoHasBeenSet(false),
    m_passInvoiceInfoListHasBeenSet(false),
    m_electronicTrainTicketHasBeenSet(false),
    m_electronicAirTransportHasBeenSet(false),
    m_financialBillHasBeenSet(false)
{
}

CoreInternalOutcome VatInvoiceVerifyNewResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Invoice") && !rsp["Invoice"].IsNull())
    {
        if (!rsp["Invoice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Invoice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_invoice.Deserialize(rsp["Invoice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_invoiceHasBeenSet = true;
    }

    if (rsp.HasMember("VehicleInvoiceInfo") && !rsp["VehicleInvoiceInfo"].IsNull())
    {
        if (!rsp["VehicleInvoiceInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VehicleInvoiceInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vehicleInvoiceInfo.Deserialize(rsp["VehicleInvoiceInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vehicleInvoiceInfoHasBeenSet = true;
    }

    if (rsp.HasMember("UsedVehicleInvoiceInfo") && !rsp["UsedVehicleInvoiceInfo"].IsNull())
    {
        if (!rsp["UsedVehicleInvoiceInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UsedVehicleInvoiceInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_usedVehicleInvoiceInfo.Deserialize(rsp["UsedVehicleInvoiceInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_usedVehicleInvoiceInfoHasBeenSet = true;
    }

    if (rsp.HasMember("PassInvoiceInfoList") && !rsp["PassInvoiceInfoList"].IsNull())
    {
        if (!rsp["PassInvoiceInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PassInvoiceInfoList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["PassInvoiceInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PassInvoiceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_passInvoiceInfoList.push_back(item);
        }
        m_passInvoiceInfoListHasBeenSet = true;
    }

    if (rsp.HasMember("ElectronicTrainTicket") && !rsp["ElectronicTrainTicket"].IsNull())
    {
        if (!rsp["ElectronicTrainTicket"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicket` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_electronicTrainTicket.Deserialize(rsp["ElectronicTrainTicket"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_electronicTrainTicketHasBeenSet = true;
    }

    if (rsp.HasMember("ElectronicAirTransport") && !rsp["ElectronicAirTransport"].IsNull())
    {
        if (!rsp["ElectronicAirTransport"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicAirTransport` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_electronicAirTransport.Deserialize(rsp["ElectronicAirTransport"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_electronicAirTransportHasBeenSet = true;
    }

    if (rsp.HasMember("FinancialBill") && !rsp["FinancialBill"].IsNull())
    {
        if (!rsp["FinancialBill"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FinancialBill` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_financialBill.Deserialize(rsp["FinancialBill"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_financialBillHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string VatInvoiceVerifyNewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_invoiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Invoice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_invoice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vehicleInvoiceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VehicleInvoiceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vehicleInvoiceInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_usedVehicleInvoiceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedVehicleInvoiceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_usedVehicleInvoiceInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_passInvoiceInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassInvoiceInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_passInvoiceInfoList.begin(); itr != m_passInvoiceInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_electronicTrainTicketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElectronicTrainTicket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_electronicTrainTicket.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_electronicAirTransportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElectronicAirTransport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_electronicAirTransport.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_financialBillHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinancialBill";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_financialBill.ToJsonObject(value[key.c_str()], allocator);
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


VatInvoice VatInvoiceVerifyNewResponse::GetInvoice() const
{
    return m_invoice;
}

bool VatInvoiceVerifyNewResponse::InvoiceHasBeenSet() const
{
    return m_invoiceHasBeenSet;
}

VehicleInvoiceInfo VatInvoiceVerifyNewResponse::GetVehicleInvoiceInfo() const
{
    return m_vehicleInvoiceInfo;
}

bool VatInvoiceVerifyNewResponse::VehicleInvoiceInfoHasBeenSet() const
{
    return m_vehicleInvoiceInfoHasBeenSet;
}

UsedVehicleInvoiceInfo VatInvoiceVerifyNewResponse::GetUsedVehicleInvoiceInfo() const
{
    return m_usedVehicleInvoiceInfo;
}

bool VatInvoiceVerifyNewResponse::UsedVehicleInvoiceInfoHasBeenSet() const
{
    return m_usedVehicleInvoiceInfoHasBeenSet;
}

vector<PassInvoiceInfo> VatInvoiceVerifyNewResponse::GetPassInvoiceInfoList() const
{
    return m_passInvoiceInfoList;
}

bool VatInvoiceVerifyNewResponse::PassInvoiceInfoListHasBeenSet() const
{
    return m_passInvoiceInfoListHasBeenSet;
}

ElectronicTrainTicket VatInvoiceVerifyNewResponse::GetElectronicTrainTicket() const
{
    return m_electronicTrainTicket;
}

bool VatInvoiceVerifyNewResponse::ElectronicTrainTicketHasBeenSet() const
{
    return m_electronicTrainTicketHasBeenSet;
}

ElectronicAirTransport VatInvoiceVerifyNewResponse::GetElectronicAirTransport() const
{
    return m_electronicAirTransport;
}

bool VatInvoiceVerifyNewResponse::ElectronicAirTransportHasBeenSet() const
{
    return m_electronicAirTransportHasBeenSet;
}

FinancialBill VatInvoiceVerifyNewResponse::GetFinancialBill() const
{
    return m_financialBill;
}

bool VatInvoiceVerifyNewResponse::FinancialBillHasBeenSet() const
{
    return m_financialBillHasBeenSet;
}


