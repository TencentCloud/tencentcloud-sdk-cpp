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

#include <tencentcloud/cvm/v20170312/model/ModifyInstancesDisasterRecoverGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

ModifyInstancesDisasterRecoverGroupRequest::ModifyInstancesDisasterRecoverGroupRequest() :
    m_instanceIdsHasBeenSet(false),
    m_disasterRecoverGroupIdHasBeenSet(false),
    m_forceHasBeenSet(false),
    m_disasterRecoverGroupIdsHasBeenSet(false),
    m_partitionNumberHasBeenSet(false)
{
}

string ModifyInstancesDisasterRecoverGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_disasterRecoverGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisasterRecoverGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_disasterRecoverGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_forceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Force";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_force, allocator);
    }

    if (m_disasterRecoverGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisasterRecoverGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_disasterRecoverGroupIds.begin(); itr != m_disasterRecoverGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_partitionNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_partitionNumber, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyInstancesDisasterRecoverGroupRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void ModifyInstancesDisasterRecoverGroupRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool ModifyInstancesDisasterRecoverGroupRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

string ModifyInstancesDisasterRecoverGroupRequest::GetDisasterRecoverGroupId() const
{
    return m_disasterRecoverGroupId;
}

void ModifyInstancesDisasterRecoverGroupRequest::SetDisasterRecoverGroupId(const string& _disasterRecoverGroupId)
{
    m_disasterRecoverGroupId = _disasterRecoverGroupId;
    m_disasterRecoverGroupIdHasBeenSet = true;
}

bool ModifyInstancesDisasterRecoverGroupRequest::DisasterRecoverGroupIdHasBeenSet() const
{
    return m_disasterRecoverGroupIdHasBeenSet;
}

bool ModifyInstancesDisasterRecoverGroupRequest::GetForce() const
{
    return m_force;
}

void ModifyInstancesDisasterRecoverGroupRequest::SetForce(const bool& _force)
{
    m_force = _force;
    m_forceHasBeenSet = true;
}

bool ModifyInstancesDisasterRecoverGroupRequest::ForceHasBeenSet() const
{
    return m_forceHasBeenSet;
}

vector<string> ModifyInstancesDisasterRecoverGroupRequest::GetDisasterRecoverGroupIds() const
{
    return m_disasterRecoverGroupIds;
}

void ModifyInstancesDisasterRecoverGroupRequest::SetDisasterRecoverGroupIds(const vector<string>& _disasterRecoverGroupIds)
{
    m_disasterRecoverGroupIds = _disasterRecoverGroupIds;
    m_disasterRecoverGroupIdsHasBeenSet = true;
}

bool ModifyInstancesDisasterRecoverGroupRequest::DisasterRecoverGroupIdsHasBeenSet() const
{
    return m_disasterRecoverGroupIdsHasBeenSet;
}

int64_t ModifyInstancesDisasterRecoverGroupRequest::GetPartitionNumber() const
{
    return m_partitionNumber;
}

void ModifyInstancesDisasterRecoverGroupRequest::SetPartitionNumber(const int64_t& _partitionNumber)
{
    m_partitionNumber = _partitionNumber;
    m_partitionNumberHasBeenSet = true;
}

bool ModifyInstancesDisasterRecoverGroupRequest::PartitionNumberHasBeenSet() const
{
    return m_partitionNumberHasBeenSet;
}


