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

#include <tencentcloud/rce/v20250425/model/ManageIPPortraitRiskValueOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20250425::Model;
using namespace std;

ManageIPPortraitRiskValueOutput::ManageIPPortraitRiskValueOutput() :
    m_userIpHasBeenSet(false),
    m_riskScoreHasBeenSet(false),
    m_riskTypeHasBeenSet(false)
{
}

CoreInternalOutcome ManageIPPortraitRiskValueOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserIp") && !value["UserIp"].IsNull())
    {
        if (!value["UserIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManageIPPortraitRiskValueOutput.UserIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userIp = string(value["UserIp"].GetString());
        m_userIpHasBeenSet = true;
    }

    if (value.HasMember("RiskScore") && !value["RiskScore"].IsNull())
    {
        if (!value["RiskScore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ManageIPPortraitRiskValueOutput.RiskScore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskScore = value["RiskScore"].GetInt64();
        m_riskScoreHasBeenSet = true;
    }

    if (value.HasMember("RiskType") && !value["RiskType"].IsNull())
    {
        if (!value["RiskType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ManageIPPortraitRiskValueOutput.RiskType` is not array type"));

        const rapidjson::Value &tmpValue = value["RiskType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_riskType.push_back((*itr).GetInt64());
        }
        m_riskTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ManageIPPortraitRiskValueOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userIp.c_str(), allocator).Move(), allocator);
    }

    if (m_riskScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskScore, allocator);
    }

    if (m_riskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_riskType.begin(); itr != m_riskType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


string ManageIPPortraitRiskValueOutput::GetUserIp() const
{
    return m_userIp;
}

void ManageIPPortraitRiskValueOutput::SetUserIp(const string& _userIp)
{
    m_userIp = _userIp;
    m_userIpHasBeenSet = true;
}

bool ManageIPPortraitRiskValueOutput::UserIpHasBeenSet() const
{
    return m_userIpHasBeenSet;
}

int64_t ManageIPPortraitRiskValueOutput::GetRiskScore() const
{
    return m_riskScore;
}

void ManageIPPortraitRiskValueOutput::SetRiskScore(const int64_t& _riskScore)
{
    m_riskScore = _riskScore;
    m_riskScoreHasBeenSet = true;
}

bool ManageIPPortraitRiskValueOutput::RiskScoreHasBeenSet() const
{
    return m_riskScoreHasBeenSet;
}

vector<int64_t> ManageIPPortraitRiskValueOutput::GetRiskType() const
{
    return m_riskType;
}

void ManageIPPortraitRiskValueOutput::SetRiskType(const vector<int64_t>& _riskType)
{
    m_riskType = _riskType;
    m_riskTypeHasBeenSet = true;
}

bool ManageIPPortraitRiskValueOutput::RiskTypeHasBeenSet() const
{
    return m_riskTypeHasBeenSet;
}

