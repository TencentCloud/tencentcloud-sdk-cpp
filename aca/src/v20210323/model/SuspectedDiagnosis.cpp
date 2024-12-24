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

#include <tencentcloud/aca/v20210323/model/SuspectedDiagnosis.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

SuspectedDiagnosis::SuspectedDiagnosis() :
    m_diseaseNameHasBeenSet(false),
    m_icdCodeHasBeenSet(false),
    m_symptomHasBeenSet(false),
    m_physiHasBeenSet(false),
    m_inspectionHasBeenSet(false),
    m_diseaseGuideInfoHasBeenSet(false),
    m_probabilityHasBeenSet(false)
{
}

CoreInternalOutcome SuspectedDiagnosis::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiseaseName") && !value["DiseaseName"].IsNull())
    {
        if (!value["DiseaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuspectedDiagnosis.DiseaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diseaseName = string(value["DiseaseName"].GetString());
        m_diseaseNameHasBeenSet = true;
    }

    if (value.HasMember("IcdCode") && !value["IcdCode"].IsNull())
    {
        if (!value["IcdCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuspectedDiagnosis.IcdCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_icdCode = string(value["IcdCode"].GetString());
        m_icdCodeHasBeenSet = true;
    }

    if (value.HasMember("Symptom") && !value["Symptom"].IsNull())
    {
        if (!value["Symptom"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuspectedDiagnosis.Symptom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_symptom = string(value["Symptom"].GetString());
        m_symptomHasBeenSet = true;
    }

    if (value.HasMember("Physi") && !value["Physi"].IsNull())
    {
        if (!value["Physi"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuspectedDiagnosis.Physi` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_physi = string(value["Physi"].GetString());
        m_physiHasBeenSet = true;
    }

    if (value.HasMember("Inspection") && !value["Inspection"].IsNull())
    {
        if (!value["Inspection"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuspectedDiagnosis.Inspection` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inspection = string(value["Inspection"].GetString());
        m_inspectionHasBeenSet = true;
    }

    if (value.HasMember("DiseaseGuideInfo") && !value["DiseaseGuideInfo"].IsNull())
    {
        if (!value["DiseaseGuideInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuspectedDiagnosis.DiseaseGuideInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diseaseGuideInfo = string(value["DiseaseGuideInfo"].GetString());
        m_diseaseGuideInfoHasBeenSet = true;
    }

    if (value.HasMember("Probability") && !value["Probability"].IsNull())
    {
        if (!value["Probability"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SuspectedDiagnosis.Probability` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_probability = value["Probability"].GetDouble();
        m_probabilityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SuspectedDiagnosis::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_diseaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiseaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diseaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_icdCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IcdCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_icdCode.c_str(), allocator).Move(), allocator);
    }

    if (m_symptomHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Symptom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_symptom.c_str(), allocator).Move(), allocator);
    }

    if (m_physiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Physi";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_physi.c_str(), allocator).Move(), allocator);
    }

    if (m_inspectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Inspection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inspection.c_str(), allocator).Move(), allocator);
    }

    if (m_diseaseGuideInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiseaseGuideInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diseaseGuideInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_probabilityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Probability";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_probability, allocator);
    }

}


string SuspectedDiagnosis::GetDiseaseName() const
{
    return m_diseaseName;
}

void SuspectedDiagnosis::SetDiseaseName(const string& _diseaseName)
{
    m_diseaseName = _diseaseName;
    m_diseaseNameHasBeenSet = true;
}

bool SuspectedDiagnosis::DiseaseNameHasBeenSet() const
{
    return m_diseaseNameHasBeenSet;
}

string SuspectedDiagnosis::GetIcdCode() const
{
    return m_icdCode;
}

void SuspectedDiagnosis::SetIcdCode(const string& _icdCode)
{
    m_icdCode = _icdCode;
    m_icdCodeHasBeenSet = true;
}

bool SuspectedDiagnosis::IcdCodeHasBeenSet() const
{
    return m_icdCodeHasBeenSet;
}

string SuspectedDiagnosis::GetSymptom() const
{
    return m_symptom;
}

void SuspectedDiagnosis::SetSymptom(const string& _symptom)
{
    m_symptom = _symptom;
    m_symptomHasBeenSet = true;
}

bool SuspectedDiagnosis::SymptomHasBeenSet() const
{
    return m_symptomHasBeenSet;
}

string SuspectedDiagnosis::GetPhysi() const
{
    return m_physi;
}

void SuspectedDiagnosis::SetPhysi(const string& _physi)
{
    m_physi = _physi;
    m_physiHasBeenSet = true;
}

bool SuspectedDiagnosis::PhysiHasBeenSet() const
{
    return m_physiHasBeenSet;
}

string SuspectedDiagnosis::GetInspection() const
{
    return m_inspection;
}

void SuspectedDiagnosis::SetInspection(const string& _inspection)
{
    m_inspection = _inspection;
    m_inspectionHasBeenSet = true;
}

bool SuspectedDiagnosis::InspectionHasBeenSet() const
{
    return m_inspectionHasBeenSet;
}

string SuspectedDiagnosis::GetDiseaseGuideInfo() const
{
    return m_diseaseGuideInfo;
}

void SuspectedDiagnosis::SetDiseaseGuideInfo(const string& _diseaseGuideInfo)
{
    m_diseaseGuideInfo = _diseaseGuideInfo;
    m_diseaseGuideInfoHasBeenSet = true;
}

bool SuspectedDiagnosis::DiseaseGuideInfoHasBeenSet() const
{
    return m_diseaseGuideInfoHasBeenSet;
}

double SuspectedDiagnosis::GetProbability() const
{
    return m_probability;
}

void SuspectedDiagnosis::SetProbability(const double& _probability)
{
    m_probability = _probability;
    m_probabilityHasBeenSet = true;
}

bool SuspectedDiagnosis::ProbabilityHasBeenSet() const
{
    return m_probabilityHasBeenSet;
}

