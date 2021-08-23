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

#include <tencentcloud/tcr/v20190924/model/TcrInstanceToken.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

TcrInstanceToken::TcrInstanceToken() :
    m_idHasBeenSet(false),
    m_descHasBeenSet(false),
    m_registryIdHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_expiredAtHasBeenSet(false)
{
}

CoreInternalOutcome TcrInstanceToken::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TcrInstanceToken.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TcrInstanceToken.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("RegistryId") && !value["RegistryId"].IsNull())
    {
        if (!value["RegistryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TcrInstanceToken.RegistryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryId = string(value["RegistryId"].GetString());
        m_registryIdHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TcrInstanceToken.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TcrInstanceToken.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("ExpiredAt") && !value["ExpiredAt"].IsNull())
    {
        if (!value["ExpiredAt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TcrInstanceToken.ExpiredAt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expiredAt = value["ExpiredAt"].GetInt64();
        m_expiredAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TcrInstanceToken::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_registryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expiredAt, allocator);
    }

}


string TcrInstanceToken::GetId() const
{
    return m_id;
}

void TcrInstanceToken::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool TcrInstanceToken::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string TcrInstanceToken::GetDesc() const
{
    return m_desc;
}

void TcrInstanceToken::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool TcrInstanceToken::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string TcrInstanceToken::GetRegistryId() const
{
    return m_registryId;
}

void TcrInstanceToken::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool TcrInstanceToken::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

bool TcrInstanceToken::GetEnabled() const
{
    return m_enabled;
}

void TcrInstanceToken::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool TcrInstanceToken::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string TcrInstanceToken::GetCreatedAt() const
{
    return m_createdAt;
}

void TcrInstanceToken::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool TcrInstanceToken::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

int64_t TcrInstanceToken::GetExpiredAt() const
{
    return m_expiredAt;
}

void TcrInstanceToken::SetExpiredAt(const int64_t& _expiredAt)
{
    m_expiredAt = _expiredAt;
    m_expiredAtHasBeenSet = true;
}

bool TcrInstanceToken::ExpiredAtHasBeenSet() const
{
    return m_expiredAtHasBeenSet;
}

