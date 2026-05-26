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

#include <tencentcloud/tdmysql/v20211122/model/ExpandInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

ExpandInstanceRequest::ExpandInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_storageNodeNumHasBeenSet(false),
    m_zonesHasBeenSet(false),
    m_aZModeHasBeenSet(false),
    m_primaryAZHasBeenSet(false),
    m_fullReplicationsHasBeenSet(false)
{
}

string ExpandInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_storageNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageNodeNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storageNodeNum, allocator);
    }

    if (m_zonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zones";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_zones.begin(); itr != m_zones.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_aZModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AZMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_aZMode, allocator);
    }

    if (m_primaryAZHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrimaryAZ";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_primaryAZ.c_str(), allocator).Move(), allocator);
    }

    if (m_fullReplicationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullReplications";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fullReplications, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ExpandInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ExpandInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ExpandInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t ExpandInstanceRequest::GetStorageNodeNum() const
{
    return m_storageNodeNum;
}

void ExpandInstanceRequest::SetStorageNodeNum(const int64_t& _storageNodeNum)
{
    m_storageNodeNum = _storageNodeNum;
    m_storageNodeNumHasBeenSet = true;
}

bool ExpandInstanceRequest::StorageNodeNumHasBeenSet() const
{
    return m_storageNodeNumHasBeenSet;
}

vector<string> ExpandInstanceRequest::GetZones() const
{
    return m_zones;
}

void ExpandInstanceRequest::SetZones(const vector<string>& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool ExpandInstanceRequest::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

int64_t ExpandInstanceRequest::GetAZMode() const
{
    return m_aZMode;
}

void ExpandInstanceRequest::SetAZMode(const int64_t& _aZMode)
{
    m_aZMode = _aZMode;
    m_aZModeHasBeenSet = true;
}

bool ExpandInstanceRequest::AZModeHasBeenSet() const
{
    return m_aZModeHasBeenSet;
}

string ExpandInstanceRequest::GetPrimaryAZ() const
{
    return m_primaryAZ;
}

void ExpandInstanceRequest::SetPrimaryAZ(const string& _primaryAZ)
{
    m_primaryAZ = _primaryAZ;
    m_primaryAZHasBeenSet = true;
}

bool ExpandInstanceRequest::PrimaryAZHasBeenSet() const
{
    return m_primaryAZHasBeenSet;
}

int64_t ExpandInstanceRequest::GetFullReplications() const
{
    return m_fullReplications;
}

void ExpandInstanceRequest::SetFullReplications(const int64_t& _fullReplications)
{
    m_fullReplications = _fullReplications;
    m_fullReplicationsHasBeenSet = true;
}

bool ExpandInstanceRequest::FullReplicationsHasBeenSet() const
{
    return m_fullReplicationsHasBeenSet;
}


