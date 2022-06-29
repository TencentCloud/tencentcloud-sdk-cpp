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

#include <tencentcloud/teo/v20220106/model/TopNEntryValue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

TopNEntryValue::TopNEntryValue() :
    m_nameHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome TopNEntryValue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopNEntryValue.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopNEntryValue.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopNEntryValue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


string TopNEntryValue::GetName() const
{
    return m_name;
}

void TopNEntryValue::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TopNEntryValue::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t TopNEntryValue::GetCount() const
{
    return m_count;
}

void TopNEntryValue::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool TopNEntryValue::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

