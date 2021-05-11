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

#include <tencentcloud/nlp/v20190408/model/EntityRelationSubject.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Nlp::V20190408::Model;
using namespace rapidjson;
using namespace std;

EntityRelationSubject::EntityRelationSubject() :
    m_popularHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

CoreInternalOutcome EntityRelationSubject::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Popular") && !value["Popular"].IsNull())
    {
        if (!value["Popular"].IsArray())
            return CoreInternalOutcome(Error("response `EntityRelationSubject.Popular` is not array type"));

        const Value &tmpValue = value["Popular"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_popular.push_back((*itr).GetInt64());
        }
        m_popularHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsArray())
            return CoreInternalOutcome(Error("response `EntityRelationSubject.Id` is not array type"));

        const Value &tmpValue = value["Id"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_id.push_back((*itr).GetString());
        }
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsArray())
            return CoreInternalOutcome(Error("response `EntityRelationSubject.Name` is not array type"));

        const Value &tmpValue = value["Name"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_name.push_back((*itr).GetString());
        }
        m_nameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EntityRelationSubject::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_popularHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Popular";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_popular.begin(); itr != m_popular.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetInt64(*itr), allocator);
        }
    }

    if (m_idHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_id.begin(); itr != m_id.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_name.begin(); itr != m_name.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<int64_t> EntityRelationSubject::GetPopular() const
{
    return m_popular;
}

void EntityRelationSubject::SetPopular(const vector<int64_t>& _popular)
{
    m_popular = _popular;
    m_popularHasBeenSet = true;
}

bool EntityRelationSubject::PopularHasBeenSet() const
{
    return m_popularHasBeenSet;
}

vector<string> EntityRelationSubject::GetId() const
{
    return m_id;
}

void EntityRelationSubject::SetId(const vector<string>& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool EntityRelationSubject::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<string> EntityRelationSubject::GetName() const
{
    return m_name;
}

void EntityRelationSubject::SetName(const vector<string>& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool EntityRelationSubject::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

