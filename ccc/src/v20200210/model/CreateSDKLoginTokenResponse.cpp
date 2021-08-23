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

#include <tencentcloud/ccc/v20200210/model/CreateSDKLoginTokenResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

CreateSDKLoginTokenResponse::CreateSDKLoginTokenResponse() :
    m_tokenHasBeenSet(false),
    m_expiredTimeHasBeenSet(false),
    m_sdkURLHasBeenSet(false)
{
}

CoreInternalOutcome CreateSDKLoginTokenResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("SdkURL") && !rsp["SdkURL"].IsNull())
    {
        if (!rsp["SdkURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SdkURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sdkURL = string(rsp["SdkURL"].GetString());
        m_sdkURLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateSDKLoginTokenResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    if (m_sdkURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sdkURL.c_str(), allocator).Move(), allocator);
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


string CreateSDKLoginTokenResponse::GetToken() const
{
    return m_token;
}

bool CreateSDKLoginTokenResponse::TokenHasBeenSet() const
{
    return m_tokenHasBeenSet;
}

int64_t CreateSDKLoginTokenResponse::GetExpiredTime() const
{
    return m_expiredTime;
}

bool CreateSDKLoginTokenResponse::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

string CreateSDKLoginTokenResponse::GetSdkURL() const
{
    return m_sdkURL;
}

bool CreateSDKLoginTokenResponse::SdkURLHasBeenSet() const
{
    return m_sdkURLHasBeenSet;
}


