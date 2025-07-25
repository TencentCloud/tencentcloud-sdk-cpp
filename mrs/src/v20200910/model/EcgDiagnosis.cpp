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

#include <tencentcloud/mrs/v20200910/model/EcgDiagnosis.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

EcgDiagnosis::EcgDiagnosis() :
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome EcgDiagnosis::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EcgDiagnosis.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EcgDiagnosis.Value` is not array type"));

        const rapidjson::Value &tmpValue = value["Value"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_value.push_back((*itr).GetString());
        }
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EcgDiagnosis::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_value.begin(); itr != m_value.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string EcgDiagnosis::GetName() const
{
    return m_name;
}

void EcgDiagnosis::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool EcgDiagnosis::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> EcgDiagnosis::GetValue() const
{
    return m_value;
}

void EcgDiagnosis::SetValue(const vector<string>& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool EcgDiagnosis::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

