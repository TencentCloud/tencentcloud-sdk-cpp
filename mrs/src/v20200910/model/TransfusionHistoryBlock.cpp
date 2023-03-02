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

#include <tencentcloud/mrs/v20200910/model/TransfusionHistoryBlock.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

TransfusionHistoryBlock::TransfusionHistoryBlock() :
    m_nameHasBeenSet(false),
    m_srcHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome TransfusionHistoryBlock::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransfusionHistoryBlock.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Src") && !value["Src"].IsNull())
    {
        if (!value["Src"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransfusionHistoryBlock.Src` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_src = string(value["Src"].GetString());
        m_srcHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TransfusionHistoryBlock.State` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetBool();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransfusionHistoryBlock.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TransfusionHistoryBlock::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

}


string TransfusionHistoryBlock::GetName() const
{
    return m_name;
}

void TransfusionHistoryBlock::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TransfusionHistoryBlock::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string TransfusionHistoryBlock::GetSrc() const
{
    return m_src;
}

void TransfusionHistoryBlock::SetSrc(const string& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool TransfusionHistoryBlock::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

bool TransfusionHistoryBlock::GetState() const
{
    return m_state;
}

void TransfusionHistoryBlock::SetState(const bool& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool TransfusionHistoryBlock::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string TransfusionHistoryBlock::GetValue() const
{
    return m_value;
}

void TransfusionHistoryBlock::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool TransfusionHistoryBlock::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

