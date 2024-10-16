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

#include <tencentcloud/cls/v20201016/model/MonitorTime.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

MonitorTime::MonitorTime() :
    m_typeHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_cronExpressionHasBeenSet(false)
{
}

CoreInternalOutcome MonitorTime::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorTime.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorTime.Time` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_time = value["Time"].GetInt64();
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("CronExpression") && !value["CronExpression"].IsNull())
    {
        if (!value["CronExpression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorTime.CronExpression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cronExpression = string(value["CronExpression"].GetString());
        m_cronExpressionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MonitorTime::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_time, allocator);
    }

    if (m_cronExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronExpression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cronExpression.c_str(), allocator).Move(), allocator);
    }

}


string MonitorTime::GetType() const
{
    return m_type;
}

void MonitorTime::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool MonitorTime::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t MonitorTime::GetTime() const
{
    return m_time;
}

void MonitorTime::SetTime(const int64_t& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool MonitorTime::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string MonitorTime::GetCronExpression() const
{
    return m_cronExpression;
}

void MonitorTime::SetCronExpression(const string& _cronExpression)
{
    m_cronExpression = _cronExpression;
    m_cronExpressionHasBeenSet = true;
}

bool MonitorTime::CronExpressionHasBeenSet() const
{
    return m_cronExpressionHasBeenSet;
}

