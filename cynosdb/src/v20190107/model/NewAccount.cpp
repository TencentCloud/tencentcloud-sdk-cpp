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

#include <tencentcloud/cynosdb/v20190107/model/NewAccount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

NewAccount::NewAccount() :
    m_accountNameHasBeenSet(false),
    m_accountPasswordHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_maxUserConnectionsHasBeenSet(false)
{
}

CoreInternalOutcome NewAccount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccountName") && !value["AccountName"].IsNull())
    {
        if (!value["AccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewAccount.AccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountName = string(value["AccountName"].GetString());
        m_accountNameHasBeenSet = true;
    }

    if (value.HasMember("AccountPassword") && !value["AccountPassword"].IsNull())
    {
        if (!value["AccountPassword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewAccount.AccountPassword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountPassword = string(value["AccountPassword"].GetString());
        m_accountPasswordHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewAccount.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewAccount.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("MaxUserConnections") && !value["MaxUserConnections"].IsNull())
    {
        if (!value["MaxUserConnections"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NewAccount.MaxUserConnections` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxUserConnections = value["MaxUserConnections"].GetInt64();
        m_maxUserConnectionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NewAccount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountName.c_str(), allocator).Move(), allocator);
    }

    if (m_accountPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountPassword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_maxUserConnectionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxUserConnections";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxUserConnections, allocator);
    }

}


string NewAccount::GetAccountName() const
{
    return m_accountName;
}

void NewAccount::SetAccountName(const string& _accountName)
{
    m_accountName = _accountName;
    m_accountNameHasBeenSet = true;
}

bool NewAccount::AccountNameHasBeenSet() const
{
    return m_accountNameHasBeenSet;
}

string NewAccount::GetAccountPassword() const
{
    return m_accountPassword;
}

void NewAccount::SetAccountPassword(const string& _accountPassword)
{
    m_accountPassword = _accountPassword;
    m_accountPasswordHasBeenSet = true;
}

bool NewAccount::AccountPasswordHasBeenSet() const
{
    return m_accountPasswordHasBeenSet;
}

string NewAccount::GetHost() const
{
    return m_host;
}

void NewAccount::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool NewAccount::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string NewAccount::GetDescription() const
{
    return m_description;
}

void NewAccount::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool NewAccount::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t NewAccount::GetMaxUserConnections() const
{
    return m_maxUserConnections;
}

void NewAccount::SetMaxUserConnections(const int64_t& _maxUserConnections)
{
    m_maxUserConnections = _maxUserConnections;
    m_maxUserConnectionsHasBeenSet = true;
}

bool NewAccount::MaxUserConnectionsHasBeenSet() const
{
    return m_maxUserConnectionsHasBeenSet;
}

