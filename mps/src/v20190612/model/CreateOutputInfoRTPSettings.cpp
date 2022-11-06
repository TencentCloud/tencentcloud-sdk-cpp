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

#include <tencentcloud/mps/v20190612/model/CreateOutputInfoRTPSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

CreateOutputInfoRTPSettings::CreateOutputInfoRTPSettings() :
    m_destinationsHasBeenSet(false),
    m_fECHasBeenSet(false),
    m_idleTimeoutHasBeenSet(false)
{
}

CoreInternalOutcome CreateOutputInfoRTPSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Destinations") && !value["Destinations"].IsNull())
    {
        if (!value["Destinations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateOutputInfoRTPSettings.Destinations` is not array type"));

        const rapidjson::Value &tmpValue = value["Destinations"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CreateOutputRTPSettingsDestinations item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_destinations.push_back(item);
        }
        m_destinationsHasBeenSet = true;
    }

    if (value.HasMember("FEC") && !value["FEC"].IsNull())
    {
        if (!value["FEC"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOutputInfoRTPSettings.FEC` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fEC = string(value["FEC"].GetString());
        m_fECHasBeenSet = true;
    }

    if (value.HasMember("IdleTimeout") && !value["IdleTimeout"].IsNull())
    {
        if (!value["IdleTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOutputInfoRTPSettings.IdleTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_idleTimeout = value["IdleTimeout"].GetInt64();
        m_idleTimeoutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateOutputInfoRTPSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_destinationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Destinations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_destinations.begin(); itr != m_destinations.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_fECHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FEC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fEC.c_str(), allocator).Move(), allocator);
    }

    if (m_idleTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdleTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_idleTimeout, allocator);
    }

}


vector<CreateOutputRTPSettingsDestinations> CreateOutputInfoRTPSettings::GetDestinations() const
{
    return m_destinations;
}

void CreateOutputInfoRTPSettings::SetDestinations(const vector<CreateOutputRTPSettingsDestinations>& _destinations)
{
    m_destinations = _destinations;
    m_destinationsHasBeenSet = true;
}

bool CreateOutputInfoRTPSettings::DestinationsHasBeenSet() const
{
    return m_destinationsHasBeenSet;
}

string CreateOutputInfoRTPSettings::GetFEC() const
{
    return m_fEC;
}

void CreateOutputInfoRTPSettings::SetFEC(const string& _fEC)
{
    m_fEC = _fEC;
    m_fECHasBeenSet = true;
}

bool CreateOutputInfoRTPSettings::FECHasBeenSet() const
{
    return m_fECHasBeenSet;
}

int64_t CreateOutputInfoRTPSettings::GetIdleTimeout() const
{
    return m_idleTimeout;
}

void CreateOutputInfoRTPSettings::SetIdleTimeout(const int64_t& _idleTimeout)
{
    m_idleTimeout = _idleTimeout;
    m_idleTimeoutHasBeenSet = true;
}

bool CreateOutputInfoRTPSettings::IdleTimeoutHasBeenSet() const
{
    return m_idleTimeoutHasBeenSet;
}

