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

#include <tencentcloud/cdn/v20180606/model/BotRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

BotRecord::BotRecord() :
    m_actionHasBeenSet(false),
    m_numsHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_sessionDurationHasBeenSet(false),
    m_srcIpHasBeenSet(false),
    m_botFeatureHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_avgSpeedHasBeenSet(false),
    m_tcbDetailHasBeenSet(false),
    m_idHasBeenSet(false),
    m_domainHasBeenSet(false)
{
}

CoreInternalOutcome BotRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotRecord.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("Nums") && !value["Nums"].IsNull())
    {
        if (!value["Nums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BotRecord.Nums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nums = value["Nums"].GetInt64();
        m_numsHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotRecord.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("SessionDuration") && !value["SessionDuration"].IsNull())
    {
        if (!value["SessionDuration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BotRecord.SessionDuration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_sessionDuration = value["SessionDuration"].GetDouble();
        m_sessionDurationHasBeenSet = true;
    }

    if (value.HasMember("SrcIp") && !value["SrcIp"].IsNull())
    {
        if (!value["SrcIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotRecord.SrcIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcIp = string(value["SrcIp"].GetString());
        m_srcIpHasBeenSet = true;
    }

    if (value.HasMember("BotFeature") && !value["BotFeature"].IsNull())
    {
        if (!value["BotFeature"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BotRecord.BotFeature` is not array type"));

        const rapidjson::Value &tmpValue = value["BotFeature"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_botFeature.push_back((*itr).GetString());
        }
        m_botFeatureHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotRecord.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BotRecord.Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetInt64();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("AvgSpeed") && !value["AvgSpeed"].IsNull())
    {
        if (!value["AvgSpeed"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BotRecord.AvgSpeed` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avgSpeed = value["AvgSpeed"].GetDouble();
        m_avgSpeedHasBeenSet = true;
    }

    if (value.HasMember("TcbDetail") && !value["TcbDetail"].IsNull())
    {
        if (!value["TcbDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotRecord.TcbDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tcbDetail = string(value["TcbDetail"].GetString());
        m_tcbDetailHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotRecord.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotRecord.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BotRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_numsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nums, allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sessionDuration, allocator);
    }

    if (m_srcIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcIp.c_str(), allocator).Move(), allocator);
    }

    if (m_botFeatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotFeature";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_botFeature.begin(); itr != m_botFeature.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_avgSpeedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgSpeed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgSpeed, allocator);
    }

    if (m_tcbDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TcbDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tcbDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

}


string BotRecord::GetAction() const
{
    return m_action;
}

void BotRecord::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool BotRecord::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

int64_t BotRecord::GetNums() const
{
    return m_nums;
}

void BotRecord::SetNums(const int64_t& _nums)
{
    m_nums = _nums;
    m_numsHasBeenSet = true;
}

bool BotRecord::NumsHasBeenSet() const
{
    return m_numsHasBeenSet;
}

string BotRecord::GetRuleName() const
{
    return m_ruleName;
}

void BotRecord::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool BotRecord::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

double BotRecord::GetSessionDuration() const
{
    return m_sessionDuration;
}

void BotRecord::SetSessionDuration(const double& _sessionDuration)
{
    m_sessionDuration = _sessionDuration;
    m_sessionDurationHasBeenSet = true;
}

bool BotRecord::SessionDurationHasBeenSet() const
{
    return m_sessionDurationHasBeenSet;
}

string BotRecord::GetSrcIp() const
{
    return m_srcIp;
}

void BotRecord::SetSrcIp(const string& _srcIp)
{
    m_srcIp = _srcIp;
    m_srcIpHasBeenSet = true;
}

bool BotRecord::SrcIpHasBeenSet() const
{
    return m_srcIpHasBeenSet;
}

vector<string> BotRecord::GetBotFeature() const
{
    return m_botFeature;
}

void BotRecord::SetBotFeature(const vector<string>& _botFeature)
{
    m_botFeature = _botFeature;
    m_botFeatureHasBeenSet = true;
}

bool BotRecord::BotFeatureHasBeenSet() const
{
    return m_botFeatureHasBeenSet;
}

string BotRecord::GetTime() const
{
    return m_time;
}

void BotRecord::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool BotRecord::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

int64_t BotRecord::GetScore() const
{
    return m_score;
}

void BotRecord::SetScore(const int64_t& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool BotRecord::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

double BotRecord::GetAvgSpeed() const
{
    return m_avgSpeed;
}

void BotRecord::SetAvgSpeed(const double& _avgSpeed)
{
    m_avgSpeed = _avgSpeed;
    m_avgSpeedHasBeenSet = true;
}

bool BotRecord::AvgSpeedHasBeenSet() const
{
    return m_avgSpeedHasBeenSet;
}

string BotRecord::GetTcbDetail() const
{
    return m_tcbDetail;
}

void BotRecord::SetTcbDetail(const string& _tcbDetail)
{
    m_tcbDetail = _tcbDetail;
    m_tcbDetailHasBeenSet = true;
}

bool BotRecord::TcbDetailHasBeenSet() const
{
    return m_tcbDetailHasBeenSet;
}

string BotRecord::GetId() const
{
    return m_id;
}

void BotRecord::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool BotRecord::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string BotRecord::GetDomain() const
{
    return m_domain;
}

void BotRecord::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool BotRecord::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

