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

#include <tencentcloud/omics/v20221128/model/Volume.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

Volume::Volume() :
    m_volumeIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_specHasBeenSet(false),
    m_capacityHasBeenSet(false),
    m_usageHasBeenSet(false),
    m_bandwidthLimitHasBeenSet(false),
    m_defaultMountPathHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome Volume::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VolumeId") && !value["VolumeId"].IsNull())
    {
        if (!value["VolumeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Volume.VolumeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_volumeId = string(value["VolumeId"].GetString());
        m_volumeIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Volume.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Volume.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("EnvironmentId") && !value["EnvironmentId"].IsNull())
    {
        if (!value["EnvironmentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Volume.EnvironmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environmentId = string(value["EnvironmentId"].GetString());
        m_environmentIdHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Volume.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Spec") && !value["Spec"].IsNull())
    {
        if (!value["Spec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Volume.Spec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spec = string(value["Spec"].GetString());
        m_specHasBeenSet = true;
    }

    if (value.HasMember("Capacity") && !value["Capacity"].IsNull())
    {
        if (!value["Capacity"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Volume.Capacity` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_capacity = value["Capacity"].GetUint64();
        m_capacityHasBeenSet = true;
    }

    if (value.HasMember("Usage") && !value["Usage"].IsNull())
    {
        if (!value["Usage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Volume.Usage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usage = value["Usage"].GetUint64();
        m_usageHasBeenSet = true;
    }

    if (value.HasMember("BandwidthLimit") && !value["BandwidthLimit"].IsNull())
    {
        if (!value["BandwidthLimit"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Volume.BandwidthLimit` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidthLimit = value["BandwidthLimit"].GetDouble();
        m_bandwidthLimitHasBeenSet = true;
    }

    if (value.HasMember("DefaultMountPath") && !value["DefaultMountPath"].IsNull())
    {
        if (!value["DefaultMountPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Volume.DefaultMountPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultMountPath = string(value["DefaultMountPath"].GetString());
        m_defaultMountPathHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Volume.IsDefault` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetBool();
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Volume.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Volume::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_volumeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_volumeId.c_str(), allocator).Move(), allocator);
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

    if (m_environmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_specHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Spec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spec.c_str(), allocator).Move(), allocator);
    }

    if (m_capacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Capacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_capacity, allocator);
    }

    if (m_usageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Usage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usage, allocator);
    }

    if (m_bandwidthLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidthLimit, allocator);
    }

    if (m_defaultMountPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultMountPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultMountPath.c_str(), allocator).Move(), allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string Volume::GetVolumeId() const
{
    return m_volumeId;
}

void Volume::SetVolumeId(const string& _volumeId)
{
    m_volumeId = _volumeId;
    m_volumeIdHasBeenSet = true;
}

bool Volume::VolumeIdHasBeenSet() const
{
    return m_volumeIdHasBeenSet;
}

string Volume::GetName() const
{
    return m_name;
}

void Volume::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Volume::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Volume::GetDescription() const
{
    return m_description;
}

void Volume::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Volume::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string Volume::GetEnvironmentId() const
{
    return m_environmentId;
}

void Volume::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool Volume::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string Volume::GetType() const
{
    return m_type;
}

void Volume::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Volume::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string Volume::GetSpec() const
{
    return m_spec;
}

void Volume::SetSpec(const string& _spec)
{
    m_spec = _spec;
    m_specHasBeenSet = true;
}

bool Volume::SpecHasBeenSet() const
{
    return m_specHasBeenSet;
}

uint64_t Volume::GetCapacity() const
{
    return m_capacity;
}

void Volume::SetCapacity(const uint64_t& _capacity)
{
    m_capacity = _capacity;
    m_capacityHasBeenSet = true;
}

bool Volume::CapacityHasBeenSet() const
{
    return m_capacityHasBeenSet;
}

uint64_t Volume::GetUsage() const
{
    return m_usage;
}

void Volume::SetUsage(const uint64_t& _usage)
{
    m_usage = _usage;
    m_usageHasBeenSet = true;
}

bool Volume::UsageHasBeenSet() const
{
    return m_usageHasBeenSet;
}

double Volume::GetBandwidthLimit() const
{
    return m_bandwidthLimit;
}

void Volume::SetBandwidthLimit(const double& _bandwidthLimit)
{
    m_bandwidthLimit = _bandwidthLimit;
    m_bandwidthLimitHasBeenSet = true;
}

bool Volume::BandwidthLimitHasBeenSet() const
{
    return m_bandwidthLimitHasBeenSet;
}

string Volume::GetDefaultMountPath() const
{
    return m_defaultMountPath;
}

void Volume::SetDefaultMountPath(const string& _defaultMountPath)
{
    m_defaultMountPath = _defaultMountPath;
    m_defaultMountPathHasBeenSet = true;
}

bool Volume::DefaultMountPathHasBeenSet() const
{
    return m_defaultMountPathHasBeenSet;
}

bool Volume::GetIsDefault() const
{
    return m_isDefault;
}

void Volume::SetIsDefault(const bool& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool Volume::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

string Volume::GetStatus() const
{
    return m_status;
}

void Volume::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Volume::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

