/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/dsgc/v20190723/model/SuggestRiskLevelMatrix.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

SuggestRiskLevelMatrix::SuggestRiskLevelMatrix() :
    m_riskLevelMatrixHasBeenSet(false)
{
}

CoreInternalOutcome SuggestRiskLevelMatrix::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RiskLevelMatrix") && !value["RiskLevelMatrix"].IsNull())
    {
        if (!value["RiskLevelMatrix"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SuggestRiskLevelMatrix.RiskLevelMatrix` is not array type"));

        const rapidjson::Value &tmpValue = value["RiskLevelMatrix"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SuggestRiskLevelMatrixItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_riskLevelMatrix.push_back(item);
        }
        m_riskLevelMatrixHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SuggestRiskLevelMatrix::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_riskLevelMatrixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevelMatrix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_riskLevelMatrix.begin(); itr != m_riskLevelMatrix.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<SuggestRiskLevelMatrixItem> SuggestRiskLevelMatrix::GetRiskLevelMatrix() const
{
    return m_riskLevelMatrix;
}

void SuggestRiskLevelMatrix::SetRiskLevelMatrix(const vector<SuggestRiskLevelMatrixItem>& _riskLevelMatrix)
{
    m_riskLevelMatrix = _riskLevelMatrix;
    m_riskLevelMatrixHasBeenSet = true;
}

bool SuggestRiskLevelMatrix::RiskLevelMatrixHasBeenSet() const
{
    return m_riskLevelMatrixHasBeenSet;
}

