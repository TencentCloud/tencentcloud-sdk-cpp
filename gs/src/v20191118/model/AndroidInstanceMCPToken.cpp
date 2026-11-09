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

#include <tencentcloud/gs/v20191118/model/AndroidInstanceMCPToken.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

AndroidInstanceMCPToken::AndroidInstanceMCPToken() :
    m_tokenIdHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_tokenNameHasBeenSet(false),
    m_allowedInstanceIdsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_expiresTimeHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome AndroidInstanceMCPToken::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TokenId") && !value["TokenId"].IsNull())
    {
        if (!value["TokenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceMCPToken.TokenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tokenId = string(value["TokenId"].GetString());
        m_tokenIdHasBeenSet = true;
    }

    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceMCPToken.Role` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_role = string(value["Role"].GetString());
        m_roleHasBeenSet = true;
    }

    if (value.HasMember("TokenName") && !value["TokenName"].IsNull())
    {
        if (!value["TokenName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceMCPToken.TokenName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tokenName = string(value["TokenName"].GetString());
        m_tokenNameHasBeenSet = true;
    }

    if (value.HasMember("AllowedInstanceIds") && !value["AllowedInstanceIds"].IsNull())
    {
        if (!value["AllowedInstanceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceMCPToken.AllowedInstanceIds` is not array type"));

        const rapidjson::Value &tmpValue = value["AllowedInstanceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_allowedInstanceIds.push_back((*itr).GetString());
        }
        m_allowedInstanceIdsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceMCPToken.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpiresTime") && !value["ExpiresTime"].IsNull())
    {
        if (!value["ExpiresTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceMCPToken.ExpiresTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiresTime = string(value["ExpiresTime"].GetString());
        m_expiresTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceMCPToken.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AndroidInstanceMCPToken::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tokenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tokenId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_role.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tokenName.c_str(), allocator).Move(), allocator);
    }

    if (m_allowedInstanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowedInstanceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_allowedInstanceIds.begin(); itr != m_allowedInstanceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expiresTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiresTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiresTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string AndroidInstanceMCPToken::GetTokenId() const
{
    return m_tokenId;
}

void AndroidInstanceMCPToken::SetTokenId(const string& _tokenId)
{
    m_tokenId = _tokenId;
    m_tokenIdHasBeenSet = true;
}

bool AndroidInstanceMCPToken::TokenIdHasBeenSet() const
{
    return m_tokenIdHasBeenSet;
}

string AndroidInstanceMCPToken::GetRole() const
{
    return m_role;
}

void AndroidInstanceMCPToken::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool AndroidInstanceMCPToken::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

string AndroidInstanceMCPToken::GetTokenName() const
{
    return m_tokenName;
}

void AndroidInstanceMCPToken::SetTokenName(const string& _tokenName)
{
    m_tokenName = _tokenName;
    m_tokenNameHasBeenSet = true;
}

bool AndroidInstanceMCPToken::TokenNameHasBeenSet() const
{
    return m_tokenNameHasBeenSet;
}

vector<string> AndroidInstanceMCPToken::GetAllowedInstanceIds() const
{
    return m_allowedInstanceIds;
}

void AndroidInstanceMCPToken::SetAllowedInstanceIds(const vector<string>& _allowedInstanceIds)
{
    m_allowedInstanceIds = _allowedInstanceIds;
    m_allowedInstanceIdsHasBeenSet = true;
}

bool AndroidInstanceMCPToken::AllowedInstanceIdsHasBeenSet() const
{
    return m_allowedInstanceIdsHasBeenSet;
}

string AndroidInstanceMCPToken::GetCreateTime() const
{
    return m_createTime;
}

void AndroidInstanceMCPToken::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AndroidInstanceMCPToken::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AndroidInstanceMCPToken::GetExpiresTime() const
{
    return m_expiresTime;
}

void AndroidInstanceMCPToken::SetExpiresTime(const string& _expiresTime)
{
    m_expiresTime = _expiresTime;
    m_expiresTimeHasBeenSet = true;
}

bool AndroidInstanceMCPToken::ExpiresTimeHasBeenSet() const
{
    return m_expiresTimeHasBeenSet;
}

string AndroidInstanceMCPToken::GetStatus() const
{
    return m_status;
}

void AndroidInstanceMCPToken::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AndroidInstanceMCPToken::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

