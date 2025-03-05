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

#include <tencentcloud/cdwpg/v20201230/model/ConfigHistory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwpg::V20201230::Model;
using namespace std;

ConfigHistory::ConfigHistory() :
    m_idHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_paramNameHasBeenSet(false),
    m_paramNewValueHasBeenSet(false),
    m_paramOldValueHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome ConfigHistory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigHistory.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigHistory.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigHistory.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigHistory.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigHistory.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("ParamName") && !value["ParamName"].IsNull())
    {
        if (!value["ParamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigHistory.ParamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramName = string(value["ParamName"].GetString());
        m_paramNameHasBeenSet = true;
    }

    if (value.HasMember("ParamNewValue") && !value["ParamNewValue"].IsNull())
    {
        if (!value["ParamNewValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigHistory.ParamNewValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramNewValue = string(value["ParamNewValue"].GetString());
        m_paramNewValueHasBeenSet = true;
    }

    if (value.HasMember("ParamOldValue") && !value["ParamOldValue"].IsNull())
    {
        if (!value["ParamOldValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigHistory.ParamOldValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramOldValue = string(value["ParamOldValue"].GetString());
        m_paramOldValueHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigHistory.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConfigHistory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_paramNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramName.c_str(), allocator).Move(), allocator);
    }

    if (m_paramNewValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamNewValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramNewValue.c_str(), allocator).Move(), allocator);
    }

    if (m_paramOldValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamOldValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramOldValue.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


int64_t ConfigHistory::GetId() const
{
    return m_id;
}

void ConfigHistory::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ConfigHistory::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ConfigHistory::GetInstanceId() const
{
    return m_instanceId;
}

void ConfigHistory::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ConfigHistory::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ConfigHistory::GetCreatedAt() const
{
    return m_createdAt;
}

void ConfigHistory::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool ConfigHistory::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string ConfigHistory::GetUpdatedAt() const
{
    return m_updatedAt;
}

void ConfigHistory::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool ConfigHistory::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

string ConfigHistory::GetNodeType() const
{
    return m_nodeType;
}

void ConfigHistory::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool ConfigHistory::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string ConfigHistory::GetParamName() const
{
    return m_paramName;
}

void ConfigHistory::SetParamName(const string& _paramName)
{
    m_paramName = _paramName;
    m_paramNameHasBeenSet = true;
}

bool ConfigHistory::ParamNameHasBeenSet() const
{
    return m_paramNameHasBeenSet;
}

string ConfigHistory::GetParamNewValue() const
{
    return m_paramNewValue;
}

void ConfigHistory::SetParamNewValue(const string& _paramNewValue)
{
    m_paramNewValue = _paramNewValue;
    m_paramNewValueHasBeenSet = true;
}

bool ConfigHistory::ParamNewValueHasBeenSet() const
{
    return m_paramNewValueHasBeenSet;
}

string ConfigHistory::GetParamOldValue() const
{
    return m_paramOldValue;
}

void ConfigHistory::SetParamOldValue(const string& _paramOldValue)
{
    m_paramOldValue = _paramOldValue;
    m_paramOldValueHasBeenSet = true;
}

bool ConfigHistory::ParamOldValueHasBeenSet() const
{
    return m_paramOldValueHasBeenSet;
}

string ConfigHistory::GetStatus() const
{
    return m_status;
}

void ConfigHistory::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ConfigHistory::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

