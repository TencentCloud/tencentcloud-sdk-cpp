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

#include <tencentcloud/ctsdb/v20230202/model/Filter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctsdb::V20230202::Model;
using namespace std;

Filter::Filter() :
    m_nameHasBeenSet(false),
    m_opHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

CoreInternalOutcome Filter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Filter.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Op") && !value["Op"].IsNull())
    {
        if (!value["Op"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Filter.Op` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_op = string(value["Op"].GetString());
        m_opHasBeenSet = true;
    }

    if (value.HasMember("Values") && !value["Values"].IsNull())
    {
        if (!value["Values"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Filter.Values` is not array type"));

        const rapidjson::Value &tmpValue = value["Values"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_values.push_back((*itr).GetString());
        }
        m_valuesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Filter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_opHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Op";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_op.c_str(), allocator).Move(), allocator);
    }

    if (m_valuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Values";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_values.begin(); itr != m_values.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string Filter::GetName() const
{
    return m_name;
}

void Filter::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Filter::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Filter::GetOp() const
{
    return m_op;
}

void Filter::SetOp(const string& _op)
{
    m_op = _op;
    m_opHasBeenSet = true;
}

bool Filter::OpHasBeenSet() const
{
    return m_opHasBeenSet;
}

vector<string> Filter::GetValues() const
{
    return m_values;
}

void Filter::SetValues(const vector<string>& _values)
{
    m_values = _values;
    m_valuesHasBeenSet = true;
}

bool Filter::ValuesHasBeenSet() const
{
    return m_valuesHasBeenSet;
}

