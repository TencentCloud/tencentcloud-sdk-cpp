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

#include <tencentcloud/apis/v20240801/model/TargetServerGroupDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

TargetServerGroupDTO::TargetServerGroupDTO() :
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_targetHostsHasBeenSet(false),
    m_targetHostTypeHasBeenSet(false),
    m_serviceCountHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome TargetServerGroupDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetServerGroupDTO.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetServerGroupDTO.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("TargetHosts") && !value["TargetHosts"].IsNull())
    {
        if (!value["TargetHosts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TargetServerGroupDTO.TargetHosts` is not array type"));

        const rapidjson::Value &tmpValue = value["TargetHosts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TargetHostDTO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_targetHosts.push_back(item);
        }
        m_targetHostsHasBeenSet = true;
    }

    if (value.HasMember("TargetHostType") && !value["TargetHostType"].IsNull())
    {
        if (!value["TargetHostType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetServerGroupDTO.TargetHostType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetHostType = value["TargetHostType"].GetInt64();
        m_targetHostTypeHasBeenSet = true;
    }

    if (value.HasMember("ServiceCount") && !value["ServiceCount"].IsNull())
    {
        if (!value["ServiceCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetServerGroupDTO.ServiceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_serviceCount = value["ServiceCount"].GetUint64();
        m_serviceCountHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetServerGroupDTO.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TargetServerGroupDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_targetHostsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetHosts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_targetHosts.begin(); itr != m_targetHosts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_targetHostTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetHostType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetHostType, allocator);
    }

    if (m_serviceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serviceCount, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string TargetServerGroupDTO::GetID() const
{
    return m_iD;
}

void TargetServerGroupDTO::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool TargetServerGroupDTO::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string TargetServerGroupDTO::GetName() const
{
    return m_name;
}

void TargetServerGroupDTO::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TargetServerGroupDTO::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<TargetHostDTO> TargetServerGroupDTO::GetTargetHosts() const
{
    return m_targetHosts;
}

void TargetServerGroupDTO::SetTargetHosts(const vector<TargetHostDTO>& _targetHosts)
{
    m_targetHosts = _targetHosts;
    m_targetHostsHasBeenSet = true;
}

bool TargetServerGroupDTO::TargetHostsHasBeenSet() const
{
    return m_targetHostsHasBeenSet;
}

int64_t TargetServerGroupDTO::GetTargetHostType() const
{
    return m_targetHostType;
}

void TargetServerGroupDTO::SetTargetHostType(const int64_t& _targetHostType)
{
    m_targetHostType = _targetHostType;
    m_targetHostTypeHasBeenSet = true;
}

bool TargetServerGroupDTO::TargetHostTypeHasBeenSet() const
{
    return m_targetHostTypeHasBeenSet;
}

uint64_t TargetServerGroupDTO::GetServiceCount() const
{
    return m_serviceCount;
}

void TargetServerGroupDTO::SetServiceCount(const uint64_t& _serviceCount)
{
    m_serviceCount = _serviceCount;
    m_serviceCountHasBeenSet = true;
}

bool TargetServerGroupDTO::ServiceCountHasBeenSet() const
{
    return m_serviceCountHasBeenSet;
}

string TargetServerGroupDTO::GetCreateTime() const
{
    return m_createTime;
}

void TargetServerGroupDTO::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TargetServerGroupDTO::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

