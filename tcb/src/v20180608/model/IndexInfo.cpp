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

#include <tencentcloud/tcb/v20180608/model/IndexInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

IndexInfo::IndexInfo() :
    m_nameHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_keysHasBeenSet(false),
    m_accessesHasBeenSet(false),
    m_uniqueHasBeenSet(false)
{
}

CoreInternalOutcome IndexInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IndexInfo.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("Keys") && !value["Keys"].IsNull())
    {
        if (!value["Keys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IndexInfo.Keys` is not array type"));

        const rapidjson::Value &tmpValue = value["Keys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Indexkey item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_keys.push_back(item);
        }
        m_keysHasBeenSet = true;
    }

    if (value.HasMember("Accesses") && !value["Accesses"].IsNull())
    {
        if (!value["Accesses"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IndexInfo.Accesses` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_accesses.Deserialize(value["Accesses"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_accessesHasBeenSet = true;
    }

    if (value.HasMember("Unique") && !value["Unique"].IsNull())
    {
        if (!value["Unique"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IndexInfo.Unique` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_unique = value["Unique"].GetBool();
        m_uniqueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IndexInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_keysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_keys.begin(); itr != m_keys.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_accessesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Accesses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_accesses.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_uniqueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unique";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unique, allocator);
    }

}


string IndexInfo::GetName() const
{
    return m_name;
}

void IndexInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool IndexInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t IndexInfo::GetSize() const
{
    return m_size;
}

void IndexInfo::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool IndexInfo::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

vector<Indexkey> IndexInfo::GetKeys() const
{
    return m_keys;
}

void IndexInfo::SetKeys(const vector<Indexkey>& _keys)
{
    m_keys = _keys;
    m_keysHasBeenSet = true;
}

bool IndexInfo::KeysHasBeenSet() const
{
    return m_keysHasBeenSet;
}

IndexAccesses IndexInfo::GetAccesses() const
{
    return m_accesses;
}

void IndexInfo::SetAccesses(const IndexAccesses& _accesses)
{
    m_accesses = _accesses;
    m_accessesHasBeenSet = true;
}

bool IndexInfo::AccessesHasBeenSet() const
{
    return m_accessesHasBeenSet;
}

bool IndexInfo::GetUnique() const
{
    return m_unique;
}

void IndexInfo::SetUnique(const bool& _unique)
{
    m_unique = _unique;
    m_uniqueHasBeenSet = true;
}

bool IndexInfo::UniqueHasBeenSet() const
{
    return m_uniqueHasBeenSet;
}

