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

#include <tencentcloud/mrs/v20200910/model/DischargeDiagnosis.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

DischargeDiagnosis::DischargeDiagnosis() :
    m_tableIndexHasBeenSet(false),
    m_outDiagnosisHasBeenSet(false),
    m_diseaseCodeHasBeenSet(false),
    m_inStatusHasBeenSet(false),
    m_outStatusHasBeenSet(false)
{
}

CoreInternalOutcome DischargeDiagnosis::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableIndex") && !value["TableIndex"].IsNull())
    {
        if (!value["TableIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DischargeDiagnosis.TableIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tableIndex = value["TableIndex"].GetInt64();
        m_tableIndexHasBeenSet = true;
    }

    if (value.HasMember("OutDiagnosis") && !value["OutDiagnosis"].IsNull())
    {
        if (!value["OutDiagnosis"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DischargeDiagnosis.OutDiagnosis` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outDiagnosis.Deserialize(value["OutDiagnosis"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outDiagnosisHasBeenSet = true;
    }

    if (value.HasMember("DiseaseCode") && !value["DiseaseCode"].IsNull())
    {
        if (!value["DiseaseCode"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DischargeDiagnosis.DiseaseCode` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_diseaseCode.Deserialize(value["DiseaseCode"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_diseaseCodeHasBeenSet = true;
    }

    if (value.HasMember("InStatus") && !value["InStatus"].IsNull())
    {
        if (!value["InStatus"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DischargeDiagnosis.InStatus` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_inStatus.Deserialize(value["InStatus"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inStatusHasBeenSet = true;
    }

    if (value.HasMember("OutStatus") && !value["OutStatus"].IsNull())
    {
        if (!value["OutStatus"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DischargeDiagnosis.OutStatus` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outStatus.Deserialize(value["OutStatus"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DischargeDiagnosis::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tableIndex, allocator);
    }

    if (m_outDiagnosisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutDiagnosis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outDiagnosis.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_diseaseCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiseaseCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_diseaseCode.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_inStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inStatus.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_outStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outStatus.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t DischargeDiagnosis::GetTableIndex() const
{
    return m_tableIndex;
}

void DischargeDiagnosis::SetTableIndex(const int64_t& _tableIndex)
{
    m_tableIndex = _tableIndex;
    m_tableIndexHasBeenSet = true;
}

bool DischargeDiagnosis::TableIndexHasBeenSet() const
{
    return m_tableIndexHasBeenSet;
}

BlockInfo DischargeDiagnosis::GetOutDiagnosis() const
{
    return m_outDiagnosis;
}

void DischargeDiagnosis::SetOutDiagnosis(const BlockInfo& _outDiagnosis)
{
    m_outDiagnosis = _outDiagnosis;
    m_outDiagnosisHasBeenSet = true;
}

bool DischargeDiagnosis::OutDiagnosisHasBeenSet() const
{
    return m_outDiagnosisHasBeenSet;
}

BlockInfo DischargeDiagnosis::GetDiseaseCode() const
{
    return m_diseaseCode;
}

void DischargeDiagnosis::SetDiseaseCode(const BlockInfo& _diseaseCode)
{
    m_diseaseCode = _diseaseCode;
    m_diseaseCodeHasBeenSet = true;
}

bool DischargeDiagnosis::DiseaseCodeHasBeenSet() const
{
    return m_diseaseCodeHasBeenSet;
}

BlockInfo DischargeDiagnosis::GetInStatus() const
{
    return m_inStatus;
}

void DischargeDiagnosis::SetInStatus(const BlockInfo& _inStatus)
{
    m_inStatus = _inStatus;
    m_inStatusHasBeenSet = true;
}

bool DischargeDiagnosis::InStatusHasBeenSet() const
{
    return m_inStatusHasBeenSet;
}

BlockInfo DischargeDiagnosis::GetOutStatus() const
{
    return m_outStatus;
}

void DischargeDiagnosis::SetOutStatus(const BlockInfo& _outStatus)
{
    m_outStatus = _outStatus;
    m_outStatusHasBeenSet = true;
}

bool DischargeDiagnosis::OutStatusHasBeenSet() const
{
    return m_outStatusHasBeenSet;
}

