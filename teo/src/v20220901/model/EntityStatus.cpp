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

#include <tencentcloud/teo/v20220901/model/EntityStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

EntityStatus::EntityStatus() :
    m_entityHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

CoreInternalOutcome EntityStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Entity") && !value["Entity"].IsNull())
    {
        if (!value["Entity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EntityStatus.Entity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entity = string(value["Entity"].GetString());
        m_entityHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EntityStatus.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EntityStatus.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EntityStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_entityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Entity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entity.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

}


string EntityStatus::GetEntity() const
{
    return m_entity;
}

void EntityStatus::SetEntity(const string& _entity)
{
    m_entity = _entity;
    m_entityHasBeenSet = true;
}

bool EntityStatus::EntityHasBeenSet() const
{
    return m_entityHasBeenSet;
}

string EntityStatus::GetStatus() const
{
    return m_status;
}

void EntityStatus::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EntityStatus::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string EntityStatus::GetMessage() const
{
    return m_message;
}

void EntityStatus::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool EntityStatus::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

