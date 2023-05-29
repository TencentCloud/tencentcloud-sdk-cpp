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

#include <tencentcloud/dcdb/v20180411/model/DBAccount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

DBAccount::DBAccount() :
    m_userNameHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_readOnlyHasBeenSet(false),
    m_delayThreshHasBeenSet(false),
    m_slaveConstHasBeenSet(false),
    m_maxUserConnectionsHasBeenSet(false)
{
}

CoreInternalOutcome DBAccount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBAccount.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBAccount.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBAccount.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBAccount.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBAccount.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ReadOnly") && !value["ReadOnly"].IsNull())
    {
        if (!value["ReadOnly"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBAccount.ReadOnly` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_readOnly = value["ReadOnly"].GetInt64();
        m_readOnlyHasBeenSet = true;
    }

    if (value.HasMember("DelayThresh") && !value["DelayThresh"].IsNull())
    {
        if (!value["DelayThresh"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBAccount.DelayThresh` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_delayThresh = value["DelayThresh"].GetInt64();
        m_delayThreshHasBeenSet = true;
    }

    if (value.HasMember("SlaveConst") && !value["SlaveConst"].IsNull())
    {
        if (!value["SlaveConst"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBAccount.SlaveConst` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_slaveConst = value["SlaveConst"].GetInt64();
        m_slaveConstHasBeenSet = true;
    }

    if (value.HasMember("MaxUserConnections") && !value["MaxUserConnections"].IsNull())
    {
        if (!value["MaxUserConnections"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBAccount.MaxUserConnections` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxUserConnections = value["MaxUserConnections"].GetInt64();
        m_maxUserConnectionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DBAccount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
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

    if (m_readOnlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readOnly, allocator);
    }

    if (m_delayThreshHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayThresh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_delayThresh, allocator);
    }

    if (m_slaveConstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaveConst";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_slaveConst, allocator);
    }

    if (m_maxUserConnectionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxUserConnections";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxUserConnections, allocator);
    }

}


string DBAccount::GetUserName() const
{
    return m_userName;
}

void DBAccount::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool DBAccount::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string DBAccount::GetHost() const
{
    return m_host;
}

void DBAccount::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool DBAccount::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string DBAccount::GetDescription() const
{
    return m_description;
}

void DBAccount::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DBAccount::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DBAccount::GetCreateTime() const
{
    return m_createTime;
}

void DBAccount::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DBAccount::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DBAccount::GetUpdateTime() const
{
    return m_updateTime;
}

void DBAccount::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DBAccount::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t DBAccount::GetReadOnly() const
{
    return m_readOnly;
}

void DBAccount::SetReadOnly(const int64_t& _readOnly)
{
    m_readOnly = _readOnly;
    m_readOnlyHasBeenSet = true;
}

bool DBAccount::ReadOnlyHasBeenSet() const
{
    return m_readOnlyHasBeenSet;
}

int64_t DBAccount::GetDelayThresh() const
{
    return m_delayThresh;
}

void DBAccount::SetDelayThresh(const int64_t& _delayThresh)
{
    m_delayThresh = _delayThresh;
    m_delayThreshHasBeenSet = true;
}

bool DBAccount::DelayThreshHasBeenSet() const
{
    return m_delayThreshHasBeenSet;
}

int64_t DBAccount::GetSlaveConst() const
{
    return m_slaveConst;
}

void DBAccount::SetSlaveConst(const int64_t& _slaveConst)
{
    m_slaveConst = _slaveConst;
    m_slaveConstHasBeenSet = true;
}

bool DBAccount::SlaveConstHasBeenSet() const
{
    return m_slaveConstHasBeenSet;
}

int64_t DBAccount::GetMaxUserConnections() const
{
    return m_maxUserConnections;
}

void DBAccount::SetMaxUserConnections(const int64_t& _maxUserConnections)
{
    m_maxUserConnections = _maxUserConnections;
    m_maxUserConnectionsHasBeenSet = true;
}

bool DBAccount::MaxUserConnectionsHasBeenSet() const
{
    return m_maxUserConnectionsHasBeenSet;
}

