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

#include <tencentcloud/cdb/v20170320/model/CommonTimeWindow.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

CommonTimeWindow::CommonTimeWindow() :
    m_mondayHasBeenSet(false),
    m_tuesdayHasBeenSet(false),
    m_wednesdayHasBeenSet(false),
    m_thursdayHasBeenSet(false),
    m_fridayHasBeenSet(false),
    m_saturdayHasBeenSet(false),
    m_sundayHasBeenSet(false),
    m_backupPeriodStrategyHasBeenSet(false),
    m_daysHasBeenSet(false),
    m_backupPeriodTimeHasBeenSet(false)
{
}

CoreInternalOutcome CommonTimeWindow::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Monday") && !value["Monday"].IsNull())
    {
        if (!value["Monday"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonTimeWindow.Monday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_monday = string(value["Monday"].GetString());
        m_mondayHasBeenSet = true;
    }

    if (value.HasMember("Tuesday") && !value["Tuesday"].IsNull())
    {
        if (!value["Tuesday"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonTimeWindow.Tuesday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tuesday = string(value["Tuesday"].GetString());
        m_tuesdayHasBeenSet = true;
    }

    if (value.HasMember("Wednesday") && !value["Wednesday"].IsNull())
    {
        if (!value["Wednesday"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonTimeWindow.Wednesday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wednesday = string(value["Wednesday"].GetString());
        m_wednesdayHasBeenSet = true;
    }

    if (value.HasMember("Thursday") && !value["Thursday"].IsNull())
    {
        if (!value["Thursday"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonTimeWindow.Thursday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thursday = string(value["Thursday"].GetString());
        m_thursdayHasBeenSet = true;
    }

    if (value.HasMember("Friday") && !value["Friday"].IsNull())
    {
        if (!value["Friday"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonTimeWindow.Friday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_friday = string(value["Friday"].GetString());
        m_fridayHasBeenSet = true;
    }

    if (value.HasMember("Saturday") && !value["Saturday"].IsNull())
    {
        if (!value["Saturday"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonTimeWindow.Saturday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_saturday = string(value["Saturday"].GetString());
        m_saturdayHasBeenSet = true;
    }

    if (value.HasMember("Sunday") && !value["Sunday"].IsNull())
    {
        if (!value["Sunday"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonTimeWindow.Sunday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sunday = string(value["Sunday"].GetString());
        m_sundayHasBeenSet = true;
    }

    if (value.HasMember("BackupPeriodStrategy") && !value["BackupPeriodStrategy"].IsNull())
    {
        if (!value["BackupPeriodStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonTimeWindow.BackupPeriodStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupPeriodStrategy = string(value["BackupPeriodStrategy"].GetString());
        m_backupPeriodStrategyHasBeenSet = true;
    }

    if (value.HasMember("Days") && !value["Days"].IsNull())
    {
        if (!value["Days"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CommonTimeWindow.Days` is not array type"));

        const rapidjson::Value &tmpValue = value["Days"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_days.push_back((*itr).GetInt64());
        }
        m_daysHasBeenSet = true;
    }

    if (value.HasMember("BackupPeriodTime") && !value["BackupPeriodTime"].IsNull())
    {
        if (!value["BackupPeriodTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonTimeWindow.BackupPeriodTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupPeriodTime = string(value["BackupPeriodTime"].GetString());
        m_backupPeriodTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CommonTimeWindow::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mondayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Monday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_monday.c_str(), allocator).Move(), allocator);
    }

    if (m_tuesdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tuesday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tuesday.c_str(), allocator).Move(), allocator);
    }

    if (m_wednesdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Wednesday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wednesday.c_str(), allocator).Move(), allocator);
    }

    if (m_thursdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Thursday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_thursday.c_str(), allocator).Move(), allocator);
    }

    if (m_fridayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Friday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_friday.c_str(), allocator).Move(), allocator);
    }

    if (m_saturdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Saturday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_saturday.c_str(), allocator).Move(), allocator);
    }

    if (m_sundayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sunday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sunday.c_str(), allocator).Move(), allocator);
    }

    if (m_backupPeriodStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupPeriodStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupPeriodStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_daysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Days";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_days.begin(); itr != m_days.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_backupPeriodTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupPeriodTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupPeriodTime.c_str(), allocator).Move(), allocator);
    }

}


string CommonTimeWindow::GetMonday() const
{
    return m_monday;
}

void CommonTimeWindow::SetMonday(const string& _monday)
{
    m_monday = _monday;
    m_mondayHasBeenSet = true;
}

bool CommonTimeWindow::MondayHasBeenSet() const
{
    return m_mondayHasBeenSet;
}

string CommonTimeWindow::GetTuesday() const
{
    return m_tuesday;
}

void CommonTimeWindow::SetTuesday(const string& _tuesday)
{
    m_tuesday = _tuesday;
    m_tuesdayHasBeenSet = true;
}

bool CommonTimeWindow::TuesdayHasBeenSet() const
{
    return m_tuesdayHasBeenSet;
}

string CommonTimeWindow::GetWednesday() const
{
    return m_wednesday;
}

void CommonTimeWindow::SetWednesday(const string& _wednesday)
{
    m_wednesday = _wednesday;
    m_wednesdayHasBeenSet = true;
}

bool CommonTimeWindow::WednesdayHasBeenSet() const
{
    return m_wednesdayHasBeenSet;
}

string CommonTimeWindow::GetThursday() const
{
    return m_thursday;
}

void CommonTimeWindow::SetThursday(const string& _thursday)
{
    m_thursday = _thursday;
    m_thursdayHasBeenSet = true;
}

bool CommonTimeWindow::ThursdayHasBeenSet() const
{
    return m_thursdayHasBeenSet;
}

string CommonTimeWindow::GetFriday() const
{
    return m_friday;
}

void CommonTimeWindow::SetFriday(const string& _friday)
{
    m_friday = _friday;
    m_fridayHasBeenSet = true;
}

bool CommonTimeWindow::FridayHasBeenSet() const
{
    return m_fridayHasBeenSet;
}

string CommonTimeWindow::GetSaturday() const
{
    return m_saturday;
}

void CommonTimeWindow::SetSaturday(const string& _saturday)
{
    m_saturday = _saturday;
    m_saturdayHasBeenSet = true;
}

bool CommonTimeWindow::SaturdayHasBeenSet() const
{
    return m_saturdayHasBeenSet;
}

string CommonTimeWindow::GetSunday() const
{
    return m_sunday;
}

void CommonTimeWindow::SetSunday(const string& _sunday)
{
    m_sunday = _sunday;
    m_sundayHasBeenSet = true;
}

bool CommonTimeWindow::SundayHasBeenSet() const
{
    return m_sundayHasBeenSet;
}

string CommonTimeWindow::GetBackupPeriodStrategy() const
{
    return m_backupPeriodStrategy;
}

void CommonTimeWindow::SetBackupPeriodStrategy(const string& _backupPeriodStrategy)
{
    m_backupPeriodStrategy = _backupPeriodStrategy;
    m_backupPeriodStrategyHasBeenSet = true;
}

bool CommonTimeWindow::BackupPeriodStrategyHasBeenSet() const
{
    return m_backupPeriodStrategyHasBeenSet;
}

vector<int64_t> CommonTimeWindow::GetDays() const
{
    return m_days;
}

void CommonTimeWindow::SetDays(const vector<int64_t>& _days)
{
    m_days = _days;
    m_daysHasBeenSet = true;
}

bool CommonTimeWindow::DaysHasBeenSet() const
{
    return m_daysHasBeenSet;
}

string CommonTimeWindow::GetBackupPeriodTime() const
{
    return m_backupPeriodTime;
}

void CommonTimeWindow::SetBackupPeriodTime(const string& _backupPeriodTime)
{
    m_backupPeriodTime = _backupPeriodTime;
    m_backupPeriodTimeHasBeenSet = true;
}

bool CommonTimeWindow::BackupPeriodTimeHasBeenSet() const
{
    return m_backupPeriodTimeHasBeenSet;
}

