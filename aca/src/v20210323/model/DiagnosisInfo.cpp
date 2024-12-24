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

#include <tencentcloud/aca/v20210323/model/DiagnosisInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

DiagnosisInfo::DiagnosisInfo() :
    m_intentTypeHasBeenSet(false),
    m_riskInfoHasBeenSet(false),
    m_suspectedDiagnosisHasBeenSet(false),
    m_referralInfoHasBeenSet(false),
    m_criticalInfoHasBeenSet(false),
    m_vitalSignsInfoHasBeenSet(false),
    m_differDiagnosisHasBeenSet(false),
    m_recordQualityHasBeenSet(false),
    m_currentDiagnosisHasBeenSet(false),
    m_treatmentGuideHasBeenSet(false),
    m_emrQualityHasBeenSet(false),
    m_healthPrescriptionsHasBeenSet(false)
{
}

CoreInternalOutcome DiagnosisInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IntentType") && !value["IntentType"].IsNull())
    {
        if (!value["IntentType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DiagnosisInfo.IntentType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_intentType = value["IntentType"].GetInt64();
        m_intentTypeHasBeenSet = true;
    }

    if (value.HasMember("RiskInfo") && !value["RiskInfo"].IsNull())
    {
        if (!value["RiskInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiagnosisInfo.RiskInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskInfo = string(value["RiskInfo"].GetString());
        m_riskInfoHasBeenSet = true;
    }

    if (value.HasMember("SuspectedDiagnosis") && !value["SuspectedDiagnosis"].IsNull())
    {
        if (!value["SuspectedDiagnosis"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiagnosisInfo.SuspectedDiagnosis` is not array type"));

        const rapidjson::Value &tmpValue = value["SuspectedDiagnosis"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SuspectedDiagnosis item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_suspectedDiagnosis.push_back(item);
        }
        m_suspectedDiagnosisHasBeenSet = true;
    }

    if (value.HasMember("ReferralInfo") && !value["ReferralInfo"].IsNull())
    {
        if (!value["ReferralInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DiagnosisInfo.ReferralInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_referralInfo.Deserialize(value["ReferralInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_referralInfoHasBeenSet = true;
    }

    if (value.HasMember("CriticalInfo") && !value["CriticalInfo"].IsNull())
    {
        if (!value["CriticalInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiagnosisInfo.CriticalInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["CriticalInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CriticalInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_criticalInfo.push_back(item);
        }
        m_criticalInfoHasBeenSet = true;
    }

    if (value.HasMember("VitalSignsInfo") && !value["VitalSignsInfo"].IsNull())
    {
        if (!value["VitalSignsInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DiagnosisInfo.VitalSignsInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vitalSignsInfo.Deserialize(value["VitalSignsInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vitalSignsInfoHasBeenSet = true;
    }

    if (value.HasMember("DifferDiagnosis") && !value["DifferDiagnosis"].IsNull())
    {
        if (!value["DifferDiagnosis"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiagnosisInfo.DifferDiagnosis` is not array type"));

        const rapidjson::Value &tmpValue = value["DifferDiagnosis"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DifferDiagnosis item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_differDiagnosis.push_back(item);
        }
        m_differDiagnosisHasBeenSet = true;
    }

    if (value.HasMember("RecordQuality") && !value["RecordQuality"].IsNull())
    {
        if (!value["RecordQuality"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DiagnosisInfo.RecordQuality` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_recordQuality.Deserialize(value["RecordQuality"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_recordQualityHasBeenSet = true;
    }

    if (value.HasMember("CurrentDiagnosis") && !value["CurrentDiagnosis"].IsNull())
    {
        if (!value["CurrentDiagnosis"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiagnosisInfo.CurrentDiagnosis` is not array type"));

        const rapidjson::Value &tmpValue = value["CurrentDiagnosis"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CurrentDiagnosis item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_currentDiagnosis.push_back(item);
        }
        m_currentDiagnosisHasBeenSet = true;
    }

    if (value.HasMember("TreatmentGuide") && !value["TreatmentGuide"].IsNull())
    {
        if (!value["TreatmentGuide"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiagnosisInfo.TreatmentGuide` is not array type"));

        const rapidjson::Value &tmpValue = value["TreatmentGuide"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TreatmentGuide item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_treatmentGuide.push_back(item);
        }
        m_treatmentGuideHasBeenSet = true;
    }

    if (value.HasMember("EmrQuality") && !value["EmrQuality"].IsNull())
    {
        if (!value["EmrQuality"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DiagnosisInfo.EmrQuality` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_emrQuality.Deserialize(value["EmrQuality"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_emrQualityHasBeenSet = true;
    }

    if (value.HasMember("HealthPrescriptions") && !value["HealthPrescriptions"].IsNull())
    {
        if (!value["HealthPrescriptions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiagnosisInfo.HealthPrescriptions` is not array type"));

        const rapidjson::Value &tmpValue = value["HealthPrescriptions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HealthPrescriptions item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_healthPrescriptions.push_back(item);
        }
        m_healthPrescriptionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiagnosisInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_intentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intentType, allocator);
    }

    if (m_riskInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_suspectedDiagnosisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuspectedDiagnosis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_suspectedDiagnosis.begin(); itr != m_suspectedDiagnosis.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_referralInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferralInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_referralInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_criticalInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CriticalInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_criticalInfo.begin(); itr != m_criticalInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_vitalSignsInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VitalSignsInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vitalSignsInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_differDiagnosisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DifferDiagnosis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_differDiagnosis.begin(); itr != m_differDiagnosis.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_recordQualityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordQuality";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_recordQuality.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_currentDiagnosisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentDiagnosis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_currentDiagnosis.begin(); itr != m_currentDiagnosis.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_treatmentGuideHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TreatmentGuide";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_treatmentGuide.begin(); itr != m_treatmentGuide.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_emrQualityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmrQuality";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_emrQuality.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_healthPrescriptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthPrescriptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_healthPrescriptions.begin(); itr != m_healthPrescriptions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t DiagnosisInfo::GetIntentType() const
{
    return m_intentType;
}

void DiagnosisInfo::SetIntentType(const int64_t& _intentType)
{
    m_intentType = _intentType;
    m_intentTypeHasBeenSet = true;
}

bool DiagnosisInfo::IntentTypeHasBeenSet() const
{
    return m_intentTypeHasBeenSet;
}

string DiagnosisInfo::GetRiskInfo() const
{
    return m_riskInfo;
}

void DiagnosisInfo::SetRiskInfo(const string& _riskInfo)
{
    m_riskInfo = _riskInfo;
    m_riskInfoHasBeenSet = true;
}

bool DiagnosisInfo::RiskInfoHasBeenSet() const
{
    return m_riskInfoHasBeenSet;
}

vector<SuspectedDiagnosis> DiagnosisInfo::GetSuspectedDiagnosis() const
{
    return m_suspectedDiagnosis;
}

void DiagnosisInfo::SetSuspectedDiagnosis(const vector<SuspectedDiagnosis>& _suspectedDiagnosis)
{
    m_suspectedDiagnosis = _suspectedDiagnosis;
    m_suspectedDiagnosisHasBeenSet = true;
}

bool DiagnosisInfo::SuspectedDiagnosisHasBeenSet() const
{
    return m_suspectedDiagnosisHasBeenSet;
}

ReferralInfo DiagnosisInfo::GetReferralInfo() const
{
    return m_referralInfo;
}

void DiagnosisInfo::SetReferralInfo(const ReferralInfo& _referralInfo)
{
    m_referralInfo = _referralInfo;
    m_referralInfoHasBeenSet = true;
}

bool DiagnosisInfo::ReferralInfoHasBeenSet() const
{
    return m_referralInfoHasBeenSet;
}

vector<CriticalInfo> DiagnosisInfo::GetCriticalInfo() const
{
    return m_criticalInfo;
}

void DiagnosisInfo::SetCriticalInfo(const vector<CriticalInfo>& _criticalInfo)
{
    m_criticalInfo = _criticalInfo;
    m_criticalInfoHasBeenSet = true;
}

bool DiagnosisInfo::CriticalInfoHasBeenSet() const
{
    return m_criticalInfoHasBeenSet;
}

VitalSignsInfo DiagnosisInfo::GetVitalSignsInfo() const
{
    return m_vitalSignsInfo;
}

void DiagnosisInfo::SetVitalSignsInfo(const VitalSignsInfo& _vitalSignsInfo)
{
    m_vitalSignsInfo = _vitalSignsInfo;
    m_vitalSignsInfoHasBeenSet = true;
}

bool DiagnosisInfo::VitalSignsInfoHasBeenSet() const
{
    return m_vitalSignsInfoHasBeenSet;
}

vector<DifferDiagnosis> DiagnosisInfo::GetDifferDiagnosis() const
{
    return m_differDiagnosis;
}

void DiagnosisInfo::SetDifferDiagnosis(const vector<DifferDiagnosis>& _differDiagnosis)
{
    m_differDiagnosis = _differDiagnosis;
    m_differDiagnosisHasBeenSet = true;
}

bool DiagnosisInfo::DifferDiagnosisHasBeenSet() const
{
    return m_differDiagnosisHasBeenSet;
}

RecordQuality DiagnosisInfo::GetRecordQuality() const
{
    return m_recordQuality;
}

void DiagnosisInfo::SetRecordQuality(const RecordQuality& _recordQuality)
{
    m_recordQuality = _recordQuality;
    m_recordQualityHasBeenSet = true;
}

bool DiagnosisInfo::RecordQualityHasBeenSet() const
{
    return m_recordQualityHasBeenSet;
}

vector<CurrentDiagnosis> DiagnosisInfo::GetCurrentDiagnosis() const
{
    return m_currentDiagnosis;
}

void DiagnosisInfo::SetCurrentDiagnosis(const vector<CurrentDiagnosis>& _currentDiagnosis)
{
    m_currentDiagnosis = _currentDiagnosis;
    m_currentDiagnosisHasBeenSet = true;
}

bool DiagnosisInfo::CurrentDiagnosisHasBeenSet() const
{
    return m_currentDiagnosisHasBeenSet;
}

vector<TreatmentGuide> DiagnosisInfo::GetTreatmentGuide() const
{
    return m_treatmentGuide;
}

void DiagnosisInfo::SetTreatmentGuide(const vector<TreatmentGuide>& _treatmentGuide)
{
    m_treatmentGuide = _treatmentGuide;
    m_treatmentGuideHasBeenSet = true;
}

bool DiagnosisInfo::TreatmentGuideHasBeenSet() const
{
    return m_treatmentGuideHasBeenSet;
}

EmrQuality DiagnosisInfo::GetEmrQuality() const
{
    return m_emrQuality;
}

void DiagnosisInfo::SetEmrQuality(const EmrQuality& _emrQuality)
{
    m_emrQuality = _emrQuality;
    m_emrQualityHasBeenSet = true;
}

bool DiagnosisInfo::EmrQualityHasBeenSet() const
{
    return m_emrQualityHasBeenSet;
}

vector<HealthPrescriptions> DiagnosisInfo::GetHealthPrescriptions() const
{
    return m_healthPrescriptions;
}

void DiagnosisInfo::SetHealthPrescriptions(const vector<HealthPrescriptions>& _healthPrescriptions)
{
    m_healthPrescriptions = _healthPrescriptions;
    m_healthPrescriptionsHasBeenSet = true;
}

bool DiagnosisInfo::HealthPrescriptionsHasBeenSet() const
{
    return m_healthPrescriptionsHasBeenSet;
}

