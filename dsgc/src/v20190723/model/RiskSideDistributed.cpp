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

#include <tencentcloud/dsgc/v20190723/model/RiskSideDistributed.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

RiskSideDistributed::RiskSideDistributed() :
    m_assessmentRiskSideHasBeenSet(false),
    m_assessmentRiskHasBeenSet(false)
{
}

CoreInternalOutcome RiskSideDistributed::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssessmentRiskSide") && !value["AssessmentRiskSide"].IsNull())
    {
        if (!value["AssessmentRiskSide"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSideDistributed.AssessmentRiskSide` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_assessmentRiskSide.Deserialize(value["AssessmentRiskSide"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_assessmentRiskSideHasBeenSet = true;
    }

    if (value.HasMember("AssessmentRisk") && !value["AssessmentRisk"].IsNull())
    {
        if (!value["AssessmentRisk"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RiskSideDistributed.AssessmentRisk` is not array type"));

        const rapidjson::Value &tmpValue = value["AssessmentRisk"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Note item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_assessmentRisk.push_back(item);
        }
        m_assessmentRiskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RiskSideDistributed::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_assessmentRiskSideHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssessmentRiskSide";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_assessmentRiskSide.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_assessmentRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssessmentRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_assessmentRisk.begin(); itr != m_assessmentRisk.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


Note RiskSideDistributed::GetAssessmentRiskSide() const
{
    return m_assessmentRiskSide;
}

void RiskSideDistributed::SetAssessmentRiskSide(const Note& _assessmentRiskSide)
{
    m_assessmentRiskSide = _assessmentRiskSide;
    m_assessmentRiskSideHasBeenSet = true;
}

bool RiskSideDistributed::AssessmentRiskSideHasBeenSet() const
{
    return m_assessmentRiskSideHasBeenSet;
}

vector<Note> RiskSideDistributed::GetAssessmentRisk() const
{
    return m_assessmentRisk;
}

void RiskSideDistributed::SetAssessmentRisk(const vector<Note>& _assessmentRisk)
{
    m_assessmentRisk = _assessmentRisk;
    m_assessmentRiskHasBeenSet = true;
}

bool RiskSideDistributed::AssessmentRiskHasBeenSet() const
{
    return m_assessmentRiskHasBeenSet;
}

