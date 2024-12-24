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

#include <tencentcloud/aca/v20210323/model/SmartPredictRespData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

SmartPredictRespData::SmartPredictRespData() :
    m_diagnosisInfoHasBeenSet(false),
    m_rationalDrugInfoHasBeenSet(false)
{
}

CoreInternalOutcome SmartPredictRespData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiagnosisInfo") && !value["DiagnosisInfo"].IsNull())
    {
        if (!value["DiagnosisInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SmartPredictRespData.DiagnosisInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_diagnosisInfo.Deserialize(value["DiagnosisInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_diagnosisInfoHasBeenSet = true;
    }

    if (value.HasMember("RationalDrugInfo") && !value["RationalDrugInfo"].IsNull())
    {
        if (!value["RationalDrugInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SmartPredictRespData.RationalDrugInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rationalDrugInfo.Deserialize(value["RationalDrugInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rationalDrugInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmartPredictRespData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_diagnosisInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiagnosisInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_diagnosisInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rationalDrugInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RationalDrugInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rationalDrugInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


DiagnosisInfo SmartPredictRespData::GetDiagnosisInfo() const
{
    return m_diagnosisInfo;
}

void SmartPredictRespData::SetDiagnosisInfo(const DiagnosisInfo& _diagnosisInfo)
{
    m_diagnosisInfo = _diagnosisInfo;
    m_diagnosisInfoHasBeenSet = true;
}

bool SmartPredictRespData::DiagnosisInfoHasBeenSet() const
{
    return m_diagnosisInfoHasBeenSet;
}

RationalDrugInfo SmartPredictRespData::GetRationalDrugInfo() const
{
    return m_rationalDrugInfo;
}

void SmartPredictRespData::SetRationalDrugInfo(const RationalDrugInfo& _rationalDrugInfo)
{
    m_rationalDrugInfo = _rationalDrugInfo;
    m_rationalDrugInfoHasBeenSet = true;
}

bool SmartPredictRespData::RationalDrugInfoHasBeenSet() const
{
    return m_rationalDrugInfoHasBeenSet;
}

