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

#include <tencentcloud/ocr/v20181119/model/TaxiInvoiceOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

TaxiInvoiceOCRResponse::TaxiInvoiceOCRResponse() :
    m_invoiceNumHasBeenSet(false),
    m_invoiceCodeHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_fareHasBeenSet(false),
    m_getOnTimeHasBeenSet(false),
    m_getOffTimeHasBeenSet(false),
    m_distanceHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_plateNumberHasBeenSet(false),
    m_invoiceTypeHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false)
{
}

CoreInternalOutcome TaxiInvoiceOCRResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("InvoiceNum") && !rsp["InvoiceNum"].IsNull())
    {
        if (!rsp["InvoiceNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvoiceNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invoiceNum = string(rsp["InvoiceNum"].GetString());
        m_invoiceNumHasBeenSet = true;
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

    if (rsp.HasMember("Date") && !rsp["Date"].IsNull())
    {
        if (!rsp["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(rsp["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (rsp.HasMember("Fare") && !rsp["Fare"].IsNull())
    {
        if (!rsp["Fare"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Fare` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fare = string(rsp["Fare"].GetString());
        m_fareHasBeenSet = true;
    }

    if (rsp.HasMember("GetOnTime") && !rsp["GetOnTime"].IsNull())
    {
        if (!rsp["GetOnTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetOnTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_getOnTime = string(rsp["GetOnTime"].GetString());
        m_getOnTimeHasBeenSet = true;
    }

    if (rsp.HasMember("GetOffTime") && !rsp["GetOffTime"].IsNull())
    {
        if (!rsp["GetOffTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetOffTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_getOffTime = string(rsp["GetOffTime"].GetString());
        m_getOffTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Distance") && !rsp["Distance"].IsNull())
    {
        if (!rsp["Distance"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Distance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_distance = string(rsp["Distance"].GetString());
        m_distanceHasBeenSet = true;
    }

    if (rsp.HasMember("Location") && !rsp["Location"].IsNull())
    {
        if (!rsp["Location"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(rsp["Location"].GetString());
        m_locationHasBeenSet = true;
    }

    if (rsp.HasMember("PlateNumber") && !rsp["PlateNumber"].IsNull())
    {
        if (!rsp["PlateNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlateNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_plateNumber = string(rsp["PlateNumber"].GetString());
        m_plateNumberHasBeenSet = true;
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

    if (rsp.HasMember("Province") && !rsp["Province"].IsNull())
    {
        if (!rsp["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(rsp["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (rsp.HasMember("City") && !rsp["City"].IsNull())
    {
        if (!rsp["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(rsp["City"].GetString());
        m_cityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string TaxiInvoiceOCRResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_invoiceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvoiceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invoiceNum.c_str(), allocator).Move(), allocator);
    }

    if (m_invoiceCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvoiceCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invoiceCode.c_str(), allocator).Move(), allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_fareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fare";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fare.c_str(), allocator).Move(), allocator);
    }

    if (m_getOnTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GetOnTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_getOnTime.c_str(), allocator).Move(), allocator);
    }

    if (m_getOffTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GetOffTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_getOffTime.c_str(), allocator).Move(), allocator);
    }

    if (m_distanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Distance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_distance.c_str(), allocator).Move(), allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_location.c_str(), allocator).Move(), allocator);
    }

    if (m_plateNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlateNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_plateNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_invoiceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvoiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invoiceType.c_str(), allocator).Move(), allocator);
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

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string TaxiInvoiceOCRResponse::GetInvoiceNum() const
{
    return m_invoiceNum;
}

bool TaxiInvoiceOCRResponse::InvoiceNumHasBeenSet() const
{
    return m_invoiceNumHasBeenSet;
}

string TaxiInvoiceOCRResponse::GetInvoiceCode() const
{
    return m_invoiceCode;
}

bool TaxiInvoiceOCRResponse::InvoiceCodeHasBeenSet() const
{
    return m_invoiceCodeHasBeenSet;
}

string TaxiInvoiceOCRResponse::GetDate() const
{
    return m_date;
}

bool TaxiInvoiceOCRResponse::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string TaxiInvoiceOCRResponse::GetFare() const
{
    return m_fare;
}

bool TaxiInvoiceOCRResponse::FareHasBeenSet() const
{
    return m_fareHasBeenSet;
}

string TaxiInvoiceOCRResponse::GetGetOnTime() const
{
    return m_getOnTime;
}

bool TaxiInvoiceOCRResponse::GetOnTimeHasBeenSet() const
{
    return m_getOnTimeHasBeenSet;
}

string TaxiInvoiceOCRResponse::GetGetOffTime() const
{
    return m_getOffTime;
}

bool TaxiInvoiceOCRResponse::GetOffTimeHasBeenSet() const
{
    return m_getOffTimeHasBeenSet;
}

string TaxiInvoiceOCRResponse::GetDistance() const
{
    return m_distance;
}

bool TaxiInvoiceOCRResponse::DistanceHasBeenSet() const
{
    return m_distanceHasBeenSet;
}

string TaxiInvoiceOCRResponse::GetLocation() const
{
    return m_location;
}

bool TaxiInvoiceOCRResponse::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

string TaxiInvoiceOCRResponse::GetPlateNumber() const
{
    return m_plateNumber;
}

bool TaxiInvoiceOCRResponse::PlateNumberHasBeenSet() const
{
    return m_plateNumberHasBeenSet;
}

string TaxiInvoiceOCRResponse::GetInvoiceType() const
{
    return m_invoiceType;
}

bool TaxiInvoiceOCRResponse::InvoiceTypeHasBeenSet() const
{
    return m_invoiceTypeHasBeenSet;
}

string TaxiInvoiceOCRResponse::GetProvince() const
{
    return m_province;
}

bool TaxiInvoiceOCRResponse::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string TaxiInvoiceOCRResponse::GetCity() const
{
    return m_city;
}

bool TaxiInvoiceOCRResponse::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}


