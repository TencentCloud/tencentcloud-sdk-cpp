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

#include <tencentcloud/rkp/v20191209/model/RiskDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rkp::V20191209::Model;
using namespace std;

RiskDetail::RiskDetail() :
    m_riskCodeHasBeenSet(false),
    m_riskCodeValueHasBeenSet(false)
{
}

CoreInternalOutcome RiskDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RiskCode") && !value["RiskCode"].IsNull())
    {
        if (!value["RiskCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDetail.RiskCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskCode = value["RiskCode"].GetInt64();
        m_riskCodeHasBeenSet = true;
    }

    if (value.HasMember("RiskCodeValue") && !value["RiskCodeValue"].IsNull())
    {
        if (!value["RiskCodeValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDetail.RiskCodeValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskCodeValue = string(value["RiskCodeValue"].GetString());
        m_riskCodeValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RiskDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_riskCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskCode, allocator);
    }

    if (m_riskCodeValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCodeValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskCodeValue.c_str(), allocator).Move(), allocator);
    }

}


int64_t RiskDetail::GetRiskCode() const
{
    return m_riskCode;
}

void RiskDetail::SetRiskCode(const int64_t& _riskCode)
{
    m_riskCode = _riskCode;
    m_riskCodeHasBeenSet = true;
}

bool RiskDetail::RiskCodeHasBeenSet() const
{
    return m_riskCodeHasBeenSet;
}

string RiskDetail::GetRiskCodeValue() const
{
    return m_riskCodeValue;
}

void RiskDetail::SetRiskCodeValue(const string& _riskCodeValue)
{
    m_riskCodeValue = _riskCodeValue;
    m_riskCodeValueHasBeenSet = true;
}

bool RiskDetail::RiskCodeValueHasBeenSet() const
{
    return m_riskCodeValueHasBeenSet;
}

