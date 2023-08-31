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

#include <tencentcloud/dsgc/v20190723/model/RiskCountInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

RiskCountInfo::RiskCountInfo() :
    m_riskLevelHasBeenSet(false),
    m_countHasBeenSet(false),
    m_riskLevelNameHasBeenSet(false)
{
}

CoreInternalOutcome RiskCountInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCountInfo.RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(value["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCountInfo.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("RiskLevelName") && !value["RiskLevelName"].IsNull())
    {
        if (!value["RiskLevelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCountInfo.RiskLevelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevelName = string(value["RiskLevelName"].GetString());
        m_riskLevelNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RiskCountInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_riskLevelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevelName.c_str(), allocator).Move(), allocator);
    }

}


string RiskCountInfo::GetRiskLevel() const
{
    return m_riskLevel;
}

void RiskCountInfo::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool RiskCountInfo::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

int64_t RiskCountInfo::GetCount() const
{
    return m_count;
}

void RiskCountInfo::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool RiskCountInfo::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string RiskCountInfo::GetRiskLevelName() const
{
    return m_riskLevelName;
}

void RiskCountInfo::SetRiskLevelName(const string& _riskLevelName)
{
    m_riskLevelName = _riskLevelName;
    m_riskLevelNameHasBeenSet = true;
}

bool RiskCountInfo::RiskLevelNameHasBeenSet() const
{
    return m_riskLevelNameHasBeenSet;
}

