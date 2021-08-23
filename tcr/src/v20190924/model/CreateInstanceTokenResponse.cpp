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

#include <tencentcloud/tcr/v20190924/model/CreateInstanceTokenResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

CreateInstanceTokenResponse::CreateInstanceTokenResponse() :
    m_usernameHasBeenSet(false),
    m_tokenHasBeenSet(false),
    m_expTimeHasBeenSet(false),
    m_tokenIdHasBeenSet(false)
{
}

CoreInternalOutcome CreateInstanceTokenResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Username") && !rsp["Username"].IsNull())
    {
        if (!rsp["Username"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Username` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_username = string(rsp["Username"].GetString());
        m_usernameHasBeenSet = true;
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

    if (rsp.HasMember("ExpTime") && !rsp["ExpTime"].IsNull())
    {
        if (!rsp["ExpTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expTime = rsp["ExpTime"].GetInt64();
        m_expTimeHasBeenSet = true;
    }

    if (rsp.HasMember("TokenId") && !rsp["TokenId"].IsNull())
    {
        if (!rsp["TokenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tokenId = string(rsp["TokenId"].GetString());
        m_tokenIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateInstanceTokenResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Token";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_token.c_str(), allocator).Move(), allocator);
    }

    if (m_expTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expTime, allocator);
    }

    if (m_tokenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tokenId.c_str(), allocator).Move(), allocator);
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


string CreateInstanceTokenResponse::GetUsername() const
{
    return m_username;
}

bool CreateInstanceTokenResponse::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string CreateInstanceTokenResponse::GetToken() const
{
    return m_token;
}

bool CreateInstanceTokenResponse::TokenHasBeenSet() const
{
    return m_tokenHasBeenSet;
}

int64_t CreateInstanceTokenResponse::GetExpTime() const
{
    return m_expTime;
}

bool CreateInstanceTokenResponse::ExpTimeHasBeenSet() const
{
    return m_expTimeHasBeenSet;
}

string CreateInstanceTokenResponse::GetTokenId() const
{
    return m_tokenId;
}

bool CreateInstanceTokenResponse::TokenIdHasBeenSet() const
{
    return m_tokenIdHasBeenSet;
}


