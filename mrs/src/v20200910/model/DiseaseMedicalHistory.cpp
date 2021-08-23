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

#include <tencentcloud/mrs/v20200910/model/DiseaseMedicalHistory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

DiseaseMedicalHistory::DiseaseMedicalHistory() :
    m_mainDiseaseHistoryHasBeenSet(false),
    m_allergyHistoryHasBeenSet(false),
    m_infectHistoryHasBeenSet(false),
    m_operationHistoryHasBeenSet(false),
    m_transfusionHistoryHasBeenSet(false)
{
}

CoreInternalOutcome DiseaseMedicalHistory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MainDiseaseHistory") && !value["MainDiseaseHistory"].IsNull())
    {
        if (!value["MainDiseaseHistory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiseaseMedicalHistory.MainDiseaseHistory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainDiseaseHistory = string(value["MainDiseaseHistory"].GetString());
        m_mainDiseaseHistoryHasBeenSet = true;
    }

    if (value.HasMember("AllergyHistory") && !value["AllergyHistory"].IsNull())
    {
        if (!value["AllergyHistory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiseaseMedicalHistory.AllergyHistory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_allergyHistory = string(value["AllergyHistory"].GetString());
        m_allergyHistoryHasBeenSet = true;
    }

    if (value.HasMember("InfectHistory") && !value["InfectHistory"].IsNull())
    {
        if (!value["InfectHistory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiseaseMedicalHistory.InfectHistory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_infectHistory = string(value["InfectHistory"].GetString());
        m_infectHistoryHasBeenSet = true;
    }

    if (value.HasMember("OperationHistory") && !value["OperationHistory"].IsNull())
    {
        if (!value["OperationHistory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiseaseMedicalHistory.OperationHistory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationHistory = string(value["OperationHistory"].GetString());
        m_operationHistoryHasBeenSet = true;
    }

    if (value.HasMember("TransfusionHistory") && !value["TransfusionHistory"].IsNull())
    {
        if (!value["TransfusionHistory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiseaseMedicalHistory.TransfusionHistory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transfusionHistory = string(value["TransfusionHistory"].GetString());
        m_transfusionHistoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiseaseMedicalHistory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mainDiseaseHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainDiseaseHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainDiseaseHistory.c_str(), allocator).Move(), allocator);
    }

    if (m_allergyHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllergyHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_allergyHistory.c_str(), allocator).Move(), allocator);
    }

    if (m_infectHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InfectHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_infectHistory.c_str(), allocator).Move(), allocator);
    }

    if (m_operationHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operationHistory.c_str(), allocator).Move(), allocator);
    }

    if (m_transfusionHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransfusionHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transfusionHistory.c_str(), allocator).Move(), allocator);
    }

}


string DiseaseMedicalHistory::GetMainDiseaseHistory() const
{
    return m_mainDiseaseHistory;
}

void DiseaseMedicalHistory::SetMainDiseaseHistory(const string& _mainDiseaseHistory)
{
    m_mainDiseaseHistory = _mainDiseaseHistory;
    m_mainDiseaseHistoryHasBeenSet = true;
}

bool DiseaseMedicalHistory::MainDiseaseHistoryHasBeenSet() const
{
    return m_mainDiseaseHistoryHasBeenSet;
}

string DiseaseMedicalHistory::GetAllergyHistory() const
{
    return m_allergyHistory;
}

void DiseaseMedicalHistory::SetAllergyHistory(const string& _allergyHistory)
{
    m_allergyHistory = _allergyHistory;
    m_allergyHistoryHasBeenSet = true;
}

bool DiseaseMedicalHistory::AllergyHistoryHasBeenSet() const
{
    return m_allergyHistoryHasBeenSet;
}

string DiseaseMedicalHistory::GetInfectHistory() const
{
    return m_infectHistory;
}

void DiseaseMedicalHistory::SetInfectHistory(const string& _infectHistory)
{
    m_infectHistory = _infectHistory;
    m_infectHistoryHasBeenSet = true;
}

bool DiseaseMedicalHistory::InfectHistoryHasBeenSet() const
{
    return m_infectHistoryHasBeenSet;
}

string DiseaseMedicalHistory::GetOperationHistory() const
{
    return m_operationHistory;
}

void DiseaseMedicalHistory::SetOperationHistory(const string& _operationHistory)
{
    m_operationHistory = _operationHistory;
    m_operationHistoryHasBeenSet = true;
}

bool DiseaseMedicalHistory::OperationHistoryHasBeenSet() const
{
    return m_operationHistoryHasBeenSet;
}

string DiseaseMedicalHistory::GetTransfusionHistory() const
{
    return m_transfusionHistory;
}

void DiseaseMedicalHistory::SetTransfusionHistory(const string& _transfusionHistory)
{
    m_transfusionHistory = _transfusionHistory;
    m_transfusionHistoryHasBeenSet = true;
}

bool DiseaseMedicalHistory::TransfusionHistoryHasBeenSet() const
{
    return m_transfusionHistoryHasBeenSet;
}

