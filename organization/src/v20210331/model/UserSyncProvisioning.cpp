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

#include <tencentcloud/organization/v20210331/model/UserSyncProvisioning.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

UserSyncProvisioning::UserSyncProvisioning() :
    m_descriptionHasBeenSet(false),
    m_principalIdHasBeenSet(false),
    m_principalTypeHasBeenSet(false),
    m_targetUinHasBeenSet(false),
    m_duplicationStrategyHasBeenSet(false),
    m_deletionStrategyHasBeenSet(false),
    m_targetTypeHasBeenSet(false)
{
}

CoreInternalOutcome UserSyncProvisioning::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserSyncProvisioning.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("PrincipalId") && !value["PrincipalId"].IsNull())
    {
        if (!value["PrincipalId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserSyncProvisioning.PrincipalId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_principalId = string(value["PrincipalId"].GetString());
        m_principalIdHasBeenSet = true;
    }

    if (value.HasMember("PrincipalType") && !value["PrincipalType"].IsNull())
    {
        if (!value["PrincipalType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserSyncProvisioning.PrincipalType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_principalType = string(value["PrincipalType"].GetString());
        m_principalTypeHasBeenSet = true;
    }

    if (value.HasMember("TargetUin") && !value["TargetUin"].IsNull())
    {
        if (!value["TargetUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserSyncProvisioning.TargetUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetUin = value["TargetUin"].GetInt64();
        m_targetUinHasBeenSet = true;
    }

    if (value.HasMember("DuplicationStrategy") && !value["DuplicationStrategy"].IsNull())
    {
        if (!value["DuplicationStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserSyncProvisioning.DuplicationStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_duplicationStrategy = string(value["DuplicationStrategy"].GetString());
        m_duplicationStrategyHasBeenSet = true;
    }

    if (value.HasMember("DeletionStrategy") && !value["DeletionStrategy"].IsNull())
    {
        if (!value["DeletionStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserSyncProvisioning.DeletionStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deletionStrategy = string(value["DeletionStrategy"].GetString());
        m_deletionStrategyHasBeenSet = true;
    }

    if (value.HasMember("TargetType") && !value["TargetType"].IsNull())
    {
        if (!value["TargetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserSyncProvisioning.TargetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetType = string(value["TargetType"].GetString());
        m_targetTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserSyncProvisioning::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_principalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrincipalId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_principalId.c_str(), allocator).Move(), allocator);
    }

    if (m_principalTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrincipalType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_principalType.c_str(), allocator).Move(), allocator);
    }

    if (m_targetUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetUin, allocator);
    }

    if (m_duplicationStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DuplicationStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_duplicationStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_deletionStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeletionStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deletionStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetType.c_str(), allocator).Move(), allocator);
    }

}


string UserSyncProvisioning::GetDescription() const
{
    return m_description;
}

void UserSyncProvisioning::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UserSyncProvisioning::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string UserSyncProvisioning::GetPrincipalId() const
{
    return m_principalId;
}

void UserSyncProvisioning::SetPrincipalId(const string& _principalId)
{
    m_principalId = _principalId;
    m_principalIdHasBeenSet = true;
}

bool UserSyncProvisioning::PrincipalIdHasBeenSet() const
{
    return m_principalIdHasBeenSet;
}

string UserSyncProvisioning::GetPrincipalType() const
{
    return m_principalType;
}

void UserSyncProvisioning::SetPrincipalType(const string& _principalType)
{
    m_principalType = _principalType;
    m_principalTypeHasBeenSet = true;
}

bool UserSyncProvisioning::PrincipalTypeHasBeenSet() const
{
    return m_principalTypeHasBeenSet;
}

int64_t UserSyncProvisioning::GetTargetUin() const
{
    return m_targetUin;
}

void UserSyncProvisioning::SetTargetUin(const int64_t& _targetUin)
{
    m_targetUin = _targetUin;
    m_targetUinHasBeenSet = true;
}

bool UserSyncProvisioning::TargetUinHasBeenSet() const
{
    return m_targetUinHasBeenSet;
}

string UserSyncProvisioning::GetDuplicationStrategy() const
{
    return m_duplicationStrategy;
}

void UserSyncProvisioning::SetDuplicationStrategy(const string& _duplicationStrategy)
{
    m_duplicationStrategy = _duplicationStrategy;
    m_duplicationStrategyHasBeenSet = true;
}

bool UserSyncProvisioning::DuplicationStrategyHasBeenSet() const
{
    return m_duplicationStrategyHasBeenSet;
}

string UserSyncProvisioning::GetDeletionStrategy() const
{
    return m_deletionStrategy;
}

void UserSyncProvisioning::SetDeletionStrategy(const string& _deletionStrategy)
{
    m_deletionStrategy = _deletionStrategy;
    m_deletionStrategyHasBeenSet = true;
}

bool UserSyncProvisioning::DeletionStrategyHasBeenSet() const
{
    return m_deletionStrategyHasBeenSet;
}

string UserSyncProvisioning::GetTargetType() const
{
    return m_targetType;
}

void UserSyncProvisioning::SetTargetType(const string& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool UserSyncProvisioning::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

