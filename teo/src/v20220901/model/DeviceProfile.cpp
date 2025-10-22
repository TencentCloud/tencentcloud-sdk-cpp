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

#include <tencentcloud/teo/v20220901/model/DeviceProfile.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

DeviceProfile::DeviceProfile() :
    m_clientTypeHasBeenSet(false),
    m_highRiskMinScoreHasBeenSet(false),
    m_highRiskRequestActionHasBeenSet(false),
    m_mediumRiskMinScoreHasBeenSet(false),
    m_mediumRiskRequestActionHasBeenSet(false)
{
}

CoreInternalOutcome DeviceProfile::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClientType") && !value["ClientType"].IsNull())
    {
        if (!value["ClientType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceProfile.ClientType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientType = string(value["ClientType"].GetString());
        m_clientTypeHasBeenSet = true;
    }

    if (value.HasMember("HighRiskMinScore") && !value["HighRiskMinScore"].IsNull())
    {
        if (!value["HighRiskMinScore"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceProfile.HighRiskMinScore` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_highRiskMinScore = value["HighRiskMinScore"].GetUint64();
        m_highRiskMinScoreHasBeenSet = true;
    }

    if (value.HasMember("HighRiskRequestAction") && !value["HighRiskRequestAction"].IsNull())
    {
        if (!value["HighRiskRequestAction"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceProfile.HighRiskRequestAction` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_highRiskRequestAction.Deserialize(value["HighRiskRequestAction"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_highRiskRequestActionHasBeenSet = true;
    }

    if (value.HasMember("MediumRiskMinScore") && !value["MediumRiskMinScore"].IsNull())
    {
        if (!value["MediumRiskMinScore"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceProfile.MediumRiskMinScore` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mediumRiskMinScore = value["MediumRiskMinScore"].GetUint64();
        m_mediumRiskMinScoreHasBeenSet = true;
    }

    if (value.HasMember("MediumRiskRequestAction") && !value["MediumRiskRequestAction"].IsNull())
    {
        if (!value["MediumRiskRequestAction"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceProfile.MediumRiskRequestAction` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mediumRiskRequestAction.Deserialize(value["MediumRiskRequestAction"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mediumRiskRequestActionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceProfile::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clientTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientType.c_str(), allocator).Move(), allocator);
    }

    if (m_highRiskMinScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighRiskMinScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highRiskMinScore, allocator);
    }

    if (m_highRiskRequestActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighRiskRequestAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_highRiskRequestAction.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mediumRiskMinScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediumRiskMinScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mediumRiskMinScore, allocator);
    }

    if (m_mediumRiskRequestActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediumRiskRequestAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mediumRiskRequestAction.ToJsonObject(value[key.c_str()], allocator);
    }

}


string DeviceProfile::GetClientType() const
{
    return m_clientType;
}

void DeviceProfile::SetClientType(const string& _clientType)
{
    m_clientType = _clientType;
    m_clientTypeHasBeenSet = true;
}

bool DeviceProfile::ClientTypeHasBeenSet() const
{
    return m_clientTypeHasBeenSet;
}

uint64_t DeviceProfile::GetHighRiskMinScore() const
{
    return m_highRiskMinScore;
}

void DeviceProfile::SetHighRiskMinScore(const uint64_t& _highRiskMinScore)
{
    m_highRiskMinScore = _highRiskMinScore;
    m_highRiskMinScoreHasBeenSet = true;
}

bool DeviceProfile::HighRiskMinScoreHasBeenSet() const
{
    return m_highRiskMinScoreHasBeenSet;
}

SecurityAction DeviceProfile::GetHighRiskRequestAction() const
{
    return m_highRiskRequestAction;
}

void DeviceProfile::SetHighRiskRequestAction(const SecurityAction& _highRiskRequestAction)
{
    m_highRiskRequestAction = _highRiskRequestAction;
    m_highRiskRequestActionHasBeenSet = true;
}

bool DeviceProfile::HighRiskRequestActionHasBeenSet() const
{
    return m_highRiskRequestActionHasBeenSet;
}

uint64_t DeviceProfile::GetMediumRiskMinScore() const
{
    return m_mediumRiskMinScore;
}

void DeviceProfile::SetMediumRiskMinScore(const uint64_t& _mediumRiskMinScore)
{
    m_mediumRiskMinScore = _mediumRiskMinScore;
    m_mediumRiskMinScoreHasBeenSet = true;
}

bool DeviceProfile::MediumRiskMinScoreHasBeenSet() const
{
    return m_mediumRiskMinScoreHasBeenSet;
}

SecurityAction DeviceProfile::GetMediumRiskRequestAction() const
{
    return m_mediumRiskRequestAction;
}

void DeviceProfile::SetMediumRiskRequestAction(const SecurityAction& _mediumRiskRequestAction)
{
    m_mediumRiskRequestAction = _mediumRiskRequestAction;
    m_mediumRiskRequestActionHasBeenSet = true;
}

bool DeviceProfile::MediumRiskRequestActionHasBeenSet() const
{
    return m_mediumRiskRequestActionHasBeenSet;
}

