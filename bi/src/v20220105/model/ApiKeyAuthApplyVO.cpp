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

#include <tencentcloud/bi/v20220105/model/ApiKeyAuthApplyVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

ApiKeyAuthApplyVO::ApiKeyAuthApplyVO() :
    m_idHasBeenSet(false),
    m_corpIdHasBeenSet(false),
    m_apiKeyHasBeenSet(false),
    m_defaultUserHasBeenSet(false),
    m_createdUserHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedUserHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

CoreInternalOutcome ApiKeyAuthApplyVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyAuthApplyVO.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("CorpId") && !value["CorpId"].IsNull())
    {
        if (!value["CorpId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyAuthApplyVO.CorpId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_corpId = string(value["CorpId"].GetString());
        m_corpIdHasBeenSet = true;
    }

    if (value.HasMember("ApiKey") && !value["ApiKey"].IsNull())
    {
        if (!value["ApiKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyAuthApplyVO.ApiKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiKey = string(value["ApiKey"].GetString());
        m_apiKeyHasBeenSet = true;
    }

    if (value.HasMember("DefaultUser") && !value["DefaultUser"].IsNull())
    {
        if (!value["DefaultUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyAuthApplyVO.DefaultUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultUser = string(value["DefaultUser"].GetString());
        m_defaultUserHasBeenSet = true;
    }

    if (value.HasMember("CreatedUser") && !value["CreatedUser"].IsNull())
    {
        if (!value["CreatedUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyAuthApplyVO.CreatedUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdUser = string(value["CreatedUser"].GetString());
        m_createdUserHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyAuthApplyVO.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedUser") && !value["UpdatedUser"].IsNull())
    {
        if (!value["UpdatedUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyAuthApplyVO.UpdatedUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedUser = string(value["UpdatedUser"].GetString());
        m_updatedUserHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyAuthApplyVO.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiKeyAuthApplyVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_corpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_corpId.c_str(), allocator).Move(), allocator);
    }

    if (m_apiKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiKey.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultUser.c_str(), allocator).Move(), allocator);
    }

    if (m_createdUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdUser.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedUser.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

}


int64_t ApiKeyAuthApplyVO::GetId() const
{
    return m_id;
}

void ApiKeyAuthApplyVO::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ApiKeyAuthApplyVO::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ApiKeyAuthApplyVO::GetCorpId() const
{
    return m_corpId;
}

void ApiKeyAuthApplyVO::SetCorpId(const string& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool ApiKeyAuthApplyVO::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}

string ApiKeyAuthApplyVO::GetApiKey() const
{
    return m_apiKey;
}

void ApiKeyAuthApplyVO::SetApiKey(const string& _apiKey)
{
    m_apiKey = _apiKey;
    m_apiKeyHasBeenSet = true;
}

bool ApiKeyAuthApplyVO::ApiKeyHasBeenSet() const
{
    return m_apiKeyHasBeenSet;
}

string ApiKeyAuthApplyVO::GetDefaultUser() const
{
    return m_defaultUser;
}

void ApiKeyAuthApplyVO::SetDefaultUser(const string& _defaultUser)
{
    m_defaultUser = _defaultUser;
    m_defaultUserHasBeenSet = true;
}

bool ApiKeyAuthApplyVO::DefaultUserHasBeenSet() const
{
    return m_defaultUserHasBeenSet;
}

string ApiKeyAuthApplyVO::GetCreatedUser() const
{
    return m_createdUser;
}

void ApiKeyAuthApplyVO::SetCreatedUser(const string& _createdUser)
{
    m_createdUser = _createdUser;
    m_createdUserHasBeenSet = true;
}

bool ApiKeyAuthApplyVO::CreatedUserHasBeenSet() const
{
    return m_createdUserHasBeenSet;
}

string ApiKeyAuthApplyVO::GetCreatedAt() const
{
    return m_createdAt;
}

void ApiKeyAuthApplyVO::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool ApiKeyAuthApplyVO::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string ApiKeyAuthApplyVO::GetUpdatedUser() const
{
    return m_updatedUser;
}

void ApiKeyAuthApplyVO::SetUpdatedUser(const string& _updatedUser)
{
    m_updatedUser = _updatedUser;
    m_updatedUserHasBeenSet = true;
}

bool ApiKeyAuthApplyVO::UpdatedUserHasBeenSet() const
{
    return m_updatedUserHasBeenSet;
}

string ApiKeyAuthApplyVO::GetUpdatedAt() const
{
    return m_updatedAt;
}

void ApiKeyAuthApplyVO::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool ApiKeyAuthApplyVO::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

