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

#include <tencentcloud/teo/v20220901/model/OriginGroupHealthStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

OriginGroupHealthStatus::OriginGroupHealthStatus() :
    m_originGroupIDHasBeenSet(false),
    m_originGroupNameHasBeenSet(false),
    m_originTypeHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_originHealthStatusHasBeenSet(false)
{
}

CoreInternalOutcome OriginGroupHealthStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OriginGroupID") && !value["OriginGroupID"].IsNull())
    {
        if (!value["OriginGroupID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginGroupHealthStatus.OriginGroupID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originGroupID = string(value["OriginGroupID"].GetString());
        m_originGroupIDHasBeenSet = true;
    }

    if (value.HasMember("OriginGroupName") && !value["OriginGroupName"].IsNull())
    {
        if (!value["OriginGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginGroupHealthStatus.OriginGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originGroupName = string(value["OriginGroupName"].GetString());
        m_originGroupNameHasBeenSet = true;
    }

    if (value.HasMember("OriginType") && !value["OriginType"].IsNull())
    {
        if (!value["OriginType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginGroupHealthStatus.OriginType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originType = string(value["OriginType"].GetString());
        m_originTypeHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginGroupHealthStatus.Priority` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_priority = string(value["Priority"].GetString());
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("OriginHealthStatus") && !value["OriginHealthStatus"].IsNull())
    {
        if (!value["OriginHealthStatus"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OriginGroupHealthStatus.OriginHealthStatus` is not array type"));

        const rapidjson::Value &tmpValue = value["OriginHealthStatus"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OriginHealthStatus item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_originHealthStatus.push_back(item);
        }
        m_originHealthStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OriginGroupHealthStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_originGroupIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginGroupID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originGroupID.c_str(), allocator).Move(), allocator);
    }

    if (m_originGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_originTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originType.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_priority.c_str(), allocator).Move(), allocator);
    }

    if (m_originHealthStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginHealthStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_originHealthStatus.begin(); itr != m_originHealthStatus.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string OriginGroupHealthStatus::GetOriginGroupID() const
{
    return m_originGroupID;
}

void OriginGroupHealthStatus::SetOriginGroupID(const string& _originGroupID)
{
    m_originGroupID = _originGroupID;
    m_originGroupIDHasBeenSet = true;
}

bool OriginGroupHealthStatus::OriginGroupIDHasBeenSet() const
{
    return m_originGroupIDHasBeenSet;
}

string OriginGroupHealthStatus::GetOriginGroupName() const
{
    return m_originGroupName;
}

void OriginGroupHealthStatus::SetOriginGroupName(const string& _originGroupName)
{
    m_originGroupName = _originGroupName;
    m_originGroupNameHasBeenSet = true;
}

bool OriginGroupHealthStatus::OriginGroupNameHasBeenSet() const
{
    return m_originGroupNameHasBeenSet;
}

string OriginGroupHealthStatus::GetOriginType() const
{
    return m_originType;
}

void OriginGroupHealthStatus::SetOriginType(const string& _originType)
{
    m_originType = _originType;
    m_originTypeHasBeenSet = true;
}

bool OriginGroupHealthStatus::OriginTypeHasBeenSet() const
{
    return m_originTypeHasBeenSet;
}

string OriginGroupHealthStatus::GetPriority() const
{
    return m_priority;
}

void OriginGroupHealthStatus::SetPriority(const string& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool OriginGroupHealthStatus::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

vector<OriginHealthStatus> OriginGroupHealthStatus::GetOriginHealthStatus() const
{
    return m_originHealthStatus;
}

void OriginGroupHealthStatus::SetOriginHealthStatus(const vector<OriginHealthStatus>& _originHealthStatus)
{
    m_originHealthStatus = _originHealthStatus;
    m_originHealthStatusHasBeenSet = true;
}

bool OriginGroupHealthStatus::OriginHealthStatusHasBeenSet() const
{
    return m_originHealthStatusHasBeenSet;
}

