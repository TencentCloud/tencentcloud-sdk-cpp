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

#include <tencentcloud/mrs/v20200910/model/SmokeHistoryBlock.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

SmokeHistoryBlock::SmokeHistoryBlock() :
    m_nameHasBeenSet(false),
    m_srcHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_timeNormHasBeenSet(false),
    m_amountHasBeenSet(false),
    m_quitStateHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome SmokeHistoryBlock::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmokeHistoryBlock.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Src") && !value["Src"].IsNull())
    {
        if (!value["Src"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmokeHistoryBlock.Src` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_src = string(value["Src"].GetString());
        m_srcHasBeenSet = true;
    }

    if (value.HasMember("TimeUnit") && !value["TimeUnit"].IsNull())
    {
        if (!value["TimeUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmokeHistoryBlock.TimeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeUnit = string(value["TimeUnit"].GetString());
        m_timeUnitHasBeenSet = true;
    }

    if (value.HasMember("TimeNorm") && !value["TimeNorm"].IsNull())
    {
        if (!value["TimeNorm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmokeHistoryBlock.TimeNorm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeNorm = string(value["TimeNorm"].GetString());
        m_timeNormHasBeenSet = true;
    }

    if (value.HasMember("Amount") && !value["Amount"].IsNull())
    {
        if (!value["Amount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmokeHistoryBlock.Amount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_amount = string(value["Amount"].GetString());
        m_amountHasBeenSet = true;
    }

    if (value.HasMember("QuitState") && !value["QuitState"].IsNull())
    {
        if (!value["QuitState"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SmokeHistoryBlock.QuitState` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_quitState = value["QuitState"].GetBool();
        m_quitStateHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SmokeHistoryBlock.State` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetBool();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmokeHistoryBlock.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmokeHistoryBlock::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_timeNormHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeNorm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeNorm.c_str(), allocator).Move(), allocator);
    }

    if (m_amountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Amount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_amount.c_str(), allocator).Move(), allocator);
    }

    if (m_quitStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuitState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quitState, allocator);
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


string SmokeHistoryBlock::GetName() const
{
    return m_name;
}

void SmokeHistoryBlock::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SmokeHistoryBlock::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SmokeHistoryBlock::GetSrc() const
{
    return m_src;
}

void SmokeHistoryBlock::SetSrc(const string& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool SmokeHistoryBlock::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

string SmokeHistoryBlock::GetTimeUnit() const
{
    return m_timeUnit;
}

void SmokeHistoryBlock::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool SmokeHistoryBlock::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

string SmokeHistoryBlock::GetTimeNorm() const
{
    return m_timeNorm;
}

void SmokeHistoryBlock::SetTimeNorm(const string& _timeNorm)
{
    m_timeNorm = _timeNorm;
    m_timeNormHasBeenSet = true;
}

bool SmokeHistoryBlock::TimeNormHasBeenSet() const
{
    return m_timeNormHasBeenSet;
}

string SmokeHistoryBlock::GetAmount() const
{
    return m_amount;
}

void SmokeHistoryBlock::SetAmount(const string& _amount)
{
    m_amount = _amount;
    m_amountHasBeenSet = true;
}

bool SmokeHistoryBlock::AmountHasBeenSet() const
{
    return m_amountHasBeenSet;
}

bool SmokeHistoryBlock::GetQuitState() const
{
    return m_quitState;
}

void SmokeHistoryBlock::SetQuitState(const bool& _quitState)
{
    m_quitState = _quitState;
    m_quitStateHasBeenSet = true;
}

bool SmokeHistoryBlock::QuitStateHasBeenSet() const
{
    return m_quitStateHasBeenSet;
}

bool SmokeHistoryBlock::GetState() const
{
    return m_state;
}

void SmokeHistoryBlock::SetState(const bool& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool SmokeHistoryBlock::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string SmokeHistoryBlock::GetValue() const
{
    return m_value;
}

void SmokeHistoryBlock::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool SmokeHistoryBlock::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

