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

#include <tencentcloud/apm/v20210622/model/ComponentTopologyView.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

ComponentTopologyView::ComponentTopologyView() :
    m_serviceHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_mQHasBeenSet(false)
{
}

CoreInternalOutcome ComponentTopologyView::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Service") && !value["Service"].IsNull())
    {
        if (!value["Service"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ComponentTopologyView.Service` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_service = value["Service"].GetInt64();
        m_serviceHasBeenSet = true;
    }

    if (value.HasMember("Database") && !value["Database"].IsNull())
    {
        if (!value["Database"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ComponentTopologyView.Database` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_database = value["Database"].GetInt64();
        m_databaseHasBeenSet = true;
    }

    if (value.HasMember("MQ") && !value["MQ"].IsNull())
    {
        if (!value["MQ"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ComponentTopologyView.MQ` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mQ = value["MQ"].GetInt64();
        m_mQHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComponentTopologyView::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Service";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_service, allocator);
    }

    if (m_databaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Database";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_database, allocator);
    }

    if (m_mQHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MQ";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mQ, allocator);
    }

}


int64_t ComponentTopologyView::GetService() const
{
    return m_service;
}

void ComponentTopologyView::SetService(const int64_t& _service)
{
    m_service = _service;
    m_serviceHasBeenSet = true;
}

bool ComponentTopologyView::ServiceHasBeenSet() const
{
    return m_serviceHasBeenSet;
}

int64_t ComponentTopologyView::GetDatabase() const
{
    return m_database;
}

void ComponentTopologyView::SetDatabase(const int64_t& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool ComponentTopologyView::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

int64_t ComponentTopologyView::GetMQ() const
{
    return m_mQ;
}

void ComponentTopologyView::SetMQ(const int64_t& _mQ)
{
    m_mQ = _mQ;
    m_mQHasBeenSet = true;
}

bool ComponentTopologyView::MQHasBeenSet() const
{
    return m_mQHasBeenSet;
}

