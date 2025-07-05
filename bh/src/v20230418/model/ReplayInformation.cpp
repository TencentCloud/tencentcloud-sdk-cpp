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

#include <tencentcloud/bh/v20230418/model/ReplayInformation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

ReplayInformation::ReplayInformation() :
    m_tokenHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_replayTypeHasBeenSet(false)
{
}

CoreInternalOutcome ReplayInformation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Token") && !value["Token"].IsNull())
    {
        if (!value["Token"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplayInformation.Token` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_token = string(value["Token"].GetString());
        m_tokenHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplayInformation.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplayInformation.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("ReplayType") && !value["ReplayType"].IsNull())
    {
        if (!value["ReplayType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReplayInformation.ReplayType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_replayType = value["ReplayType"].GetUint64();
        m_replayTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReplayInformation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Token";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_token.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_replayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replayType, allocator);
    }

}


string ReplayInformation::GetToken() const
{
    return m_token;
}

void ReplayInformation::SetToken(const string& _token)
{
    m_token = _token;
    m_tokenHasBeenSet = true;
}

bool ReplayInformation::TokenHasBeenSet() const
{
    return m_tokenHasBeenSet;
}

string ReplayInformation::GetStartTime() const
{
    return m_startTime;
}

void ReplayInformation::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ReplayInformation::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ReplayInformation::GetAddress() const
{
    return m_address;
}

void ReplayInformation::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool ReplayInformation::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

uint64_t ReplayInformation::GetReplayType() const
{
    return m_replayType;
}

void ReplayInformation::SetReplayType(const uint64_t& _replayType)
{
    m_replayType = _replayType;
    m_replayTypeHasBeenSet = true;
}

bool ReplayInformation::ReplayTypeHasBeenSet() const
{
    return m_replayTypeHasBeenSet;
}

