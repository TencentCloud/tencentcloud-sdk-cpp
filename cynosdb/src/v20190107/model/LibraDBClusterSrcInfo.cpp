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

#include <tencentcloud/cynosdb/v20190107/model/LibraDBClusterSrcInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

LibraDBClusterSrcInfo::LibraDBClusterSrcInfo() :
    m_srcInstanceTypeHasBeenSet(false),
    m_accessTypeHasBeenSet(false),
    m_srcInstanceIdHasBeenSet(false),
    m_srcClusterIdHasBeenSet(false),
    m_iPHasBeenSet(false),
    m_portHasBeenSet(false),
    m_userHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_sqlModeHasBeenSet(false),
    m_srcAppIdHasBeenSet(false),
    m_srcUinHasBeenSet(false),
    m_srcSubAccountUinHasBeenSet(false),
    m_accountModeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_operationHasBeenSet(false)
{
}

CoreInternalOutcome LibraDBClusterSrcInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SrcInstanceType") && !value["SrcInstanceType"].IsNull())
    {
        if (!value["SrcInstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSrcInfo.SrcInstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcInstanceType = string(value["SrcInstanceType"].GetString());
        m_srcInstanceTypeHasBeenSet = true;
    }

    if (value.HasMember("AccessType") && !value["AccessType"].IsNull())
    {
        if (!value["AccessType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSrcInfo.AccessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessType = string(value["AccessType"].GetString());
        m_accessTypeHasBeenSet = true;
    }

    if (value.HasMember("SrcInstanceId") && !value["SrcInstanceId"].IsNull())
    {
        if (!value["SrcInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSrcInfo.SrcInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcInstanceId = string(value["SrcInstanceId"].GetString());
        m_srcInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("SrcClusterId") && !value["SrcClusterId"].IsNull())
    {
        if (!value["SrcClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSrcInfo.SrcClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcClusterId = string(value["SrcClusterId"].GetString());
        m_srcClusterIdHasBeenSet = true;
    }

    if (value.HasMember("IP") && !value["IP"].IsNull())
    {
        if (!value["IP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSrcInfo.IP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iP = string(value["IP"].GetString());
        m_iPHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSrcInfo.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSrcInfo.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSrcInfo.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("SqlMode") && !value["SqlMode"].IsNull())
    {
        if (!value["SqlMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSrcInfo.SqlMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlMode = string(value["SqlMode"].GetString());
        m_sqlModeHasBeenSet = true;
    }

    if (value.HasMember("SrcAppId") && !value["SrcAppId"].IsNull())
    {
        if (!value["SrcAppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSrcInfo.SrcAppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_srcAppId = value["SrcAppId"].GetInt64();
        m_srcAppIdHasBeenSet = true;
    }

    if (value.HasMember("SrcUin") && !value["SrcUin"].IsNull())
    {
        if (!value["SrcUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSrcInfo.SrcUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcUin = string(value["SrcUin"].GetString());
        m_srcUinHasBeenSet = true;
    }

    if (value.HasMember("SrcSubAccountUin") && !value["SrcSubAccountUin"].IsNull())
    {
        if (!value["SrcSubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSrcInfo.SrcSubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcSubAccountUin = string(value["SrcSubAccountUin"].GetString());
        m_srcSubAccountUinHasBeenSet = true;
    }

    if (value.HasMember("AccountMode") && !value["AccountMode"].IsNull())
    {
        if (!value["AccountMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSrcInfo.AccountMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountMode = string(value["AccountMode"].GetString());
        m_accountModeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSrcInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Operation") && !value["Operation"].IsNull())
    {
        if (!value["Operation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSrcInfo.Operation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operation = string(value["Operation"].GetString());
        m_operationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LibraDBClusterSrcInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_srcInstanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcInstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcInstanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessType.c_str(), allocator).Move(), allocator);
    }

    if (m_srcInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_srcClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_iPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iP.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sqlMode.c_str(), allocator).Move(), allocator);
    }

    if (m_srcAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_srcAppId, allocator);
    }

    if (m_srcUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcUin.c_str(), allocator).Move(), allocator);
    }

    if (m_srcSubAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcSubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcSubAccountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_accountModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountMode.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operation.c_str(), allocator).Move(), allocator);
    }

}


string LibraDBClusterSrcInfo::GetSrcInstanceType() const
{
    return m_srcInstanceType;
}

void LibraDBClusterSrcInfo::SetSrcInstanceType(const string& _srcInstanceType)
{
    m_srcInstanceType = _srcInstanceType;
    m_srcInstanceTypeHasBeenSet = true;
}

bool LibraDBClusterSrcInfo::SrcInstanceTypeHasBeenSet() const
{
    return m_srcInstanceTypeHasBeenSet;
}

string LibraDBClusterSrcInfo::GetAccessType() const
{
    return m_accessType;
}

void LibraDBClusterSrcInfo::SetAccessType(const string& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool LibraDBClusterSrcInfo::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

string LibraDBClusterSrcInfo::GetSrcInstanceId() const
{
    return m_srcInstanceId;
}

void LibraDBClusterSrcInfo::SetSrcInstanceId(const string& _srcInstanceId)
{
    m_srcInstanceId = _srcInstanceId;
    m_srcInstanceIdHasBeenSet = true;
}

bool LibraDBClusterSrcInfo::SrcInstanceIdHasBeenSet() const
{
    return m_srcInstanceIdHasBeenSet;
}

string LibraDBClusterSrcInfo::GetSrcClusterId() const
{
    return m_srcClusterId;
}

void LibraDBClusterSrcInfo::SetSrcClusterId(const string& _srcClusterId)
{
    m_srcClusterId = _srcClusterId;
    m_srcClusterIdHasBeenSet = true;
}

bool LibraDBClusterSrcInfo::SrcClusterIdHasBeenSet() const
{
    return m_srcClusterIdHasBeenSet;
}

string LibraDBClusterSrcInfo::GetIP() const
{
    return m_iP;
}

void LibraDBClusterSrcInfo::SetIP(const string& _iP)
{
    m_iP = _iP;
    m_iPHasBeenSet = true;
}

bool LibraDBClusterSrcInfo::IPHasBeenSet() const
{
    return m_iPHasBeenSet;
}

string LibraDBClusterSrcInfo::GetPort() const
{
    return m_port;
}

void LibraDBClusterSrcInfo::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool LibraDBClusterSrcInfo::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string LibraDBClusterSrcInfo::GetUser() const
{
    return m_user;
}

void LibraDBClusterSrcInfo::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool LibraDBClusterSrcInfo::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string LibraDBClusterSrcInfo::GetPassword() const
{
    return m_password;
}

void LibraDBClusterSrcInfo::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool LibraDBClusterSrcInfo::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string LibraDBClusterSrcInfo::GetSqlMode() const
{
    return m_sqlMode;
}

void LibraDBClusterSrcInfo::SetSqlMode(const string& _sqlMode)
{
    m_sqlMode = _sqlMode;
    m_sqlModeHasBeenSet = true;
}

bool LibraDBClusterSrcInfo::SqlModeHasBeenSet() const
{
    return m_sqlModeHasBeenSet;
}

int64_t LibraDBClusterSrcInfo::GetSrcAppId() const
{
    return m_srcAppId;
}

void LibraDBClusterSrcInfo::SetSrcAppId(const int64_t& _srcAppId)
{
    m_srcAppId = _srcAppId;
    m_srcAppIdHasBeenSet = true;
}

bool LibraDBClusterSrcInfo::SrcAppIdHasBeenSet() const
{
    return m_srcAppIdHasBeenSet;
}

string LibraDBClusterSrcInfo::GetSrcUin() const
{
    return m_srcUin;
}

void LibraDBClusterSrcInfo::SetSrcUin(const string& _srcUin)
{
    m_srcUin = _srcUin;
    m_srcUinHasBeenSet = true;
}

bool LibraDBClusterSrcInfo::SrcUinHasBeenSet() const
{
    return m_srcUinHasBeenSet;
}

string LibraDBClusterSrcInfo::GetSrcSubAccountUin() const
{
    return m_srcSubAccountUin;
}

void LibraDBClusterSrcInfo::SetSrcSubAccountUin(const string& _srcSubAccountUin)
{
    m_srcSubAccountUin = _srcSubAccountUin;
    m_srcSubAccountUinHasBeenSet = true;
}

bool LibraDBClusterSrcInfo::SrcSubAccountUinHasBeenSet() const
{
    return m_srcSubAccountUinHasBeenSet;
}

string LibraDBClusterSrcInfo::GetAccountMode() const
{
    return m_accountMode;
}

void LibraDBClusterSrcInfo::SetAccountMode(const string& _accountMode)
{
    m_accountMode = _accountMode;
    m_accountModeHasBeenSet = true;
}

bool LibraDBClusterSrcInfo::AccountModeHasBeenSet() const
{
    return m_accountModeHasBeenSet;
}

string LibraDBClusterSrcInfo::GetRegion() const
{
    return m_region;
}

void LibraDBClusterSrcInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool LibraDBClusterSrcInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string LibraDBClusterSrcInfo::GetOperation() const
{
    return m_operation;
}

void LibraDBClusterSrcInfo::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool LibraDBClusterSrcInfo::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

