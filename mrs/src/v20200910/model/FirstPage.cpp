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

#include <tencentcloud/mrs/v20200910/model/FirstPage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

FirstPage::FirstPage() :
    m_dischargeDiagnosisHasBeenSet(false),
    m_pathologicalDiagnosisHasBeenSet(false),
    m_clinicalDiagnosisHasBeenSet(false)
{
}

CoreInternalOutcome FirstPage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DischargeDiagnosis") && !value["DischargeDiagnosis"].IsNull())
    {
        if (!value["DischargeDiagnosis"].IsArray())
            return CoreInternalOutcome(Error("response `FirstPage.DischargeDiagnosis` is not array type"));

        const rapidjson::Value &tmpValue = value["DischargeDiagnosis"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DischargeDiagnosis item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dischargeDiagnosis.push_back(item);
        }
        m_dischargeDiagnosisHasBeenSet = true;
    }

    if (value.HasMember("PathologicalDiagnosis") && !value["PathologicalDiagnosis"].IsNull())
    {
        if (!value["PathologicalDiagnosis"].IsObject())
        {
            return CoreInternalOutcome(Error("response `FirstPage.PathologicalDiagnosis` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pathologicalDiagnosis.Deserialize(value["PathologicalDiagnosis"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pathologicalDiagnosisHasBeenSet = true;
    }

    if (value.HasMember("ClinicalDiagnosis") && !value["ClinicalDiagnosis"].IsNull())
    {
        if (!value["ClinicalDiagnosis"].IsObject())
        {
            return CoreInternalOutcome(Error("response `FirstPage.ClinicalDiagnosis` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clinicalDiagnosis.Deserialize(value["ClinicalDiagnosis"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clinicalDiagnosisHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FirstPage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dischargeDiagnosisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DischargeDiagnosis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dischargeDiagnosis.begin(); itr != m_dischargeDiagnosis.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pathologicalDiagnosisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathologicalDiagnosis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pathologicalDiagnosis.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clinicalDiagnosisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClinicalDiagnosis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clinicalDiagnosis.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<DischargeDiagnosis> FirstPage::GetDischargeDiagnosis() const
{
    return m_dischargeDiagnosis;
}

void FirstPage::SetDischargeDiagnosis(const vector<DischargeDiagnosis>& _dischargeDiagnosis)
{
    m_dischargeDiagnosis = _dischargeDiagnosis;
    m_dischargeDiagnosisHasBeenSet = true;
}

bool FirstPage::DischargeDiagnosisHasBeenSet() const
{
    return m_dischargeDiagnosisHasBeenSet;
}

BlockInfo FirstPage::GetPathologicalDiagnosis() const
{
    return m_pathologicalDiagnosis;
}

void FirstPage::SetPathologicalDiagnosis(const BlockInfo& _pathologicalDiagnosis)
{
    m_pathologicalDiagnosis = _pathologicalDiagnosis;
    m_pathologicalDiagnosisHasBeenSet = true;
}

bool FirstPage::PathologicalDiagnosisHasBeenSet() const
{
    return m_pathologicalDiagnosisHasBeenSet;
}

BlockInfo FirstPage::GetClinicalDiagnosis() const
{
    return m_clinicalDiagnosis;
}

void FirstPage::SetClinicalDiagnosis(const BlockInfo& _clinicalDiagnosis)
{
    m_clinicalDiagnosis = _clinicalDiagnosis;
    m_clinicalDiagnosisHasBeenSet = true;
}

bool FirstPage::ClinicalDiagnosisHasBeenSet() const
{
    return m_clinicalDiagnosisHasBeenSet;
}

