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

#include <tencentcloud/mrs/v20200910/model/GeneticHistoryBlock.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

GeneticHistoryBlock::GeneticHistoryBlock() :
    m_nameHasBeenSet(false),
    m_srcHasBeenSet(false),
    m_geneticListHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome GeneticHistoryBlock::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeneticHistoryBlock.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Src") && !value["Src"].IsNull())
    {
        if (!value["Src"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeneticHistoryBlock.Src` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_src = string(value["Src"].GetString());
        m_srcHasBeenSet = true;
    }

    if (value.HasMember("GeneticList") && !value["GeneticList"].IsNull())
    {
        if (!value["GeneticList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeneticHistoryBlock.GeneticList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_geneticList = string(value["GeneticList"].GetString());
        m_geneticListHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeneticHistoryBlock.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GeneticHistoryBlock::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_geneticListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GeneticList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_geneticList.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

}


string GeneticHistoryBlock::GetName() const
{
    return m_name;
}

void GeneticHistoryBlock::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool GeneticHistoryBlock::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string GeneticHistoryBlock::GetSrc() const
{
    return m_src;
}

void GeneticHistoryBlock::SetSrc(const string& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool GeneticHistoryBlock::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

string GeneticHistoryBlock::GetGeneticList() const
{
    return m_geneticList;
}

void GeneticHistoryBlock::SetGeneticList(const string& _geneticList)
{
    m_geneticList = _geneticList;
    m_geneticListHasBeenSet = true;
}

bool GeneticHistoryBlock::GeneticListHasBeenSet() const
{
    return m_geneticListHasBeenSet;
}

string GeneticHistoryBlock::GetValue() const
{
    return m_value;
}

void GeneticHistoryBlock::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool GeneticHistoryBlock::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

