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

#include <tencentcloud/teo/v20220901/model/ApplyFreeCertificateResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ApplyFreeCertificateResponse::ApplyFreeCertificateResponse() :
    m_dnsVerificationHasBeenSet(false),
    m_fileVerificationHasBeenSet(false)
{
}

CoreInternalOutcome ApplyFreeCertificateResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DnsVerification") && !rsp["DnsVerification"].IsNull())
    {
        if (!rsp["DnsVerification"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DnsVerification` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dnsVerification.Deserialize(rsp["DnsVerification"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dnsVerificationHasBeenSet = true;
    }

    if (rsp.HasMember("FileVerification") && !rsp["FileVerification"].IsNull())
    {
        if (!rsp["FileVerification"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FileVerification` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fileVerification.Deserialize(rsp["FileVerification"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fileVerificationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ApplyFreeCertificateResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_dnsVerificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsVerification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dnsVerification.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fileVerificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileVerification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fileVerification.ToJsonObject(value[key.c_str()], allocator);
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


DnsVerification ApplyFreeCertificateResponse::GetDnsVerification() const
{
    return m_dnsVerification;
}

bool ApplyFreeCertificateResponse::DnsVerificationHasBeenSet() const
{
    return m_dnsVerificationHasBeenSet;
}

FileVerification ApplyFreeCertificateResponse::GetFileVerification() const
{
    return m_fileVerification;
}

bool ApplyFreeCertificateResponse::FileVerificationHasBeenSet() const
{
    return m_fileVerificationHasBeenSet;
}


