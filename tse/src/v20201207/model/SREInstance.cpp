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

#include <tencentcloud/tse/v20201207/model/SREInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace rapidjson;
using namespace std;

SREInstance::SREInstance() :
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_editionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_specIdHasBeenSet(false),
    m_replicaHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_enableStorageHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_storageCapacityHasBeenSet(false),
    m_paymodeHasBeenSet(false)
{
}

CoreInternalOutcome SREInstance::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SREInstance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `SREInstance.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Edition") && !value["Edition"].IsNull())
    {
        if (!value["Edition"].IsString())
        {
            return CoreInternalOutcome(Error("response `SREInstance.Edition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_edition = string(value["Edition"].GetString());
        m_editionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `SREInstance.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SpecId") && !value["SpecId"].IsNull())
    {
        if (!value["SpecId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SREInstance.SpecId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specId = string(value["SpecId"].GetString());
        m_specIdHasBeenSet = true;
    }

    if (value.HasMember("Replica") && !value["Replica"].IsNull())
    {
        if (!value["Replica"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SREInstance.Replica` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replica = value["Replica"].GetInt64();
        m_replicaHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `SREInstance.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SREInstance.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetIds") && !value["SubnetIds"].IsNull())
    {
        if (!value["SubnetIds"].IsArray())
            return CoreInternalOutcome(Error("response `SREInstance.SubnetIds` is not array type"));

        const Value &tmpValue = value["SubnetIds"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subnetIds.push_back((*itr).GetString());
        }
        m_subnetIdsHasBeenSet = true;
    }

    if (value.HasMember("EnableStorage") && !value["EnableStorage"].IsNull())
    {
        if (!value["EnableStorage"].IsBool())
        {
            return CoreInternalOutcome(Error("response `SREInstance.EnableStorage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableStorage = value["EnableStorage"].GetBool();
        m_enableStorageHasBeenSet = true;
    }

    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsString())
        {
            return CoreInternalOutcome(Error("response `SREInstance.StorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = string(value["StorageType"].GetString());
        m_storageTypeHasBeenSet = true;
    }

    if (value.HasMember("StorageCapacity") && !value["StorageCapacity"].IsNull())
    {
        if (!value["StorageCapacity"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SREInstance.StorageCapacity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageCapacity = value["StorageCapacity"].GetInt64();
        m_storageCapacityHasBeenSet = true;
    }

    if (value.HasMember("Paymode") && !value["Paymode"].IsNull())
    {
        if (!value["Paymode"].IsString())
        {
            return CoreInternalOutcome(Error("response `SREInstance.Paymode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymode = string(value["Paymode"].GetString());
        m_paymodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SREInstance::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_editionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Edition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_edition.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_specIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SpecId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_specId.c_str(), allocator).Move(), allocator);
    }

    if (m_replicaHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Replica";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replica, allocator);
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_subnetIds.begin(); itr != m_subnetIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_enableStorageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnableStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableStorage, allocator);
    }

    if (m_storageTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_storageType.c_str(), allocator).Move(), allocator);
    }

    if (m_storageCapacityHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StorageCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageCapacity, allocator);
    }

    if (m_paymodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Paymode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_paymode.c_str(), allocator).Move(), allocator);
    }

}


string SREInstance::GetInstanceId() const
{
    return m_instanceId;
}

void SREInstance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool SREInstance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string SREInstance::GetName() const
{
    return m_name;
}

void SREInstance::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SREInstance::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SREInstance::GetEdition() const
{
    return m_edition;
}

void SREInstance::SetEdition(const string& _edition)
{
    m_edition = _edition;
    m_editionHasBeenSet = true;
}

bool SREInstance::EditionHasBeenSet() const
{
    return m_editionHasBeenSet;
}

string SREInstance::GetStatus() const
{
    return m_status;
}

void SREInstance::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SREInstance::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SREInstance::GetSpecId() const
{
    return m_specId;
}

void SREInstance::SetSpecId(const string& _specId)
{
    m_specId = _specId;
    m_specIdHasBeenSet = true;
}

bool SREInstance::SpecIdHasBeenSet() const
{
    return m_specIdHasBeenSet;
}

int64_t SREInstance::GetReplica() const
{
    return m_replica;
}

void SREInstance::SetReplica(const int64_t& _replica)
{
    m_replica = _replica;
    m_replicaHasBeenSet = true;
}

bool SREInstance::ReplicaHasBeenSet() const
{
    return m_replicaHasBeenSet;
}

string SREInstance::GetType() const
{
    return m_type;
}

void SREInstance::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SREInstance::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string SREInstance::GetVpcId() const
{
    return m_vpcId;
}

void SREInstance::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool SREInstance::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

vector<string> SREInstance::GetSubnetIds() const
{
    return m_subnetIds;
}

void SREInstance::SetSubnetIds(const vector<string>& _subnetIds)
{
    m_subnetIds = _subnetIds;
    m_subnetIdsHasBeenSet = true;
}

bool SREInstance::SubnetIdsHasBeenSet() const
{
    return m_subnetIdsHasBeenSet;
}

bool SREInstance::GetEnableStorage() const
{
    return m_enableStorage;
}

void SREInstance::SetEnableStorage(const bool& _enableStorage)
{
    m_enableStorage = _enableStorage;
    m_enableStorageHasBeenSet = true;
}

bool SREInstance::EnableStorageHasBeenSet() const
{
    return m_enableStorageHasBeenSet;
}

string SREInstance::GetStorageType() const
{
    return m_storageType;
}

void SREInstance::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool SREInstance::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

int64_t SREInstance::GetStorageCapacity() const
{
    return m_storageCapacity;
}

void SREInstance::SetStorageCapacity(const int64_t& _storageCapacity)
{
    m_storageCapacity = _storageCapacity;
    m_storageCapacityHasBeenSet = true;
}

bool SREInstance::StorageCapacityHasBeenSet() const
{
    return m_storageCapacityHasBeenSet;
}

string SREInstance::GetPaymode() const
{
    return m_paymode;
}

void SREInstance::SetPaymode(const string& _paymode)
{
    m_paymode = _paymode;
    m_paymodeHasBeenSet = true;
}

bool SREInstance::PaymodeHasBeenSet() const
{
    return m_paymodeHasBeenSet;
}

