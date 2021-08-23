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

#include <tencentcloud/ocr/v20181119/model/QuotaInvoiceOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

QuotaInvoiceOCRResponse::QuotaInvoiceOCRResponse() :
    m_invoiceNumHasBeenSet(false),
    m_invoiceCodeHasBeenSet(false),
    m_rateHasBeenSet(false),
    m_rateNumHasBeenSet(false),
    m_invoiceTypeHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_hasStampHasBeenSet(false)
{
}

CoreInternalOutcome QuotaInvoiceOCRResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("Rate") && !rsp["Rate"].IsNull())
    {
        if (!rsp["Rate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rate = string(rsp["Rate"].GetString());
        m_rateHasBeenSet = true;
    }

    if (rsp.HasMember("RateNum") && !rsp["RateNum"].IsNull())
    {
        if (!rsp["RateNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RateNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rateNum = string(rsp["RateNum"].GetString());
        m_rateNumHasBeenSet = true;
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

    if (rsp.HasMember("HasStamp") && !rsp["HasStamp"].IsNull())
    {
        if (!rsp["HasStamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HasStamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hasStamp = string(rsp["HasStamp"].GetString());
        m_hasStampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string QuotaInvoiceOCRResponse::ToJsonString() const
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

    if (m_rateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rate.c_str(), allocator).Move(), allocator);
    }

    if (m_rateNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RateNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rateNum.c_str(), allocator).Move(), allocator);
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

    if (m_hasStampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasStamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hasStamp.c_str(), allocator).Move(), allocator);
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


string QuotaInvoiceOCRResponse::GetInvoiceNum() const
{
    return m_invoiceNum;
}

bool QuotaInvoiceOCRResponse::InvoiceNumHasBeenSet() const
{
    return m_invoiceNumHasBeenSet;
}

string QuotaInvoiceOCRResponse::GetInvoiceCode() const
{
    return m_invoiceCode;
}

bool QuotaInvoiceOCRResponse::InvoiceCodeHasBeenSet() const
{
    return m_invoiceCodeHasBeenSet;
}

string QuotaInvoiceOCRResponse::GetRate() const
{
    return m_rate;
}

bool QuotaInvoiceOCRResponse::RateHasBeenSet() const
{
    return m_rateHasBeenSet;
}

string QuotaInvoiceOCRResponse::GetRateNum() const
{
    return m_rateNum;
}

bool QuotaInvoiceOCRResponse::RateNumHasBeenSet() const
{
    return m_rateNumHasBeenSet;
}

string QuotaInvoiceOCRResponse::GetInvoiceType() const
{
    return m_invoiceType;
}

bool QuotaInvoiceOCRResponse::InvoiceTypeHasBeenSet() const
{
    return m_invoiceTypeHasBeenSet;
}

string QuotaInvoiceOCRResponse::GetProvince() const
{
    return m_province;
}

bool QuotaInvoiceOCRResponse::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string QuotaInvoiceOCRResponse::GetCity() const
{
    return m_city;
}

bool QuotaInvoiceOCRResponse::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string QuotaInvoiceOCRResponse::GetHasStamp() const
{
    return m_hasStamp;
}

bool QuotaInvoiceOCRResponse::HasStampHasBeenSet() const
{
    return m_hasStampHasBeenSet;
}


