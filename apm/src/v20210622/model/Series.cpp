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

#include <tencentcloud/apm/v20210622/model/Series.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

Series::Series() :
    m_dataHasBeenSet(false),
    m_stackHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

CoreInternalOutcome Series::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Data") && !value["Data"].IsNull())
    {
        if (!value["Data"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Series.Data` is not array type"));

        const rapidjson::Value &tmpValue = value["Data"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_data.push_back((*itr).GetInt64());
        }
        m_dataHasBeenSet = true;
    }

    if (value.HasMember("Stack") && !value["Stack"].IsNull())
    {
        if (!value["Stack"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Series.Stack` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stack = string(value["Stack"].GetString());
        m_stackHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Series.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Series::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_data.begin(); itr != m_data.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_stackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stack";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stack.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

}


vector<int64_t> Series::GetData() const
{
    return m_data;
}

void Series::SetData(const vector<int64_t>& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool Series::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

string Series::GetStack() const
{
    return m_stack;
}

void Series::SetStack(const string& _stack)
{
    m_stack = _stack;
    m_stackHasBeenSet = true;
}

bool Series::StackHasBeenSet() const
{
    return m_stackHasBeenSet;
}

string Series::GetName() const
{
    return m_name;
}

void Series::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Series::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

