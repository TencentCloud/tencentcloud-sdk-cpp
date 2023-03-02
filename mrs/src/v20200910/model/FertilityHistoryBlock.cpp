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

#include <tencentcloud/mrs/v20200910/model/FertilityHistoryBlock.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

FertilityHistoryBlock::FertilityHistoryBlock() :
    m_nameHasBeenSet(false),
    m_srcHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_normHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_pregCountHasBeenSet(false),
    m_produCountHasBeenSet(false)
{
}

CoreInternalOutcome FertilityHistoryBlock::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FertilityHistoryBlock.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Src") && !value["Src"].IsNull())
    {
        if (!value["Src"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FertilityHistoryBlock.Src` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_src = string(value["Src"].GetString());
        m_srcHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FertilityHistoryBlock.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Norm") && !value["Norm"].IsNull())
    {
        if (!value["Norm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FertilityHistoryBlock.Norm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_norm = string(value["Norm"].GetString());
        m_normHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FertilityHistoryBlock.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("PregCount") && !value["PregCount"].IsNull())
    {
        if (!value["PregCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FertilityHistoryBlock.PregCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pregCount = string(value["PregCount"].GetString());
        m_pregCountHasBeenSet = true;
    }

    if (value.HasMember("ProduCount") && !value["ProduCount"].IsNull())
    {
        if (!value["ProduCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FertilityHistoryBlock.ProduCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_produCount = string(value["ProduCount"].GetString());
        m_produCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FertilityHistoryBlock::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_normHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Norm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_norm.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_pregCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PregCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pregCount.c_str(), allocator).Move(), allocator);
    }

    if (m_produCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProduCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_produCount.c_str(), allocator).Move(), allocator);
    }

}


string FertilityHistoryBlock::GetName() const
{
    return m_name;
}

void FertilityHistoryBlock::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool FertilityHistoryBlock::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string FertilityHistoryBlock::GetSrc() const
{
    return m_src;
}

void FertilityHistoryBlock::SetSrc(const string& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool FertilityHistoryBlock::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

string FertilityHistoryBlock::GetState() const
{
    return m_state;
}

void FertilityHistoryBlock::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool FertilityHistoryBlock::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string FertilityHistoryBlock::GetNorm() const
{
    return m_norm;
}

void FertilityHistoryBlock::SetNorm(const string& _norm)
{
    m_norm = _norm;
    m_normHasBeenSet = true;
}

bool FertilityHistoryBlock::NormHasBeenSet() const
{
    return m_normHasBeenSet;
}

string FertilityHistoryBlock::GetValue() const
{
    return m_value;
}

void FertilityHistoryBlock::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool FertilityHistoryBlock::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string FertilityHistoryBlock::GetPregCount() const
{
    return m_pregCount;
}

void FertilityHistoryBlock::SetPregCount(const string& _pregCount)
{
    m_pregCount = _pregCount;
    m_pregCountHasBeenSet = true;
}

bool FertilityHistoryBlock::PregCountHasBeenSet() const
{
    return m_pregCountHasBeenSet;
}

string FertilityHistoryBlock::GetProduCount() const
{
    return m_produCount;
}

void FertilityHistoryBlock::SetProduCount(const string& _produCount)
{
    m_produCount = _produCount;
    m_produCountHasBeenSet = true;
}

bool FertilityHistoryBlock::ProduCountHasBeenSet() const
{
    return m_produCountHasBeenSet;
}

