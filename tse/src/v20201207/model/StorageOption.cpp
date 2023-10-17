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

#include <tencentcloud/tse/v20201207/model/StorageOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

StorageOption::StorageOption() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_capacityHasBeenSet(false)
{
}

CoreInternalOutcome StorageOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageOption.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageOption.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Capacity") && !value["Capacity"].IsNull())
    {
        if (!value["Capacity"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StorageOption.Capacity` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_capacity = value["Capacity"].GetUint64();
        m_capacityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StorageOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_capacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Capacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_capacity, allocator);
    }

}


string StorageOption::GetName() const
{
    return m_name;
}

void StorageOption::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool StorageOption::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string StorageOption::GetType() const
{
    return m_type;
}

void StorageOption::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool StorageOption::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t StorageOption::GetCapacity() const
{
    return m_capacity;
}

void StorageOption::SetCapacity(const uint64_t& _capacity)
{
    m_capacity = _capacity;
    m_capacityHasBeenSet = true;
}

bool StorageOption::CapacityHasBeenSet() const
{
    return m_capacityHasBeenSet;
}

