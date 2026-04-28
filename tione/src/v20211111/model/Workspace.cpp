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

#include <tencentcloud/tione/v20211111/model/Workspace.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

Workspace::Workspace() :
    m_tiProjectIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_resourceGroupsHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome Workspace::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TiProjectId") && !value["TiProjectId"].IsNull())
    {
        if (!value["TiProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Workspace.TiProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tiProjectId = string(value["TiProjectId"].GetString());
        m_tiProjectIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Workspace.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Workspace.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Workspace.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroups") && !value["ResourceGroups"].IsNull())
    {
        if (!value["ResourceGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Workspace.ResourceGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResourceGroupInWorkspace item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceGroups.push_back(item);
        }
        m_resourceGroupsHasBeenSet = true;
    }

    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Workspace.ActionType` is not array type"));

        const rapidjson::Value &tmpValue = value["ActionType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_actionType.push_back((*itr).GetString());
        }
        m_actionTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Workspace.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Workspace::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tiProjectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TiProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tiProjectId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceGroups.begin(); itr != m_resourceGroups.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_actionType.begin(); itr != m_actionType.end(); ++itr)
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

}


string Workspace::GetTiProjectId() const
{
    return m_tiProjectId;
}

void Workspace::SetTiProjectId(const string& _tiProjectId)
{
    m_tiProjectId = _tiProjectId;
    m_tiProjectIdHasBeenSet = true;
}

bool Workspace::TiProjectIdHasBeenSet() const
{
    return m_tiProjectIdHasBeenSet;
}

string Workspace::GetName() const
{
    return m_name;
}

void Workspace::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Workspace::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Workspace::GetDescription() const
{
    return m_description;
}

void Workspace::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Workspace::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string Workspace::GetCreateTime() const
{
    return m_createTime;
}

void Workspace::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Workspace::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<ResourceGroupInWorkspace> Workspace::GetResourceGroups() const
{
    return m_resourceGroups;
}

void Workspace::SetResourceGroups(const vector<ResourceGroupInWorkspace>& _resourceGroups)
{
    m_resourceGroups = _resourceGroups;
    m_resourceGroupsHasBeenSet = true;
}

bool Workspace::ResourceGroupsHasBeenSet() const
{
    return m_resourceGroupsHasBeenSet;
}

vector<string> Workspace::GetActionType() const
{
    return m_actionType;
}

void Workspace::SetActionType(const vector<string>& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool Workspace::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

string Workspace::GetStatus() const
{
    return m_status;
}

void Workspace::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Workspace::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

