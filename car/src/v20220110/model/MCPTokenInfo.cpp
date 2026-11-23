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

#include <tencentcloud/car/v20220110/model/MCPTokenInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Car::V20220110::Model;
using namespace std;

MCPTokenInfo::MCPTokenInfo() :
    m_tokenIdHasBeenSet(false),
    m_tokenNameHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_scopesHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_expiresTimeHasBeenSet(false)
{
}

CoreInternalOutcome MCPTokenInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TokenId") && !value["TokenId"].IsNull())
    {
        if (!value["TokenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTokenInfo.TokenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tokenId = string(value["TokenId"].GetString());
        m_tokenIdHasBeenSet = true;
    }

    if (value.HasMember("TokenName") && !value["TokenName"].IsNull())
    {
        if (!value["TokenName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTokenInfo.TokenName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tokenName = string(value["TokenName"].GetString());
        m_tokenNameHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTokenInfo.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("Scopes") && !value["Scopes"].IsNull())
    {
        if (!value["Scopes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MCPTokenInfo.Scopes` is not array type"));

        const rapidjson::Value &tmpValue = value["Scopes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_scopes.push_back((*itr).GetString());
        }
        m_scopesHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTokenInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTokenInfo.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpiresTime") && !value["ExpiresTime"].IsNull())
    {
        if (!value["ExpiresTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTokenInfo.ExpiresTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiresTime = string(value["ExpiresTime"].GetString());
        m_expiresTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MCPTokenInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tokenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tokenId.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tokenName.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_scopesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scopes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scopes.begin(); itr != m_scopes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expiresTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiresTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiresTime.c_str(), allocator).Move(), allocator);
    }

}


string MCPTokenInfo::GetTokenId() const
{
    return m_tokenId;
}

void MCPTokenInfo::SetTokenId(const string& _tokenId)
{
    m_tokenId = _tokenId;
    m_tokenIdHasBeenSet = true;
}

bool MCPTokenInfo::TokenIdHasBeenSet() const
{
    return m_tokenIdHasBeenSet;
}

string MCPTokenInfo::GetTokenName() const
{
    return m_tokenName;
}

void MCPTokenInfo::SetTokenName(const string& _tokenName)
{
    m_tokenName = _tokenName;
    m_tokenNameHasBeenSet = true;
}

bool MCPTokenInfo::TokenNameHasBeenSet() const
{
    return m_tokenNameHasBeenSet;
}

string MCPTokenInfo::GetUserId() const
{
    return m_userId;
}

void MCPTokenInfo::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool MCPTokenInfo::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

vector<string> MCPTokenInfo::GetScopes() const
{
    return m_scopes;
}

void MCPTokenInfo::SetScopes(const vector<string>& _scopes)
{
    m_scopes = _scopes;
    m_scopesHasBeenSet = true;
}

bool MCPTokenInfo::ScopesHasBeenSet() const
{
    return m_scopesHasBeenSet;
}

string MCPTokenInfo::GetStatus() const
{
    return m_status;
}

void MCPTokenInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool MCPTokenInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string MCPTokenInfo::GetCreatedTime() const
{
    return m_createdTime;
}

void MCPTokenInfo::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool MCPTokenInfo::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string MCPTokenInfo::GetExpiresTime() const
{
    return m_expiresTime;
}

void MCPTokenInfo::SetExpiresTime(const string& _expiresTime)
{
    m_expiresTime = _expiresTime;
    m_expiresTimeHasBeenSet = true;
}

bool MCPTokenInfo::ExpiresTimeHasBeenSet() const
{
    return m_expiresTimeHasBeenSet;
}

