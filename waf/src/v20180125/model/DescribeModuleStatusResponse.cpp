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

#include <tencentcloud/waf/v20180125/model/DescribeModuleStatusResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribeModuleStatusResponse::DescribeModuleStatusResponse() :
    m_webSecurityHasBeenSet(false),
    m_accessControlHasBeenSet(false),
    m_ccProtectionHasBeenSet(false),
    m_antiTamperHasBeenSet(false),
    m_antiLeakageHasBeenSet(false),
    m_apiProtectionHasBeenSet(false),
    m_rateLimitHasBeenSet(false)
{
}

CoreInternalOutcome DescribeModuleStatusResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("WebSecurity") && !rsp["WebSecurity"].IsNull())
    {
        if (!rsp["WebSecurity"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WebSecurity` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_webSecurity = rsp["WebSecurity"].GetUint64();
        m_webSecurityHasBeenSet = true;
    }

    if (rsp.HasMember("AccessControl") && !rsp["AccessControl"].IsNull())
    {
        if (!rsp["AccessControl"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControl` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accessControl = rsp["AccessControl"].GetInt64();
        m_accessControlHasBeenSet = true;
    }

    if (rsp.HasMember("CcProtection") && !rsp["CcProtection"].IsNull())
    {
        if (!rsp["CcProtection"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CcProtection` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ccProtection = rsp["CcProtection"].GetUint64();
        m_ccProtectionHasBeenSet = true;
    }

    if (rsp.HasMember("AntiTamper") && !rsp["AntiTamper"].IsNull())
    {
        if (!rsp["AntiTamper"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AntiTamper` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_antiTamper = rsp["AntiTamper"].GetUint64();
        m_antiTamperHasBeenSet = true;
    }

    if (rsp.HasMember("AntiLeakage") && !rsp["AntiLeakage"].IsNull())
    {
        if (!rsp["AntiLeakage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AntiLeakage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_antiLeakage = rsp["AntiLeakage"].GetUint64();
        m_antiLeakageHasBeenSet = true;
    }

    if (rsp.HasMember("ApiProtection") && !rsp["ApiProtection"].IsNull())
    {
        if (!rsp["ApiProtection"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiProtection` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_apiProtection = rsp["ApiProtection"].GetUint64();
        m_apiProtectionHasBeenSet = true;
    }

    if (rsp.HasMember("RateLimit") && !rsp["RateLimit"].IsNull())
    {
        if (!rsp["RateLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rateLimit = rsp["RateLimit"].GetUint64();
        m_rateLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeModuleStatusResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_webSecurityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebSecurity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_webSecurity, allocator);
    }

    if (m_accessControlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessControl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessControl, allocator);
    }

    if (m_ccProtectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcProtection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ccProtection, allocator);
    }

    if (m_antiTamperHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AntiTamper";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_antiTamper, allocator);
    }

    if (m_antiLeakageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AntiLeakage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_antiLeakage, allocator);
    }

    if (m_apiProtectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiProtection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_apiProtection, allocator);
    }

    if (m_rateLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RateLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rateLimit, allocator);
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


uint64_t DescribeModuleStatusResponse::GetWebSecurity() const
{
    return m_webSecurity;
}

bool DescribeModuleStatusResponse::WebSecurityHasBeenSet() const
{
    return m_webSecurityHasBeenSet;
}

int64_t DescribeModuleStatusResponse::GetAccessControl() const
{
    return m_accessControl;
}

bool DescribeModuleStatusResponse::AccessControlHasBeenSet() const
{
    return m_accessControlHasBeenSet;
}

uint64_t DescribeModuleStatusResponse::GetCcProtection() const
{
    return m_ccProtection;
}

bool DescribeModuleStatusResponse::CcProtectionHasBeenSet() const
{
    return m_ccProtectionHasBeenSet;
}

uint64_t DescribeModuleStatusResponse::GetAntiTamper() const
{
    return m_antiTamper;
}

bool DescribeModuleStatusResponse::AntiTamperHasBeenSet() const
{
    return m_antiTamperHasBeenSet;
}

uint64_t DescribeModuleStatusResponse::GetAntiLeakage() const
{
    return m_antiLeakage;
}

bool DescribeModuleStatusResponse::AntiLeakageHasBeenSet() const
{
    return m_antiLeakageHasBeenSet;
}

uint64_t DescribeModuleStatusResponse::GetApiProtection() const
{
    return m_apiProtection;
}

bool DescribeModuleStatusResponse::ApiProtectionHasBeenSet() const
{
    return m_apiProtectionHasBeenSet;
}

uint64_t DescribeModuleStatusResponse::GetRateLimit() const
{
    return m_rateLimit;
}

bool DescribeModuleStatusResponse::RateLimitHasBeenSet() const
{
    return m_rateLimitHasBeenSet;
}


