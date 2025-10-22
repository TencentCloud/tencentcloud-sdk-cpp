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

#include <tencentcloud/sqlserver/v20180328/model/DatabaseTuple.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

DatabaseTuple::DatabaseTuple() :
    m_publishDatabaseHasBeenSet(false),
    m_subscribeDatabaseHasBeenSet(false)
{
}

CoreInternalOutcome DatabaseTuple::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PublishDatabase") && !value["PublishDatabase"].IsNull())
    {
        if (!value["PublishDatabase"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseTuple.PublishDatabase` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishDatabase = string(value["PublishDatabase"].GetString());
        m_publishDatabaseHasBeenSet = true;
    }

    if (value.HasMember("SubscribeDatabase") && !value["SubscribeDatabase"].IsNull())
    {
        if (!value["SubscribeDatabase"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseTuple.SubscribeDatabase` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subscribeDatabase = string(value["SubscribeDatabase"].GetString());
        m_subscribeDatabaseHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DatabaseTuple::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string DatabaseTuple::GetPublishDatabase() const
{
    return m_publishDatabase;
}

void DatabaseTuple::SetPublishDatabase(const string& _publishDatabase)
{
    m_publishDatabase = _publishDatabase;
    m_publishDatabaseHasBeenSet = true;
}

bool DatabaseTuple::PublishDatabaseHasBeenSet() const
{
    return m_publishDatabaseHasBeenSet;
}

string DatabaseTuple::GetSubscribeDatabase() const
{
    return m_subscribeDatabase;
}

void DatabaseTuple::SetSubscribeDatabase(const string& _subscribeDatabase)
{
    m_subscribeDatabase = _subscribeDatabase;
    m_subscribeDatabaseHasBeenSet = true;
}

bool DatabaseTuple::SubscribeDatabaseHasBeenSet() const
{
    return m_subscribeDatabaseHasBeenSet;
}

