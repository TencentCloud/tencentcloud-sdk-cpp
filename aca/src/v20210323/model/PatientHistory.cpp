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

#include <tencentcloud/aca/v20210323/model/PatientHistory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

PatientHistory::PatientHistory() :
    m_diseaseHistoryHasBeenSet(false),
    m_treatmentHistoryHasBeenSet(false)
{
}

CoreInternalOutcome PatientHistory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiseaseHistory") && !value["DiseaseHistory"].IsNull())
    {
        if (!value["DiseaseHistory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PatientHistory.DiseaseHistory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diseaseHistory = string(value["DiseaseHistory"].GetString());
        m_diseaseHistoryHasBeenSet = true;
    }

    if (value.HasMember("TreatmentHistory") && !value["TreatmentHistory"].IsNull())
    {
        if (!value["TreatmentHistory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PatientHistory.TreatmentHistory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_treatmentHistory = string(value["TreatmentHistory"].GetString());
        m_treatmentHistoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PatientHistory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_diseaseHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiseaseHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diseaseHistory.c_str(), allocator).Move(), allocator);
    }

    if (m_treatmentHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TreatmentHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_treatmentHistory.c_str(), allocator).Move(), allocator);
    }

}


string PatientHistory::GetDiseaseHistory() const
{
    return m_diseaseHistory;
}

void PatientHistory::SetDiseaseHistory(const string& _diseaseHistory)
{
    m_diseaseHistory = _diseaseHistory;
    m_diseaseHistoryHasBeenSet = true;
}

bool PatientHistory::DiseaseHistoryHasBeenSet() const
{
    return m_diseaseHistoryHasBeenSet;
}

string PatientHistory::GetTreatmentHistory() const
{
    return m_treatmentHistory;
}

void PatientHistory::SetTreatmentHistory(const string& _treatmentHistory)
{
    m_treatmentHistory = _treatmentHistory;
    m_treatmentHistoryHasBeenSet = true;
}

bool PatientHistory::TreatmentHistoryHasBeenSet() const
{
    return m_treatmentHistoryHasBeenSet;
}

