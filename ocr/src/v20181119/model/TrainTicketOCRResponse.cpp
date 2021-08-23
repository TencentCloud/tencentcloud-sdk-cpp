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

#include <tencentcloud/ocr/v20181119/model/TrainTicketOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

TrainTicketOCRResponse::TrainTicketOCRResponse() :
    m_ticketNumHasBeenSet(false),
    m_startStationHasBeenSet(false),
    m_destinationStationHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_trainNumHasBeenSet(false),
    m_seatHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_seatCategoryHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_invoiceTypeHasBeenSet(false),
    m_serialNumberHasBeenSet(false),
    m_additionalCostHasBeenSet(false),
    m_handlingFeeHasBeenSet(false),
    m_legalAmountHasBeenSet(false),
    m_ticketStationHasBeenSet(false),
    m_originalPriceHasBeenSet(false),
    m_invoiceStyleHasBeenSet(false),
    m_receiptNumberHasBeenSet(false),
    m_isReceiptHasBeenSet(false)
{
}

CoreInternalOutcome TrainTicketOCRResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TicketNum") && !rsp["TicketNum"].IsNull())
    {
        if (!rsp["TicketNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TicketNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ticketNum = string(rsp["TicketNum"].GetString());
        m_ticketNumHasBeenSet = true;
    }

    if (rsp.HasMember("StartStation") && !rsp["StartStation"].IsNull())
    {
        if (!rsp["StartStation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StartStation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startStation = string(rsp["StartStation"].GetString());
        m_startStationHasBeenSet = true;
    }

    if (rsp.HasMember("DestinationStation") && !rsp["DestinationStation"].IsNull())
    {
        if (!rsp["DestinationStation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DestinationStation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destinationStation = string(rsp["DestinationStation"].GetString());
        m_destinationStationHasBeenSet = true;
    }

    if (rsp.HasMember("Date") && !rsp["Date"].IsNull())
    {
        if (!rsp["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(rsp["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (rsp.HasMember("TrainNum") && !rsp["TrainNum"].IsNull())
    {
        if (!rsp["TrainNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainNum = string(rsp["TrainNum"].GetString());
        m_trainNumHasBeenSet = true;
    }

    if (rsp.HasMember("Seat") && !rsp["Seat"].IsNull())
    {
        if (!rsp["Seat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Seat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seat = string(rsp["Seat"].GetString());
        m_seatHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("Price") && !rsp["Price"].IsNull())
    {
        if (!rsp["Price"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Price` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_price = string(rsp["Price"].GetString());
        m_priceHasBeenSet = true;
    }

    if (rsp.HasMember("SeatCategory") && !rsp["SeatCategory"].IsNull())
    {
        if (!rsp["SeatCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeatCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seatCategory = string(rsp["SeatCategory"].GetString());
        m_seatCategoryHasBeenSet = true;
    }

    if (rsp.HasMember("ID") && !rsp["ID"].IsNull())
    {
        if (!rsp["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(rsp["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (rsp.HasMember("InvoiceType") && !rsp["InvoiceType"].IsNull())
    {
        if (!rsp["InvoiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvoiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invoiceType = string(rsp["InvoiceType"].GetString());
        m_invoiceTypeHasBeenSet = true;
    }

    if (rsp.HasMember("SerialNumber") && !rsp["SerialNumber"].IsNull())
    {
        if (!rsp["SerialNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SerialNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serialNumber = string(rsp["SerialNumber"].GetString());
        m_serialNumberHasBeenSet = true;
    }

    if (rsp.HasMember("AdditionalCost") && !rsp["AdditionalCost"].IsNull())
    {
        if (!rsp["AdditionalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdditionalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_additionalCost = string(rsp["AdditionalCost"].GetString());
        m_additionalCostHasBeenSet = true;
    }

    if (rsp.HasMember("HandlingFee") && !rsp["HandlingFee"].IsNull())
    {
        if (!rsp["HandlingFee"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HandlingFee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_handlingFee = string(rsp["HandlingFee"].GetString());
        m_handlingFeeHasBeenSet = true;
    }

    if (rsp.HasMember("LegalAmount") && !rsp["LegalAmount"].IsNull())
    {
        if (!rsp["LegalAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LegalAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_legalAmount = string(rsp["LegalAmount"].GetString());
        m_legalAmountHasBeenSet = true;
    }

    if (rsp.HasMember("TicketStation") && !rsp["TicketStation"].IsNull())
    {
        if (!rsp["TicketStation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TicketStation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ticketStation = string(rsp["TicketStation"].GetString());
        m_ticketStationHasBeenSet = true;
    }

    if (rsp.HasMember("OriginalPrice") && !rsp["OriginalPrice"].IsNull())
    {
        if (!rsp["OriginalPrice"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginalPrice` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalPrice = string(rsp["OriginalPrice"].GetString());
        m_originalPriceHasBeenSet = true;
    }

    if (rsp.HasMember("InvoiceStyle") && !rsp["InvoiceStyle"].IsNull())
    {
        if (!rsp["InvoiceStyle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvoiceStyle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invoiceStyle = string(rsp["InvoiceStyle"].GetString());
        m_invoiceStyleHasBeenSet = true;
    }

    if (rsp.HasMember("ReceiptNumber") && !rsp["ReceiptNumber"].IsNull())
    {
        if (!rsp["ReceiptNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReceiptNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receiptNumber = string(rsp["ReceiptNumber"].GetString());
        m_receiptNumberHasBeenSet = true;
    }

    if (rsp.HasMember("IsReceipt") && !rsp["IsReceipt"].IsNull())
    {
        if (!rsp["IsReceipt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IsReceipt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isReceipt = string(rsp["IsReceipt"].GetString());
        m_isReceiptHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string TrainTicketOCRResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_ticketNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TicketNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ticketNum.c_str(), allocator).Move(), allocator);
    }

    if (m_startStationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartStation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startStation.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationStationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationStation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destinationStation.c_str(), allocator).Move(), allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_trainNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trainNum.c_str(), allocator).Move(), allocator);
    }

    if (m_seatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_seat.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_priceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Price";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_price.c_str(), allocator).Move(), allocator);
    }

    if (m_seatCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeatCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_seatCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_invoiceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvoiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invoiceType.c_str(), allocator).Move(), allocator);
    }

    if (m_serialNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serialNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_additionalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdditionalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_additionalCost.c_str(), allocator).Move(), allocator);
    }

    if (m_handlingFeeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandlingFee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_handlingFee.c_str(), allocator).Move(), allocator);
    }

    if (m_legalAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegalAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_legalAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_ticketStationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TicketStation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ticketStation.c_str(), allocator).Move(), allocator);
    }

    if (m_originalPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalPrice.c_str(), allocator).Move(), allocator);
    }

    if (m_invoiceStyleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvoiceStyle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invoiceStyle.c_str(), allocator).Move(), allocator);
    }

    if (m_receiptNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiptNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receiptNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_isReceiptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsReceipt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isReceipt.c_str(), allocator).Move(), allocator);
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


string TrainTicketOCRResponse::GetTicketNum() const
{
    return m_ticketNum;
}

bool TrainTicketOCRResponse::TicketNumHasBeenSet() const
{
    return m_ticketNumHasBeenSet;
}

string TrainTicketOCRResponse::GetStartStation() const
{
    return m_startStation;
}

bool TrainTicketOCRResponse::StartStationHasBeenSet() const
{
    return m_startStationHasBeenSet;
}

string TrainTicketOCRResponse::GetDestinationStation() const
{
    return m_destinationStation;
}

bool TrainTicketOCRResponse::DestinationStationHasBeenSet() const
{
    return m_destinationStationHasBeenSet;
}

string TrainTicketOCRResponse::GetDate() const
{
    return m_date;
}

bool TrainTicketOCRResponse::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string TrainTicketOCRResponse::GetTrainNum() const
{
    return m_trainNum;
}

bool TrainTicketOCRResponse::TrainNumHasBeenSet() const
{
    return m_trainNumHasBeenSet;
}

string TrainTicketOCRResponse::GetSeat() const
{
    return m_seat;
}

bool TrainTicketOCRResponse::SeatHasBeenSet() const
{
    return m_seatHasBeenSet;
}

string TrainTicketOCRResponse::GetName() const
{
    return m_name;
}

bool TrainTicketOCRResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string TrainTicketOCRResponse::GetPrice() const
{
    return m_price;
}

bool TrainTicketOCRResponse::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

string TrainTicketOCRResponse::GetSeatCategory() const
{
    return m_seatCategory;
}

bool TrainTicketOCRResponse::SeatCategoryHasBeenSet() const
{
    return m_seatCategoryHasBeenSet;
}

string TrainTicketOCRResponse::GetID() const
{
    return m_iD;
}

bool TrainTicketOCRResponse::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string TrainTicketOCRResponse::GetInvoiceType() const
{
    return m_invoiceType;
}

bool TrainTicketOCRResponse::InvoiceTypeHasBeenSet() const
{
    return m_invoiceTypeHasBeenSet;
}

string TrainTicketOCRResponse::GetSerialNumber() const
{
    return m_serialNumber;
}

bool TrainTicketOCRResponse::SerialNumberHasBeenSet() const
{
    return m_serialNumberHasBeenSet;
}

string TrainTicketOCRResponse::GetAdditionalCost() const
{
    return m_additionalCost;
}

bool TrainTicketOCRResponse::AdditionalCostHasBeenSet() const
{
    return m_additionalCostHasBeenSet;
}

string TrainTicketOCRResponse::GetHandlingFee() const
{
    return m_handlingFee;
}

bool TrainTicketOCRResponse::HandlingFeeHasBeenSet() const
{
    return m_handlingFeeHasBeenSet;
}

string TrainTicketOCRResponse::GetLegalAmount() const
{
    return m_legalAmount;
}

bool TrainTicketOCRResponse::LegalAmountHasBeenSet() const
{
    return m_legalAmountHasBeenSet;
}

string TrainTicketOCRResponse::GetTicketStation() const
{
    return m_ticketStation;
}

bool TrainTicketOCRResponse::TicketStationHasBeenSet() const
{
    return m_ticketStationHasBeenSet;
}

string TrainTicketOCRResponse::GetOriginalPrice() const
{
    return m_originalPrice;
}

bool TrainTicketOCRResponse::OriginalPriceHasBeenSet() const
{
    return m_originalPriceHasBeenSet;
}

string TrainTicketOCRResponse::GetInvoiceStyle() const
{
    return m_invoiceStyle;
}

bool TrainTicketOCRResponse::InvoiceStyleHasBeenSet() const
{
    return m_invoiceStyleHasBeenSet;
}

string TrainTicketOCRResponse::GetReceiptNumber() const
{
    return m_receiptNumber;
}

bool TrainTicketOCRResponse::ReceiptNumberHasBeenSet() const
{
    return m_receiptNumberHasBeenSet;
}

string TrainTicketOCRResponse::GetIsReceipt() const
{
    return m_isReceipt;
}

bool TrainTicketOCRResponse::IsReceiptHasBeenSet() const
{
    return m_isReceiptHasBeenSet;
}


