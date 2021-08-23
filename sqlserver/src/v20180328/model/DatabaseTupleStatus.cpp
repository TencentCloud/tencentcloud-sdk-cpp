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

#include <tencentcloud/sqlserver/v20180328/model/DatabaseTupleStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

DatabaseTupleStatus::DatabaseTupleStatus() :
    m_publishDatabaseHasBeenSet(false),
    m_subscribeDatabaseHasBeenSet(false),
    m_lastSyncTimeHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome DatabaseTupleStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PublishDatabase") && !value["PublishDatabase"].IsNull())
    {
        if (!value["PublishDatabase"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseTupleStatus.PublishDatabase` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishDatabase = string(value["PublishDatabase"].GetString());
        m_publishDatabaseHasBeenSet = true;
    }

    if (value.HasMember("SubscribeDatabase") && !value["SubscribeDatabase"].IsNull())
    {
        if (!value["SubscribeDatabase"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseTupleStatus.SubscribeDatabase` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subscribeDatabase = string(value["SubscribeDatabase"].GetString());
        m_subscribeDatabaseHasBeenSet = true;
    }

    if (value.HasMember("LastSyncTime") && !value["LastSyncTime"].IsNull())
    {
        if (!value["LastSyncTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseTupleStatus.LastSyncTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastSyncTime = string(value["LastSyncTime"].GetString());
        m_lastSyncTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseTupleStatus.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DatabaseTupleStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_publishDatabaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishDatabase";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishDatabase.c_str(), allocator).Move(), allocator);
    }

    if (m_subscribeDatabaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeDatabase";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subscribeDatabase.c_str(), allocator).Move(), allocator);
    }

    if (m_lastSyncTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastSyncTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastSyncTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string DatabaseTupleStatus::GetPublishDatabase() const
{
    return m_publishDatabase;
}

void DatabaseTupleStatus::SetPublishDatabase(const string& _publishDatabase)
{
    m_publishDatabase = _publishDatabase;
    m_publishDatabaseHasBeenSet = true;
}

bool DatabaseTupleStatus::PublishDatabaseHasBeenSet() const
{
    return m_publishDatabaseHasBeenSet;
}

string DatabaseTupleStatus::GetSubscribeDatabase() const
{
    return m_subscribeDatabase;
}

void DatabaseTupleStatus::SetSubscribeDatabase(const string& _subscribeDatabase)
{
    m_subscribeDatabase = _subscribeDatabase;
    m_subscribeDatabaseHasBeenSet = true;
}

bool DatabaseTupleStatus::SubscribeDatabaseHasBeenSet() const
{
    return m_subscribeDatabaseHasBeenSet;
}

string DatabaseTupleStatus::GetLastSyncTime() const
{
    return m_lastSyncTime;
}

void DatabaseTupleStatus::SetLastSyncTime(const string& _lastSyncTime)
{
    m_lastSyncTime = _lastSyncTime;
    m_lastSyncTimeHasBeenSet = true;
}

bool DatabaseTupleStatus::LastSyncTimeHasBeenSet() const
{
    return m_lastSyncTimeHasBeenSet;
}

string DatabaseTupleStatus::GetStatus() const
{
    return m_status;
}

void DatabaseTupleStatus::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DatabaseTupleStatus::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

