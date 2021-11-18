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

#include <tencentcloud/af/v20200226/model/SimpleKindRiskDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Af::V20200226::Model;
using namespace std;

SimpleKindRiskDetail::SimpleKindRiskDetail() :
    m_riskCodeHasBeenSet(false),
    m_riskCodeValueHasBeenSet(false)
{
}

CoreInternalOutcome SimpleKindRiskDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RiskCode") && !value["RiskCode"].IsNull())
    {
        if (!value["RiskCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleKindRiskDetail.RiskCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskCode = string(value["RiskCode"].GetString());
        m_riskCodeHasBeenSet = true;
    }

    if (value.HasMember("RiskCodeValue") && !value["RiskCodeValue"].IsNull())
    {
        if (!value["RiskCodeValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleKindRiskDetail.RiskCodeValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskCodeValue = string(value["RiskCodeValue"].GetString());
        m_riskCodeValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SimpleKindRiskDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_riskCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskCode.c_str(), allocator).Move(), allocator);
    }

    if (m_riskCodeValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCodeValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskCodeValue.c_str(), allocator).Move(), allocator);
    }

}


string SimpleKindRiskDetail::GetRiskCode() const
{
    return m_riskCode;
}

void SimpleKindRiskDetail::SetRiskCode(const string& _riskCode)
{
    m_riskCode = _riskCode;
    m_riskCodeHasBeenSet = true;
}

bool SimpleKindRiskDetail::RiskCodeHasBeenSet() const
{
    return m_riskCodeHasBeenSet;
}

string SimpleKindRiskDetail::GetRiskCodeValue() const
{
    return m_riskCodeValue;
}

void SimpleKindRiskDetail::SetRiskCodeValue(const string& _riskCodeValue)
{
    m_riskCodeValue = _riskCodeValue;
    m_riskCodeValueHasBeenSet = true;
}

bool SimpleKindRiskDetail::RiskCodeValueHasBeenSet() const
{
    return m_riskCodeValueHasBeenSet;
}

