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

#include <tencentcloud/iecp/v20210914/model/NamespaceResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

NamespaceResource::NamespaceResource() :
    m_typeHasBeenSet(false),
    m_countHasBeenSet(false),
    m_namesHasBeenSet(false)
{
}

CoreInternalOutcome NamespaceResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceResource.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceResource.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("Names") && !value["Names"].IsNull())
    {
        if (!value["Names"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NamespaceResource.Names` is not array type"));

        const rapidjson::Value &tmpValue = value["Names"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_names.push_back((*itr).GetString());
        }
        m_namesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NamespaceResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_namesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Names";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_names.begin(); itr != m_names.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string NamespaceResource::GetType() const
{
    return m_type;
}

void NamespaceResource::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool NamespaceResource::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t NamespaceResource::GetCount() const
{
    return m_count;
}

void NamespaceResource::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool NamespaceResource::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

vector<string> NamespaceResource::GetNames() const
{
    return m_names;
}

void NamespaceResource::SetNames(const vector<string>& _names)
{
    m_names = _names;
    m_namesHasBeenSet = true;
}

bool NamespaceResource::NamesHasBeenSet() const
{
    return m_namesHasBeenSet;
}

