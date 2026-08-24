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

#include <tencentcloud/csip/v20221121/model/DspmAuditSessionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmAuditSessionInfo::DspmAuditSessionInfo() :
    m_sqlCountHasBeenSet(false),
    m_logoutTimeHasBeenSet(false),
    m_clientIpHasBeenSet(false),
    m_clientPortHasBeenSet(false),
    m_dbIpHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_dbPortHasBeenSet(false),
    m_dbUserHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_opTimeHasBeenSet(false),
    m_retNoHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_loginTimeHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_sourceTypeEnHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_sourceTypeEnDisplayNameHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_dbTypeHasBeenSet(false),
    m_assetTypeHasBeenSet(false)
{
}

CoreInternalOutcome DspmAuditSessionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SqlCount") && !value["SqlCount"].IsNull())
    {
        if (!value["SqlCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAuditSessionInfo.SqlCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sqlCount = value["SqlCount"].GetInt64();
        m_sqlCountHasBeenSet = true;
    }

    if (value.HasMember("LogoutTime") && !value["LogoutTime"].IsNull())
    {
        if (!value["LogoutTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAuditSessionInfo.LogoutTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logoutTime = value["LogoutTime"].GetInt64();
        m_logoutTimeHasBeenSet = true;
    }

    if (value.HasMember("ClientIp") && !value["ClientIp"].IsNull())
    {
        if (!value["ClientIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAuditSessionInfo.ClientIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientIp = string(value["ClientIp"].GetString());
        m_clientIpHasBeenSet = true;
    }

    if (value.HasMember("ClientPort") && !value["ClientPort"].IsNull())
    {
        if (!value["ClientPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAuditSessionInfo.ClientPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clientPort = value["ClientPort"].GetInt64();
        m_clientPortHasBeenSet = true;
    }

    if (value.HasMember("DbIp") && !value["DbIp"].IsNull())
    {
        if (!value["DbIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAuditSessionInfo.DbIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbIp = string(value["DbIp"].GetString());
        m_dbIpHasBeenSet = true;
    }

    if (value.HasMember("DbName") && !value["DbName"].IsNull())
    {
        if (!value["DbName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAuditSessionInfo.DbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbName = string(value["DbName"].GetString());
        m_dbNameHasBeenSet = true;
    }

    if (value.HasMember("DbPort") && !value["DbPort"].IsNull())
    {
        if (!value["DbPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAuditSessionInfo.DbPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dbPort = value["DbPort"].GetInt64();
        m_dbPortHasBeenSet = true;
    }

    if (value.HasMember("DbUser") && !value["DbUser"].IsNull())
    {
        if (!value["DbUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAuditSessionInfo.DbUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbUser = string(value["DbUser"].GetString());
        m_dbUserHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAuditSessionInfo.InstanceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = value["InstanceId"].GetInt64();
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("OpTime") && !value["OpTime"].IsNull())
    {
        if (!value["OpTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAuditSessionInfo.OpTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_opTime = value["OpTime"].GetInt64();
        m_opTimeHasBeenSet = true;
    }

    if (value.HasMember("RetNo") && !value["RetNo"].IsNull())
    {
        if (!value["RetNo"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAuditSessionInfo.RetNo` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retNo = value["RetNo"].GetInt64();
        m_retNoHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAuditSessionInfo.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("LoginTime") && !value["LoginTime"].IsNull())
    {
        if (!value["LoginTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAuditSessionInfo.LoginTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_loginTime = value["LoginTime"].GetInt64();
        m_loginTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAuditSessionInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAuditSessionInfo.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAuditSessionInfo.SourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = string(value["SourceType"].GetString());
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceTypeEn") && !value["SourceTypeEn"].IsNull())
    {
        if (!value["SourceTypeEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAuditSessionInfo.SourceTypeEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceTypeEn = string(value["SourceTypeEn"].GetString());
        m_sourceTypeEnHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAuditSessionInfo.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("SourceTypeEnDisplayName") && !value["SourceTypeEnDisplayName"].IsNull())
    {
        if (!value["SourceTypeEnDisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAuditSessionInfo.SourceTypeEnDisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceTypeEnDisplayName = string(value["SourceTypeEnDisplayName"].GetString());
        m_sourceTypeEnDisplayNameHasBeenSet = true;
    }

    if (value.HasMember("NickName") && !value["NickName"].IsNull())
    {
        if (!value["NickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAuditSessionInfo.NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(value["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAuditSessionInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("DbType") && !value["DbType"].IsNull())
    {
        if (!value["DbType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAuditSessionInfo.DbType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbType = string(value["DbType"].GetString());
        m_dbTypeHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAuditSessionInfo.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmAuditSessionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sqlCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sqlCount, allocator);
    }

    if (m_logoutTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogoutTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logoutTime, allocator);
    }

    if (m_clientIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientIp.c_str(), allocator).Move(), allocator);
    }

    if (m_clientPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clientPort, allocator);
    }

    if (m_dbIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbIp.c_str(), allocator).Move(), allocator);
    }

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_dbPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dbPort, allocator);
    }

    if (m_dbUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbUser.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceId, allocator);
    }

    if (m_opTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_opTime, allocator);
    }

    if (m_retNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retNo, allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_loginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loginTime, allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceTypeEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceTypeEn.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_sourceTypeEnDisplayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceTypeEnDisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceTypeEnDisplayName.c_str(), allocator).Move(), allocator);
    }

    if (m_nickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_dbTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbType.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

}


int64_t DspmAuditSessionInfo::GetSqlCount() const
{
    return m_sqlCount;
}

void DspmAuditSessionInfo::SetSqlCount(const int64_t& _sqlCount)
{
    m_sqlCount = _sqlCount;
    m_sqlCountHasBeenSet = true;
}

bool DspmAuditSessionInfo::SqlCountHasBeenSet() const
{
    return m_sqlCountHasBeenSet;
}

int64_t DspmAuditSessionInfo::GetLogoutTime() const
{
    return m_logoutTime;
}

void DspmAuditSessionInfo::SetLogoutTime(const int64_t& _logoutTime)
{
    m_logoutTime = _logoutTime;
    m_logoutTimeHasBeenSet = true;
}

bool DspmAuditSessionInfo::LogoutTimeHasBeenSet() const
{
    return m_logoutTimeHasBeenSet;
}

string DspmAuditSessionInfo::GetClientIp() const
{
    return m_clientIp;
}

void DspmAuditSessionInfo::SetClientIp(const string& _clientIp)
{
    m_clientIp = _clientIp;
    m_clientIpHasBeenSet = true;
}

bool DspmAuditSessionInfo::ClientIpHasBeenSet() const
{
    return m_clientIpHasBeenSet;
}

int64_t DspmAuditSessionInfo::GetClientPort() const
{
    return m_clientPort;
}

void DspmAuditSessionInfo::SetClientPort(const int64_t& _clientPort)
{
    m_clientPort = _clientPort;
    m_clientPortHasBeenSet = true;
}

bool DspmAuditSessionInfo::ClientPortHasBeenSet() const
{
    return m_clientPortHasBeenSet;
}

string DspmAuditSessionInfo::GetDbIp() const
{
    return m_dbIp;
}

void DspmAuditSessionInfo::SetDbIp(const string& _dbIp)
{
    m_dbIp = _dbIp;
    m_dbIpHasBeenSet = true;
}

bool DspmAuditSessionInfo::DbIpHasBeenSet() const
{
    return m_dbIpHasBeenSet;
}

string DspmAuditSessionInfo::GetDbName() const
{
    return m_dbName;
}

void DspmAuditSessionInfo::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool DspmAuditSessionInfo::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

int64_t DspmAuditSessionInfo::GetDbPort() const
{
    return m_dbPort;
}

void DspmAuditSessionInfo::SetDbPort(const int64_t& _dbPort)
{
    m_dbPort = _dbPort;
    m_dbPortHasBeenSet = true;
}

bool DspmAuditSessionInfo::DbPortHasBeenSet() const
{
    return m_dbPortHasBeenSet;
}

string DspmAuditSessionInfo::GetDbUser() const
{
    return m_dbUser;
}

void DspmAuditSessionInfo::SetDbUser(const string& _dbUser)
{
    m_dbUser = _dbUser;
    m_dbUserHasBeenSet = true;
}

bool DspmAuditSessionInfo::DbUserHasBeenSet() const
{
    return m_dbUserHasBeenSet;
}

int64_t DspmAuditSessionInfo::GetInstanceId() const
{
    return m_instanceId;
}

void DspmAuditSessionInfo::SetInstanceId(const int64_t& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DspmAuditSessionInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DspmAuditSessionInfo::GetOpTime() const
{
    return m_opTime;
}

void DspmAuditSessionInfo::SetOpTime(const int64_t& _opTime)
{
    m_opTime = _opTime;
    m_opTimeHasBeenSet = true;
}

bool DspmAuditSessionInfo::OpTimeHasBeenSet() const
{
    return m_opTimeHasBeenSet;
}

int64_t DspmAuditSessionInfo::GetRetNo() const
{
    return m_retNo;
}

void DspmAuditSessionInfo::SetRetNo(const int64_t& _retNo)
{
    m_retNo = _retNo;
    m_retNoHasBeenSet = true;
}

bool DspmAuditSessionInfo::RetNoHasBeenSet() const
{
    return m_retNoHasBeenSet;
}

string DspmAuditSessionInfo::GetSessionId() const
{
    return m_sessionId;
}

void DspmAuditSessionInfo::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool DspmAuditSessionInfo::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

int64_t DspmAuditSessionInfo::GetLoginTime() const
{
    return m_loginTime;
}

void DspmAuditSessionInfo::SetLoginTime(const int64_t& _loginTime)
{
    m_loginTime = _loginTime;
    m_loginTimeHasBeenSet = true;
}

bool DspmAuditSessionInfo::LoginTimeHasBeenSet() const
{
    return m_loginTimeHasBeenSet;
}

string DspmAuditSessionInfo::GetInstanceName() const
{
    return m_instanceName;
}

void DspmAuditSessionInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool DspmAuditSessionInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string DspmAuditSessionInfo::GetAssetName() const
{
    return m_assetName;
}

void DspmAuditSessionInfo::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool DspmAuditSessionInfo::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

string DspmAuditSessionInfo::GetSourceType() const
{
    return m_sourceType;
}

void DspmAuditSessionInfo::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool DspmAuditSessionInfo::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string DspmAuditSessionInfo::GetSourceTypeEn() const
{
    return m_sourceTypeEn;
}

void DspmAuditSessionInfo::SetSourceTypeEn(const string& _sourceTypeEn)
{
    m_sourceTypeEn = _sourceTypeEn;
    m_sourceTypeEnHasBeenSet = true;
}

bool DspmAuditSessionInfo::SourceTypeEnHasBeenSet() const
{
    return m_sourceTypeEnHasBeenSet;
}

uint64_t DspmAuditSessionInfo::GetAppId() const
{
    return m_appId;
}

void DspmAuditSessionInfo::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DspmAuditSessionInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DspmAuditSessionInfo::GetSourceTypeEnDisplayName() const
{
    return m_sourceTypeEnDisplayName;
}

void DspmAuditSessionInfo::SetSourceTypeEnDisplayName(const string& _sourceTypeEnDisplayName)
{
    m_sourceTypeEnDisplayName = _sourceTypeEnDisplayName;
    m_sourceTypeEnDisplayNameHasBeenSet = true;
}

bool DspmAuditSessionInfo::SourceTypeEnDisplayNameHasBeenSet() const
{
    return m_sourceTypeEnDisplayNameHasBeenSet;
}

string DspmAuditSessionInfo::GetNickName() const
{
    return m_nickName;
}

void DspmAuditSessionInfo::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool DspmAuditSessionInfo::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

string DspmAuditSessionInfo::GetUin() const
{
    return m_uin;
}

void DspmAuditSessionInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool DspmAuditSessionInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string DspmAuditSessionInfo::GetDbType() const
{
    return m_dbType;
}

void DspmAuditSessionInfo::SetDbType(const string& _dbType)
{
    m_dbType = _dbType;
    m_dbTypeHasBeenSet = true;
}

bool DspmAuditSessionInfo::DbTypeHasBeenSet() const
{
    return m_dbTypeHasBeenSet;
}

string DspmAuditSessionInfo::GetAssetType() const
{
    return m_assetType;
}

void DspmAuditSessionInfo::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool DspmAuditSessionInfo::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

