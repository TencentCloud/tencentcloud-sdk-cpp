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

#include <tencentcloud/tcb/v20180608/model/AssumeRoleForAllocatedEnvResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

AssumeRoleForAllocatedEnvResponse::AssumeRoleForAllocatedEnvResponse() :
    m_secretIdHasBeenSet(false),
    m_secretKeyHasBeenSet(false),
    m_tokenHasBeenSet(false),
    m_expiredTimeHasBeenSet(false),
    m_isCacheHasBeenSet(false)
{
}

CoreInternalOutcome AssumeRoleForAllocatedEnvResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SecretId") && !rsp["SecretId"].IsNull())
    {
        if (!rsp["SecretId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecretId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretId = string(rsp["SecretId"].GetString());
        m_secretIdHasBeenSet = true;
    }

    if (rsp.HasMember("SecretKey") && !rsp["SecretKey"].IsNull())
    {
        if (!rsp["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(rsp["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
    }

    if (rsp.HasMember("Token") && !rsp["Token"].IsNull())
    {
        if (!rsp["Token"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Token` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_token = string(rsp["Token"].GetString());
        m_tokenHasBeenSet = true;
    }

    if (rsp.HasMember("ExpiredTime") && !rsp["ExpiredTime"].IsNull())
    {
        if (!rsp["ExpiredTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpiredTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = rsp["ExpiredTime"].GetInt64();
        m_expiredTimeHasBeenSet = true;
    }

    if (rsp.HasMember("IsCache") && !rsp["IsCache"].IsNull())
    {
        if (!rsp["IsCache"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsCache` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCache = rsp["IsCache"].GetBool();
        m_isCacheHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string AssumeRoleForAllocatedEnvResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_secretIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretId.c_str(), allocator).Move(), allocator);
    }

    if (m_secretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Token";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_token.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expiredTime, allocator);
    }

    if (m_isCacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCache, allocator);
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


string AssumeRoleForAllocatedEnvResponse::GetSecretId() const
{
    return m_secretId;
}

bool AssumeRoleForAllocatedEnvResponse::SecretIdHasBeenSet() const
{
    return m_secretIdHasBeenSet;
}

string AssumeRoleForAllocatedEnvResponse::GetSecretKey() const
{
    return m_secretKey;
}

bool AssumeRoleForAllocatedEnvResponse::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

string AssumeRoleForAllocatedEnvResponse::GetToken() const
{
    return m_token;
}

bool AssumeRoleForAllocatedEnvResponse::TokenHasBeenSet() const
{
    return m_tokenHasBeenSet;
}

int64_t AssumeRoleForAllocatedEnvResponse::GetExpiredTime() const
{
    return m_expiredTime;
}

bool AssumeRoleForAllocatedEnvResponse::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

bool AssumeRoleForAllocatedEnvResponse::GetIsCache() const
{
    return m_isCache;
}

bool AssumeRoleForAllocatedEnvResponse::IsCacheHasBeenSet() const
{
    return m_isCacheHasBeenSet;
}


