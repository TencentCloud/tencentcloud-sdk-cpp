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

#include <tencentcloud/mrs/v20200910/model/FieldInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

FieldInfo::FieldInfo() :
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_numsHasBeenSet(false),
    m_srcHasBeenSet(false)
{
}

CoreInternalOutcome FieldInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldInfo.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Nums") && !value["Nums"].IsNull())
    {
        if (!value["Nums"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FieldInfo.Nums` is not array type"));

        const rapidjson::Value &tmpValue = value["Nums"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NumValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nums.push_back(item);
        }
        m_numsHasBeenSet = true;
    }

    if (value.HasMember("Src") && !value["Src"].IsNull())
    {
        if (!value["Src"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldInfo.Src` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_src = string(value["Src"].GetString());
        m_srcHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FieldInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_numsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nums.begin(); itr != m_nums.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_srcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Src";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_src.c_str(), allocator).Move(), allocator);
    }

}


string FieldInfo::GetName() const
{
    return m_name;
}

void FieldInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool FieldInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string FieldInfo::GetValue() const
{
    return m_value;
}

void FieldInfo::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool FieldInfo::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

vector<NumValue> FieldInfo::GetNums() const
{
    return m_nums;
}

void FieldInfo::SetNums(const vector<NumValue>& _nums)
{
    m_nums = _nums;
    m_numsHasBeenSet = true;
}

bool FieldInfo::NumsHasBeenSet() const
{
    return m_numsHasBeenSet;
}

string FieldInfo::GetSrc() const
{
    return m_src;
}

void FieldInfo::SetSrc(const string& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool FieldInfo::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

