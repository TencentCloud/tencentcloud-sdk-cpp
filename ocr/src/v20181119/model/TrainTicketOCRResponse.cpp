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
using namespace rapidjson;
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
    m_serialNumberHasBeenSet(false)
{
}

CoreInternalOutcome TrainTicketOCRResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("TicketNum") && !rsp["TicketNum"].IsNull())
    {
        if (!rsp["TicketNum"].IsString())
        {
            return CoreInternalOutcome(Error("response `TicketNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ticketNum = string(rsp["TicketNum"].GetString());
        m_ticketNumHasBeenSet = true;
    }

    if (rsp.HasMember("StartStation") && !rsp["StartStation"].IsNull())
    {
        if (!rsp["StartStation"].IsString())
        {
            return CoreInternalOutcome(Error("response `StartStation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startStation = string(rsp["StartStation"].GetString());
        m_startStationHasBeenSet = true;
    }

    if (rsp.HasMember("DestinationStation") && !rsp["DestinationStation"].IsNull())
    {
        if (!rsp["DestinationStation"].IsString())
        {
            return CoreInternalOutcome(Error("response `DestinationStation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destinationStation = string(rsp["DestinationStation"].GetString());
        m_destinationStationHasBeenSet = true;
    }

    if (rsp.HasMember("Date") && !rsp["Date"].IsNull())
    {
        if (!rsp["Date"].IsString())
        {
            return CoreInternalOutcome(Error("response `Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(rsp["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (rsp.HasMember("TrainNum") && !rsp["TrainNum"].IsNull())
    {
        if (!rsp["TrainNum"].IsString())
        {
            return CoreInternalOutcome(Error("response `TrainNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainNum = string(rsp["TrainNum"].GetString());
        m_trainNumHasBeenSet = true;
    }

    if (rsp.HasMember("Seat") && !rsp["Seat"].IsNull())
    {
        if (!rsp["Seat"].IsString())
        {
            return CoreInternalOutcome(Error("response `Seat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seat = string(rsp["Seat"].GetString());
        m_seatHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("Price") && !rsp["Price"].IsNull())
    {
        if (!rsp["Price"].IsString())
        {
            return CoreInternalOutcome(Error("response `Price` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_price = string(rsp["Price"].GetString());
        m_priceHasBeenSet = true;
    }

    if (rsp.HasMember("SeatCategory") && !rsp["SeatCategory"].IsNull())
    {
        if (!rsp["SeatCategory"].IsString())
        {
            return CoreInternalOutcome(Error("response `SeatCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seatCategory = string(rsp["SeatCategory"].GetString());
        m_seatCategoryHasBeenSet = true;
    }

    if (rsp.HasMember("ID") && !rsp["ID"].IsNull())
    {
        if (!rsp["ID"].IsString())
        {
            return CoreInternalOutcome(Error("response `ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(rsp["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (rsp.HasMember("InvoiceType") && !rsp["InvoiceType"].IsNull())
    {
        if (!rsp["InvoiceType"].IsString())
        {
            return CoreInternalOutcome(Error("response `InvoiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invoiceType = string(rsp["InvoiceType"].GetString());
        m_invoiceTypeHasBeenSet = true;
    }

    if (rsp.HasMember("SerialNumber") && !rsp["SerialNumber"].IsNull())
    {
        if (!rsp["SerialNumber"].IsString())
        {
            return CoreInternalOutcome(Error("response `SerialNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serialNumber = string(rsp["SerialNumber"].GetString());
        m_serialNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
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


