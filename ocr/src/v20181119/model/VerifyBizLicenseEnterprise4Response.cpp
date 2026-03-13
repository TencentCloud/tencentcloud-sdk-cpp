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

#include <tencentcloud/ocr/v20181119/model/VerifyBizLicenseEnterprise4Response.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

VerifyBizLicenseEnterprise4Response::VerifyBizLicenseEnterprise4Response() :
    m_statusCodeHasBeenSet(false),
    m_verifyResultHasBeenSet(false),
    m_isCreditCodeConsistentHasBeenSet(false),
    m_isEntNameConsistentHasBeenSet(false),
    m_isLrNameConsistentHasBeenSet(false),
    m_isIdNumConsistentHasBeenSet(false),
    m_operatingStatusHasBeenSet(false),
    m_operatingPeriodHasBeenSet(false)
{
}

CoreInternalOutcome VerifyBizLicenseEnterprise4Response::Deserialize(const string &payload)
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

    if (rsp.HasMember("IsCreditCodeConsistent") && !rsp["IsCreditCodeConsistent"].IsNull())
    {
        if (!rsp["IsCreditCodeConsistent"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsCreditCodeConsistent` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCreditCodeConsistent = rsp["IsCreditCodeConsistent"].GetBool();
        m_isCreditCodeConsistentHasBeenSet = true;
    }

    if (rsp.HasMember("IsEntNameConsistent") && !rsp["IsEntNameConsistent"].IsNull())
    {
        if (!rsp["IsEntNameConsistent"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsEntNameConsistent` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isEntNameConsistent = rsp["IsEntNameConsistent"].GetBool();
        m_isEntNameConsistentHasBeenSet = true;
    }

    if (rsp.HasMember("IsLrNameConsistent") && !rsp["IsLrNameConsistent"].IsNull())
    {
        if (!rsp["IsLrNameConsistent"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsLrNameConsistent` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isLrNameConsistent = rsp["IsLrNameConsistent"].GetBool();
        m_isLrNameConsistentHasBeenSet = true;
    }

    if (rsp.HasMember("IsIdNumConsistent") && !rsp["IsIdNumConsistent"].IsNull())
    {
        if (!rsp["IsIdNumConsistent"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsIdNumConsistent` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isIdNumConsistent = rsp["IsIdNumConsistent"].GetBool();
        m_isIdNumConsistentHasBeenSet = true;
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

    if (rsp.HasMember("OperatingPeriod") && !rsp["OperatingPeriod"].IsNull())
    {
        if (!rsp["OperatingPeriod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperatingPeriod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatingPeriod = string(rsp["OperatingPeriod"].GetString());
        m_operatingPeriodHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string VerifyBizLicenseEnterprise4Response::ToJsonString() const
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

    if (m_isCreditCodeConsistentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCreditCodeConsistent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCreditCodeConsistent, allocator);
    }

    if (m_isEntNameConsistentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEntNameConsistent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEntNameConsistent, allocator);
    }

    if (m_isLrNameConsistentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLrNameConsistent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isLrNameConsistent, allocator);
    }

    if (m_isIdNumConsistentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsIdNumConsistent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isIdNumConsistent, allocator);
    }

    if (m_operatingStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatingStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatingStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_operatingPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatingPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatingPeriod.c_str(), allocator).Move(), allocator);
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


int64_t VerifyBizLicenseEnterprise4Response::GetStatusCode() const
{
    return m_statusCode;
}

bool VerifyBizLicenseEnterprise4Response::StatusCodeHasBeenSet() const
{
    return m_statusCodeHasBeenSet;
}

int64_t VerifyBizLicenseEnterprise4Response::GetVerifyResult() const
{
    return m_verifyResult;
}

bool VerifyBizLicenseEnterprise4Response::VerifyResultHasBeenSet() const
{
    return m_verifyResultHasBeenSet;
}

bool VerifyBizLicenseEnterprise4Response::GetIsCreditCodeConsistent() const
{
    return m_isCreditCodeConsistent;
}

bool VerifyBizLicenseEnterprise4Response::IsCreditCodeConsistentHasBeenSet() const
{
    return m_isCreditCodeConsistentHasBeenSet;
}

bool VerifyBizLicenseEnterprise4Response::GetIsEntNameConsistent() const
{
    return m_isEntNameConsistent;
}

bool VerifyBizLicenseEnterprise4Response::IsEntNameConsistentHasBeenSet() const
{
    return m_isEntNameConsistentHasBeenSet;
}

bool VerifyBizLicenseEnterprise4Response::GetIsLrNameConsistent() const
{
    return m_isLrNameConsistent;
}

bool VerifyBizLicenseEnterprise4Response::IsLrNameConsistentHasBeenSet() const
{
    return m_isLrNameConsistentHasBeenSet;
}

bool VerifyBizLicenseEnterprise4Response::GetIsIdNumConsistent() const
{
    return m_isIdNumConsistent;
}

bool VerifyBizLicenseEnterprise4Response::IsIdNumConsistentHasBeenSet() const
{
    return m_isIdNumConsistentHasBeenSet;
}

string VerifyBizLicenseEnterprise4Response::GetOperatingStatus() const
{
    return m_operatingStatus;
}

bool VerifyBizLicenseEnterprise4Response::OperatingStatusHasBeenSet() const
{
    return m_operatingStatusHasBeenSet;
}

string VerifyBizLicenseEnterprise4Response::GetOperatingPeriod() const
{
    return m_operatingPeriod;
}

bool VerifyBizLicenseEnterprise4Response::OperatingPeriodHasBeenSet() const
{
    return m_operatingPeriodHasBeenSet;
}


