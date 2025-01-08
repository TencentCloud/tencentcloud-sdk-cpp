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

#include <tencentcloud/cloudapp/v20220530/model/VerifyLicenseResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudapp::V20220530::Model;
using namespace std;

VerifyLicenseResponse::VerifyLicenseResponse() :
    m_licenseHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_signatureHasBeenSet(false)
{
}

CoreInternalOutcome VerifyLicenseResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("License") && !rsp["License"].IsNull())
    {
        if (!rsp["License"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `License` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_license.Deserialize(rsp["License"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_licenseHasBeenSet = true;
    }

    if (rsp.HasMember("Timestamp") && !rsp["Timestamp"].IsNull())
    {
        if (!rsp["Timestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Timestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = string(rsp["Timestamp"].GetString());
        m_timestampHasBeenSet = true;
    }

    if (rsp.HasMember("Signature") && !rsp["Signature"].IsNull())
    {
        if (!rsp["Signature"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Signature` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signature = string(rsp["Signature"].GetString());
        m_signatureHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string VerifyLicenseResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_licenseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "License";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_license.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_signatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Signature";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signature.c_str(), allocator).Move(), allocator);
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


License VerifyLicenseResponse::GetLicense() const
{
    return m_license;
}

bool VerifyLicenseResponse::LicenseHasBeenSet() const
{
    return m_licenseHasBeenSet;
}

string VerifyLicenseResponse::GetTimestamp() const
{
    return m_timestamp;
}

bool VerifyLicenseResponse::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string VerifyLicenseResponse::GetSignature() const
{
    return m_signature;
}

bool VerifyLicenseResponse::SignatureHasBeenSet() const
{
    return m_signatureHasBeenSet;
}


