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

#include <tencentcloud/omics/v20221128/model/Environment.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

Environment::Environment() :
    m_environmentIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_availableHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_isManagedHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_resourceIdsHasBeenSet(false),
    m_lastWorkflowUuidHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
}

CoreInternalOutcome Environment::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnvironmentId") && !value["EnvironmentId"].IsNull())
    {
        if (!value["EnvironmentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Environment.EnvironmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environmentId = string(value["EnvironmentId"].GetString());
        m_environmentIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Environment.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Environment.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Environment.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Environment.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Environment.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Available") && !value["Available"].IsNull())
    {
        if (!value["Available"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Environment.Available` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_available = value["Available"].GetBool();
        m_availableHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Environment.IsDefault` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetBool();
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("IsManaged") && !value["IsManaged"].IsNull())
    {
        if (!value["IsManaged"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Environment.IsManaged` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isManaged = value["IsManaged"].GetBool();
        m_isManagedHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Environment.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("ResourceIds") && !value["ResourceIds"].IsNull())
    {
        if (!value["ResourceIds"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Environment.ResourceIds` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resourceIds.Deserialize(value["ResourceIds"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceIdsHasBeenSet = true;
    }

    if (value.HasMember("LastWorkflowUuid") && !value["LastWorkflowUuid"].IsNull())
    {
        if (!value["LastWorkflowUuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Environment.LastWorkflowUuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastWorkflowUuid = string(value["LastWorkflowUuid"].GetString());
        m_lastWorkflowUuidHasBeenSet = true;
    }

    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Environment.CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(value["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Environment::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_environmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environmentId.c_str(), allocator).Move(), allocator);
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

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_availableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Available";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_available, allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

    if (m_isManagedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsManaged";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isManaged, allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resourceIds.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lastWorkflowUuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastWorkflowUuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastWorkflowUuid.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTime.c_str(), allocator).Move(), allocator);
    }

}


string Environment::GetEnvironmentId() const
{
    return m_environmentId;
}

void Environment::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool Environment::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string Environment::GetName() const
{
    return m_name;
}

void Environment::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Environment::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Environment::GetDescription() const
{
    return m_description;
}

void Environment::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Environment::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string Environment::GetRegion() const
{
    return m_region;
}

void Environment::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool Environment::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string Environment::GetType() const
{
    return m_type;
}

void Environment::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Environment::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string Environment::GetStatus() const
{
    return m_status;
}

void Environment::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Environment::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool Environment::GetAvailable() const
{
    return m_available;
}

void Environment::SetAvailable(const bool& _available)
{
    m_available = _available;
    m_availableHasBeenSet = true;
}

bool Environment::AvailableHasBeenSet() const
{
    return m_availableHasBeenSet;
}

bool Environment::GetIsDefault() const
{
    return m_isDefault;
}

void Environment::SetIsDefault(const bool& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool Environment::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

bool Environment::GetIsManaged() const
{
    return m_isManaged;
}

void Environment::SetIsManaged(const bool& _isManaged)
{
    m_isManaged = _isManaged;
    m_isManagedHasBeenSet = true;
}

bool Environment::IsManagedHasBeenSet() const
{
    return m_isManagedHasBeenSet;
}

string Environment::GetMessage() const
{
    return m_message;
}

void Environment::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool Environment::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

ResourceIds Environment::GetResourceIds() const
{
    return m_resourceIds;
}

void Environment::SetResourceIds(const ResourceIds& _resourceIds)
{
    m_resourceIds = _resourceIds;
    m_resourceIdsHasBeenSet = true;
}

bool Environment::ResourceIdsHasBeenSet() const
{
    return m_resourceIdsHasBeenSet;
}

string Environment::GetLastWorkflowUuid() const
{
    return m_lastWorkflowUuid;
}

void Environment::SetLastWorkflowUuid(const string& _lastWorkflowUuid)
{
    m_lastWorkflowUuid = _lastWorkflowUuid;
    m_lastWorkflowUuidHasBeenSet = true;
}

bool Environment::LastWorkflowUuidHasBeenSet() const
{
    return m_lastWorkflowUuidHasBeenSet;
}

string Environment::GetCreationTime() const
{
    return m_creationTime;
}

void Environment::SetCreationTime(const string& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool Environment::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

