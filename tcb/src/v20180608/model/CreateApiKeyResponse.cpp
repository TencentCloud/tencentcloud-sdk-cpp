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

#include <tencentcloud/tcb/v20180608/model/CreateApiKeyResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CreateApiKeyResponse::CreateApiKeyResponse() :
    m_keyIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_apiKeyHasBeenSet(false),
    m_expireAtHasBeenSet(false),
    m_createAtHasBeenSet(false)
{
}

CoreInternalOutcome CreateApiKeyResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("KeyId") && !rsp["KeyId"].IsNull())
    {
        if (!rsp["KeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyId = string(rsp["KeyId"].GetString());
        m_keyIdHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("ApiKey") && !rsp["ApiKey"].IsNull())
    {
        if (!rsp["ApiKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiKey = string(rsp["ApiKey"].GetString());
        m_apiKeyHasBeenSet = true;
    }

    if (rsp.HasMember("ExpireAt") && !rsp["ExpireAt"].IsNull())
    {
        if (!rsp["ExpireAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpireAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireAt = string(rsp["ExpireAt"].GetString());
        m_expireAtHasBeenSet = true;
    }

    if (rsp.HasMember("CreateAt") && !rsp["CreateAt"].IsNull())
    {
        if (!rsp["CreateAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createAt = string(rsp["CreateAt"].GetString());
        m_createAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateApiKeyResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_apiKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiKey.c_str(), allocator).Move(), allocator);
    }

    if (m_expireAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireAt.c_str(), allocator).Move(), allocator);
    }

    if (m_createAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createAt.c_str(), allocator).Move(), allocator);
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


string CreateApiKeyResponse::GetKeyId() const
{
    return m_keyId;
}

bool CreateApiKeyResponse::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string CreateApiKeyResponse::GetName() const
{
    return m_name;
}

bool CreateApiKeyResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateApiKeyResponse::GetApiKey() const
{
    return m_apiKey;
}

bool CreateApiKeyResponse::ApiKeyHasBeenSet() const
{
    return m_apiKeyHasBeenSet;
}

string CreateApiKeyResponse::GetExpireAt() const
{
    return m_expireAt;
}

bool CreateApiKeyResponse::ExpireAtHasBeenSet() const
{
    return m_expireAtHasBeenSet;
}

string CreateApiKeyResponse::GetCreateAt() const
{
    return m_createAt;
}

bool CreateApiKeyResponse::CreateAtHasBeenSet() const
{
    return m_createAtHasBeenSet;
}


