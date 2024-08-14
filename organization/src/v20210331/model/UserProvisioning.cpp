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

#include <tencentcloud/organization/v20210331/model/UserProvisioning.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

UserProvisioning::UserProvisioning() :
    m_userProvisioningIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_principalIdHasBeenSet(false),
    m_principalNameHasBeenSet(false),
    m_principalTypeHasBeenSet(false),
    m_targetUinHasBeenSet(false),
    m_targetNameHasBeenSet(false),
    m_duplicationStrategyHasBeenSet(false),
    m_deletionStrategyHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_targetTypeHasBeenSet(false)
{
}

CoreInternalOutcome UserProvisioning::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserProvisioningId") && !value["UserProvisioningId"].IsNull())
    {
        if (!value["UserProvisioningId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserProvisioning.UserProvisioningId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userProvisioningId = string(value["UserProvisioningId"].GetString());
        m_userProvisioningIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserProvisioning.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserProvisioning.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("PrincipalId") && !value["PrincipalId"].IsNull())
    {
        if (!value["PrincipalId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserProvisioning.PrincipalId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_principalId = string(value["PrincipalId"].GetString());
        m_principalIdHasBeenSet = true;
    }

    if (value.HasMember("PrincipalName") && !value["PrincipalName"].IsNull())
    {
        if (!value["PrincipalName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserProvisioning.PrincipalName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_principalName = string(value["PrincipalName"].GetString());
        m_principalNameHasBeenSet = true;
    }

    if (value.HasMember("PrincipalType") && !value["PrincipalType"].IsNull())
    {
        if (!value["PrincipalType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserProvisioning.PrincipalType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_principalType = string(value["PrincipalType"].GetString());
        m_principalTypeHasBeenSet = true;
    }

    if (value.HasMember("TargetUin") && !value["TargetUin"].IsNull())
    {
        if (!value["TargetUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserProvisioning.TargetUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetUin = value["TargetUin"].GetInt64();
        m_targetUinHasBeenSet = true;
    }

    if (value.HasMember("TargetName") && !value["TargetName"].IsNull())
    {
        if (!value["TargetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserProvisioning.TargetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetName = string(value["TargetName"].GetString());
        m_targetNameHasBeenSet = true;
    }

    if (value.HasMember("DuplicationStrategy") && !value["DuplicationStrategy"].IsNull())
    {
        if (!value["DuplicationStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserProvisioning.DuplicationStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_duplicationStrategy = string(value["DuplicationStrategy"].GetString());
        m_duplicationStrategyHasBeenSet = true;
    }

    if (value.HasMember("DeletionStrategy") && !value["DeletionStrategy"].IsNull())
    {
        if (!value["DeletionStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserProvisioning.DeletionStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deletionStrategy = string(value["DeletionStrategy"].GetString());
        m_deletionStrategyHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserProvisioning.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserProvisioning.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("TargetType") && !value["TargetType"].IsNull())
    {
        if (!value["TargetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserProvisioning.TargetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetType = string(value["TargetType"].GetString());
        m_targetTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserProvisioning::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userProvisioningIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserProvisioningId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userProvisioningId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_principalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrincipalId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_principalId.c_str(), allocator).Move(), allocator);
    }

    if (m_principalNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrincipalName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_principalName.c_str(), allocator).Move(), allocator);
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

    if (m_targetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetName.c_str(), allocator).Move(), allocator);
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetType.c_str(), allocator).Move(), allocator);
    }

}


string UserProvisioning::GetUserProvisioningId() const
{
    return m_userProvisioningId;
}

void UserProvisioning::SetUserProvisioningId(const string& _userProvisioningId)
{
    m_userProvisioningId = _userProvisioningId;
    m_userProvisioningIdHasBeenSet = true;
}

bool UserProvisioning::UserProvisioningIdHasBeenSet() const
{
    return m_userProvisioningIdHasBeenSet;
}

string UserProvisioning::GetDescription() const
{
    return m_description;
}

void UserProvisioning::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UserProvisioning::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string UserProvisioning::GetStatus() const
{
    return m_status;
}

void UserProvisioning::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool UserProvisioning::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string UserProvisioning::GetPrincipalId() const
{
    return m_principalId;
}

void UserProvisioning::SetPrincipalId(const string& _principalId)
{
    m_principalId = _principalId;
    m_principalIdHasBeenSet = true;
}

bool UserProvisioning::PrincipalIdHasBeenSet() const
{
    return m_principalIdHasBeenSet;
}

string UserProvisioning::GetPrincipalName() const
{
    return m_principalName;
}

void UserProvisioning::SetPrincipalName(const string& _principalName)
{
    m_principalName = _principalName;
    m_principalNameHasBeenSet = true;
}

bool UserProvisioning::PrincipalNameHasBeenSet() const
{
    return m_principalNameHasBeenSet;
}

string UserProvisioning::GetPrincipalType() const
{
    return m_principalType;
}

void UserProvisioning::SetPrincipalType(const string& _principalType)
{
    m_principalType = _principalType;
    m_principalTypeHasBeenSet = true;
}

bool UserProvisioning::PrincipalTypeHasBeenSet() const
{
    return m_principalTypeHasBeenSet;
}

int64_t UserProvisioning::GetTargetUin() const
{
    return m_targetUin;
}

void UserProvisioning::SetTargetUin(const int64_t& _targetUin)
{
    m_targetUin = _targetUin;
    m_targetUinHasBeenSet = true;
}

bool UserProvisioning::TargetUinHasBeenSet() const
{
    return m_targetUinHasBeenSet;
}

string UserProvisioning::GetTargetName() const
{
    return m_targetName;
}

void UserProvisioning::SetTargetName(const string& _targetName)
{
    m_targetName = _targetName;
    m_targetNameHasBeenSet = true;
}

bool UserProvisioning::TargetNameHasBeenSet() const
{
    return m_targetNameHasBeenSet;
}

string UserProvisioning::GetDuplicationStrategy() const
{
    return m_duplicationStrategy;
}

void UserProvisioning::SetDuplicationStrategy(const string& _duplicationStrategy)
{
    m_duplicationStrategy = _duplicationStrategy;
    m_duplicationStrategyHasBeenSet = true;
}

bool UserProvisioning::DuplicationStrategyHasBeenSet() const
{
    return m_duplicationStrategyHasBeenSet;
}

string UserProvisioning::GetDeletionStrategy() const
{
    return m_deletionStrategy;
}

void UserProvisioning::SetDeletionStrategy(const string& _deletionStrategy)
{
    m_deletionStrategy = _deletionStrategy;
    m_deletionStrategyHasBeenSet = true;
}

bool UserProvisioning::DeletionStrategyHasBeenSet() const
{
    return m_deletionStrategyHasBeenSet;
}

string UserProvisioning::GetCreateTime() const
{
    return m_createTime;
}

void UserProvisioning::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool UserProvisioning::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string UserProvisioning::GetUpdateTime() const
{
    return m_updateTime;
}

void UserProvisioning::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool UserProvisioning::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string UserProvisioning::GetTargetType() const
{
    return m_targetType;
}

void UserProvisioning::SetTargetType(const string& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool UserProvisioning::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

