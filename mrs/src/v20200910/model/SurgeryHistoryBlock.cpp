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

#include <tencentcloud/mrs/v20200910/model/SurgeryHistoryBlock.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

SurgeryHistoryBlock::SurgeryHistoryBlock() :
    m_nameHasBeenSet(false),
    m_srcHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_surgerylistHasBeenSet(false)
{
}

CoreInternalOutcome SurgeryHistoryBlock::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SurgeryHistoryBlock.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Src") && !value["Src"].IsNull())
    {
        if (!value["Src"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SurgeryHistoryBlock.Src` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_src = string(value["Src"].GetString());
        m_srcHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SurgeryHistoryBlock.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Surgerylist") && !value["Surgerylist"].IsNull())
    {
        if (!value["Surgerylist"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SurgeryHistoryBlock.Surgerylist` is not array type"));

        const rapidjson::Value &tmpValue = value["Surgerylist"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SurgeryListBlock item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_surgerylist.push_back(item);
        }
        m_surgerylistHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SurgeryHistoryBlock::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_surgerylistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Surgerylist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_surgerylist.begin(); itr != m_surgerylist.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SurgeryHistoryBlock::GetName() const
{
    return m_name;
}

void SurgeryHistoryBlock::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SurgeryHistoryBlock::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SurgeryHistoryBlock::GetSrc() const
{
    return m_src;
}

void SurgeryHistoryBlock::SetSrc(const string& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool SurgeryHistoryBlock::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

string SurgeryHistoryBlock::GetValue() const
{
    return m_value;
}

void SurgeryHistoryBlock::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool SurgeryHistoryBlock::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

vector<SurgeryListBlock> SurgeryHistoryBlock::GetSurgerylist() const
{
    return m_surgerylist;
}

void SurgeryHistoryBlock::SetSurgerylist(const vector<SurgeryListBlock>& _surgerylist)
{
    m_surgerylist = _surgerylist;
    m_surgerylistHasBeenSet = true;
}

bool SurgeryHistoryBlock::SurgerylistHasBeenSet() const
{
    return m_surgerylistHasBeenSet;
}

