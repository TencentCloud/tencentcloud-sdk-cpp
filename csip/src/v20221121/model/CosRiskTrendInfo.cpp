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

#include <tencentcloud/csip/v20221121/model/CosRiskTrendInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CosRiskTrendInfo::CosRiskTrendInfo() :
    m_currentDateStrHasBeenSet(false),
    m_riskDataSetHasBeenSet(false)
{
}

CoreInternalOutcome CosRiskTrendInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CurrentDateStr") && !value["CurrentDateStr"].IsNull())
    {
        if (!value["CurrentDateStr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosRiskTrendInfo.CurrentDateStr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentDateStr = string(value["CurrentDateStr"].GetString());
        m_currentDateStrHasBeenSet = true;
    }

    if (value.HasMember("RiskDataSet") && !value["RiskDataSet"].IsNull())
    {
        if (!value["RiskDataSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CosRiskTrendInfo.RiskDataSet` is not array type"));

        const rapidjson::Value &tmpValue = value["RiskDataSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CosRiskInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_riskDataSet.push_back(item);
        }
        m_riskDataSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosRiskTrendInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_currentDateStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentDateStr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentDateStr.c_str(), allocator).Move(), allocator);
    }

    if (m_riskDataSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskDataSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_riskDataSet.begin(); itr != m_riskDataSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string CosRiskTrendInfo::GetCurrentDateStr() const
{
    return m_currentDateStr;
}

void CosRiskTrendInfo::SetCurrentDateStr(const string& _currentDateStr)
{
    m_currentDateStr = _currentDateStr;
    m_currentDateStrHasBeenSet = true;
}

bool CosRiskTrendInfo::CurrentDateStrHasBeenSet() const
{
    return m_currentDateStrHasBeenSet;
}

vector<CosRiskInfo> CosRiskTrendInfo::GetRiskDataSet() const
{
    return m_riskDataSet;
}

void CosRiskTrendInfo::SetRiskDataSet(const vector<CosRiskInfo>& _riskDataSet)
{
    m_riskDataSet = _riskDataSet;
    m_riskDataSetHasBeenSet = true;
}

bool CosRiskTrendInfo::RiskDataSetHasBeenSet() const
{
    return m_riskDataSetHasBeenSet;
}

