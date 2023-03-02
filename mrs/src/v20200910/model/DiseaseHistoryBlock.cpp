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

#include <tencentcloud/mrs/v20200910/model/DiseaseHistoryBlock.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

DiseaseHistoryBlock::DiseaseHistoryBlock() :
    m_mainDiseaseHistoryHasBeenSet(false),
    m_allergyHistoryHasBeenSet(false),
    m_infectHistoryHasBeenSet(false),
    m_surgeryHistoryHasBeenSet(false),
    m_transfusionHistoryHasBeenSet(false)
{
}

CoreInternalOutcome DiseaseHistoryBlock::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MainDiseaseHistory") && !value["MainDiseaseHistory"].IsNull())
    {
        if (!value["MainDiseaseHistory"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DiseaseHistoryBlock.MainDiseaseHistory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mainDiseaseHistory.Deserialize(value["MainDiseaseHistory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mainDiseaseHistoryHasBeenSet = true;
    }

    if (value.HasMember("AllergyHistory") && !value["AllergyHistory"].IsNull())
    {
        if (!value["AllergyHistory"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DiseaseHistoryBlock.AllergyHistory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_allergyHistory.Deserialize(value["AllergyHistory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_allergyHistoryHasBeenSet = true;
    }

    if (value.HasMember("InfectHistory") && !value["InfectHistory"].IsNull())
    {
        if (!value["InfectHistory"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DiseaseHistoryBlock.InfectHistory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_infectHistory.Deserialize(value["InfectHistory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_infectHistoryHasBeenSet = true;
    }

    if (value.HasMember("SurgeryHistory") && !value["SurgeryHistory"].IsNull())
    {
        if (!value["SurgeryHistory"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DiseaseHistoryBlock.SurgeryHistory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_surgeryHistory.Deserialize(value["SurgeryHistory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_surgeryHistoryHasBeenSet = true;
    }

    if (value.HasMember("TransfusionHistory") && !value["TransfusionHistory"].IsNull())
    {
        if (!value["TransfusionHistory"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DiseaseHistoryBlock.TransfusionHistory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_transfusionHistory.Deserialize(value["TransfusionHistory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_transfusionHistoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiseaseHistoryBlock::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mainDiseaseHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainDiseaseHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mainDiseaseHistory.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_allergyHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllergyHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_allergyHistory.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_infectHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InfectHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_infectHistory.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_surgeryHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SurgeryHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_surgeryHistory.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_transfusionHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransfusionHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_transfusionHistory.ToJsonObject(value[key.c_str()], allocator);
    }

}


MainDiseaseHistoryBlock DiseaseHistoryBlock::GetMainDiseaseHistory() const
{
    return m_mainDiseaseHistory;
}

void DiseaseHistoryBlock::SetMainDiseaseHistory(const MainDiseaseHistoryBlock& _mainDiseaseHistory)
{
    m_mainDiseaseHistory = _mainDiseaseHistory;
    m_mainDiseaseHistoryHasBeenSet = true;
}

bool DiseaseHistoryBlock::MainDiseaseHistoryHasBeenSet() const
{
    return m_mainDiseaseHistoryHasBeenSet;
}

MainDiseaseHistoryBlock DiseaseHistoryBlock::GetAllergyHistory() const
{
    return m_allergyHistory;
}

void DiseaseHistoryBlock::SetAllergyHistory(const MainDiseaseHistoryBlock& _allergyHistory)
{
    m_allergyHistory = _allergyHistory;
    m_allergyHistoryHasBeenSet = true;
}

bool DiseaseHistoryBlock::AllergyHistoryHasBeenSet() const
{
    return m_allergyHistoryHasBeenSet;
}

MainDiseaseHistoryBlock DiseaseHistoryBlock::GetInfectHistory() const
{
    return m_infectHistory;
}

void DiseaseHistoryBlock::SetInfectHistory(const MainDiseaseHistoryBlock& _infectHistory)
{
    m_infectHistory = _infectHistory;
    m_infectHistoryHasBeenSet = true;
}

bool DiseaseHistoryBlock::InfectHistoryHasBeenSet() const
{
    return m_infectHistoryHasBeenSet;
}

SurgeryHistoryBlock DiseaseHistoryBlock::GetSurgeryHistory() const
{
    return m_surgeryHistory;
}

void DiseaseHistoryBlock::SetSurgeryHistory(const SurgeryHistoryBlock& _surgeryHistory)
{
    m_surgeryHistory = _surgeryHistory;
    m_surgeryHistoryHasBeenSet = true;
}

bool DiseaseHistoryBlock::SurgeryHistoryHasBeenSet() const
{
    return m_surgeryHistoryHasBeenSet;
}

TransfusionHistoryBlock DiseaseHistoryBlock::GetTransfusionHistory() const
{
    return m_transfusionHistory;
}

void DiseaseHistoryBlock::SetTransfusionHistory(const TransfusionHistoryBlock& _transfusionHistory)
{
    m_transfusionHistory = _transfusionHistory;
    m_transfusionHistoryHasBeenSet = true;
}

bool DiseaseHistoryBlock::TransfusionHistoryHasBeenSet() const
{
    return m_transfusionHistoryHasBeenSet;
}

