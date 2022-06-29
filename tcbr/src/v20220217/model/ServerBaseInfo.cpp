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

#include <tencentcloud/tcbr/v20220217/model/ServerBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcbr::V20220217::Model;
using namespace std;

ServerBaseInfo::ServerBaseInfo() :
    m_serverNameHasBeenSet(false),
    m_defaultDomainNameHasBeenSet(false),
    m_customDomainNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome ServerBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServerName") && !value["ServerName"].IsNull())
    {
        if (!value["ServerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerBaseInfo.ServerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverName = string(value["ServerName"].GetString());
        m_serverNameHasBeenSet = true;
    }

    if (value.HasMember("DefaultDomainName") && !value["DefaultDomainName"].IsNull())
    {
        if (!value["DefaultDomainName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerBaseInfo.DefaultDomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultDomainName = string(value["DefaultDomainName"].GetString());
        m_defaultDomainNameHasBeenSet = true;
    }

    if (value.HasMember("CustomDomainName") && !value["CustomDomainName"].IsNull())
    {
        if (!value["CustomDomainName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerBaseInfo.CustomDomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customDomainName = string(value["CustomDomainName"].GetString());
        m_customDomainNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerBaseInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerBaseInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServerBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverName.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultDomainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultDomainName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultDomainName.c_str(), allocator).Move(), allocator);
    }

    if (m_customDomainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomDomainName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customDomainName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string ServerBaseInfo::GetServerName() const
{
    return m_serverName;
}

void ServerBaseInfo::SetServerName(const string& _serverName)
{
    m_serverName = _serverName;
    m_serverNameHasBeenSet = true;
}

bool ServerBaseInfo::ServerNameHasBeenSet() const
{
    return m_serverNameHasBeenSet;
}

string ServerBaseInfo::GetDefaultDomainName() const
{
    return m_defaultDomainName;
}

void ServerBaseInfo::SetDefaultDomainName(const string& _defaultDomainName)
{
    m_defaultDomainName = _defaultDomainName;
    m_defaultDomainNameHasBeenSet = true;
}

bool ServerBaseInfo::DefaultDomainNameHasBeenSet() const
{
    return m_defaultDomainNameHasBeenSet;
}

string ServerBaseInfo::GetCustomDomainName() const
{
    return m_customDomainName;
}

void ServerBaseInfo::SetCustomDomainName(const string& _customDomainName)
{
    m_customDomainName = _customDomainName;
    m_customDomainNameHasBeenSet = true;
}

bool ServerBaseInfo::CustomDomainNameHasBeenSet() const
{
    return m_customDomainNameHasBeenSet;
}

string ServerBaseInfo::GetStatus() const
{
    return m_status;
}

void ServerBaseInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ServerBaseInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ServerBaseInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void ServerBaseInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ServerBaseInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

