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

#include <tencentcloud/ocr/v20181119/model/VerifyBizLicenseEnterprise3Response.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

VerifyBizLicenseEnterprise3Response::VerifyBizLicenseEnterprise3Response() :
    m_statusCodeHasBeenSet(false),
    m_verifyResultHasBeenSet(false),
    m_operatingStatusHasBeenSet(false)
{
}

CoreInternalOutcome VerifyBizLicenseEnterprise3Response::Deserialize(const string &payload)
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


    if (rsp.HasMember("StatusCode") && !rsp["StatusCode"].IsNull())
    {
        if (!rsp["StatusCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StatusCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_statusCode = rsp["StatusCode"].GetInt64();
        m_statusCodeHasBeenSet = true;
    }

    if (rsp.HasMember("VerifyResult") && !rsp["VerifyResult"].IsNull())
    {
        if (!rsp["VerifyResult"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VerifyResult` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_verifyResult = rsp["VerifyResult"].GetInt64();
        m_verifyResultHasBeenSet = true;
    }

    if (rsp.HasMember("OperatingStatus") && !rsp["OperatingStatus"].IsNull())
    {
        if (!rsp["OperatingStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperatingStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatingStatus = string(rsp["OperatingStatus"].GetString());
        m_operatingStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string VerifyBizLicenseEnterprise3Response::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_statusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statusCode, allocator);
    }

    if (m_verifyResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_verifyResult, allocator);
    }

    if (m_operatingStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatingStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatingStatus.c_str(), allocator).Move(), allocator);
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


int64_t VerifyBizLicenseEnterprise3Response::GetStatusCode() const
{
    return m_statusCode;
}

bool VerifyBizLicenseEnterprise3Response::StatusCodeHasBeenSet() const
{
    return m_statusCodeHasBeenSet;
}

int64_t VerifyBizLicenseEnterprise3Response::GetVerifyResult() const
{
    return m_verifyResult;
}

bool VerifyBizLicenseEnterprise3Response::VerifyResultHasBeenSet() const
{
    return m_verifyResultHasBeenSet;
}

string VerifyBizLicenseEnterprise3Response::GetOperatingStatus() const
{
    return m_operatingStatus;
}

bool VerifyBizLicenseEnterprise3Response::OperatingStatusHasBeenSet() const
{
    return m_operatingStatusHasBeenSet;
}


