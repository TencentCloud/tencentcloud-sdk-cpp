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

#include <tencentcloud/rce/v20201103/model/OutputDescribeRiskModelValue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20201103::Model;
using namespace std;

OutputDescribeRiskModelValue::OutputDescribeRiskModelValue() :
    m_applyScoreHasBeenSet(false)
{
}

CoreInternalOutcome OutputDescribeRiskModelValue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApplyScore") && !value["ApplyScore"].IsNull())
    {
        if (!value["ApplyScore"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeRiskModelValue.ApplyScore` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_applyScore = value["ApplyScore"].GetDouble();
        m_applyScoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutputDescribeRiskModelValue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_applyScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applyScore, allocator);
    }

}


double OutputDescribeRiskModelValue::GetApplyScore() const
{
    return m_applyScore;
}

void OutputDescribeRiskModelValue::SetApplyScore(const double& _applyScore)
{
    m_applyScore = _applyScore;
    m_applyScoreHasBeenSet = true;
}

bool OutputDescribeRiskModelValue::ApplyScoreHasBeenSet() const
{
    return m_applyScoreHasBeenSet;
}

