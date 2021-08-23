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

#include <tencentcloud/cds/v20180420/model/DbauditTypesInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cds::V20180420::Model;
using namespace std;

DbauditTypesInfo::DbauditTypesInfo() :
    m_instanceVersionNameHasBeenSet(false),
    m_instanceVersionKeyHasBeenSet(false),
    m_qpsHasBeenSet(false),
    m_maxInstancesHasBeenSet(false),
    m_insertSpeedHasBeenSet(false),
    m_onlineStorageCapacityHasBeenSet(false),
    m_archivingStorageCapacityHasBeenSet(false)
{
}

CoreInternalOutcome DbauditTypesInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceVersionName") && !value["InstanceVersionName"].IsNull())
    {
        if (!value["InstanceVersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbauditTypesInfo.InstanceVersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceVersionName = string(value["InstanceVersionName"].GetString());
        m_instanceVersionNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceVersionKey") && !value["InstanceVersionKey"].IsNull())
    {
        if (!value["InstanceVersionKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbauditTypesInfo.InstanceVersionKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceVersionKey = string(value["InstanceVersionKey"].GetString());
        m_instanceVersionKeyHasBeenSet = true;
    }

    if (value.HasMember("Qps") && !value["Qps"].IsNull())
    {
        if (!value["Qps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DbauditTypesInfo.Qps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_qps = value["Qps"].GetUint64();
        m_qpsHasBeenSet = true;
    }

    if (value.HasMember("MaxInstances") && !value["MaxInstances"].IsNull())
    {
        if (!value["MaxInstances"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DbauditTypesInfo.MaxInstances` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxInstances = value["MaxInstances"].GetUint64();
        m_maxInstancesHasBeenSet = true;
    }

    if (value.HasMember("InsertSpeed") && !value["InsertSpeed"].IsNull())
    {
        if (!value["InsertSpeed"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DbauditTypesInfo.InsertSpeed` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_insertSpeed = value["InsertSpeed"].GetUint64();
        m_insertSpeedHasBeenSet = true;
    }

    if (value.HasMember("OnlineStorageCapacity") && !value["OnlineStorageCapacity"].IsNull())
    {
        if (!value["OnlineStorageCapacity"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DbauditTypesInfo.OnlineStorageCapacity` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_onlineStorageCapacity = value["OnlineStorageCapacity"].GetUint64();
        m_onlineStorageCapacityHasBeenSet = true;
    }

    if (value.HasMember("ArchivingStorageCapacity") && !value["ArchivingStorageCapacity"].IsNull())
    {
        if (!value["ArchivingStorageCapacity"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DbauditTypesInfo.ArchivingStorageCapacity` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_archivingStorageCapacity = value["ArchivingStorageCapacity"].GetUint64();
        m_archivingStorageCapacityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DbauditTypesInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceVersionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceVersionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceVersionName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceVersionKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceVersionKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceVersionKey.c_str(), allocator).Move(), allocator);
    }

    if (m_qpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qps, allocator);
    }

    if (m_maxInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxInstances, allocator);
    }

    if (m_insertSpeedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsertSpeed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_insertSpeed, allocator);
    }

    if (m_onlineStorageCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlineStorageCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_onlineStorageCapacity, allocator);
    }

    if (m_archivingStorageCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArchivingStorageCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_archivingStorageCapacity, allocator);
    }

}


string DbauditTypesInfo::GetInstanceVersionName() const
{
    return m_instanceVersionName;
}

void DbauditTypesInfo::SetInstanceVersionName(const string& _instanceVersionName)
{
    m_instanceVersionName = _instanceVersionName;
    m_instanceVersionNameHasBeenSet = true;
}

bool DbauditTypesInfo::InstanceVersionNameHasBeenSet() const
{
    return m_instanceVersionNameHasBeenSet;
}

string DbauditTypesInfo::GetInstanceVersionKey() const
{
    return m_instanceVersionKey;
}

void DbauditTypesInfo::SetInstanceVersionKey(const string& _instanceVersionKey)
{
    m_instanceVersionKey = _instanceVersionKey;
    m_instanceVersionKeyHasBeenSet = true;
}

bool DbauditTypesInfo::InstanceVersionKeyHasBeenSet() const
{
    return m_instanceVersionKeyHasBeenSet;
}

uint64_t DbauditTypesInfo::GetQps() const
{
    return m_qps;
}

void DbauditTypesInfo::SetQps(const uint64_t& _qps)
{
    m_qps = _qps;
    m_qpsHasBeenSet = true;
}

bool DbauditTypesInfo::QpsHasBeenSet() const
{
    return m_qpsHasBeenSet;
}

uint64_t DbauditTypesInfo::GetMaxInstances() const
{
    return m_maxInstances;
}

void DbauditTypesInfo::SetMaxInstances(const uint64_t& _maxInstances)
{
    m_maxInstances = _maxInstances;
    m_maxInstancesHasBeenSet = true;
}

bool DbauditTypesInfo::MaxInstancesHasBeenSet() const
{
    return m_maxInstancesHasBeenSet;
}

uint64_t DbauditTypesInfo::GetInsertSpeed() const
{
    return m_insertSpeed;
}

void DbauditTypesInfo::SetInsertSpeed(const uint64_t& _insertSpeed)
{
    m_insertSpeed = _insertSpeed;
    m_insertSpeedHasBeenSet = true;
}

bool DbauditTypesInfo::InsertSpeedHasBeenSet() const
{
    return m_insertSpeedHasBeenSet;
}

uint64_t DbauditTypesInfo::GetOnlineStorageCapacity() const
{
    return m_onlineStorageCapacity;
}

void DbauditTypesInfo::SetOnlineStorageCapacity(const uint64_t& _onlineStorageCapacity)
{
    m_onlineStorageCapacity = _onlineStorageCapacity;
    m_onlineStorageCapacityHasBeenSet = true;
}

bool DbauditTypesInfo::OnlineStorageCapacityHasBeenSet() const
{
    return m_onlineStorageCapacityHasBeenSet;
}

uint64_t DbauditTypesInfo::GetArchivingStorageCapacity() const
{
    return m_archivingStorageCapacity;
}

void DbauditTypesInfo::SetArchivingStorageCapacity(const uint64_t& _archivingStorageCapacity)
{
    m_archivingStorageCapacity = _archivingStorageCapacity;
    m_archivingStorageCapacityHasBeenSet = true;
}

bool DbauditTypesInfo::ArchivingStorageCapacityHasBeenSet() const
{
    return m_archivingStorageCapacityHasBeenSet;
}

