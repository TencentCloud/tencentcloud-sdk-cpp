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

#include <tencentcloud/bh/v20230418/model/AppAsset.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

AppAsset::AppAsset() :
    m_idHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_deviceAccountIdHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_clientAppPathHasBeenSet(false),
    m_clientAppKindHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_bindStatusHasBeenSet(false),
    m_deviceInstanceIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_deviceAccountNameHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_groupSetHasBeenSet(false),
    m_departmentHasBeenSet(false)
{
}

CoreInternalOutcome AppAsset::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AppAsset.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppAsset.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppAsset.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AppAsset.DeviceId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = value["DeviceId"].GetUint64();
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceAccountId") && !value["DeviceAccountId"].IsNull())
    {
        if (!value["DeviceAccountId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AppAsset.DeviceAccountId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deviceAccountId = value["DeviceAccountId"].GetUint64();
        m_deviceAccountIdHasBeenSet = true;
    }

    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AppAsset.Kind` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_kind = value["Kind"].GetUint64();
        m_kindHasBeenSet = true;
    }

    if (value.HasMember("ClientAppPath") && !value["ClientAppPath"].IsNull())
    {
        if (!value["ClientAppPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppAsset.ClientAppPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientAppPath = string(value["ClientAppPath"].GetString());
        m_clientAppPathHasBeenSet = true;
    }

    if (value.HasMember("ClientAppKind") && !value["ClientAppKind"].IsNull())
    {
        if (!value["ClientAppKind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppAsset.ClientAppKind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientAppKind = string(value["ClientAppKind"].GetString());
        m_clientAppKindHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppAsset.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("BindStatus") && !value["BindStatus"].IsNull())
    {
        if (!value["BindStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AppAsset.BindStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bindStatus = value["BindStatus"].GetUint64();
        m_bindStatusHasBeenSet = true;
    }

    if (value.HasMember("DeviceInstanceId") && !value["DeviceInstanceId"].IsNull())
    {
        if (!value["DeviceInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppAsset.DeviceInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceInstanceId = string(value["DeviceInstanceId"].GetString());
        m_deviceInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppAsset.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("DeviceAccountName") && !value["DeviceAccountName"].IsNull())
    {
        if (!value["DeviceAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppAsset.DeviceAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceAccountName = string(value["DeviceAccountName"].GetString());
        m_deviceAccountNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppAsset.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppAsset.Resource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resource.Deserialize(value["Resource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("DomainId") && !value["DomainId"].IsNull())
    {
        if (!value["DomainId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppAsset.DomainId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainId = string(value["DomainId"].GetString());
        m_domainIdHasBeenSet = true;
    }

    if (value.HasMember("DomainName") && !value["DomainName"].IsNull())
    {
        if (!value["DomainName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppAsset.DomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainName = string(value["DomainName"].GetString());
        m_domainNameHasBeenSet = true;
    }

    if (value.HasMember("GroupSet") && !value["GroupSet"].IsNull())
    {
        if (!value["GroupSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AppAsset.GroupSet` is not array type"));

        const rapidjson::Value &tmpValue = value["GroupSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Group item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_groupSet.push_back(item);
        }
        m_groupSetHasBeenSet = true;
    }

    if (value.HasMember("Department") && !value["Department"].IsNull())
    {
        if (!value["Department"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppAsset.Department` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_department.Deserialize(value["Department"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_departmentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppAsset::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deviceId, allocator);
    }

    if (m_deviceAccountIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceAccountId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deviceAccountId, allocator);
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kind, allocator);
    }

    if (m_clientAppPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientAppPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientAppPath.c_str(), allocator).Move(), allocator);
    }

    if (m_clientAppKindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientAppKind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientAppKind.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_bindStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindStatus, allocator);
    }

    if (m_deviceInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceAccountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceAccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceAccountName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_groupSet.begin(); itr != m_groupSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_departmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Department";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_department.ToJsonObject(value[key.c_str()], allocator);
    }

}


uint64_t AppAsset::GetId() const
{
    return m_id;
}

void AppAsset::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AppAsset::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string AppAsset::GetInstanceId() const
{
    return m_instanceId;
}

void AppAsset::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AppAsset::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string AppAsset::GetName() const
{
    return m_name;
}

void AppAsset::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AppAsset::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t AppAsset::GetDeviceId() const
{
    return m_deviceId;
}

void AppAsset::SetDeviceId(const uint64_t& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool AppAsset::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

uint64_t AppAsset::GetDeviceAccountId() const
{
    return m_deviceAccountId;
}

void AppAsset::SetDeviceAccountId(const uint64_t& _deviceAccountId)
{
    m_deviceAccountId = _deviceAccountId;
    m_deviceAccountIdHasBeenSet = true;
}

bool AppAsset::DeviceAccountIdHasBeenSet() const
{
    return m_deviceAccountIdHasBeenSet;
}

uint64_t AppAsset::GetKind() const
{
    return m_kind;
}

void AppAsset::SetKind(const uint64_t& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool AppAsset::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string AppAsset::GetClientAppPath() const
{
    return m_clientAppPath;
}

void AppAsset::SetClientAppPath(const string& _clientAppPath)
{
    m_clientAppPath = _clientAppPath;
    m_clientAppPathHasBeenSet = true;
}

bool AppAsset::ClientAppPathHasBeenSet() const
{
    return m_clientAppPathHasBeenSet;
}

string AppAsset::GetClientAppKind() const
{
    return m_clientAppKind;
}

void AppAsset::SetClientAppKind(const string& _clientAppKind)
{
    m_clientAppKind = _clientAppKind;
    m_clientAppKindHasBeenSet = true;
}

bool AppAsset::ClientAppKindHasBeenSet() const
{
    return m_clientAppKindHasBeenSet;
}

string AppAsset::GetUrl() const
{
    return m_url;
}

void AppAsset::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool AppAsset::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

uint64_t AppAsset::GetBindStatus() const
{
    return m_bindStatus;
}

void AppAsset::SetBindStatus(const uint64_t& _bindStatus)
{
    m_bindStatus = _bindStatus;
    m_bindStatusHasBeenSet = true;
}

bool AppAsset::BindStatusHasBeenSet() const
{
    return m_bindStatusHasBeenSet;
}

string AppAsset::GetDeviceInstanceId() const
{
    return m_deviceInstanceId;
}

void AppAsset::SetDeviceInstanceId(const string& _deviceInstanceId)
{
    m_deviceInstanceId = _deviceInstanceId;
    m_deviceInstanceIdHasBeenSet = true;
}

bool AppAsset::DeviceInstanceIdHasBeenSet() const
{
    return m_deviceInstanceIdHasBeenSet;
}

string AppAsset::GetDeviceName() const
{
    return m_deviceName;
}

void AppAsset::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool AppAsset::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string AppAsset::GetDeviceAccountName() const
{
    return m_deviceAccountName;
}

void AppAsset::SetDeviceAccountName(const string& _deviceAccountName)
{
    m_deviceAccountName = _deviceAccountName;
    m_deviceAccountNameHasBeenSet = true;
}

bool AppAsset::DeviceAccountNameHasBeenSet() const
{
    return m_deviceAccountNameHasBeenSet;
}

string AppAsset::GetResourceId() const
{
    return m_resourceId;
}

void AppAsset::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool AppAsset::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

Resource AppAsset::GetResource() const
{
    return m_resource;
}

void AppAsset::SetResource(const Resource& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool AppAsset::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

string AppAsset::GetDomainId() const
{
    return m_domainId;
}

void AppAsset::SetDomainId(const string& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool AppAsset::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

string AppAsset::GetDomainName() const
{
    return m_domainName;
}

void AppAsset::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool AppAsset::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

vector<Group> AppAsset::GetGroupSet() const
{
    return m_groupSet;
}

void AppAsset::SetGroupSet(const vector<Group>& _groupSet)
{
    m_groupSet = _groupSet;
    m_groupSetHasBeenSet = true;
}

bool AppAsset::GroupSetHasBeenSet() const
{
    return m_groupSetHasBeenSet;
}

Department AppAsset::GetDepartment() const
{
    return m_department;
}

void AppAsset::SetDepartment(const Department& _department)
{
    m_department = _department;
    m_departmentHasBeenSet = true;
}

bool AppAsset::DepartmentHasBeenSet() const
{
    return m_departmentHasBeenSet;
}

