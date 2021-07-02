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

#include <tencentcloud/mrs/v20200910/model/DiseaseHistory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

DiseaseHistory::DiseaseHistory() :
    m_allergyHasBeenSet(false),
    m_infectHasBeenSet(false),
    m_mainDiseaseHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_transfusionHasBeenSet(false),
    m_diseaseHasBeenSet(false)
{
}

CoreInternalOutcome DiseaseHistory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Allergy") && !value["Allergy"].IsNull())
    {
        if (!value["Allergy"].IsString())
        {
            return CoreInternalOutcome(Error("response `DiseaseHistory.Allergy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_allergy = string(value["Allergy"].GetString());
        m_allergyHasBeenSet = true;
    }

    if (value.HasMember("Infect") && !value["Infect"].IsNull())
    {
        if (!value["Infect"].IsString())
        {
            return CoreInternalOutcome(Error("response `DiseaseHistory.Infect` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_infect = string(value["Infect"].GetString());
        m_infectHasBeenSet = true;
    }

    if (value.HasMember("MainDisease") && !value["MainDisease"].IsNull())
    {
        if (!value["MainDisease"].IsString())
        {
            return CoreInternalOutcome(Error("response `DiseaseHistory.MainDisease` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainDisease = string(value["MainDisease"].GetString());
        m_mainDiseaseHasBeenSet = true;
    }

    if (value.HasMember("Operation") && !value["Operation"].IsNull())
    {
        if (!value["Operation"].IsString())
        {
            return CoreInternalOutcome(Error("response `DiseaseHistory.Operation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operation = string(value["Operation"].GetString());
        m_operationHasBeenSet = true;
    }

    if (value.HasMember("Transfusion") && !value["Transfusion"].IsNull())
    {
        if (!value["Transfusion"].IsString())
        {
            return CoreInternalOutcome(Error("response `DiseaseHistory.Transfusion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transfusion = string(value["Transfusion"].GetString());
        m_transfusionHasBeenSet = true;
    }

    if (value.HasMember("Disease") && !value["Disease"].IsNull())
    {
        if (!value["Disease"].IsString())
        {
            return CoreInternalOutcome(Error("response `DiseaseHistory.Disease` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_disease = string(value["Disease"].GetString());
        m_diseaseHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiseaseHistory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_allergyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Allergy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_allergy.c_str(), allocator).Move(), allocator);
    }

    if (m_infectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Infect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_infect.c_str(), allocator).Move(), allocator);
    }

    if (m_mainDiseaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainDisease";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainDisease.c_str(), allocator).Move(), allocator);
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_transfusionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Transfusion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transfusion.c_str(), allocator).Move(), allocator);
    }

    if (m_diseaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Disease";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_disease.c_str(), allocator).Move(), allocator);
    }

}


string DiseaseHistory::GetAllergy() const
{
    return m_allergy;
}

void DiseaseHistory::SetAllergy(const string& _allergy)
{
    m_allergy = _allergy;
    m_allergyHasBeenSet = true;
}

bool DiseaseHistory::AllergyHasBeenSet() const
{
    return m_allergyHasBeenSet;
}

string DiseaseHistory::GetInfect() const
{
    return m_infect;
}

void DiseaseHistory::SetInfect(const string& _infect)
{
    m_infect = _infect;
    m_infectHasBeenSet = true;
}

bool DiseaseHistory::InfectHasBeenSet() const
{
    return m_infectHasBeenSet;
}

string DiseaseHistory::GetMainDisease() const
{
    return m_mainDisease;
}

void DiseaseHistory::SetMainDisease(const string& _mainDisease)
{
    m_mainDisease = _mainDisease;
    m_mainDiseaseHasBeenSet = true;
}

bool DiseaseHistory::MainDiseaseHasBeenSet() const
{
    return m_mainDiseaseHasBeenSet;
}

string DiseaseHistory::GetOperation() const
{
    return m_operation;
}

void DiseaseHistory::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool DiseaseHistory::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string DiseaseHistory::GetTransfusion() const
{
    return m_transfusion;
}

void DiseaseHistory::SetTransfusion(const string& _transfusion)
{
    m_transfusion = _transfusion;
    m_transfusionHasBeenSet = true;
}

bool DiseaseHistory::TransfusionHasBeenSet() const
{
    return m_transfusionHasBeenSet;
}

string DiseaseHistory::GetDisease() const
{
    return m_disease;
}

void DiseaseHistory::SetDisease(const string& _disease)
{
    m_disease = _disease;
    m_diseaseHasBeenSet = true;
}

bool DiseaseHistory::DiseaseHasBeenSet() const
{
    return m_diseaseHasBeenSet;
}

