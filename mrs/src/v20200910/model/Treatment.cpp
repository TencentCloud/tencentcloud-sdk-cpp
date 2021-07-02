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

#include <tencentcloud/mrs/v20200910/model/Treatment.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

Treatment::Treatment() :
    m_chiefComplaintHasBeenSet(false),
    m_admissionDiagnosisHasBeenSet(false)
{
}

CoreInternalOutcome Treatment::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChiefComplaint") && !value["ChiefComplaint"].IsNull())
    {
        if (!value["ChiefComplaint"].IsString())
        {
            return CoreInternalOutcome(Error("response `Treatment.ChiefComplaint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chiefComplaint = string(value["ChiefComplaint"].GetString());
        m_chiefComplaintHasBeenSet = true;
    }

    if (value.HasMember("AdmissionDiagnosis") && !value["AdmissionDiagnosis"].IsNull())
    {
        if (!value["AdmissionDiagnosis"].IsString())
        {
            return CoreInternalOutcome(Error("response `Treatment.AdmissionDiagnosis` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_admissionDiagnosis = string(value["AdmissionDiagnosis"].GetString());
        m_admissionDiagnosisHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Treatment::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_chiefComplaintHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChiefComplaint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chiefComplaint.c_str(), allocator).Move(), allocator);
    }

    if (m_admissionDiagnosisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdmissionDiagnosis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_admissionDiagnosis.c_str(), allocator).Move(), allocator);
    }

}


string Treatment::GetChiefComplaint() const
{
    return m_chiefComplaint;
}

void Treatment::SetChiefComplaint(const string& _chiefComplaint)
{
    m_chiefComplaint = _chiefComplaint;
    m_chiefComplaintHasBeenSet = true;
}

bool Treatment::ChiefComplaintHasBeenSet() const
{
    return m_chiefComplaintHasBeenSet;
}

string Treatment::GetAdmissionDiagnosis() const
{
    return m_admissionDiagnosis;
}

void Treatment::SetAdmissionDiagnosis(const string& _admissionDiagnosis)
{
    m_admissionDiagnosis = _admissionDiagnosis;
    m_admissionDiagnosisHasBeenSet = true;
}

bool Treatment::AdmissionDiagnosisHasBeenSet() const
{
    return m_admissionDiagnosisHasBeenSet;
}

