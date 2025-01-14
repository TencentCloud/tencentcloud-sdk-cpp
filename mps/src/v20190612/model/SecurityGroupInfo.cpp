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

#include <tencentcloud/mps/v20190612/model/SecurityGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SecurityGroupInfo::SecurityGroupInfo() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_whitelistHasBeenSet(false),
    m_occupiedInputsHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_occupiedOutputsHasBeenSet(false)
{
}

CoreInternalOutcome SecurityGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Whitelist") && !value["Whitelist"].IsNull())
    {
        if (!value["Whitelist"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecurityGroupInfo.Whitelist` is not array type"));

        const rapidjson::Value &tmpValue = value["Whitelist"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_whitelist.push_back((*itr).GetString());
        }
        m_whitelistHasBeenSet = true;
    }

    if (value.HasMember("OccupiedInputs") && !value["OccupiedInputs"].IsNull())
    {
        if (!value["OccupiedInputs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecurityGroupInfo.OccupiedInputs` is not array type"));

        const rapidjson::Value &tmpValue = value["OccupiedInputs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_occupiedInputs.push_back((*itr).GetString());
        }
        m_occupiedInputsHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("OccupiedOutputs") && !value["OccupiedOutputs"].IsNull())
    {
        if (!value["OccupiedOutputs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecurityGroupInfo.OccupiedOutputs` is not array type"));

        const rapidjson::Value &tmpValue = value["OccupiedOutputs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_occupiedOutputs.push_back((*itr).GetString());
        }
        m_occupiedOutputsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_whitelistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Whitelist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_whitelist.begin(); itr != m_whitelist.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_occupiedInputsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OccupiedInputs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_occupiedInputs.begin(); itr != m_occupiedInputs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_occupiedOutputsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OccupiedOutputs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_occupiedOutputs.begin(); itr != m_occupiedOutputs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string SecurityGroupInfo::GetId() const
{
    return m_id;
}

void SecurityGroupInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool SecurityGroupInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string SecurityGroupInfo::GetName() const
{
    return m_name;
}

void SecurityGroupInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SecurityGroupInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> SecurityGroupInfo::GetWhitelist() const
{
    return m_whitelist;
}

void SecurityGroupInfo::SetWhitelist(const vector<string>& _whitelist)
{
    m_whitelist = _whitelist;
    m_whitelistHasBeenSet = true;
}

bool SecurityGroupInfo::WhitelistHasBeenSet() const
{
    return m_whitelistHasBeenSet;
}

vector<string> SecurityGroupInfo::GetOccupiedInputs() const
{
    return m_occupiedInputs;
}

void SecurityGroupInfo::SetOccupiedInputs(const vector<string>& _occupiedInputs)
{
    m_occupiedInputs = _occupiedInputs;
    m_occupiedInputsHasBeenSet = true;
}

bool SecurityGroupInfo::OccupiedInputsHasBeenSet() const
{
    return m_occupiedInputsHasBeenSet;
}

string SecurityGroupInfo::GetRegion() const
{
    return m_region;
}

void SecurityGroupInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool SecurityGroupInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

vector<string> SecurityGroupInfo::GetOccupiedOutputs() const
{
    return m_occupiedOutputs;
}

void SecurityGroupInfo::SetOccupiedOutputs(const vector<string>& _occupiedOutputs)
{
    m_occupiedOutputs = _occupiedOutputs;
    m_occupiedOutputsHasBeenSet = true;
}

bool SecurityGroupInfo::OccupiedOutputsHasBeenSet() const
{
    return m_occupiedOutputsHasBeenSet;
}

