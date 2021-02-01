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

#include <tencentcloud/tcb/v20180608/model/CloudBaseCapabilities.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace rapidjson;
using namespace std;

CloudBaseCapabilities::CloudBaseCapabilities() :
    m_addHasBeenSet(false),
    m_dropHasBeenSet(false)
{
}

CoreInternalOutcome CloudBaseCapabilities::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Add") && !value["Add"].IsNull())
    {
        if (!value["Add"].IsArray())
            return CoreInternalOutcome(Error("response `CloudBaseCapabilities.Add` is not array type"));

        const Value &tmpValue = value["Add"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_add.push_back((*itr).GetString());
        }
        m_addHasBeenSet = true;
    }

    if (value.HasMember("Drop") && !value["Drop"].IsNull())
    {
        if (!value["Drop"].IsArray())
            return CoreInternalOutcome(Error("response `CloudBaseCapabilities.Drop` is not array type"));

        const Value &tmpValue = value["Drop"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_drop.push_back((*itr).GetString());
        }
        m_dropHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudBaseCapabilities::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_addHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Add";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_add.begin(); itr != m_add.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dropHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Drop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_drop.begin(); itr != m_drop.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> CloudBaseCapabilities::GetAdd() const
{
    return m_add;
}

void CloudBaseCapabilities::SetAdd(const vector<string>& _add)
{
    m_add = _add;
    m_addHasBeenSet = true;
}

bool CloudBaseCapabilities::AddHasBeenSet() const
{
    return m_addHasBeenSet;
}

vector<string> CloudBaseCapabilities::GetDrop() const
{
    return m_drop;
}

void CloudBaseCapabilities::SetDrop(const vector<string>& _drop)
{
    m_drop = _drop;
    m_dropHasBeenSet = true;
}

bool CloudBaseCapabilities::DropHasBeenSet() const
{
    return m_dropHasBeenSet;
}

