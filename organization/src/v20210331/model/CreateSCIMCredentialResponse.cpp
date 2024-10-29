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

#include <tencentcloud/organization/v20210331/model/CreateSCIMCredentialResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

CreateSCIMCredentialResponse::CreateSCIMCredentialResponse() :
    m_zoneIdHasBeenSet(false),
    m_credentialIdHasBeenSet(false),
    m_credentialTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_credentialStatusHasBeenSet(false),
    m_credentialSecretHasBeenSet(false)
{
}

CoreInternalOutcome CreateSCIMCredentialResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ZoneId") && !rsp["ZoneId"].IsNull())
    {
        if (!rsp["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(rsp["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (rsp.HasMember("CredentialId") && !rsp["CredentialId"].IsNull())
    {
        if (!rsp["CredentialId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CredentialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_credentialId = string(rsp["CredentialId"].GetString());
        m_credentialIdHasBeenSet = true;
    }

    if (rsp.HasMember("CredentialType") && !rsp["CredentialType"].IsNull())
    {
        if (!rsp["CredentialType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CredentialType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_credentialType = string(rsp["CredentialType"].GetString());
        m_credentialTypeHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ExpireTime") && !rsp["ExpireTime"].IsNull())
    {
        if (!rsp["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(rsp["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (rsp.HasMember("CredentialStatus") && !rsp["CredentialStatus"].IsNull())
    {
        if (!rsp["CredentialStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CredentialStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_credentialStatus = string(rsp["CredentialStatus"].GetString());
        m_credentialStatusHasBeenSet = true;
    }

    if (rsp.HasMember("CredentialSecret") && !rsp["CredentialSecret"].IsNull())
    {
        if (!rsp["CredentialSecret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CredentialSecret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_credentialSecret = string(rsp["CredentialSecret"].GetString());
        m_credentialSecretHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateSCIMCredentialResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_credentialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CredentialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_credentialId.c_str(), allocator).Move(), allocator);
    }

    if (m_credentialTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CredentialType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_credentialType.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_credentialStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CredentialStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_credentialStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_credentialSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CredentialSecret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_credentialSecret.c_str(), allocator).Move(), allocator);
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


string CreateSCIMCredentialResponse::GetZoneId() const
{
    return m_zoneId;
}

bool CreateSCIMCredentialResponse::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string CreateSCIMCredentialResponse::GetCredentialId() const
{
    return m_credentialId;
}

bool CreateSCIMCredentialResponse::CredentialIdHasBeenSet() const
{
    return m_credentialIdHasBeenSet;
}

string CreateSCIMCredentialResponse::GetCredentialType() const
{
    return m_credentialType;
}

bool CreateSCIMCredentialResponse::CredentialTypeHasBeenSet() const
{
    return m_credentialTypeHasBeenSet;
}

string CreateSCIMCredentialResponse::GetCreateTime() const
{
    return m_createTime;
}

bool CreateSCIMCredentialResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CreateSCIMCredentialResponse::GetExpireTime() const
{
    return m_expireTime;
}

bool CreateSCIMCredentialResponse::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string CreateSCIMCredentialResponse::GetCredentialStatus() const
{
    return m_credentialStatus;
}

bool CreateSCIMCredentialResponse::CredentialStatusHasBeenSet() const
{
    return m_credentialStatusHasBeenSet;
}

string CreateSCIMCredentialResponse::GetCredentialSecret() const
{
    return m_credentialSecret;
}

bool CreateSCIMCredentialResponse::CredentialSecretHasBeenSet() const
{
    return m_credentialSecretHasBeenSet;
}


