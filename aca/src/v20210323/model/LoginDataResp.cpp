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

#include <tencentcloud/aca/v20210323/model/LoginDataResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

LoginDataResp::LoginDataResp() :
    m_tokenHasBeenSet(false),
    m_expiresInHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
}

CoreInternalOutcome LoginDataResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Token") && !value["Token"].IsNull())
    {
        if (!value["Token"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginDataResp.Token` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_token = string(value["Token"].GetString());
        m_tokenHasBeenSet = true;
    }

    if (value.HasMember("ExpiresIn") && !value["ExpiresIn"].IsNull())
    {
        if (!value["ExpiresIn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LoginDataResp.ExpiresIn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expiresIn = value["ExpiresIn"].GetInt64();
        m_expiresInHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LoginDataResp.Timestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetInt64();
        m_timestampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoginDataResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Token";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_token.c_str(), allocator).Move(), allocator);
    }

    if (m_expiresInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiresIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expiresIn, allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

}


string LoginDataResp::GetToken() const
{
    return m_token;
}

void LoginDataResp::SetToken(const string& _token)
{
    m_token = _token;
    m_tokenHasBeenSet = true;
}

bool LoginDataResp::TokenHasBeenSet() const
{
    return m_tokenHasBeenSet;
}

int64_t LoginDataResp::GetExpiresIn() const
{
    return m_expiresIn;
}

void LoginDataResp::SetExpiresIn(const int64_t& _expiresIn)
{
    m_expiresIn = _expiresIn;
    m_expiresInHasBeenSet = true;
}

bool LoginDataResp::ExpiresInHasBeenSet() const
{
    return m_expiresInHasBeenSet;
}

int64_t LoginDataResp::GetTimestamp() const
{
    return m_timestamp;
}

void LoginDataResp::SetTimestamp(const int64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool LoginDataResp::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

