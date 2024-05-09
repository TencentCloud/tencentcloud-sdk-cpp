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

#include <tencentcloud/ess/v20201111/model/CreateUserVerifyUrlResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateUserVerifyUrlResponse::CreateUserVerifyUrlResponse() :
    m_userVerifyUrlHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_miniAppIdHasBeenSet(false)
{
}

CoreInternalOutcome CreateUserVerifyUrlResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("UserVerifyUrl") && !rsp["UserVerifyUrl"].IsNull())
    {
        if (!rsp["UserVerifyUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserVerifyUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userVerifyUrl = string(rsp["UserVerifyUrl"].GetString());
        m_userVerifyUrlHasBeenSet = true;
    }

    if (rsp.HasMember("ExpireTime") && !rsp["ExpireTime"].IsNull())
    {
        if (!rsp["ExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = rsp["ExpireTime"].GetInt64();
        m_expireTimeHasBeenSet = true;
    }

    if (rsp.HasMember("MiniAppId") && !rsp["MiniAppId"].IsNull())
    {
        if (!rsp["MiniAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MiniAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_miniAppId = string(rsp["MiniAppId"].GetString());
        m_miniAppIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateUserVerifyUrlResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_userVerifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserVerifyUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userVerifyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_miniAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_miniAppId.c_str(), allocator).Move(), allocator);
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


string CreateUserVerifyUrlResponse::GetUserVerifyUrl() const
{
    return m_userVerifyUrl;
}

bool CreateUserVerifyUrlResponse::UserVerifyUrlHasBeenSet() const
{
    return m_userVerifyUrlHasBeenSet;
}

int64_t CreateUserVerifyUrlResponse::GetExpireTime() const
{
    return m_expireTime;
}

bool CreateUserVerifyUrlResponse::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string CreateUserVerifyUrlResponse::GetMiniAppId() const
{
    return m_miniAppId;
}

bool CreateUserVerifyUrlResponse::MiniAppIdHasBeenSet() const
{
    return m_miniAppIdHasBeenSet;
}


