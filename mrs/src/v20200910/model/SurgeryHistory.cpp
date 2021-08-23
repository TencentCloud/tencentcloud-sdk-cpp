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

#include <tencentcloud/mrs/v20200910/model/SurgeryHistory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

SurgeryHistory::SurgeryHistory() :
    m_surgeryNameHasBeenSet(false),
    m_surgeryDateHasBeenSet(false),
    m_preoperativePathologyHasBeenSet(false),
    m_intraoperativePathologyHasBeenSet(false),
    m_postoperativePathologyHasBeenSet(false),
    m_dischargeDiagnosisHasBeenSet(false)
{
}

CoreInternalOutcome SurgeryHistory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SurgeryName") && !value["SurgeryName"].IsNull())
    {
        if (!value["SurgeryName"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SurgeryHistory.SurgeryName` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_surgeryName.Deserialize(value["SurgeryName"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_surgeryNameHasBeenSet = true;
    }

    if (value.HasMember("SurgeryDate") && !value["SurgeryDate"].IsNull())
    {
        if (!value["SurgeryDate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SurgeryHistory.SurgeryDate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_surgeryDate.Deserialize(value["SurgeryDate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_surgeryDateHasBeenSet = true;
    }

    if (value.HasMember("PreoperativePathology") && !value["PreoperativePathology"].IsNull())
    {
        if (!value["PreoperativePathology"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SurgeryHistory.PreoperativePathology` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_preoperativePathology.Deserialize(value["PreoperativePathology"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_preoperativePathologyHasBeenSet = true;
    }

    if (value.HasMember("IntraoperativePathology") && !value["IntraoperativePathology"].IsNull())
    {
        if (!value["IntraoperativePathology"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SurgeryHistory.IntraoperativePathology` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_intraoperativePathology.Deserialize(value["IntraoperativePathology"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_intraoperativePathologyHasBeenSet = true;
    }

    if (value.HasMember("PostoperativePathology") && !value["PostoperativePathology"].IsNull())
    {
        if (!value["PostoperativePathology"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SurgeryHistory.PostoperativePathology` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_postoperativePathology.Deserialize(value["PostoperativePathology"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_postoperativePathologyHasBeenSet = true;
    }

    if (value.HasMember("DischargeDiagnosis") && !value["DischargeDiagnosis"].IsNull())
    {
        if (!value["DischargeDiagnosis"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SurgeryHistory.DischargeDiagnosis` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dischargeDiagnosis.Deserialize(value["DischargeDiagnosis"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dischargeDiagnosisHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SurgeryHistory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_surgeryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SurgeryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_surgeryName.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_surgeryDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SurgeryDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_surgeryDate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_preoperativePathologyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreoperativePathology";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_preoperativePathology.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_intraoperativePathologyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntraoperativePathology";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_intraoperativePathology.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_postoperativePathologyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostoperativePathology";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_postoperativePathology.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dischargeDiagnosisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DischargeDiagnosis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dischargeDiagnosis.ToJsonObject(value[key.c_str()], allocator);
    }

}


SurgeryAttr SurgeryHistory::GetSurgeryName() const
{
    return m_surgeryName;
}

void SurgeryHistory::SetSurgeryName(const SurgeryAttr& _surgeryName)
{
    m_surgeryName = _surgeryName;
    m_surgeryNameHasBeenSet = true;
}

bool SurgeryHistory::SurgeryNameHasBeenSet() const
{
    return m_surgeryNameHasBeenSet;
}

SurgeryAttr SurgeryHistory::GetSurgeryDate() const
{
    return m_surgeryDate;
}

void SurgeryHistory::SetSurgeryDate(const SurgeryAttr& _surgeryDate)
{
    m_surgeryDate = _surgeryDate;
    m_surgeryDateHasBeenSet = true;
}

bool SurgeryHistory::SurgeryDateHasBeenSet() const
{
    return m_surgeryDateHasBeenSet;
}

SurgeryAttr SurgeryHistory::GetPreoperativePathology() const
{
    return m_preoperativePathology;
}

void SurgeryHistory::SetPreoperativePathology(const SurgeryAttr& _preoperativePathology)
{
    m_preoperativePathology = _preoperativePathology;
    m_preoperativePathologyHasBeenSet = true;
}

bool SurgeryHistory::PreoperativePathologyHasBeenSet() const
{
    return m_preoperativePathologyHasBeenSet;
}

SurgeryAttr SurgeryHistory::GetIntraoperativePathology() const
{
    return m_intraoperativePathology;
}

void SurgeryHistory::SetIntraoperativePathology(const SurgeryAttr& _intraoperativePathology)
{
    m_intraoperativePathology = _intraoperativePathology;
    m_intraoperativePathologyHasBeenSet = true;
}

bool SurgeryHistory::IntraoperativePathologyHasBeenSet() const
{
    return m_intraoperativePathologyHasBeenSet;
}

SurgeryAttr SurgeryHistory::GetPostoperativePathology() const
{
    return m_postoperativePathology;
}

void SurgeryHistory::SetPostoperativePathology(const SurgeryAttr& _postoperativePathology)
{
    m_postoperativePathology = _postoperativePathology;
    m_postoperativePathologyHasBeenSet = true;
}

bool SurgeryHistory::PostoperativePathologyHasBeenSet() const
{
    return m_postoperativePathologyHasBeenSet;
}

SurgeryAttr SurgeryHistory::GetDischargeDiagnosis() const
{
    return m_dischargeDiagnosis;
}

void SurgeryHistory::SetDischargeDiagnosis(const SurgeryAttr& _dischargeDiagnosis)
{
    m_dischargeDiagnosis = _dischargeDiagnosis;
    m_dischargeDiagnosisHasBeenSet = true;
}

bool SurgeryHistory::DischargeDiagnosisHasBeenSet() const
{
    return m_dischargeDiagnosisHasBeenSet;
}

