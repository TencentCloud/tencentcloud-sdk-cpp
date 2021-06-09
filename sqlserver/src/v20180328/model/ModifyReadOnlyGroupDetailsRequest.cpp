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

#include <tencentcloud/sqlserver/v20180328/model/ModifyReadOnlyGroupDetailsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

ModifyReadOnlyGroupDetailsRequest::ModifyReadOnlyGroupDetailsRequest() :
    m_instanceIdHasBeenSet(false),
    m_readOnlyGroupIdHasBeenSet(false),
    m_readOnlyGroupNameHasBeenSet(false),
    m_isOfflineDelayHasBeenSet(false),
    m_readOnlyMaxDelayTimeHasBeenSet(false),
    m_minReadOnlyInGroupHasBeenSet(false),
    m_weightPairsHasBeenSet(false),
    m_autoWeightHasBeenSet(false),
    m_balanceWeightHasBeenSet(false)
{
}

string ModifyReadOnlyGroupDetailsRequest::ToJsonString() const
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

    if (m_readOnlyGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_readOnlyGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_readOnlyGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_readOnlyGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_isOfflineDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOfflineDelay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isOfflineDelay, allocator);
    }

    if (m_readOnlyMaxDelayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyMaxDelayTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_readOnlyMaxDelayTime, allocator);
    }

    if (m_minReadOnlyInGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinReadOnlyInGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minReadOnlyInGroup, allocator);
    }

    if (m_weightPairsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeightPairs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_weightPairs.begin(); itr != m_weightPairs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_autoWeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoWeight";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoWeight, allocator);
    }

    if (m_balanceWeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BalanceWeight";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_balanceWeight, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyReadOnlyGroupDetailsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyReadOnlyGroupDetailsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyReadOnlyGroupDetailsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyReadOnlyGroupDetailsRequest::GetReadOnlyGroupId() const
{
    return m_readOnlyGroupId;
}

void ModifyReadOnlyGroupDetailsRequest::SetReadOnlyGroupId(const string& _readOnlyGroupId)
{
    m_readOnlyGroupId = _readOnlyGroupId;
    m_readOnlyGroupIdHasBeenSet = true;
}

bool ModifyReadOnlyGroupDetailsRequest::ReadOnlyGroupIdHasBeenSet() const
{
    return m_readOnlyGroupIdHasBeenSet;
}

string ModifyReadOnlyGroupDetailsRequest::GetReadOnlyGroupName() const
{
    return m_readOnlyGroupName;
}

void ModifyReadOnlyGroupDetailsRequest::SetReadOnlyGroupName(const string& _readOnlyGroupName)
{
    m_readOnlyGroupName = _readOnlyGroupName;
    m_readOnlyGroupNameHasBeenSet = true;
}

bool ModifyReadOnlyGroupDetailsRequest::ReadOnlyGroupNameHasBeenSet() const
{
    return m_readOnlyGroupNameHasBeenSet;
}

int64_t ModifyReadOnlyGroupDetailsRequest::GetIsOfflineDelay() const
{
    return m_isOfflineDelay;
}

void ModifyReadOnlyGroupDetailsRequest::SetIsOfflineDelay(const int64_t& _isOfflineDelay)
{
    m_isOfflineDelay = _isOfflineDelay;
    m_isOfflineDelayHasBeenSet = true;
}

bool ModifyReadOnlyGroupDetailsRequest::IsOfflineDelayHasBeenSet() const
{
    return m_isOfflineDelayHasBeenSet;
}

int64_t ModifyReadOnlyGroupDetailsRequest::GetReadOnlyMaxDelayTime() const
{
    return m_readOnlyMaxDelayTime;
}

void ModifyReadOnlyGroupDetailsRequest::SetReadOnlyMaxDelayTime(const int64_t& _readOnlyMaxDelayTime)
{
    m_readOnlyMaxDelayTime = _readOnlyMaxDelayTime;
    m_readOnlyMaxDelayTimeHasBeenSet = true;
}

bool ModifyReadOnlyGroupDetailsRequest::ReadOnlyMaxDelayTimeHasBeenSet() const
{
    return m_readOnlyMaxDelayTimeHasBeenSet;
}

int64_t ModifyReadOnlyGroupDetailsRequest::GetMinReadOnlyInGroup() const
{
    return m_minReadOnlyInGroup;
}

void ModifyReadOnlyGroupDetailsRequest::SetMinReadOnlyInGroup(const int64_t& _minReadOnlyInGroup)
{
    m_minReadOnlyInGroup = _minReadOnlyInGroup;
    m_minReadOnlyInGroupHasBeenSet = true;
}

bool ModifyReadOnlyGroupDetailsRequest::MinReadOnlyInGroupHasBeenSet() const
{
    return m_minReadOnlyInGroupHasBeenSet;
}

vector<ReadOnlyInstanceWeightPair> ModifyReadOnlyGroupDetailsRequest::GetWeightPairs() const
{
    return m_weightPairs;
}

void ModifyReadOnlyGroupDetailsRequest::SetWeightPairs(const vector<ReadOnlyInstanceWeightPair>& _weightPairs)
{
    m_weightPairs = _weightPairs;
    m_weightPairsHasBeenSet = true;
}

bool ModifyReadOnlyGroupDetailsRequest::WeightPairsHasBeenSet() const
{
    return m_weightPairsHasBeenSet;
}

int64_t ModifyReadOnlyGroupDetailsRequest::GetAutoWeight() const
{
    return m_autoWeight;
}

void ModifyReadOnlyGroupDetailsRequest::SetAutoWeight(const int64_t& _autoWeight)
{
    m_autoWeight = _autoWeight;
    m_autoWeightHasBeenSet = true;
}

bool ModifyReadOnlyGroupDetailsRequest::AutoWeightHasBeenSet() const
{
    return m_autoWeightHasBeenSet;
}

int64_t ModifyReadOnlyGroupDetailsRequest::GetBalanceWeight() const
{
    return m_balanceWeight;
}

void ModifyReadOnlyGroupDetailsRequest::SetBalanceWeight(const int64_t& _balanceWeight)
{
    m_balanceWeight = _balanceWeight;
    m_balanceWeightHasBeenSet = true;
}

bool ModifyReadOnlyGroupDetailsRequest::BalanceWeightHasBeenSet() const
{
    return m_balanceWeightHasBeenSet;
}


