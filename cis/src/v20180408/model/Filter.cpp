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

#include <tencentcloud/cis/v20180408/model/Filter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cis::V20180408::Model;
using namespace std;

Filter::Filter() :
    m_nameHasBeenSet(false),
    m_valueListHasBeenSet(false)
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

    if (value.HasMember("ValueList") && !value["ValueList"].IsNull())
    {
        if (!value["ValueList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Filter.ValueList` is not array type"));

        const rapidjson::Value &tmpValue = value["ValueList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_valueList.push_back((*itr).GetString());
        }
        m_valueListHasBeenSet = true;
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

    if (m_valueListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_valueList.begin(); itr != m_valueList.end(); ++itr)
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

vector<string> Filter::GetValueList() const
{
    return m_valueList;
}

void Filter::SetValueList(const vector<string>& _valueList)
{
    m_valueList = _valueList;
    m_valueListHasBeenSet = true;
}

bool Filter::ValueListHasBeenSet() const
{
    return m_valueListHasBeenSet;
}

