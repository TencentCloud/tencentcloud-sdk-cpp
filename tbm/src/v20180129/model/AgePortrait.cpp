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

#include <tencentcloud/tbm/v20180129/model/AgePortrait.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tbm::V20180129::Model;
using namespace std;

AgePortrait::AgePortrait() :
    m_ageRangeHasBeenSet(false),
    m_percentHasBeenSet(false)
{
}

CoreInternalOutcome AgePortrait::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AgeRange") && !value["AgeRange"].IsNull())
    {
        if (!value["AgeRange"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgePortrait.AgeRange` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ageRange = string(value["AgeRange"].GetString());
        m_ageRangeHasBeenSet = true;
    }

    if (value.HasMember("Percent") && !value["Percent"].IsNull())
    {
        if (!value["Percent"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AgePortrait.Percent` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_percent = value["Percent"].GetDouble();
        m_percentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgePortrait::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ageRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgeRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ageRange.c_str(), allocator).Move(), allocator);
    }

    if (m_percentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_percent, allocator);
    }

}


string AgePortrait::GetAgeRange() const
{
    return m_ageRange;
}

void AgePortrait::SetAgeRange(const string& _ageRange)
{
    m_ageRange = _ageRange;
    m_ageRangeHasBeenSet = true;
}

bool AgePortrait::AgeRangeHasBeenSet() const
{
    return m_ageRangeHasBeenSet;
}

double AgePortrait::GetPercent() const
{
    return m_percent;
}

void AgePortrait::SetPercent(const double& _percent)
{
    m_percent = _percent;
    m_percentHasBeenSet = true;
}

bool AgePortrait::PercentHasBeenSet() const
{
    return m_percentHasBeenSet;
}

