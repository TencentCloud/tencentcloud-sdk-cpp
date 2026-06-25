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

#include <tencentcloud/cngw/v20230418/model/AIGWMCPServer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWMCPServer::AIGWMCPServer() :
    m_serverIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_serverTypeHasBeenSet(false),
    m_transportHasBeenSet(false),
    m_upstreamTypeHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_mCPEndpointHasBeenSet(false),
    m_upstreamInfoHasBeenSet(false),
    m_sessionConfigHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_retryCountHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_enableHealthCheckHasBeenSet(false),
    m_healthCheckHasBeenSet(false),
    m_toolCountLimitHasBeenSet(false),
    m_conflictStrategyHasBeenSet(false),
    m_marketStatusHasBeenSet(false)
{
}

CoreInternalOutcome AIGWMCPServer::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServerId") && !value["ServerId"].IsNull())
    {
        if (!value["ServerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPServer.ServerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverId = string(value["ServerId"].GetString());
        m_serverIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPServer.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ServerType") && !value["ServerType"].IsNull())
    {
        if (!value["ServerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPServer.ServerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverType = string(value["ServerType"].GetString());
        m_serverTypeHasBeenSet = true;
    }

    if (value.HasMember("Transport") && !value["Transport"].IsNull())
    {
        if (!value["Transport"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPServer.Transport` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transport = string(value["Transport"].GetString());
        m_transportHasBeenSet = true;
    }

    if (value.HasMember("UpstreamType") && !value["UpstreamType"].IsNull())
    {
        if (!value["UpstreamType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPServer.UpstreamType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamType = string(value["UpstreamType"].GetString());
        m_upstreamTypeHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPServer.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("MCPEndpoint") && !value["MCPEndpoint"].IsNull())
    {
        if (!value["MCPEndpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPServer.MCPEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mCPEndpoint = string(value["MCPEndpoint"].GetString());
        m_mCPEndpointHasBeenSet = true;
    }

    if (value.HasMember("UpstreamInfo") && !value["UpstreamInfo"].IsNull())
    {
        if (!value["UpstreamInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPServer.UpstreamInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_upstreamInfo.Deserialize(value["UpstreamInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_upstreamInfoHasBeenSet = true;
    }

    if (value.HasMember("SessionConfig") && !value["SessionConfig"].IsNull())
    {
        if (!value["SessionConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPServer.SessionConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sessionConfig.Deserialize(value["SessionConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sessionConfigHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPServer.Timeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetUint64();
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("RetryCount") && !value["RetryCount"].IsNull())
    {
        if (!value["RetryCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPServer.RetryCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_retryCount = value["RetryCount"].GetUint64();
        m_retryCountHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPServer.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPServer.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPServer.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPServer.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("EnableHealthCheck") && !value["EnableHealthCheck"].IsNull())
    {
        if (!value["EnableHealthCheck"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPServer.EnableHealthCheck` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableHealthCheck = value["EnableHealthCheck"].GetBool();
        m_enableHealthCheckHasBeenSet = true;
    }

    if (value.HasMember("HealthCheck") && !value["HealthCheck"].IsNull())
    {
        if (!value["HealthCheck"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPServer.HealthCheck` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_healthCheck.Deserialize(value["HealthCheck"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_healthCheckHasBeenSet = true;
    }

    if (value.HasMember("ToolCountLimit") && !value["ToolCountLimit"].IsNull())
    {
        if (!value["ToolCountLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPServer.ToolCountLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_toolCountLimit = value["ToolCountLimit"].GetUint64();
        m_toolCountLimitHasBeenSet = true;
    }

    if (value.HasMember("ConflictStrategy") && !value["ConflictStrategy"].IsNull())
    {
        if (!value["ConflictStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPServer.ConflictStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_conflictStrategy = string(value["ConflictStrategy"].GetString());
        m_conflictStrategyHasBeenSet = true;
    }

    if (value.HasMember("MarketStatus") && !value["MarketStatus"].IsNull())
    {
        if (!value["MarketStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPServer.MarketStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_marketStatus = string(value["MarketStatus"].GetString());
        m_marketStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWMCPServer::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serverIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_serverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverType.c_str(), allocator).Move(), allocator);
    }

    if (m_transportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Transport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transport.c_str(), allocator).Move(), allocator);
    }

    if (m_upstreamTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upstreamType.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_mCPEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MCPEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mCPEndpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_upstreamInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_upstreamInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sessionConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sessionConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

    if (m_retryCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retryCount, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHealthCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableHealthCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableHealthCheck, allocator);
    }

    if (m_healthCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_healthCheck.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_toolCountLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolCountLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_toolCountLimit, allocator);
    }

    if (m_conflictStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConflictStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_conflictStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_marketStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarketStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_marketStatus.c_str(), allocator).Move(), allocator);
    }

}


string AIGWMCPServer::GetServerId() const
{
    return m_serverId;
}

void AIGWMCPServer::SetServerId(const string& _serverId)
{
    m_serverId = _serverId;
    m_serverIdHasBeenSet = true;
}

bool AIGWMCPServer::ServerIdHasBeenSet() const
{
    return m_serverIdHasBeenSet;
}

string AIGWMCPServer::GetName() const
{
    return m_name;
}

void AIGWMCPServer::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AIGWMCPServer::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AIGWMCPServer::GetServerType() const
{
    return m_serverType;
}

void AIGWMCPServer::SetServerType(const string& _serverType)
{
    m_serverType = _serverType;
    m_serverTypeHasBeenSet = true;
}

bool AIGWMCPServer::ServerTypeHasBeenSet() const
{
    return m_serverTypeHasBeenSet;
}

string AIGWMCPServer::GetTransport() const
{
    return m_transport;
}

void AIGWMCPServer::SetTransport(const string& _transport)
{
    m_transport = _transport;
    m_transportHasBeenSet = true;
}

bool AIGWMCPServer::TransportHasBeenSet() const
{
    return m_transportHasBeenSet;
}

string AIGWMCPServer::GetUpstreamType() const
{
    return m_upstreamType;
}

void AIGWMCPServer::SetUpstreamType(const string& _upstreamType)
{
    m_upstreamType = _upstreamType;
    m_upstreamTypeHasBeenSet = true;
}

bool AIGWMCPServer::UpstreamTypeHasBeenSet() const
{
    return m_upstreamTypeHasBeenSet;
}

string AIGWMCPServer::GetDisplayName() const
{
    return m_displayName;
}

void AIGWMCPServer::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool AIGWMCPServer::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string AIGWMCPServer::GetMCPEndpoint() const
{
    return m_mCPEndpoint;
}

void AIGWMCPServer::SetMCPEndpoint(const string& _mCPEndpoint)
{
    m_mCPEndpoint = _mCPEndpoint;
    m_mCPEndpointHasBeenSet = true;
}

bool AIGWMCPServer::MCPEndpointHasBeenSet() const
{
    return m_mCPEndpointHasBeenSet;
}

AIGWMCPUpstreamInfoDetail AIGWMCPServer::GetUpstreamInfo() const
{
    return m_upstreamInfo;
}

void AIGWMCPServer::SetUpstreamInfo(const AIGWMCPUpstreamInfoDetail& _upstreamInfo)
{
    m_upstreamInfo = _upstreamInfo;
    m_upstreamInfoHasBeenSet = true;
}

bool AIGWMCPServer::UpstreamInfoHasBeenSet() const
{
    return m_upstreamInfoHasBeenSet;
}

AIGWMCPSessionConfig AIGWMCPServer::GetSessionConfig() const
{
    return m_sessionConfig;
}

void AIGWMCPServer::SetSessionConfig(const AIGWMCPSessionConfig& _sessionConfig)
{
    m_sessionConfig = _sessionConfig;
    m_sessionConfigHasBeenSet = true;
}

bool AIGWMCPServer::SessionConfigHasBeenSet() const
{
    return m_sessionConfigHasBeenSet;
}

uint64_t AIGWMCPServer::GetTimeout() const
{
    return m_timeout;
}

void AIGWMCPServer::SetTimeout(const uint64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool AIGWMCPServer::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

uint64_t AIGWMCPServer::GetRetryCount() const
{
    return m_retryCount;
}

void AIGWMCPServer::SetRetryCount(const uint64_t& _retryCount)
{
    m_retryCount = _retryCount;
    m_retryCountHasBeenSet = true;
}

bool AIGWMCPServer::RetryCountHasBeenSet() const
{
    return m_retryCountHasBeenSet;
}

string AIGWMCPServer::GetCreateTime() const
{
    return m_createTime;
}

void AIGWMCPServer::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AIGWMCPServer::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AIGWMCPServer::GetUpdateTime() const
{
    return m_updateTime;
}

void AIGWMCPServer::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AIGWMCPServer::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string AIGWMCPServer::GetDescription() const
{
    return m_description;
}

void AIGWMCPServer::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AIGWMCPServer::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string AIGWMCPServer::GetStatus() const
{
    return m_status;
}

void AIGWMCPServer::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AIGWMCPServer::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool AIGWMCPServer::GetEnableHealthCheck() const
{
    return m_enableHealthCheck;
}

void AIGWMCPServer::SetEnableHealthCheck(const bool& _enableHealthCheck)
{
    m_enableHealthCheck = _enableHealthCheck;
    m_enableHealthCheckHasBeenSet = true;
}

bool AIGWMCPServer::EnableHealthCheckHasBeenSet() const
{
    return m_enableHealthCheckHasBeenSet;
}

AIGWHealthCheckSetting AIGWMCPServer::GetHealthCheck() const
{
    return m_healthCheck;
}

void AIGWMCPServer::SetHealthCheck(const AIGWHealthCheckSetting& _healthCheck)
{
    m_healthCheck = _healthCheck;
    m_healthCheckHasBeenSet = true;
}

bool AIGWMCPServer::HealthCheckHasBeenSet() const
{
    return m_healthCheckHasBeenSet;
}

uint64_t AIGWMCPServer::GetToolCountLimit() const
{
    return m_toolCountLimit;
}

void AIGWMCPServer::SetToolCountLimit(const uint64_t& _toolCountLimit)
{
    m_toolCountLimit = _toolCountLimit;
    m_toolCountLimitHasBeenSet = true;
}

bool AIGWMCPServer::ToolCountLimitHasBeenSet() const
{
    return m_toolCountLimitHasBeenSet;
}

string AIGWMCPServer::GetConflictStrategy() const
{
    return m_conflictStrategy;
}

void AIGWMCPServer::SetConflictStrategy(const string& _conflictStrategy)
{
    m_conflictStrategy = _conflictStrategy;
    m_conflictStrategyHasBeenSet = true;
}

bool AIGWMCPServer::ConflictStrategyHasBeenSet() const
{
    return m_conflictStrategyHasBeenSet;
}

string AIGWMCPServer::GetMarketStatus() const
{
    return m_marketStatus;
}

void AIGWMCPServer::SetMarketStatus(const string& _marketStatus)
{
    m_marketStatus = _marketStatus;
    m_marketStatusHasBeenSet = true;
}

bool AIGWMCPServer::MarketStatusHasBeenSet() const
{
    return m_marketStatusHasBeenSet;
}

