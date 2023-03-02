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

#include <tencentcloud/mrs/v20200910/model/BlockInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

BlockInfo::BlockInfo() :
    m_indexHasBeenSet(false),
    m_positiveHasBeenSet(false),
    m_srcHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sizeHasBeenSet(false)
{
}

CoreInternalOutcome BlockInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BlockInfo.Index` is not array type"));

        const rapidjson::Value &tmpValue = value["Index"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_index.push_back((*itr).GetInt64());
        }
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("Positive") && !value["Positive"].IsNull())
    {
        if (!value["Positive"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockInfo.Positive` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_positive = string(value["Positive"].GetString());
        m_positiveHasBeenSet = true;
    }

    if (value.HasMember("Src") && !value["Src"].IsNull())
    {
        if (!value["Src"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockInfo.Src` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_src = string(value["Src"].GetString());
        m_srcHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockInfo.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BlockInfo.Size` is not array type"));

        const rapidjson::Value &tmpValue = value["Size"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Size item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_size.push_back(item);
        }
        m_sizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BlockInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_positiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Positive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_positive.c_str(), allocator).Move(), allocator);
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_size.begin(); itr != m_size.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<int64_t> BlockInfo::GetIndex() const
{
    return m_index;
}

void BlockInfo::SetIndex(const vector<int64_t>& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool BlockInfo::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string BlockInfo::GetPositive() const
{
    return m_positive;
}

void BlockInfo::SetPositive(const string& _positive)
{
    m_positive = _positive;
    m_positiveHasBeenSet = true;
}

bool BlockInfo::PositiveHasBeenSet() const
{
    return m_positiveHasBeenSet;
}

string BlockInfo::GetSrc() const
{
    return m_src;
}

void BlockInfo::SetSrc(const string& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool BlockInfo::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

string BlockInfo::GetValue() const
{
    return m_value;
}

void BlockInfo::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool BlockInfo::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string BlockInfo::GetType() const
{
    return m_type;
}

void BlockInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool BlockInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string BlockInfo::GetName() const
{
    return m_name;
}

void BlockInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BlockInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<Size> BlockInfo::GetSize() const
{
    return m_size;
}

void BlockInfo::SetSize(const vector<Size>& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool BlockInfo::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

