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

#include <tencentcloud/cam/v20190116/model/RoleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

RoleInfo::RoleInfo() :
    m_roleIdHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_policyDocumentHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_addTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_consoleLoginHasBeenSet(false),
    m_roleTypeHasBeenSet(false),
    m_sessionDurationHasBeenSet(false),
    m_deletionTaskIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

CoreInternalOutcome RoleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoleId") && !value["RoleId"].IsNull())
    {
        if (!value["RoleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.RoleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleId = string(value["RoleId"].GetString());
        m_roleIdHasBeenSet = true;
    }

    if (value.HasMember("RoleName") && !value["RoleName"].IsNull())
    {
        if (!value["RoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.RoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleName = string(value["RoleName"].GetString());
        m_roleNameHasBeenSet = true;
    }

    if (value.HasMember("PolicyDocument") && !value["PolicyDocument"].IsNull())
    {
        if (!value["PolicyDocument"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.PolicyDocument` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyDocument = string(value["PolicyDocument"].GetString());
        m_policyDocumentHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("AddTime") && !value["AddTime"].IsNull())
    {
        if (!value["AddTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.AddTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = string(value["AddTime"].GetString());
        m_addTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ConsoleLogin") && !value["ConsoleLogin"].IsNull())
    {
        if (!value["ConsoleLogin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.ConsoleLogin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_consoleLogin = value["ConsoleLogin"].GetUint64();
        m_consoleLoginHasBeenSet = true;
    }

    if (value.HasMember("RoleType") && !value["RoleType"].IsNull())
    {
        if (!value["RoleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.RoleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleType = string(value["RoleType"].GetString());
        m_roleTypeHasBeenSet = true;
    }

    if (value.HasMember("SessionDuration") && !value["SessionDuration"].IsNull())
    {
        if (!value["SessionDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.SessionDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sessionDuration = value["SessionDuration"].GetUint64();
        m_sessionDurationHasBeenSet = true;
    }

    if (value.HasMember("DeletionTaskId") && !value["DeletionTaskId"].IsNull())
    {
        if (!value["DeletionTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.DeletionTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deletionTaskId = string(value["DeletionTaskId"].GetString());
        m_deletionTaskIdHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RoleInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RoleTags item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("RoleArn") && !value["RoleArn"].IsNull())
    {
        if (!value["RoleArn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.RoleArn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleArn = string(value["RoleArn"].GetString());
        m_roleArnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleName.c_str(), allocator).Move(), allocator);
    }

    if (m_policyDocumentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyDocument";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyDocument.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_addTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_consoleLoginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsoleLogin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consoleLogin, allocator);
    }

    if (m_roleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleType.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sessionDuration, allocator);
    }

    if (m_deletionTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeletionTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deletionTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_roleArnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleArn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleArn.c_str(), allocator).Move(), allocator);
    }

}


string RoleInfo::GetRoleId() const
{
    return m_roleId;
}

void RoleInfo::SetRoleId(const string& _roleId)
{
    m_roleId = _roleId;
    m_roleIdHasBeenSet = true;
}

bool RoleInfo::RoleIdHasBeenSet() const
{
    return m_roleIdHasBeenSet;
}

string RoleInfo::GetRoleName() const
{
    return m_roleName;
}

void RoleInfo::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool RoleInfo::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

string RoleInfo::GetPolicyDocument() const
{
    return m_policyDocument;
}

void RoleInfo::SetPolicyDocument(const string& _policyDocument)
{
    m_policyDocument = _policyDocument;
    m_policyDocumentHasBeenSet = true;
}

bool RoleInfo::PolicyDocumentHasBeenSet() const
{
    return m_policyDocumentHasBeenSet;
}

string RoleInfo::GetDescription() const
{
    return m_description;
}

void RoleInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool RoleInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string RoleInfo::GetAddTime() const
{
    return m_addTime;
}

void RoleInfo::SetAddTime(const string& _addTime)
{
    m_addTime = _addTime;
    m_addTimeHasBeenSet = true;
}

bool RoleInfo::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

string RoleInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void RoleInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool RoleInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t RoleInfo::GetConsoleLogin() const
{
    return m_consoleLogin;
}

void RoleInfo::SetConsoleLogin(const uint64_t& _consoleLogin)
{
    m_consoleLogin = _consoleLogin;
    m_consoleLoginHasBeenSet = true;
}

bool RoleInfo::ConsoleLoginHasBeenSet() const
{
    return m_consoleLoginHasBeenSet;
}

string RoleInfo::GetRoleType() const
{
    return m_roleType;
}

void RoleInfo::SetRoleType(const string& _roleType)
{
    m_roleType = _roleType;
    m_roleTypeHasBeenSet = true;
}

bool RoleInfo::RoleTypeHasBeenSet() const
{
    return m_roleTypeHasBeenSet;
}

uint64_t RoleInfo::GetSessionDuration() const
{
    return m_sessionDuration;
}

void RoleInfo::SetSessionDuration(const uint64_t& _sessionDuration)
{
    m_sessionDuration = _sessionDuration;
    m_sessionDurationHasBeenSet = true;
}

bool RoleInfo::SessionDurationHasBeenSet() const
{
    return m_sessionDurationHasBeenSet;
}

string RoleInfo::GetDeletionTaskId() const
{
    return m_deletionTaskId;
}

void RoleInfo::SetDeletionTaskId(const string& _deletionTaskId)
{
    m_deletionTaskId = _deletionTaskId;
    m_deletionTaskIdHasBeenSet = true;
}

bool RoleInfo::DeletionTaskIdHasBeenSet() const
{
    return m_deletionTaskIdHasBeenSet;
}

vector<RoleTags> RoleInfo::GetTags() const
{
    return m_tags;
}

void RoleInfo::SetTags(const vector<RoleTags>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool RoleInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string RoleInfo::GetRoleArn() const
{
    return m_roleArn;
}

void RoleInfo::SetRoleArn(const string& _roleArn)
{
    m_roleArn = _roleArn;
    m_roleArnHasBeenSet = true;
}

bool RoleInfo::RoleArnHasBeenSet() const
{
    return m_roleArnHasBeenSet;
}

