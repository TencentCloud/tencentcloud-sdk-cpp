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

#include <tencentcloud/cpdp/v20190820/model/MerchantRiskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

MerchantRiskInfo::MerchantRiskInfo() :
    m_riskLevelHasBeenSet(false),
    m_riskTypesHasBeenSet(false)
{
}

CoreInternalOutcome MerchantRiskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MerchantRiskInfo.RiskLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = value["RiskLevel"].GetInt64();
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("RiskTypes") && !value["RiskTypes"].IsNull())
    {
        if (!value["RiskTypes"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MerchantRiskInfo.RiskTypes` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskTypes = string(value["RiskTypes"].GetString());
        m_riskTypesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MerchantRiskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskLevel, allocator);
    }

    if (m_riskTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskTypes.c_str(), allocator).Move(), allocator);
    }

}


int64_t MerchantRiskInfo::GetRiskLevel() const
{
    return m_riskLevel;
}

void MerchantRiskInfo::SetRiskLevel(const int64_t& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool MerchantRiskInfo::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string MerchantRiskInfo::GetRiskTypes() const
{
    return m_riskTypes;
}

void MerchantRiskInfo::SetRiskTypes(const string& _riskTypes)
{
    m_riskTypes = _riskTypes;
    m_riskTypesHasBeenSet = true;
}

bool MerchantRiskInfo::RiskTypesHasBeenSet() const
{
    return m_riskTypesHasBeenSet;
}

