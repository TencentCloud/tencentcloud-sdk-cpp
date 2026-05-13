/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/mna/v20210119/model/GetHardwareInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

GetHardwareInfoResponse::GetHardwareInfoResponse() :
    m_licensePayModeHasBeenSet(false),
    m_payerHasBeenSet(false),
    m_sNHasBeenSet(false),
    m_vendorHasBeenSet(false)
{
}

CoreInternalOutcome GetHardwareInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("LicensePayMode") && !rsp["LicensePayMode"].IsNull())
    {
        if (!rsp["LicensePayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LicensePayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_licensePayMode = rsp["LicensePayMode"].GetInt64();
        m_licensePayModeHasBeenSet = true;
    }

    if (rsp.HasMember("Payer") && !rsp["Payer"].IsNull())
    {
        if (!rsp["Payer"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Payer` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payer = rsp["Payer"].GetInt64();
        m_payerHasBeenSet = true;
    }

    if (rsp.HasMember("SN") && !rsp["SN"].IsNull())
    {
        if (!rsp["SN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sN = string(rsp["SN"].GetString());
        m_sNHasBeenSet = true;
    }

    if (rsp.HasMember("Vendor") && !rsp["Vendor"].IsNull())
    {
        if (!rsp["Vendor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vendor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vendor = string(rsp["Vendor"].GetString());
        m_vendorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetHardwareInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_licensePayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicensePayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_licensePayMode, allocator);
    }

    if (m_payerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Payer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payer, allocator);
    }

    if (m_sNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sN.c_str(), allocator).Move(), allocator);
    }

    if (m_vendorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vendor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vendor.c_str(), allocator).Move(), allocator);
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


int64_t GetHardwareInfoResponse::GetLicensePayMode() const
{
    return m_licensePayMode;
}

bool GetHardwareInfoResponse::LicensePayModeHasBeenSet() const
{
    return m_licensePayModeHasBeenSet;
}

int64_t GetHardwareInfoResponse::GetPayer() const
{
    return m_payer;
}

bool GetHardwareInfoResponse::PayerHasBeenSet() const
{
    return m_payerHasBeenSet;
}

string GetHardwareInfoResponse::GetSN() const
{
    return m_sN;
}

bool GetHardwareInfoResponse::SNHasBeenSet() const
{
    return m_sNHasBeenSet;
}

string GetHardwareInfoResponse::GetVendor() const
{
    return m_vendor;
}

bool GetHardwareInfoResponse::VendorHasBeenSet() const
{
    return m_vendorHasBeenSet;
}


