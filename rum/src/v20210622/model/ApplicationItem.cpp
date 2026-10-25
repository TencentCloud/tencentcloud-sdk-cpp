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

#include <tencentcloud/rum/v20210622/model/ApplicationItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

ApplicationItem::ApplicationItem() :
    m_appIdHasBeenSet(false),
    m_projectKeyHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_descHasBeenSet(false),
    m_excludeIgnoredErrorsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_apmInstanceIdsHasBeenSet(false)
{
}

CoreInternalOutcome ApplicationItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationItem.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectKey") && !value["ProjectKey"].IsNull())
    {
        if (!value["ProjectKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationItem.ProjectKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectKey = string(value["ProjectKey"].GetString());
        m_projectKeyHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationItem.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationItem.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationItem.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("ExcludeIgnoredErrors") && !value["ExcludeIgnoredErrors"].IsNull())
    {
        if (!value["ExcludeIgnoredErrors"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationItem.ExcludeIgnoredErrors` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_excludeIgnoredErrors = value["ExcludeIgnoredErrors"].GetBool();
        m_excludeIgnoredErrorsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationItem.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationItem.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("ApmInstanceIds") && !value["ApmInstanceIds"].IsNull())
    {
        if (!value["ApmInstanceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApplicationItem.ApmInstanceIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ApmInstanceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_apmInstanceIds.push_back((*itr).GetString());
        }
        m_apmInstanceIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplicationItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectKey.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_excludeIgnoredErrorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeIgnoredErrors";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_excludeIgnoredErrors, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_apmInstanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApmInstanceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_apmInstanceIds.begin(); itr != m_apmInstanceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ApplicationItem::GetAppId() const
{
    return m_appId;
}

void ApplicationItem::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ApplicationItem::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string ApplicationItem::GetProjectKey() const
{
    return m_projectKey;
}

void ApplicationItem::SetProjectKey(const string& _projectKey)
{
    m_projectKey = _projectKey;
    m_projectKeyHasBeenSet = true;
}

bool ApplicationItem::ProjectKeyHasBeenSet() const
{
    return m_projectKeyHasBeenSet;
}

string ApplicationItem::GetInstanceId() const
{
    return m_instanceId;
}

void ApplicationItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ApplicationItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ApplicationItem::GetInstanceName() const
{
    return m_instanceName;
}

void ApplicationItem::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool ApplicationItem::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string ApplicationItem::GetName() const
{
    return m_name;
}

void ApplicationItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ApplicationItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ApplicationItem::GetType() const
{
    return m_type;
}

void ApplicationItem::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ApplicationItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ApplicationItem::GetDesc() const
{
    return m_desc;
}

void ApplicationItem::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool ApplicationItem::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

bool ApplicationItem::GetExcludeIgnoredErrors() const
{
    return m_excludeIgnoredErrors;
}

void ApplicationItem::SetExcludeIgnoredErrors(const bool& _excludeIgnoredErrors)
{
    m_excludeIgnoredErrors = _excludeIgnoredErrors;
    m_excludeIgnoredErrorsHasBeenSet = true;
}

bool ApplicationItem::ExcludeIgnoredErrorsHasBeenSet() const
{
    return m_excludeIgnoredErrorsHasBeenSet;
}

int64_t ApplicationItem::GetStatus() const
{
    return m_status;
}

void ApplicationItem::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ApplicationItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ApplicationItem::GetCreatedAt() const
{
    return m_createdAt;
}

void ApplicationItem::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool ApplicationItem::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

vector<string> ApplicationItem::GetApmInstanceIds() const
{
    return m_apmInstanceIds;
}

void ApplicationItem::SetApmInstanceIds(const vector<string>& _apmInstanceIds)
{
    m_apmInstanceIds = _apmInstanceIds;
    m_apmInstanceIdsHasBeenSet = true;
}

bool ApplicationItem::ApmInstanceIdsHasBeenSet() const
{
    return m_apmInstanceIdsHasBeenSet;
}

