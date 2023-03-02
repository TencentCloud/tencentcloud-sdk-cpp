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

#include <tencentcloud/mrs/v20200910/model/Size.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

Size::Size() :
    m_indexHasBeenSet(false),
    m_normSizeHasBeenSet(false),
    m_srcHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

CoreInternalOutcome Size::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Size.Index` is not array type"));

        const rapidjson::Value &tmpValue = value["Index"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_index.push_back((*itr).GetInt64());
        }
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("NormSize") && !value["NormSize"].IsNull())
    {
        if (!value["NormSize"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Size.NormSize` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_normSize.Deserialize(value["NormSize"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_normSizeHasBeenSet = true;
    }

    if (value.HasMember("Src") && !value["Src"].IsNull())
    {
        if (!value["Src"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Size.Src` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_src = string(value["Src"].GetString());
        m_srcHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Size.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Size.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Size::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_normSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NormSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_normSize.ToJsonObject(value[key.c_str()], allocator);
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

}


vector<int64_t> Size::GetIndex() const
{
    return m_index;
}

void Size::SetIndex(const vector<int64_t>& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool Size::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

NormSize Size::GetNormSize() const
{
    return m_normSize;
}

void Size::SetNormSize(const NormSize& _normSize)
{
    m_normSize = _normSize;
    m_normSizeHasBeenSet = true;
}

bool Size::NormSizeHasBeenSet() const
{
    return m_normSizeHasBeenSet;
}

string Size::GetSrc() const
{
    return m_src;
}

void Size::SetSrc(const string& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool Size::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

string Size::GetValue() const
{
    return m_value;
}

void Size::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool Size::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string Size::GetName() const
{
    return m_name;
}

void Size::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Size::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

