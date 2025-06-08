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

#include <tencentcloud/teo/v20220901/model/ChallengeActionParameters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ChallengeActionParameters::ChallengeActionParameters() :
    m_challengeOptionHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_attesterIdHasBeenSet(false)
{
}

CoreInternalOutcome ChallengeActionParameters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChallengeOption") && !value["ChallengeOption"].IsNull())
    {
        if (!value["ChallengeOption"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChallengeActionParameters.ChallengeOption` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_challengeOption = string(value["ChallengeOption"].GetString());
        m_challengeOptionHasBeenSet = true;
    }

    if (value.HasMember("Interval") && !value["Interval"].IsNull())
    {
        if (!value["Interval"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChallengeActionParameters.Interval` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_interval = string(value["Interval"].GetString());
        m_intervalHasBeenSet = true;
    }

    if (value.HasMember("AttesterId") && !value["AttesterId"].IsNull())
    {
        if (!value["AttesterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChallengeActionParameters.AttesterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attesterId = string(value["AttesterId"].GetString());
        m_attesterIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChallengeActionParameters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_challengeOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChallengeOption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_challengeOption.c_str(), allocator).Move(), allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_interval.c_str(), allocator).Move(), allocator);
    }

    if (m_attesterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttesterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attesterId.c_str(), allocator).Move(), allocator);
    }

}


string ChallengeActionParameters::GetChallengeOption() const
{
    return m_challengeOption;
}

void ChallengeActionParameters::SetChallengeOption(const string& _challengeOption)
{
    m_challengeOption = _challengeOption;
    m_challengeOptionHasBeenSet = true;
}

bool ChallengeActionParameters::ChallengeOptionHasBeenSet() const
{
    return m_challengeOptionHasBeenSet;
}

string ChallengeActionParameters::GetInterval() const
{
    return m_interval;
}

void ChallengeActionParameters::SetInterval(const string& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool ChallengeActionParameters::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

string ChallengeActionParameters::GetAttesterId() const
{
    return m_attesterId;
}

void ChallengeActionParameters::SetAttesterId(const string& _attesterId)
{
    m_attesterId = _attesterId;
    m_attesterIdHasBeenSet = true;
}

bool ChallengeActionParameters::AttesterIdHasBeenSet() const
{
    return m_attesterIdHasBeenSet;
}

