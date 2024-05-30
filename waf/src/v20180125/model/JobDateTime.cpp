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

#include <tencentcloud/waf/v20180125/model/JobDateTime.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

JobDateTime::JobDateTime() :
    m_timedHasBeenSet(false),
    m_cronHasBeenSet(false),
    m_timeTZoneHasBeenSet(false)
{
}

CoreInternalOutcome JobDateTime::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Timed") && !value["Timed"].IsNull())
    {
        if (!value["Timed"].IsArray())
            return CoreInternalOutcome(Core::Error("response `JobDateTime.Timed` is not array type"));

        const rapidjson::Value &tmpValue = value["Timed"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TimedJob item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_timed.push_back(item);
        }
        m_timedHasBeenSet = true;
    }

    if (value.HasMember("Cron") && !value["Cron"].IsNull())
    {
        if (!value["Cron"].IsArray())
            return CoreInternalOutcome(Core::Error("response `JobDateTime.Cron` is not array type"));

        const rapidjson::Value &tmpValue = value["Cron"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CronJob item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cron.push_back(item);
        }
        m_cronHasBeenSet = true;
    }

    if (value.HasMember("TimeTZone") && !value["TimeTZone"].IsNull())
    {
        if (!value["TimeTZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDateTime.TimeTZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeTZone = string(value["TimeTZone"].GetString());
        m_timeTZoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JobDateTime::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_timed.begin(); itr != m_timed.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cronHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cron";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cron.begin(); itr != m_cron.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_timeTZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeTZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeTZone.c_str(), allocator).Move(), allocator);
    }

}


vector<TimedJob> JobDateTime::GetTimed() const
{
    return m_timed;
}

void JobDateTime::SetTimed(const vector<TimedJob>& _timed)
{
    m_timed = _timed;
    m_timedHasBeenSet = true;
}

bool JobDateTime::TimedHasBeenSet() const
{
    return m_timedHasBeenSet;
}

vector<CronJob> JobDateTime::GetCron() const
{
    return m_cron;
}

void JobDateTime::SetCron(const vector<CronJob>& _cron)
{
    m_cron = _cron;
    m_cronHasBeenSet = true;
}

bool JobDateTime::CronHasBeenSet() const
{
    return m_cronHasBeenSet;
}

string JobDateTime::GetTimeTZone() const
{
    return m_timeTZone;
}

void JobDateTime::SetTimeTZone(const string& _timeTZone)
{
    m_timeTZone = _timeTZone;
    m_timeTZoneHasBeenSet = true;
}

bool JobDateTime::TimeTZoneHasBeenSet() const
{
    return m_timeTZoneHasBeenSet;
}

