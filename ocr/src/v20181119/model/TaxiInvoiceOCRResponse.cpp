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
using namespace rapidjson;
using namespace std;

TaxiInvoiceOCRResponse::TaxiInvoiceOCRResponse() :
    m_invoiceNumHasBeenSet(false),
    m_invoiceCodeHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_fareHasBeenSet(false),
    m_getOnTimeHasBeenSet(false),
    m_getOffTimeHasBeenSet(false),
    m_distanceHasBeenSet(false)
{
}

CoreInternalOutcome TaxiInvoiceOCRResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("InvoiceNum") && !rsp["InvoiceNum"].IsNull())
    {
        if (!rsp["InvoiceNum"].IsString())
        {
            return CoreInternalOutcome(Error("response `InvoiceNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invoiceNum = string(rsp["InvoiceNum"].GetString());
        m_invoiceNumHasBeenSet = true;
    }

    if (rsp.HasMember("InvoiceCode") && !rsp["InvoiceCode"].IsNull())
    {
        if (!rsp["InvoiceCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `InvoiceCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invoiceCode = string(rsp["InvoiceCode"].GetString());
        m_invoiceCodeHasBeenSet = true;
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

    if (rsp.HasMember("Fare") && !rsp["Fare"].IsNull())
    {
        if (!rsp["Fare"].IsString())
        {
            return CoreInternalOutcome(Error("response `Fare` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fare = string(rsp["Fare"].GetString());
        m_fareHasBeenSet = true;
    }

    if (rsp.HasMember("GetOnTime") && !rsp["GetOnTime"].IsNull())
    {
        if (!rsp["GetOnTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `GetOnTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_getOnTime = string(rsp["GetOnTime"].GetString());
        m_getOnTimeHasBeenSet = true;
    }

    if (rsp.HasMember("GetOffTime") && !rsp["GetOffTime"].IsNull())
    {
        if (!rsp["GetOffTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `GetOffTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_getOffTime = string(rsp["GetOffTime"].GetString());
        m_getOffTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Distance") && !rsp["Distance"].IsNull())
    {
        if (!rsp["Distance"].IsString())
        {
            return CoreInternalOutcome(Error("response `Distance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_distance = string(rsp["Distance"].GetString());
        m_distanceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
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


