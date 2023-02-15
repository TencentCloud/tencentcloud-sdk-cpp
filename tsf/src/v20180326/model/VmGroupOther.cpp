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

#include <tencentcloud/tsf/v20180326/model/VmGroupOther.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

VmGroupOther::VmGroupOther() :
    m_groupIdHasBeenSet(false),
    m_packageIdHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_packageVersionHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_runInstanceCountHasBeenSet(false),
    m_offInstanceCountHasBeenSet(false),
    m_groupStatusHasBeenSet(false),
    m_isNotEqualServiceConfigHasBeenSet(false),
    m_healthCheckSettingsHasBeenSet(false)
{
}

CoreInternalOutcome VmGroupOther::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroupOther.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("PackageId") && !value["PackageId"].IsNull())
    {
        if (!value["PackageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroupOther.PackageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageId = string(value["PackageId"].GetString());
        m_packageIdHasBeenSet = true;
    }

    if (value.HasMember("PackageName") && !value["PackageName"].IsNull())
    {
        if (!value["PackageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroupOther.PackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageName = string(value["PackageName"].GetString());
        m_packageNameHasBeenSet = true;
    }

    if (value.HasMember("PackageVersion") && !value["PackageVersion"].IsNull())
    {
        if (!value["PackageVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroupOther.PackageVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageVersion = string(value["PackageVersion"].GetString());
        m_packageVersionHasBeenSet = true;
    }

    if (value.HasMember("InstanceCount") && !value["InstanceCount"].IsNull())
    {
        if (!value["InstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroupOther.InstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCount = value["InstanceCount"].GetInt64();
        m_instanceCountHasBeenSet = true;
    }

    if (value.HasMember("RunInstanceCount") && !value["RunInstanceCount"].IsNull())
    {
        if (!value["RunInstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroupOther.RunInstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runInstanceCount = value["RunInstanceCount"].GetInt64();
        m_runInstanceCountHasBeenSet = true;
    }

    if (value.HasMember("OffInstanceCount") && !value["OffInstanceCount"].IsNull())
    {
        if (!value["OffInstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroupOther.OffInstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_offInstanceCount = value["OffInstanceCount"].GetInt64();
        m_offInstanceCountHasBeenSet = true;
    }

    if (value.HasMember("GroupStatus") && !value["GroupStatus"].IsNull())
    {
        if (!value["GroupStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroupOther.GroupStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupStatus = string(value["GroupStatus"].GetString());
        m_groupStatusHasBeenSet = true;
    }

    if (value.HasMember("IsNotEqualServiceConfig") && !value["IsNotEqualServiceConfig"].IsNull())
    {
        if (!value["IsNotEqualServiceConfig"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroupOther.IsNotEqualServiceConfig` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isNotEqualServiceConfig = value["IsNotEqualServiceConfig"].GetBool();
        m_isNotEqualServiceConfigHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckSettings") && !value["HealthCheckSettings"].IsNull())
    {
        if (!value["HealthCheckSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroupOther.HealthCheckSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_healthCheckSettings.Deserialize(value["HealthCheckSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_healthCheckSettingsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VmGroupOther::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_packageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageId.c_str(), allocator).Move(), allocator);
    }

    if (m_packageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageName.c_str(), allocator).Move(), allocator);
    }

    if (m_packageVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_runInstanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunInstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runInstanceCount, allocator);
    }

    if (m_offInstanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OffInstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offInstanceCount, allocator);
    }

    if (m_groupStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_isNotEqualServiceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNotEqualServiceConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNotEqualServiceConfig, allocator);
    }

    if (m_healthCheckSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_healthCheckSettings.ToJsonObject(value[key.c_str()], allocator);
    }

}


string VmGroupOther::GetGroupId() const
{
    return m_groupId;
}

void VmGroupOther::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool VmGroupOther::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string VmGroupOther::GetPackageId() const
{
    return m_packageId;
}

void VmGroupOther::SetPackageId(const string& _packageId)
{
    m_packageId = _packageId;
    m_packageIdHasBeenSet = true;
}

bool VmGroupOther::PackageIdHasBeenSet() const
{
    return m_packageIdHasBeenSet;
}

string VmGroupOther::GetPackageName() const
{
    return m_packageName;
}

void VmGroupOther::SetPackageName(const string& _packageName)
{
    m_packageName = _packageName;
    m_packageNameHasBeenSet = true;
}

bool VmGroupOther::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}

string VmGroupOther::GetPackageVersion() const
{
    return m_packageVersion;
}

void VmGroupOther::SetPackageVersion(const string& _packageVersion)
{
    m_packageVersion = _packageVersion;
    m_packageVersionHasBeenSet = true;
}

bool VmGroupOther::PackageVersionHasBeenSet() const
{
    return m_packageVersionHasBeenSet;
}

int64_t VmGroupOther::GetInstanceCount() const
{
    return m_instanceCount;
}

void VmGroupOther::SetInstanceCount(const int64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool VmGroupOther::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

int64_t VmGroupOther::GetRunInstanceCount() const
{
    return m_runInstanceCount;
}

void VmGroupOther::SetRunInstanceCount(const int64_t& _runInstanceCount)
{
    m_runInstanceCount = _runInstanceCount;
    m_runInstanceCountHasBeenSet = true;
}

bool VmGroupOther::RunInstanceCountHasBeenSet() const
{
    return m_runInstanceCountHasBeenSet;
}

int64_t VmGroupOther::GetOffInstanceCount() const
{
    return m_offInstanceCount;
}

void VmGroupOther::SetOffInstanceCount(const int64_t& _offInstanceCount)
{
    m_offInstanceCount = _offInstanceCount;
    m_offInstanceCountHasBeenSet = true;
}

bool VmGroupOther::OffInstanceCountHasBeenSet() const
{
    return m_offInstanceCountHasBeenSet;
}

string VmGroupOther::GetGroupStatus() const
{
    return m_groupStatus;
}

void VmGroupOther::SetGroupStatus(const string& _groupStatus)
{
    m_groupStatus = _groupStatus;
    m_groupStatusHasBeenSet = true;
}

bool VmGroupOther::GroupStatusHasBeenSet() const
{
    return m_groupStatusHasBeenSet;
}

bool VmGroupOther::GetIsNotEqualServiceConfig() const
{
    return m_isNotEqualServiceConfig;
}

void VmGroupOther::SetIsNotEqualServiceConfig(const bool& _isNotEqualServiceConfig)
{
    m_isNotEqualServiceConfig = _isNotEqualServiceConfig;
    m_isNotEqualServiceConfigHasBeenSet = true;
}

bool VmGroupOther::IsNotEqualServiceConfigHasBeenSet() const
{
    return m_isNotEqualServiceConfigHasBeenSet;
}

HealthCheckSettings VmGroupOther::GetHealthCheckSettings() const
{
    return m_healthCheckSettings;
}

void VmGroupOther::SetHealthCheckSettings(const HealthCheckSettings& _healthCheckSettings)
{
    m_healthCheckSettings = _healthCheckSettings;
    m_healthCheckSettingsHasBeenSet = true;
}

bool VmGroupOther::HealthCheckSettingsHasBeenSet() const
{
    return m_healthCheckSettingsHasBeenSet;
}

