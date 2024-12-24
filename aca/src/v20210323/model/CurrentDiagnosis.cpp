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

#include <tencentcloud/aca/v20210323/model/CurrentDiagnosis.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

CurrentDiagnosis::CurrentDiagnosis() :
    m_diagnoseDiseaseHasBeenSet(false),
    m_diseaseGuideInfoHasBeenSet(false),
    m_standardNameHasBeenSet(false)
{
}

CoreInternalOutcome CurrentDiagnosis::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiagnoseDisease") && !value["DiagnoseDisease"].IsNull())
    {
        if (!value["DiagnoseDisease"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentDiagnosis.DiagnoseDisease` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diagnoseDisease = string(value["DiagnoseDisease"].GetString());
        m_diagnoseDiseaseHasBeenSet = true;
    }

    if (value.HasMember("DiseaseGuideInfo") && !value["DiseaseGuideInfo"].IsNull())
    {
        if (!value["DiseaseGuideInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentDiagnosis.DiseaseGuideInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diseaseGuideInfo = string(value["DiseaseGuideInfo"].GetString());
        m_diseaseGuideInfoHasBeenSet = true;
    }

    if (value.HasMember("StandardName") && !value["StandardName"].IsNull())
    {
        if (!value["StandardName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentDiagnosis.StandardName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_standardName = string(value["StandardName"].GetString());
        m_standardNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CurrentDiagnosis::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_diagnoseDiseaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiagnoseDisease";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diagnoseDisease.c_str(), allocator).Move(), allocator);
    }

    if (m_diseaseGuideInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiseaseGuideInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diseaseGuideInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_standardNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandardName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_standardName.c_str(), allocator).Move(), allocator);
    }

}


string CurrentDiagnosis::GetDiagnoseDisease() const
{
    return m_diagnoseDisease;
}

void CurrentDiagnosis::SetDiagnoseDisease(const string& _diagnoseDisease)
{
    m_diagnoseDisease = _diagnoseDisease;
    m_diagnoseDiseaseHasBeenSet = true;
}

bool CurrentDiagnosis::DiagnoseDiseaseHasBeenSet() const
{
    return m_diagnoseDiseaseHasBeenSet;
}

string CurrentDiagnosis::GetDiseaseGuideInfo() const
{
    return m_diseaseGuideInfo;
}

void CurrentDiagnosis::SetDiseaseGuideInfo(const string& _diseaseGuideInfo)
{
    m_diseaseGuideInfo = _diseaseGuideInfo;
    m_diseaseGuideInfoHasBeenSet = true;
}

bool CurrentDiagnosis::DiseaseGuideInfoHasBeenSet() const
{
    return m_diseaseGuideInfoHasBeenSet;
}

string CurrentDiagnosis::GetStandardName() const
{
    return m_standardName;
}

void CurrentDiagnosis::SetStandardName(const string& _standardName)
{
    m_standardName = _standardName;
    m_standardNameHasBeenSet = true;
}

bool CurrentDiagnosis::StandardNameHasBeenSet() const
{
    return m_standardNameHasBeenSet;
}

