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

#include <tencentcloud/af/v20200226/model/RiskDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Af::V20200226::Model;
using namespace std;

RiskDetailInfo::RiskDetailInfo() :
    m_riskCodeHasBeenSet(false),
    m_riskValueHasBeenSet(false)
{
}

CoreInternalOutcome RiskDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RiskCode") && !value["RiskCode"].IsNull())
    {
        if (!value["RiskCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDetailInfo.RiskCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskCode = string(value["RiskCode"].GetString());
        m_riskCodeHasBeenSet = true;
    }

    if (value.HasMember("RiskValue") && !value["RiskValue"].IsNull())
    {
        if (!value["RiskValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDetailInfo.RiskValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskValue = string(value["RiskValue"].GetString());
        m_riskValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RiskDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_riskCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskCode.c_str(), allocator).Move(), allocator);
    }

    if (m_riskValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskValue.c_str(), allocator).Move(), allocator);
    }

}


string RiskDetailInfo::GetRiskCode() const
{
    return m_riskCode;
}

void RiskDetailInfo::SetRiskCode(const string& _riskCode)
{
    m_riskCode = _riskCode;
    m_riskCodeHasBeenSet = true;
}

bool RiskDetailInfo::RiskCodeHasBeenSet() const
{
    return m_riskCodeHasBeenSet;
}

string RiskDetailInfo::GetRiskValue() const
{
    return m_riskValue;
}

void RiskDetailInfo::SetRiskValue(const string& _riskValue)
{
    m_riskValue = _riskValue;
    m_riskValueHasBeenSet = true;
}

bool RiskDetailInfo::RiskValueHasBeenSet() const
{
    return m_riskValueHasBeenSet;
}

