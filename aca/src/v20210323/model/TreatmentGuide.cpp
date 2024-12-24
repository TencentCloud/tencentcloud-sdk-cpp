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

#include <tencentcloud/aca/v20210323/model/TreatmentGuide.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

TreatmentGuide::TreatmentGuide() :
    m_doctorDiagnosisHasBeenSet(false),
    m_diseaseNameHasBeenSet(false),
    m_treatDetailUrlHasBeenSet(false),
    m_treatPlanHasBeenSet(false),
    m_treatPrincipleHasBeenSet(false)
{
}

CoreInternalOutcome TreatmentGuide::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DoctorDiagnosis") && !value["DoctorDiagnosis"].IsNull())
    {
        if (!value["DoctorDiagnosis"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentGuide.DoctorDiagnosis` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_doctorDiagnosis = string(value["DoctorDiagnosis"].GetString());
        m_doctorDiagnosisHasBeenSet = true;
    }

    if (value.HasMember("DiseaseName") && !value["DiseaseName"].IsNull())
    {
        if (!value["DiseaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentGuide.DiseaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diseaseName = string(value["DiseaseName"].GetString());
        m_diseaseNameHasBeenSet = true;
    }

    if (value.HasMember("TreatDetailUrl") && !value["TreatDetailUrl"].IsNull())
    {
        if (!value["TreatDetailUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentGuide.TreatDetailUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_treatDetailUrl = string(value["TreatDetailUrl"].GetString());
        m_treatDetailUrlHasBeenSet = true;
    }

    if (value.HasMember("TreatPlan") && !value["TreatPlan"].IsNull())
    {
        if (!value["TreatPlan"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentGuide.TreatPlan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_treatPlan = string(value["TreatPlan"].GetString());
        m_treatPlanHasBeenSet = true;
    }

    if (value.HasMember("TreatPrinciple") && !value["TreatPrinciple"].IsNull())
    {
        if (!value["TreatPrinciple"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentGuide.TreatPrinciple` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_treatPrinciple = string(value["TreatPrinciple"].GetString());
        m_treatPrincipleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TreatmentGuide::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_doctorDiagnosisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DoctorDiagnosis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_doctorDiagnosis.c_str(), allocator).Move(), allocator);
    }

    if (m_diseaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiseaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diseaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_treatDetailUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TreatDetailUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_treatDetailUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_treatPlanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TreatPlan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_treatPlan.c_str(), allocator).Move(), allocator);
    }

    if (m_treatPrincipleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TreatPrinciple";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_treatPrinciple.c_str(), allocator).Move(), allocator);
    }

}


string TreatmentGuide::GetDoctorDiagnosis() const
{
    return m_doctorDiagnosis;
}

void TreatmentGuide::SetDoctorDiagnosis(const string& _doctorDiagnosis)
{
    m_doctorDiagnosis = _doctorDiagnosis;
    m_doctorDiagnosisHasBeenSet = true;
}

bool TreatmentGuide::DoctorDiagnosisHasBeenSet() const
{
    return m_doctorDiagnosisHasBeenSet;
}

string TreatmentGuide::GetDiseaseName() const
{
    return m_diseaseName;
}

void TreatmentGuide::SetDiseaseName(const string& _diseaseName)
{
    m_diseaseName = _diseaseName;
    m_diseaseNameHasBeenSet = true;
}

bool TreatmentGuide::DiseaseNameHasBeenSet() const
{
    return m_diseaseNameHasBeenSet;
}

string TreatmentGuide::GetTreatDetailUrl() const
{
    return m_treatDetailUrl;
}

void TreatmentGuide::SetTreatDetailUrl(const string& _treatDetailUrl)
{
    m_treatDetailUrl = _treatDetailUrl;
    m_treatDetailUrlHasBeenSet = true;
}

bool TreatmentGuide::TreatDetailUrlHasBeenSet() const
{
    return m_treatDetailUrlHasBeenSet;
}

string TreatmentGuide::GetTreatPlan() const
{
    return m_treatPlan;
}

void TreatmentGuide::SetTreatPlan(const string& _treatPlan)
{
    m_treatPlan = _treatPlan;
    m_treatPlanHasBeenSet = true;
}

bool TreatmentGuide::TreatPlanHasBeenSet() const
{
    return m_treatPlanHasBeenSet;
}

string TreatmentGuide::GetTreatPrinciple() const
{
    return m_treatPrinciple;
}

void TreatmentGuide::SetTreatPrinciple(const string& _treatPrinciple)
{
    m_treatPrinciple = _treatPrinciple;
    m_treatPrincipleHasBeenSet = true;
}

bool TreatmentGuide::TreatPrincipleHasBeenSet() const
{
    return m_treatPrincipleHasBeenSet;
}

