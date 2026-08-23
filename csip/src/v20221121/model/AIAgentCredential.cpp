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

#include <tencentcloud/csip/v20221121/model/AIAgentCredential.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AIAgentCredential::AIAgentCredential() :
    m_iDHasBeenSet(false),
    m_credNameHasBeenSet(false),
    m_credTypeHasBeenSet(false),
    m_locationsHasBeenSet(false),
    m_detectTimeHasBeenSet(false),
    m_hitCountHasBeenSet(false)
{
}

CoreInternalOutcome AIAgentCredential::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIAgentCredential.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("CredName") && !value["CredName"].IsNull())
    {
        if (!value["CredName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIAgentCredential.CredName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_credName = string(value["CredName"].GetString());
        m_credNameHasBeenSet = true;
    }

    if (value.HasMember("CredType") && !value["CredType"].IsNull())
    {
        if (!value["CredType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIAgentCredential.CredType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_credType = string(value["CredType"].GetString());
        m_credTypeHasBeenSet = true;
    }

    if (value.HasMember("Locations") && !value["Locations"].IsNull())
    {
        if (!value["Locations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIAgentCredential.Locations` is not array type"));

        const rapidjson::Value &tmpValue = value["Locations"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AIAgentCredentialLocation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_locations.push_back(item);
        }
        m_locationsHasBeenSet = true;
    }

    if (value.HasMember("DetectTime") && !value["DetectTime"].IsNull())
    {
        if (!value["DetectTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIAgentCredential.DetectTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectTime = string(value["DetectTime"].GetString());
        m_detectTimeHasBeenSet = true;
    }

    if (value.HasMember("HitCount") && !value["HitCount"].IsNull())
    {
        if (!value["HitCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIAgentCredential.HitCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hitCount = value["HitCount"].GetInt64();
        m_hitCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIAgentCredential::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_credNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CredName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_credName.c_str(), allocator).Move(), allocator);
    }

    if (m_credTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CredType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_credType.c_str(), allocator).Move(), allocator);
    }

    if (m_locationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Locations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_locations.begin(); itr != m_locations.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_detectTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectTime.c_str(), allocator).Move(), allocator);
    }

    if (m_hitCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HitCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hitCount, allocator);
    }

}


int64_t AIAgentCredential::GetID() const
{
    return m_iD;
}

void AIAgentCredential::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool AIAgentCredential::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string AIAgentCredential::GetCredName() const
{
    return m_credName;
}

void AIAgentCredential::SetCredName(const string& _credName)
{
    m_credName = _credName;
    m_credNameHasBeenSet = true;
}

bool AIAgentCredential::CredNameHasBeenSet() const
{
    return m_credNameHasBeenSet;
}

string AIAgentCredential::GetCredType() const
{
    return m_credType;
}

void AIAgentCredential::SetCredType(const string& _credType)
{
    m_credType = _credType;
    m_credTypeHasBeenSet = true;
}

bool AIAgentCredential::CredTypeHasBeenSet() const
{
    return m_credTypeHasBeenSet;
}

vector<AIAgentCredentialLocation> AIAgentCredential::GetLocations() const
{
    return m_locations;
}

void AIAgentCredential::SetLocations(const vector<AIAgentCredentialLocation>& _locations)
{
    m_locations = _locations;
    m_locationsHasBeenSet = true;
}

bool AIAgentCredential::LocationsHasBeenSet() const
{
    return m_locationsHasBeenSet;
}

string AIAgentCredential::GetDetectTime() const
{
    return m_detectTime;
}

void AIAgentCredential::SetDetectTime(const string& _detectTime)
{
    m_detectTime = _detectTime;
    m_detectTimeHasBeenSet = true;
}

bool AIAgentCredential::DetectTimeHasBeenSet() const
{
    return m_detectTimeHasBeenSet;
}

int64_t AIAgentCredential::GetHitCount() const
{
    return m_hitCount;
}

void AIAgentCredential::SetHitCount(const int64_t& _hitCount)
{
    m_hitCount = _hitCount;
    m_hitCountHasBeenSet = true;
}

bool AIAgentCredential::HitCountHasBeenSet() const
{
    return m_hitCountHasBeenSet;
}

