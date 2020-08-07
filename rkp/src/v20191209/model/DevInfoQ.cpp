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

#include <tencentcloud/rkp/v20191209/model/DevInfoQ.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rkp::V20191209::Model;
using namespace rapidjson;
using namespace std;

DevInfoQ::DevInfoQ() :
    m_openIdHasBeenSet(false),
    m_riskScoreHasBeenSet(false),
    m_riskInfoHasBeenSet(false),
    m_probabilityHasBeenSet(false)
{
}

CoreInternalOutcome DevInfoQ::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("OpenId") && !value["OpenId"].IsNull())
    {
        if (!value["OpenId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DevInfoQ.OpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openId = string(value["OpenId"].GetString());
        m_openIdHasBeenSet = true;
    }

    if (value.HasMember("RiskScore") && !value["RiskScore"].IsNull())
    {
        if (!value["RiskScore"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DevInfoQ.RiskScore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskScore = value["RiskScore"].GetInt64();
        m_riskScoreHasBeenSet = true;
    }

    if (value.HasMember("RiskInfo") && !value["RiskInfo"].IsNull())
    {
        if (!value["RiskInfo"].IsArray())
            return CoreInternalOutcome(Error("response `DevInfoQ.RiskInfo` is not array type"));

        const Value &tmpValue = value["RiskInfo"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RiskDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_riskInfo.push_back(item);
        }
        m_riskInfoHasBeenSet = true;
    }

    if (value.HasMember("Probability") && !value["Probability"].IsNull())
    {
        if (!value["Probability"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `DevInfoQ.Probability` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_probability = value["Probability"].GetDouble();
        m_probabilityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DevInfoQ::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_openIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_riskScoreHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RiskScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskScore, allocator);
    }

    if (m_riskInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RiskInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_riskInfo.begin(); itr != m_riskInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_probabilityHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Probability";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_probability, allocator);
    }

}


string DevInfoQ::GetOpenId() const
{
    return m_openId;
}

void DevInfoQ::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool DevInfoQ::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

int64_t DevInfoQ::GetRiskScore() const
{
    return m_riskScore;
}

void DevInfoQ::SetRiskScore(const int64_t& _riskScore)
{
    m_riskScore = _riskScore;
    m_riskScoreHasBeenSet = true;
}

bool DevInfoQ::RiskScoreHasBeenSet() const
{
    return m_riskScoreHasBeenSet;
}

vector<RiskDetail> DevInfoQ::GetRiskInfo() const
{
    return m_riskInfo;
}

void DevInfoQ::SetRiskInfo(const vector<RiskDetail>& _riskInfo)
{
    m_riskInfo = _riskInfo;
    m_riskInfoHasBeenSet = true;
}

bool DevInfoQ::RiskInfoHasBeenSet() const
{
    return m_riskInfoHasBeenSet;
}

double DevInfoQ::GetProbability() const
{
    return m_probability;
}

void DevInfoQ::SetProbability(const double& _probability)
{
    m_probability = _probability;
    m_probabilityHasBeenSet = true;
}

bool DevInfoQ::ProbabilityHasBeenSet() const
{
    return m_probabilityHasBeenSet;
}

