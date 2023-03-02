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

#include <tencentcloud/mrs/v20200910/model/MainDiseaseHistoryBlock.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

MainDiseaseHistoryBlock::MainDiseaseHistoryBlock() :
    m_nameHasBeenSet(false),
    m_srcHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_neglistHasBeenSet(false),
    m_poslistHasBeenSet(false)
{
}

CoreInternalOutcome MainDiseaseHistoryBlock::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MainDiseaseHistoryBlock.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Src") && !value["Src"].IsNull())
    {
        if (!value["Src"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MainDiseaseHistoryBlock.Src` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_src = string(value["Src"].GetString());
        m_srcHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MainDiseaseHistoryBlock.State` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetBool();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MainDiseaseHistoryBlock.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Neglist") && !value["Neglist"].IsNull())
    {
        if (!value["Neglist"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MainDiseaseHistoryBlock.Neglist` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_neglist.Deserialize(value["Neglist"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_neglistHasBeenSet = true;
    }

    if (value.HasMember("Poslist") && !value["Poslist"].IsNull())
    {
        if (!value["Poslist"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MainDiseaseHistoryBlock.Poslist` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_poslist.Deserialize(value["Poslist"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_poslistHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MainDiseaseHistoryBlock::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_neglistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Neglist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_neglist.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_poslistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Poslist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_poslist.ToJsonObject(value[key.c_str()], allocator);
    }

}


string MainDiseaseHistoryBlock::GetName() const
{
    return m_name;
}

void MainDiseaseHistoryBlock::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool MainDiseaseHistoryBlock::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string MainDiseaseHistoryBlock::GetSrc() const
{
    return m_src;
}

void MainDiseaseHistoryBlock::SetSrc(const string& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool MainDiseaseHistoryBlock::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

bool MainDiseaseHistoryBlock::GetState() const
{
    return m_state;
}

void MainDiseaseHistoryBlock::SetState(const bool& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool MainDiseaseHistoryBlock::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string MainDiseaseHistoryBlock::GetValue() const
{
    return m_value;
}

void MainDiseaseHistoryBlock::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool MainDiseaseHistoryBlock::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

NeglistBlock MainDiseaseHistoryBlock::GetNeglist() const
{
    return m_neglist;
}

void MainDiseaseHistoryBlock::SetNeglist(const NeglistBlock& _neglist)
{
    m_neglist = _neglist;
    m_neglistHasBeenSet = true;
}

bool MainDiseaseHistoryBlock::NeglistHasBeenSet() const
{
    return m_neglistHasBeenSet;
}

PoslistBlock MainDiseaseHistoryBlock::GetPoslist() const
{
    return m_poslist;
}

void MainDiseaseHistoryBlock::SetPoslist(const PoslistBlock& _poslist)
{
    m_poslist = _poslist;
    m_poslistHasBeenSet = true;
}

bool MainDiseaseHistoryBlock::PoslistHasBeenSet() const
{
    return m_poslistHasBeenSet;
}

