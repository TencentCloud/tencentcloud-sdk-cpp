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

#include <tencentcloud/dlc/v20210125/model/NotebookSessions.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

NotebookSessions::NotebookSessions() :
    m_kindHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_proxyUserHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_sparkAppIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_dataEngineNameHasBeenSet(false),
    m_lastRunningTimeHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_sparkUiUrlHasBeenSet(false),
    m_sessionTypeHasBeenSet(false),
    m_dataEngineIdHasBeenSet(false),
    m_resourceGroupIdHasBeenSet(false),
    m_resourceGroupNameHasBeenSet(false)
{
}

CoreInternalOutcome NotebookSessions::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessions.Kind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kind = string(value["Kind"].GetString());
        m_kindHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessions.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("ProxyUser") && !value["ProxyUser"].IsNull())
    {
        if (!value["ProxyUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessions.ProxyUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyUser = string(value["ProxyUser"].GetString());
        m_proxyUserHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessions.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("SparkAppId") && !value["SparkAppId"].IsNull())
    {
        if (!value["SparkAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessions.SparkAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sparkAppId = string(value["SparkAppId"].GetString());
        m_sparkAppIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessions.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessions.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("DataEngineName") && !value["DataEngineName"].IsNull())
    {
        if (!value["DataEngineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessions.DataEngineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataEngineName = string(value["DataEngineName"].GetString());
        m_dataEngineNameHasBeenSet = true;
    }

    if (value.HasMember("LastRunningTime") && !value["LastRunningTime"].IsNull())
    {
        if (!value["LastRunningTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessions.LastRunningTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastRunningTime = string(value["LastRunningTime"].GetString());
        m_lastRunningTimeHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessions.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("SparkUiUrl") && !value["SparkUiUrl"].IsNull())
    {
        if (!value["SparkUiUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessions.SparkUiUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sparkUiUrl = string(value["SparkUiUrl"].GetString());
        m_sparkUiUrlHasBeenSet = true;
    }

    if (value.HasMember("SessionType") && !value["SessionType"].IsNull())
    {
        if (!value["SessionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessions.SessionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionType = string(value["SessionType"].GetString());
        m_sessionTypeHasBeenSet = true;
    }

    if (value.HasMember("DataEngineId") && !value["DataEngineId"].IsNull())
    {
        if (!value["DataEngineId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessions.DataEngineId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataEngineId = string(value["DataEngineId"].GetString());
        m_dataEngineIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupId") && !value["ResourceGroupId"].IsNull())
    {
        if (!value["ResourceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessions.ResourceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupId = string(value["ResourceGroupId"].GetString());
        m_resourceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupName") && !value["ResourceGroupName"].IsNull())
    {
        if (!value["ResourceGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessions.ResourceGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupName = string(value["ResourceGroupName"].GetString());
        m_resourceGroupNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NotebookSessions::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kind.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyUser.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_sparkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sparkAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dataEngineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataEngineName.c_str(), allocator).Move(), allocator);
    }

    if (m_lastRunningTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastRunningTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastRunningTime.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_sparkUiUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkUiUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sparkUiUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionType.c_str(), allocator).Move(), allocator);
    }

    if (m_dataEngineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataEngineId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupName.c_str(), allocator).Move(), allocator);
    }

}


string NotebookSessions::GetKind() const
{
    return m_kind;
}

void NotebookSessions::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool NotebookSessions::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string NotebookSessions::GetSessionId() const
{
    return m_sessionId;
}

void NotebookSessions::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool NotebookSessions::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string NotebookSessions::GetProxyUser() const
{
    return m_proxyUser;
}

void NotebookSessions::SetProxyUser(const string& _proxyUser)
{
    m_proxyUser = _proxyUser;
    m_proxyUserHasBeenSet = true;
}

bool NotebookSessions::ProxyUserHasBeenSet() const
{
    return m_proxyUserHasBeenSet;
}

string NotebookSessions::GetState() const
{
    return m_state;
}

void NotebookSessions::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool NotebookSessions::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string NotebookSessions::GetSparkAppId() const
{
    return m_sparkAppId;
}

void NotebookSessions::SetSparkAppId(const string& _sparkAppId)
{
    m_sparkAppId = _sparkAppId;
    m_sparkAppIdHasBeenSet = true;
}

bool NotebookSessions::SparkAppIdHasBeenSet() const
{
    return m_sparkAppIdHasBeenSet;
}

string NotebookSessions::GetName() const
{
    return m_name;
}

void NotebookSessions::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool NotebookSessions::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string NotebookSessions::GetCreateTime() const
{
    return m_createTime;
}

void NotebookSessions::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool NotebookSessions::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string NotebookSessions::GetDataEngineName() const
{
    return m_dataEngineName;
}

void NotebookSessions::SetDataEngineName(const string& _dataEngineName)
{
    m_dataEngineName = _dataEngineName;
    m_dataEngineNameHasBeenSet = true;
}

bool NotebookSessions::DataEngineNameHasBeenSet() const
{
    return m_dataEngineNameHasBeenSet;
}

string NotebookSessions::GetLastRunningTime() const
{
    return m_lastRunningTime;
}

void NotebookSessions::SetLastRunningTime(const string& _lastRunningTime)
{
    m_lastRunningTime = _lastRunningTime;
    m_lastRunningTimeHasBeenSet = true;
}

bool NotebookSessions::LastRunningTimeHasBeenSet() const
{
    return m_lastRunningTimeHasBeenSet;
}

string NotebookSessions::GetCreator() const
{
    return m_creator;
}

void NotebookSessions::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool NotebookSessions::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string NotebookSessions::GetSparkUiUrl() const
{
    return m_sparkUiUrl;
}

void NotebookSessions::SetSparkUiUrl(const string& _sparkUiUrl)
{
    m_sparkUiUrl = _sparkUiUrl;
    m_sparkUiUrlHasBeenSet = true;
}

bool NotebookSessions::SparkUiUrlHasBeenSet() const
{
    return m_sparkUiUrlHasBeenSet;
}

string NotebookSessions::GetSessionType() const
{
    return m_sessionType;
}

void NotebookSessions::SetSessionType(const string& _sessionType)
{
    m_sessionType = _sessionType;
    m_sessionTypeHasBeenSet = true;
}

bool NotebookSessions::SessionTypeHasBeenSet() const
{
    return m_sessionTypeHasBeenSet;
}

string NotebookSessions::GetDataEngineId() const
{
    return m_dataEngineId;
}

void NotebookSessions::SetDataEngineId(const string& _dataEngineId)
{
    m_dataEngineId = _dataEngineId;
    m_dataEngineIdHasBeenSet = true;
}

bool NotebookSessions::DataEngineIdHasBeenSet() const
{
    return m_dataEngineIdHasBeenSet;
}

string NotebookSessions::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void NotebookSessions::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool NotebookSessions::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}

string NotebookSessions::GetResourceGroupName() const
{
    return m_resourceGroupName;
}

void NotebookSessions::SetResourceGroupName(const string& _resourceGroupName)
{
    m_resourceGroupName = _resourceGroupName;
    m_resourceGroupNameHasBeenSet = true;
}

bool NotebookSessions::ResourceGroupNameHasBeenSet() const
{
    return m_resourceGroupNameHasBeenSet;
}

