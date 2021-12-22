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

#include <tencentcloud/cdb/v20170320/model/ModifyRoGroupInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

ModifyRoGroupInfoRequest::ModifyRoGroupInfoRequest() :
    m_roGroupIdHasBeenSet(false),
    m_roGroupInfoHasBeenSet(false),
    m_roWeightValuesHasBeenSet(false),
    m_isBalanceRoLoadHasBeenSet(false),
    m_replicationDelayTimeHasBeenSet(false)
{
}

string ModifyRoGroupInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_roGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_roGroupInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoGroupInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_roGroupInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_roWeightValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoWeightValues";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_roWeightValues.begin(); itr != m_roWeightValues.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_isBalanceRoLoadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsBalanceRoLoad";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isBalanceRoLoad, allocator);
    }

    if (m_replicationDelayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicationDelayTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_replicationDelayTime, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyRoGroupInfoRequest::GetRoGroupId() const
{
    return m_roGroupId;
}

void ModifyRoGroupInfoRequest::SetRoGroupId(const string& _roGroupId)
{
    m_roGroupId = _roGroupId;
    m_roGroupIdHasBeenSet = true;
}

bool ModifyRoGroupInfoRequest::RoGroupIdHasBeenSet() const
{
    return m_roGroupIdHasBeenSet;
}

RoGroupAttr ModifyRoGroupInfoRequest::GetRoGroupInfo() const
{
    return m_roGroupInfo;
}

void ModifyRoGroupInfoRequest::SetRoGroupInfo(const RoGroupAttr& _roGroupInfo)
{
    m_roGroupInfo = _roGroupInfo;
    m_roGroupInfoHasBeenSet = true;
}

bool ModifyRoGroupInfoRequest::RoGroupInfoHasBeenSet() const
{
    return m_roGroupInfoHasBeenSet;
}

vector<RoWeightValue> ModifyRoGroupInfoRequest::GetRoWeightValues() const
{
    return m_roWeightValues;
}

void ModifyRoGroupInfoRequest::SetRoWeightValues(const vector<RoWeightValue>& _roWeightValues)
{
    m_roWeightValues = _roWeightValues;
    m_roWeightValuesHasBeenSet = true;
}

bool ModifyRoGroupInfoRequest::RoWeightValuesHasBeenSet() const
{
    return m_roWeightValuesHasBeenSet;
}

int64_t ModifyRoGroupInfoRequest::GetIsBalanceRoLoad() const
{
    return m_isBalanceRoLoad;
}

void ModifyRoGroupInfoRequest::SetIsBalanceRoLoad(const int64_t& _isBalanceRoLoad)
{
    m_isBalanceRoLoad = _isBalanceRoLoad;
    m_isBalanceRoLoadHasBeenSet = true;
}

bool ModifyRoGroupInfoRequest::IsBalanceRoLoadHasBeenSet() const
{
    return m_isBalanceRoLoadHasBeenSet;
}

int64_t ModifyRoGroupInfoRequest::GetReplicationDelayTime() const
{
    return m_replicationDelayTime;
}

void ModifyRoGroupInfoRequest::SetReplicationDelayTime(const int64_t& _replicationDelayTime)
{
    m_replicationDelayTime = _replicationDelayTime;
    m_replicationDelayTimeHasBeenSet = true;
}

bool ModifyRoGroupInfoRequest::ReplicationDelayTimeHasBeenSet() const
{
    return m_replicationDelayTimeHasBeenSet;
}


