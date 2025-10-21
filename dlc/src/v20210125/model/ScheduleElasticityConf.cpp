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

#include <tencentcloud/dlc/v20210125/model/ScheduleElasticityConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

ScheduleElasticityConf::ScheduleElasticityConf() :
    m_scheduledElasticityEnabledHasBeenSet(false),
    m_scheduleTypeHasBeenSet(false),
    m_scheduleDaysHasBeenSet(false),
    m_timeZoneHasBeenSet(false),
    m_elasticPlansHasBeenSet(false)
{
}

CoreInternalOutcome ScheduleElasticityConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ScheduledElasticityEnabled") && !value["ScheduledElasticityEnabled"].IsNull())
    {
        if (!value["ScheduledElasticityEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduleElasticityConf.ScheduledElasticityEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_scheduledElasticityEnabled = value["ScheduledElasticityEnabled"].GetBool();
        m_scheduledElasticityEnabledHasBeenSet = true;
    }

    if (value.HasMember("ScheduleType") && !value["ScheduleType"].IsNull())
    {
        if (!value["ScheduleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduleElasticityConf.ScheduleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleType = string(value["ScheduleType"].GetString());
        m_scheduleTypeHasBeenSet = true;
    }

    if (value.HasMember("ScheduleDays") && !value["ScheduleDays"].IsNull())
    {
        if (!value["ScheduleDays"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ScheduleElasticityConf.ScheduleDays` is not array type"));

        const rapidjson::Value &tmpValue = value["ScheduleDays"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_scheduleDays.push_back((*itr).GetInt64());
        }
        m_scheduleDaysHasBeenSet = true;
    }

    if (value.HasMember("TimeZone") && !value["TimeZone"].IsNull())
    {
        if (!value["TimeZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduleElasticityConf.TimeZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeZone = string(value["TimeZone"].GetString());
        m_timeZoneHasBeenSet = true;
    }

    if (value.HasMember("ElasticPlans") && !value["ElasticPlans"].IsNull())
    {
        if (!value["ElasticPlans"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ScheduleElasticityConf.ElasticPlans` is not array type"));

        const rapidjson::Value &tmpValue = value["ElasticPlans"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ElasticPlan item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_elasticPlans.push_back(item);
        }
        m_elasticPlansHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScheduleElasticityConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scheduledElasticityEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduledElasticityEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scheduledElasticityEnabled, allocator);
    }

    if (m_scheduleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduleType.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scheduleDays.begin(); itr != m_scheduleDays.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_timeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeZone.c_str(), allocator).Move(), allocator);
    }

    if (m_elasticPlansHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElasticPlans";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_elasticPlans.begin(); itr != m_elasticPlans.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


bool ScheduleElasticityConf::GetScheduledElasticityEnabled() const
{
    return m_scheduledElasticityEnabled;
}

void ScheduleElasticityConf::SetScheduledElasticityEnabled(const bool& _scheduledElasticityEnabled)
{
    m_scheduledElasticityEnabled = _scheduledElasticityEnabled;
    m_scheduledElasticityEnabledHasBeenSet = true;
}

bool ScheduleElasticityConf::ScheduledElasticityEnabledHasBeenSet() const
{
    return m_scheduledElasticityEnabledHasBeenSet;
}

string ScheduleElasticityConf::GetScheduleType() const
{
    return m_scheduleType;
}

void ScheduleElasticityConf::SetScheduleType(const string& _scheduleType)
{
    m_scheduleType = _scheduleType;
    m_scheduleTypeHasBeenSet = true;
}

bool ScheduleElasticityConf::ScheduleTypeHasBeenSet() const
{
    return m_scheduleTypeHasBeenSet;
}

vector<int64_t> ScheduleElasticityConf::GetScheduleDays() const
{
    return m_scheduleDays;
}

void ScheduleElasticityConf::SetScheduleDays(const vector<int64_t>& _scheduleDays)
{
    m_scheduleDays = _scheduleDays;
    m_scheduleDaysHasBeenSet = true;
}

bool ScheduleElasticityConf::ScheduleDaysHasBeenSet() const
{
    return m_scheduleDaysHasBeenSet;
}

string ScheduleElasticityConf::GetTimeZone() const
{
    return m_timeZone;
}

void ScheduleElasticityConf::SetTimeZone(const string& _timeZone)
{
    m_timeZone = _timeZone;
    m_timeZoneHasBeenSet = true;
}

bool ScheduleElasticityConf::TimeZoneHasBeenSet() const
{
    return m_timeZoneHasBeenSet;
}

vector<ElasticPlan> ScheduleElasticityConf::GetElasticPlans() const
{
    return m_elasticPlans;
}

void ScheduleElasticityConf::SetElasticPlans(const vector<ElasticPlan>& _elasticPlans)
{
    m_elasticPlans = _elasticPlans;
    m_elasticPlansHasBeenSet = true;
}

bool ScheduleElasticityConf::ElasticPlansHasBeenSet() const
{
    return m_elasticPlansHasBeenSet;
}

