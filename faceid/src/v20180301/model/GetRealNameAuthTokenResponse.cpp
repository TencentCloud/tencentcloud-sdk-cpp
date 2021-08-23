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

#include <tencentcloud/faceid/v20180301/model/GetRealNameAuthTokenResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

GetRealNameAuthTokenResponse::GetRealNameAuthTokenResponse() :
    m_authTokenHasBeenSet(false),
    m_redirectURLHasBeenSet(false)
{
}

CoreInternalOutcome GetRealNameAuthTokenResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AuthToken") && !rsp["AuthToken"].IsNull())
    {
        if (!rsp["AuthToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authToken = string(rsp["AuthToken"].GetString());
        m_authTokenHasBeenSet = true;
    }

    if (rsp.HasMember("RedirectURL") && !rsp["RedirectURL"].IsNull())
    {
        if (!rsp["RedirectURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedirectURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_redirectURL = string(rsp["RedirectURL"].GetString());
        m_redirectURLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetRealNameAuthTokenResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_authTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authToken.c_str(), allocator).Move(), allocator);
    }

    if (m_redirectURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedirectURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_redirectURL.c_str(), allocator).Move(), allocator);
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


string GetRealNameAuthTokenResponse::GetAuthToken() const
{
    return m_authToken;
}

bool GetRealNameAuthTokenResponse::AuthTokenHasBeenSet() const
{
    return m_authTokenHasBeenSet;
}

string GetRealNameAuthTokenResponse::GetRedirectURL() const
{
    return m_redirectURL;
}

bool GetRealNameAuthTokenResponse::RedirectURLHasBeenSet() const
{
    return m_redirectURLHasBeenSet;
}


