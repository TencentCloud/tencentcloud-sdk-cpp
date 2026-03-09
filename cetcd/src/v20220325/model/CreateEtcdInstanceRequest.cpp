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

#include <tencentcloud/cetcd/v20220325/model/CreateEtcdInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cetcd::V20220325::Model;
using namespace std;

CreateEtcdInstanceRequest::CreateEtcdInstanceRequest() :
    m_nameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_serviceSubnetIdHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_etcdVersionHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_advancedSettingsHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_chargePrepaidHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_deletionProtectionHasBeenSet(false)
{
}

string CreateEtcdInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceSubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subnetIds.begin(); itr != m_subnetIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_etcdVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EtcdVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_etcdVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_size, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_advancedSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_advancedSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_chargePrepaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_chargePrepaid.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_deletionProtectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeletionProtection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deletionProtection, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateEtcdInstanceRequest::GetName() const
{
    return m_name;
}

void CreateEtcdInstanceRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateEtcdInstanceRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateEtcdInstanceRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateEtcdInstanceRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateEtcdInstanceRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateEtcdInstanceRequest::GetServiceSubnetId() const
{
    return m_serviceSubnetId;
}

void CreateEtcdInstanceRequest::SetServiceSubnetId(const string& _serviceSubnetId)
{
    m_serviceSubnetId = _serviceSubnetId;
    m_serviceSubnetIdHasBeenSet = true;
}

bool CreateEtcdInstanceRequest::ServiceSubnetIdHasBeenSet() const
{
    return m_serviceSubnetIdHasBeenSet;
}

vector<string> CreateEtcdInstanceRequest::GetSubnetIds() const
{
    return m_subnetIds;
}

void CreateEtcdInstanceRequest::SetSubnetIds(const vector<string>& _subnetIds)
{
    m_subnetIds = _subnetIds;
    m_subnetIdsHasBeenSet = true;
}

bool CreateEtcdInstanceRequest::SubnetIdsHasBeenSet() const
{
    return m_subnetIdsHasBeenSet;
}

string CreateEtcdInstanceRequest::GetEtcdVersion() const
{
    return m_etcdVersion;
}

void CreateEtcdInstanceRequest::SetEtcdVersion(const string& _etcdVersion)
{
    m_etcdVersion = _etcdVersion;
    m_etcdVersionHasBeenSet = true;
}

bool CreateEtcdInstanceRequest::EtcdVersionHasBeenSet() const
{
    return m_etcdVersionHasBeenSet;
}

uint64_t CreateEtcdInstanceRequest::GetSize() const
{
    return m_size;
}

void CreateEtcdInstanceRequest::SetSize(const uint64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool CreateEtcdInstanceRequest::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string CreateEtcdInstanceRequest::GetDescription() const
{
    return m_description;
}

void CreateEtcdInstanceRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateEtcdInstanceRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

EtcdAdvancedSettings CreateEtcdInstanceRequest::GetAdvancedSettings() const
{
    return m_advancedSettings;
}

void CreateEtcdInstanceRequest::SetAdvancedSettings(const EtcdAdvancedSettings& _advancedSettings)
{
    m_advancedSettings = _advancedSettings;
    m_advancedSettingsHasBeenSet = true;
}

bool CreateEtcdInstanceRequest::AdvancedSettingsHasBeenSet() const
{
    return m_advancedSettingsHasBeenSet;
}

string CreateEtcdInstanceRequest::GetChargeType() const
{
    return m_chargeType;
}

void CreateEtcdInstanceRequest::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool CreateEtcdInstanceRequest::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

ChargePrepaidConfig CreateEtcdInstanceRequest::GetChargePrepaid() const
{
    return m_chargePrepaid;
}

void CreateEtcdInstanceRequest::SetChargePrepaid(const ChargePrepaidConfig& _chargePrepaid)
{
    m_chargePrepaid = _chargePrepaid;
    m_chargePrepaidHasBeenSet = true;
}

bool CreateEtcdInstanceRequest::ChargePrepaidHasBeenSet() const
{
    return m_chargePrepaidHasBeenSet;
}

uint64_t CreateEtcdInstanceRequest::GetDiskSize() const
{
    return m_diskSize;
}

void CreateEtcdInstanceRequest::SetDiskSize(const uint64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool CreateEtcdInstanceRequest::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

bool CreateEtcdInstanceRequest::GetDeletionProtection() const
{
    return m_deletionProtection;
}

void CreateEtcdInstanceRequest::SetDeletionProtection(const bool& _deletionProtection)
{
    m_deletionProtection = _deletionProtection;
    m_deletionProtectionHasBeenSet = true;
}

bool CreateEtcdInstanceRequest::DeletionProtectionHasBeenSet() const
{
    return m_deletionProtectionHasBeenSet;
}


