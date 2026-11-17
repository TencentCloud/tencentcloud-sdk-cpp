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

#include <tencentcloud/faceid/v20180301/model/ExtraRiskResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

ExtraRiskResult::ExtraRiskResult() :
    m_statusHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_blackListResultHasBeenSet(false),
    m_riskDetailListHasBeenSet(false)
{
}

CoreInternalOutcome ExtraRiskResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtraRiskResult.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtraRiskResult.RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(value["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("BlackListResult") && !value["BlackListResult"].IsNull())
    {
        if (!value["BlackListResult"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExtraRiskResult.BlackListResult` is not array type"));

        const rapidjson::Value &tmpValue = value["BlackListResult"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BlackListItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_blackListResult.push_back(item);
        }
        m_blackListResultHasBeenSet = true;
    }

    if (value.HasMember("RiskDetailList") && !value["RiskDetailList"].IsNull())
    {
        if (!value["RiskDetailList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExtraRiskResult.RiskDetailList` is not array type"));

        const rapidjson::Value &tmpValue = value["RiskDetailList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RiskDetailItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_riskDetailList.push_back(item);
        }
        m_riskDetailListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExtraRiskResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_blackListResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlackListResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_blackListResult.begin(); itr != m_blackListResult.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_riskDetailListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskDetailList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_riskDetailList.begin(); itr != m_riskDetailList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ExtraRiskResult::GetStatus() const
{
    return m_status;
}

void ExtraRiskResult::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ExtraRiskResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ExtraRiskResult::GetRiskLevel() const
{
    return m_riskLevel;
}

void ExtraRiskResult::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool ExtraRiskResult::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

vector<BlackListItem> ExtraRiskResult::GetBlackListResult() const
{
    return m_blackListResult;
}

void ExtraRiskResult::SetBlackListResult(const vector<BlackListItem>& _blackListResult)
{
    m_blackListResult = _blackListResult;
    m_blackListResultHasBeenSet = true;
}

bool ExtraRiskResult::BlackListResultHasBeenSet() const
{
    return m_blackListResultHasBeenSet;
}

vector<RiskDetailItem> ExtraRiskResult::GetRiskDetailList() const
{
    return m_riskDetailList;
}

void ExtraRiskResult::SetRiskDetailList(const vector<RiskDetailItem>& _riskDetailList)
{
    m_riskDetailList = _riskDetailList;
    m_riskDetailListHasBeenSet = true;
}

bool ExtraRiskResult::RiskDetailListHasBeenSet() const
{
    return m_riskDetailListHasBeenSet;
}

