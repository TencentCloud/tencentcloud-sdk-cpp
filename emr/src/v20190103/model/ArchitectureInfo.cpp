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

#include <tencentcloud/emr/v20190103/model/ArchitectureInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ArchitectureInfo::ArchitectureInfo() :
    m_architectureHasBeenSet(false),
    m_architectureNameHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_instanceFamiliesHasBeenSet(false)
{
}

CoreInternalOutcome ArchitectureInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Architecture") && !value["Architecture"].IsNull())
    {
        if (!value["Architecture"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArchitectureInfo.Architecture` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_architecture = string(value["Architecture"].GetString());
        m_architectureHasBeenSet = true;
    }

    if (value.HasMember("ArchitectureName") && !value["ArchitectureName"].IsNull())
    {
        if (!value["ArchitectureName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArchitectureInfo.ArchitectureName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_architectureName = string(value["ArchitectureName"].GetString());
        m_architectureNameHasBeenSet = true;
    }

    if (value.HasMember("Order") && !value["Order"].IsNull())
    {
        if (!value["Order"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ArchitectureInfo.Order` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_order = value["Order"].GetInt64();
        m_orderHasBeenSet = true;
    }

    if (value.HasMember("InstanceFamilies") && !value["InstanceFamilies"].IsNull())
    {
        if (!value["InstanceFamilies"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ArchitectureInfo.InstanceFamilies` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceFamilies"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instanceFamilies.push_back((*itr).GetString());
        }
        m_instanceFamiliesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ArchitectureInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_architectureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Architecture";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_architecture.c_str(), allocator).Move(), allocator);
    }

    if (m_architectureNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArchitectureName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_architectureName.c_str(), allocator).Move(), allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_order, allocator);
    }

    if (m_instanceFamiliesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceFamilies";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceFamilies.begin(); itr != m_instanceFamilies.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ArchitectureInfo::GetArchitecture() const
{
    return m_architecture;
}

void ArchitectureInfo::SetArchitecture(const string& _architecture)
{
    m_architecture = _architecture;
    m_architectureHasBeenSet = true;
}

bool ArchitectureInfo::ArchitectureHasBeenSet() const
{
    return m_architectureHasBeenSet;
}

string ArchitectureInfo::GetArchitectureName() const
{
    return m_architectureName;
}

void ArchitectureInfo::SetArchitectureName(const string& _architectureName)
{
    m_architectureName = _architectureName;
    m_architectureNameHasBeenSet = true;
}

bool ArchitectureInfo::ArchitectureNameHasBeenSet() const
{
    return m_architectureNameHasBeenSet;
}

int64_t ArchitectureInfo::GetOrder() const
{
    return m_order;
}

void ArchitectureInfo::SetOrder(const int64_t& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool ArchitectureInfo::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

vector<string> ArchitectureInfo::GetInstanceFamilies() const
{
    return m_instanceFamilies;
}

void ArchitectureInfo::SetInstanceFamilies(const vector<string>& _instanceFamilies)
{
    m_instanceFamilies = _instanceFamilies;
    m_instanceFamiliesHasBeenSet = true;
}

bool ArchitectureInfo::InstanceFamiliesHasBeenSet() const
{
    return m_instanceFamiliesHasBeenSet;
}

