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

#include <tencentcloud/eb/v20210416/model/Connection.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eb::V20210416::Model;
using namespace std;

Connection::Connection() :
    m_statusHasBeenSet(false),
    m_modTimeHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_addTimeHasBeenSet(false),
    m_connectionIdHasBeenSet(false),
    m_eventBusIdHasBeenSet(false),
    m_connectionDescriptionHasBeenSet(false),
    m_connectionNameHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome Connection::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Connection.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ModTime") && !value["ModTime"].IsNull())
    {
        if (!value["ModTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Connection.ModTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modTime = string(value["ModTime"].GetString());
        m_modTimeHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Connection.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Connection.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("AddTime") && !value["AddTime"].IsNull())
    {
        if (!value["AddTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Connection.AddTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = string(value["AddTime"].GetString());
        m_addTimeHasBeenSet = true;
    }

    if (value.HasMember("ConnectionId") && !value["ConnectionId"].IsNull())
    {
        if (!value["ConnectionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Connection.ConnectionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectionId = string(value["ConnectionId"].GetString());
        m_connectionIdHasBeenSet = true;
    }

    if (value.HasMember("EventBusId") && !value["EventBusId"].IsNull())
    {
        if (!value["EventBusId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Connection.EventBusId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventBusId = string(value["EventBusId"].GetString());
        m_eventBusIdHasBeenSet = true;
    }

    if (value.HasMember("ConnectionDescription") && !value["ConnectionDescription"].IsNull())
    {
        if (!value["ConnectionDescription"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Connection.ConnectionDescription` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_connectionDescription.Deserialize(value["ConnectionDescription"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_connectionDescriptionHasBeenSet = true;
    }

    if (value.HasMember("ConnectionName") && !value["ConnectionName"].IsNull())
    {
        if (!value["ConnectionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Connection.ConnectionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectionName = string(value["ConnectionName"].GetString());
        m_connectionNameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Connection.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Connection::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_modTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modTime.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_addTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addTime.c_str(), allocator).Move(), allocator);
    }

    if (m_connectionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectionId.c_str(), allocator).Move(), allocator);
    }

    if (m_eventBusIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventBusId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventBusId.c_str(), allocator).Move(), allocator);
    }

    if (m_connectionDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_connectionDescription.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_connectionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectionName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

}


string Connection::GetStatus() const
{
    return m_status;
}

void Connection::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Connection::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string Connection::GetModTime() const
{
    return m_modTime;
}

void Connection::SetModTime(const string& _modTime)
{
    m_modTime = _modTime;
    m_modTimeHasBeenSet = true;
}

bool Connection::ModTimeHasBeenSet() const
{
    return m_modTimeHasBeenSet;
}

bool Connection::GetEnable() const
{
    return m_enable;
}

void Connection::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool Connection::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string Connection::GetDescription() const
{
    return m_description;
}

void Connection::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Connection::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string Connection::GetAddTime() const
{
    return m_addTime;
}

void Connection::SetAddTime(const string& _addTime)
{
    m_addTime = _addTime;
    m_addTimeHasBeenSet = true;
}

bool Connection::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

string Connection::GetConnectionId() const
{
    return m_connectionId;
}

void Connection::SetConnectionId(const string& _connectionId)
{
    m_connectionId = _connectionId;
    m_connectionIdHasBeenSet = true;
}

bool Connection::ConnectionIdHasBeenSet() const
{
    return m_connectionIdHasBeenSet;
}

string Connection::GetEventBusId() const
{
    return m_eventBusId;
}

void Connection::SetEventBusId(const string& _eventBusId)
{
    m_eventBusId = _eventBusId;
    m_eventBusIdHasBeenSet = true;
}

bool Connection::EventBusIdHasBeenSet() const
{
    return m_eventBusIdHasBeenSet;
}

ConnectionDescription Connection::GetConnectionDescription() const
{
    return m_connectionDescription;
}

void Connection::SetConnectionDescription(const ConnectionDescription& _connectionDescription)
{
    m_connectionDescription = _connectionDescription;
    m_connectionDescriptionHasBeenSet = true;
}

bool Connection::ConnectionDescriptionHasBeenSet() const
{
    return m_connectionDescriptionHasBeenSet;
}

string Connection::GetConnectionName() const
{
    return m_connectionName;
}

void Connection::SetConnectionName(const string& _connectionName)
{
    m_connectionName = _connectionName;
    m_connectionNameHasBeenSet = true;
}

bool Connection::ConnectionNameHasBeenSet() const
{
    return m_connectionNameHasBeenSet;
}

string Connection::GetType() const
{
    return m_type;
}

void Connection::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Connection::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

