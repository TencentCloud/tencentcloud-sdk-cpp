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

#include <tencentcloud/waf/v20180125/model/ApiSecAttackSource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ApiSecAttackSource::ApiSecAttackSource() :
    m_srcIpHasBeenSet(false),
    m_eventLevelHasBeenSet(false),
    m_botLabelHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_eventCountHasBeenSet(false),
    m_attackCountHasBeenSet(false),
    m_missUserNameHasBeenSet(false),
    m_attackDetailHasBeenSet(false),
    m_missPasswordHasBeenSet(false)
{
}

CoreInternalOutcome ApiSecAttackSource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SrcIp") && !value["SrcIp"].IsNull())
    {
        if (!value["SrcIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecAttackSource.SrcIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcIp = string(value["SrcIp"].GetString());
        m_srcIpHasBeenSet = true;
    }

    if (value.HasMember("EventLevel") && !value["EventLevel"].IsNull())
    {
        if (!value["EventLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecAttackSource.EventLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventLevel = string(value["EventLevel"].GetString());
        m_eventLevelHasBeenSet = true;
    }

    if (value.HasMember("BotLabel") && !value["BotLabel"].IsNull())
    {
        if (!value["BotLabel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecAttackSource.BotLabel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_botLabel = string(value["BotLabel"].GetString());
        m_botLabelHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecAttackSource.Timestamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetUint64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecAttackSource.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecAttackSource.StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EventCount") && !value["EventCount"].IsNull())
    {
        if (!value["EventCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecAttackSource.EventCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventCount = value["EventCount"].GetInt64();
        m_eventCountHasBeenSet = true;
    }

    if (value.HasMember("AttackCount") && !value["AttackCount"].IsNull())
    {
        if (!value["AttackCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecAttackSource.AttackCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attackCount = value["AttackCount"].GetInt64();
        m_attackCountHasBeenSet = true;
    }

    if (value.HasMember("MissUserName") && !value["MissUserName"].IsNull())
    {
        if (!value["MissUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecAttackSource.MissUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_missUserName = string(value["MissUserName"].GetString());
        m_missUserNameHasBeenSet = true;
    }

    if (value.HasMember("AttackDetail") && !value["AttackDetail"].IsNull())
    {
        if (!value["AttackDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiSecAttackSource.AttackDetail` is not array type"));

        const rapidjson::Value &tmpValue = value["AttackDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_attackDetail.push_back((*itr).GetString());
        }
        m_attackDetailHasBeenSet = true;
    }

    if (value.HasMember("MissPassword") && !value["MissPassword"].IsNull())
    {
        if (!value["MissPassword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecAttackSource.MissPassword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_missPassword = string(value["MissPassword"].GetString());
        m_missPasswordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiSecAttackSource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_srcIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcIp.c_str(), allocator).Move(), allocator);
    }

    if (m_eventLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_botLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_botLabel.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_eventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventCount, allocator);
    }

    if (m_attackCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackCount, allocator);
    }

    if (m_missUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MissUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_missUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_attackDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_attackDetail.begin(); itr != m_attackDetail.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_missPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MissPassword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_missPassword.c_str(), allocator).Move(), allocator);
    }

}


string ApiSecAttackSource::GetSrcIp() const
{
    return m_srcIp;
}

void ApiSecAttackSource::SetSrcIp(const string& _srcIp)
{
    m_srcIp = _srcIp;
    m_srcIpHasBeenSet = true;
}

bool ApiSecAttackSource::SrcIpHasBeenSet() const
{
    return m_srcIpHasBeenSet;
}

string ApiSecAttackSource::GetEventLevel() const
{
    return m_eventLevel;
}

void ApiSecAttackSource::SetEventLevel(const string& _eventLevel)
{
    m_eventLevel = _eventLevel;
    m_eventLevelHasBeenSet = true;
}

bool ApiSecAttackSource::EventLevelHasBeenSet() const
{
    return m_eventLevelHasBeenSet;
}

string ApiSecAttackSource::GetBotLabel() const
{
    return m_botLabel;
}

void ApiSecAttackSource::SetBotLabel(const string& _botLabel)
{
    m_botLabel = _botLabel;
    m_botLabelHasBeenSet = true;
}

bool ApiSecAttackSource::BotLabelHasBeenSet() const
{
    return m_botLabelHasBeenSet;
}

uint64_t ApiSecAttackSource::GetTimestamp() const
{
    return m_timestamp;
}

void ApiSecAttackSource::SetTimestamp(const uint64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool ApiSecAttackSource::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string ApiSecAttackSource::GetCity() const
{
    return m_city;
}

void ApiSecAttackSource::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool ApiSecAttackSource::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

uint64_t ApiSecAttackSource::GetStartTime() const
{
    return m_startTime;
}

void ApiSecAttackSource::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ApiSecAttackSource::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t ApiSecAttackSource::GetEventCount() const
{
    return m_eventCount;
}

void ApiSecAttackSource::SetEventCount(const int64_t& _eventCount)
{
    m_eventCount = _eventCount;
    m_eventCountHasBeenSet = true;
}

bool ApiSecAttackSource::EventCountHasBeenSet() const
{
    return m_eventCountHasBeenSet;
}

int64_t ApiSecAttackSource::GetAttackCount() const
{
    return m_attackCount;
}

void ApiSecAttackSource::SetAttackCount(const int64_t& _attackCount)
{
    m_attackCount = _attackCount;
    m_attackCountHasBeenSet = true;
}

bool ApiSecAttackSource::AttackCountHasBeenSet() const
{
    return m_attackCountHasBeenSet;
}

string ApiSecAttackSource::GetMissUserName() const
{
    return m_missUserName;
}

void ApiSecAttackSource::SetMissUserName(const string& _missUserName)
{
    m_missUserName = _missUserName;
    m_missUserNameHasBeenSet = true;
}

bool ApiSecAttackSource::MissUserNameHasBeenSet() const
{
    return m_missUserNameHasBeenSet;
}

vector<string> ApiSecAttackSource::GetAttackDetail() const
{
    return m_attackDetail;
}

void ApiSecAttackSource::SetAttackDetail(const vector<string>& _attackDetail)
{
    m_attackDetail = _attackDetail;
    m_attackDetailHasBeenSet = true;
}

bool ApiSecAttackSource::AttackDetailHasBeenSet() const
{
    return m_attackDetailHasBeenSet;
}

string ApiSecAttackSource::GetMissPassword() const
{
    return m_missPassword;
}

void ApiSecAttackSource::SetMissPassword(const string& _missPassword)
{
    m_missPassword = _missPassword;
    m_missPasswordHasBeenSet = true;
}

bool ApiSecAttackSource::MissPasswordHasBeenSet() const
{
    return m_missPasswordHasBeenSet;
}

