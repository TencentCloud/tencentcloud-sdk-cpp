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

#include <tencentcloud/vpc/v20170312/model/HighPriorityRouteTable.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

HighPriorityRouteTable::HighPriorityRouteTable() :
    m_highPriorityRouteTableIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_subnetSetHasBeenSet(false),
    m_highPriorityRouteSetHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
}

CoreInternalOutcome HighPriorityRouteTable::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HighPriorityRouteTableId") && !value["HighPriorityRouteTableId"].IsNull())
    {
        if (!value["HighPriorityRouteTableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighPriorityRouteTable.HighPriorityRouteTableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_highPriorityRouteTableId = string(value["HighPriorityRouteTableId"].GetString());
        m_highPriorityRouteTableIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighPriorityRouteTable.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighPriorityRouteTable.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("SubnetSet") && !value["SubnetSet"].IsNull())
    {
        if (!value["SubnetSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HighPriorityRouteTable.SubnetSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SubnetSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subnetSet.push_back((*itr).GetString());
        }
        m_subnetSetHasBeenSet = true;
    }

    if (value.HasMember("HighPriorityRouteSet") && !value["HighPriorityRouteSet"].IsNull())
    {
        if (!value["HighPriorityRouteSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HighPriorityRouteTable.HighPriorityRouteSet` is not array type"));

        const rapidjson::Value &tmpValue = value["HighPriorityRouteSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HighPriorityRoute item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_highPriorityRouteSet.push_back(item);
        }
        m_highPriorityRouteSetHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighPriorityRouteTable.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HighPriorityRouteTable::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_highPriorityRouteTableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighPriorityRouteTableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_highPriorityRouteTableId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subnetSet.begin(); itr != m_subnetSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_highPriorityRouteSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighPriorityRouteSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_highPriorityRouteSet.begin(); itr != m_highPriorityRouteSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

}


string HighPriorityRouteTable::GetHighPriorityRouteTableId() const
{
    return m_highPriorityRouteTableId;
}

void HighPriorityRouteTable::SetHighPriorityRouteTableId(const string& _highPriorityRouteTableId)
{
    m_highPriorityRouteTableId = _highPriorityRouteTableId;
    m_highPriorityRouteTableIdHasBeenSet = true;
}

bool HighPriorityRouteTable::HighPriorityRouteTableIdHasBeenSet() const
{
    return m_highPriorityRouteTableIdHasBeenSet;
}

string HighPriorityRouteTable::GetVpcId() const
{
    return m_vpcId;
}

void HighPriorityRouteTable::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool HighPriorityRouteTable::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string HighPriorityRouteTable::GetName() const
{
    return m_name;
}

void HighPriorityRouteTable::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool HighPriorityRouteTable::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> HighPriorityRouteTable::GetSubnetSet() const
{
    return m_subnetSet;
}

void HighPriorityRouteTable::SetSubnetSet(const vector<string>& _subnetSet)
{
    m_subnetSet = _subnetSet;
    m_subnetSetHasBeenSet = true;
}

bool HighPriorityRouteTable::SubnetSetHasBeenSet() const
{
    return m_subnetSetHasBeenSet;
}

vector<HighPriorityRoute> HighPriorityRouteTable::GetHighPriorityRouteSet() const
{
    return m_highPriorityRouteSet;
}

void HighPriorityRouteTable::SetHighPriorityRouteSet(const vector<HighPriorityRoute>& _highPriorityRouteSet)
{
    m_highPriorityRouteSet = _highPriorityRouteSet;
    m_highPriorityRouteSetHasBeenSet = true;
}

bool HighPriorityRouteTable::HighPriorityRouteSetHasBeenSet() const
{
    return m_highPriorityRouteSetHasBeenSet;
}

string HighPriorityRouteTable::GetCreatedTime() const
{
    return m_createdTime;
}

void HighPriorityRouteTable::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool HighPriorityRouteTable::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

