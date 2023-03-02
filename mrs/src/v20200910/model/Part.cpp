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

#include <tencentcloud/mrs/v20200910/model/Part.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

Part::Part() :
    m_indexHasBeenSet(false),
    m_normPartHasBeenSet(false),
    m_srcHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_valueBriefHasBeenSet(false)
{
}

CoreInternalOutcome Part::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Part.Index` is not array type"));

        const rapidjson::Value &tmpValue = value["Index"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_index.push_back((*itr).GetInt64());
        }
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("NormPart") && !value["NormPart"].IsNull())
    {
        if (!value["NormPart"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Part.NormPart` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_normPart.Deserialize(value["NormPart"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_normPartHasBeenSet = true;
    }

    if (value.HasMember("Src") && !value["Src"].IsNull())
    {
        if (!value["Src"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Part.Src` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_src = string(value["Src"].GetString());
        m_srcHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Part.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Part.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ValueBrief") && !value["ValueBrief"].IsNull())
    {
        if (!value["ValueBrief"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Part.ValueBrief` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_valueBrief = string(value["ValueBrief"].GetString());
        m_valueBriefHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Part::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_index.begin(); itr != m_index.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_normPartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NormPart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_normPart.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_srcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Src";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_src.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_valueBriefHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueBrief";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_valueBrief.c_str(), allocator).Move(), allocator);
    }

}


vector<int64_t> Part::GetIndex() const
{
    return m_index;
}

void Part::SetIndex(const vector<int64_t>& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool Part::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

NormPart Part::GetNormPart() const
{
    return m_normPart;
}

void Part::SetNormPart(const NormPart& _normPart)
{
    m_normPart = _normPart;
    m_normPartHasBeenSet = true;
}

bool Part::NormPartHasBeenSet() const
{
    return m_normPartHasBeenSet;
}

string Part::GetSrc() const
{
    return m_src;
}

void Part::SetSrc(const string& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool Part::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

string Part::GetValue() const
{
    return m_value;
}

void Part::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool Part::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string Part::GetName() const
{
    return m_name;
}

void Part::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Part::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Part::GetValueBrief() const
{
    return m_valueBrief;
}

void Part::SetValueBrief(const string& _valueBrief)
{
    m_valueBrief = _valueBrief;
    m_valueBriefHasBeenSet = true;
}

bool Part::ValueBriefHasBeenSet() const
{
    return m_valueBriefHasBeenSet;
}

