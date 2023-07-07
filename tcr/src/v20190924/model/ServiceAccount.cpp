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

#include <tencentcloud/tcr/v20190924/model/ServiceAccount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

ServiceAccount::ServiceAccount() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_disableHasBeenSet(false),
    m_expiresAtHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_permissionsHasBeenSet(false)
{
}

CoreInternalOutcome ServiceAccount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceAccount.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceAccount.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Disable") && !value["Disable"].IsNull())
    {
        if (!value["Disable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceAccount.Disable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disable = value["Disable"].GetBool();
        m_disableHasBeenSet = true;
    }

    if (value.HasMember("ExpiresAt") && !value["ExpiresAt"].IsNull())
    {
        if (!value["ExpiresAt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceAccount.ExpiresAt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expiresAt = value["ExpiresAt"].GetInt64();
        m_expiresAtHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceAccount.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceAccount.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Permissions") && !value["Permissions"].IsNull())
    {
        if (!value["Permissions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceAccount.Permissions` is not array type"));

        const rapidjson::Value &tmpValue = value["Permissions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Permission item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_permissions.push_back(item);
        }
        m_permissionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceAccount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_disableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Disable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disable, allocator);
    }

    if (m_expiresAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiresAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expiresAt, allocator);
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

    if (m_permissionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permissions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_permissions.begin(); itr != m_permissions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ServiceAccount::GetName() const
{
    return m_name;
}

void ServiceAccount::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ServiceAccount::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ServiceAccount::GetDescription() const
{
    return m_description;
}

void ServiceAccount::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ServiceAccount::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

bool ServiceAccount::GetDisable() const
{
    return m_disable;
}

void ServiceAccount::SetDisable(const bool& _disable)
{
    m_disable = _disable;
    m_disableHasBeenSet = true;
}

bool ServiceAccount::DisableHasBeenSet() const
{
    return m_disableHasBeenSet;
}

int64_t ServiceAccount::GetExpiresAt() const
{
    return m_expiresAt;
}

void ServiceAccount::SetExpiresAt(const int64_t& _expiresAt)
{
    m_expiresAt = _expiresAt;
    m_expiresAtHasBeenSet = true;
}

bool ServiceAccount::ExpiresAtHasBeenSet() const
{
    return m_expiresAtHasBeenSet;
}

string ServiceAccount::GetCreateTime() const
{
    return m_createTime;
}

void ServiceAccount::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ServiceAccount::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ServiceAccount::GetUpdateTime() const
{
    return m_updateTime;
}

void ServiceAccount::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ServiceAccount::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

vector<Permission> ServiceAccount::GetPermissions() const
{
    return m_permissions;
}

void ServiceAccount::SetPermissions(const vector<Permission>& _permissions)
{
    m_permissions = _permissions;
    m_permissionsHasBeenSet = true;
}

bool ServiceAccount::PermissionsHasBeenSet() const
{
    return m_permissionsHasBeenSet;
}

