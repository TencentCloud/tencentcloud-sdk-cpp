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

#include <tencentcloud/vpc/v20170312/model/BackupPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

BackupPolicy::BackupPolicy() :
    m_backupDayHasBeenSet(false),
    m_backupTimeHasBeenSet(false)
{
}

CoreInternalOutcome BackupPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BackupDay") && !value["BackupDay"].IsNull())
    {
        if (!value["BackupDay"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPolicy.BackupDay` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupDay = string(value["BackupDay"].GetString());
        m_backupDayHasBeenSet = true;
    }

    if (value.HasMember("BackupTime") && !value["BackupTime"].IsNull())
    {
        if (!value["BackupTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPolicy.BackupTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupTime = string(value["BackupTime"].GetString());
        m_backupTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_backupDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupDay.c_str(), allocator).Move(), allocator);
    }

    if (m_backupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupTime.c_str(), allocator).Move(), allocator);
    }

}


string BackupPolicy::GetBackupDay() const
{
    return m_backupDay;
}

void BackupPolicy::SetBackupDay(const string& _backupDay)
{
    m_backupDay = _backupDay;
    m_backupDayHasBeenSet = true;
}

bool BackupPolicy::BackupDayHasBeenSet() const
{
    return m_backupDayHasBeenSet;
}

string BackupPolicy::GetBackupTime() const
{
    return m_backupTime;
}

void BackupPolicy::SetBackupTime(const string& _backupTime)
{
    m_backupTime = _backupTime;
    m_backupTimeHasBeenSet = true;
}

bool BackupPolicy::BackupTimeHasBeenSet() const
{
    return m_backupTimeHasBeenSet;
}

