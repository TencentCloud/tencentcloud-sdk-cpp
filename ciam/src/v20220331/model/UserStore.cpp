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

#include <tencentcloud/ciam/v20220331/model/UserStore.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ciam::V20220331::Model;
using namespace std;

UserStore::UserStore() :
    m_tenantIdHasBeenSet(false),
    m_userStoreLogoHasBeenSet(false),
    m_userStoreDescHasBeenSet(false),
    m_userStoreNameHasBeenSet(false),
    m_userNumHasBeenSet(false),
    m_userStoreIdHasBeenSet(false),
    m_appNumHasBeenSet(false),
    m_lastStatusHasBeenSet(false),
    m_defaultStatusHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_lastStatusTimeHasBeenSet(false),
    m_userStoreProtocolHostHasBeenSet(false)
{
}

CoreInternalOutcome UserStore::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TenantId") && !value["TenantId"].IsNull())
    {
        if (!value["TenantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserStore.TenantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tenantId = string(value["TenantId"].GetString());
        m_tenantIdHasBeenSet = true;
    }

    if (value.HasMember("UserStoreLogo") && !value["UserStoreLogo"].IsNull())
    {
        if (!value["UserStoreLogo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserStore.UserStoreLogo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userStoreLogo = string(value["UserStoreLogo"].GetString());
        m_userStoreLogoHasBeenSet = true;
    }

    if (value.HasMember("UserStoreDesc") && !value["UserStoreDesc"].IsNull())
    {
        if (!value["UserStoreDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserStore.UserStoreDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userStoreDesc = string(value["UserStoreDesc"].GetString());
        m_userStoreDescHasBeenSet = true;
    }

    if (value.HasMember("UserStoreName") && !value["UserStoreName"].IsNull())
    {
        if (!value["UserStoreName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserStore.UserStoreName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userStoreName = string(value["UserStoreName"].GetString());
        m_userStoreNameHasBeenSet = true;
    }

    if (value.HasMember("UserNum") && !value["UserNum"].IsNull())
    {
        if (!value["UserNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserStore.UserNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_userNum = value["UserNum"].GetInt64();
        m_userNumHasBeenSet = true;
    }

    if (value.HasMember("UserStoreId") && !value["UserStoreId"].IsNull())
    {
        if (!value["UserStoreId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserStore.UserStoreId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userStoreId = string(value["UserStoreId"].GetString());
        m_userStoreIdHasBeenSet = true;
    }

    if (value.HasMember("AppNum") && !value["AppNum"].IsNull())
    {
        if (!value["AppNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserStore.AppNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appNum = value["AppNum"].GetInt64();
        m_appNumHasBeenSet = true;
    }

    if (value.HasMember("LastStatus") && !value["LastStatus"].IsNull())
    {
        if (!value["LastStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UserStore.LastStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_lastStatus = value["LastStatus"].GetBool();
        m_lastStatusHasBeenSet = true;
    }

    if (value.HasMember("DefaultStatus") && !value["DefaultStatus"].IsNull())
    {
        if (!value["DefaultStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UserStore.DefaultStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_defaultStatus = value["DefaultStatus"].GetBool();
        m_defaultStatusHasBeenSet = true;
    }

    if (value.HasMember("CreateDate") && !value["CreateDate"].IsNull())
    {
        if (!value["CreateDate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserStore.CreateDate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createDate = value["CreateDate"].GetInt64();
        m_createDateHasBeenSet = true;
    }

    if (value.HasMember("LastStatusTime") && !value["LastStatusTime"].IsNull())
    {
        if (!value["LastStatusTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserStore.LastStatusTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastStatusTime = value["LastStatusTime"].GetInt64();
        m_lastStatusTimeHasBeenSet = true;
    }

    if (value.HasMember("UserStoreProtocolHost") && !value["UserStoreProtocolHost"].IsNull())
    {
        if (!value["UserStoreProtocolHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserStore.UserStoreProtocolHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userStoreProtocolHost = string(value["UserStoreProtocolHost"].GetString());
        m_userStoreProtocolHostHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserStore::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tenantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tenantId.c_str(), allocator).Move(), allocator);
    }

    if (m_userStoreLogoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserStoreLogo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userStoreLogo.c_str(), allocator).Move(), allocator);
    }

    if (m_userStoreDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserStoreDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userStoreDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_userStoreNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserStoreName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userStoreName.c_str(), allocator).Move(), allocator);
    }

    if (m_userNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userNum, allocator);
    }

    if (m_userStoreIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserStoreId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userStoreId.c_str(), allocator).Move(), allocator);
    }

    if (m_appNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appNum, allocator);
    }

    if (m_lastStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastStatus, allocator);
    }

    if (m_defaultStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultStatus, allocator);
    }

    if (m_createDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createDate, allocator);
    }

    if (m_lastStatusTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastStatusTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastStatusTime, allocator);
    }

    if (m_userStoreProtocolHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserStoreProtocolHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userStoreProtocolHost.c_str(), allocator).Move(), allocator);
    }

}


string UserStore::GetTenantId() const
{
    return m_tenantId;
}

void UserStore::SetTenantId(const string& _tenantId)
{
    m_tenantId = _tenantId;
    m_tenantIdHasBeenSet = true;
}

bool UserStore::TenantIdHasBeenSet() const
{
    return m_tenantIdHasBeenSet;
}

string UserStore::GetUserStoreLogo() const
{
    return m_userStoreLogo;
}

void UserStore::SetUserStoreLogo(const string& _userStoreLogo)
{
    m_userStoreLogo = _userStoreLogo;
    m_userStoreLogoHasBeenSet = true;
}

bool UserStore::UserStoreLogoHasBeenSet() const
{
    return m_userStoreLogoHasBeenSet;
}

string UserStore::GetUserStoreDesc() const
{
    return m_userStoreDesc;
}

void UserStore::SetUserStoreDesc(const string& _userStoreDesc)
{
    m_userStoreDesc = _userStoreDesc;
    m_userStoreDescHasBeenSet = true;
}

bool UserStore::UserStoreDescHasBeenSet() const
{
    return m_userStoreDescHasBeenSet;
}

string UserStore::GetUserStoreName() const
{
    return m_userStoreName;
}

void UserStore::SetUserStoreName(const string& _userStoreName)
{
    m_userStoreName = _userStoreName;
    m_userStoreNameHasBeenSet = true;
}

bool UserStore::UserStoreNameHasBeenSet() const
{
    return m_userStoreNameHasBeenSet;
}

int64_t UserStore::GetUserNum() const
{
    return m_userNum;
}

void UserStore::SetUserNum(const int64_t& _userNum)
{
    m_userNum = _userNum;
    m_userNumHasBeenSet = true;
}

bool UserStore::UserNumHasBeenSet() const
{
    return m_userNumHasBeenSet;
}

string UserStore::GetUserStoreId() const
{
    return m_userStoreId;
}

void UserStore::SetUserStoreId(const string& _userStoreId)
{
    m_userStoreId = _userStoreId;
    m_userStoreIdHasBeenSet = true;
}

bool UserStore::UserStoreIdHasBeenSet() const
{
    return m_userStoreIdHasBeenSet;
}

int64_t UserStore::GetAppNum() const
{
    return m_appNum;
}

void UserStore::SetAppNum(const int64_t& _appNum)
{
    m_appNum = _appNum;
    m_appNumHasBeenSet = true;
}

bool UserStore::AppNumHasBeenSet() const
{
    return m_appNumHasBeenSet;
}

bool UserStore::GetLastStatus() const
{
    return m_lastStatus;
}

void UserStore::SetLastStatus(const bool& _lastStatus)
{
    m_lastStatus = _lastStatus;
    m_lastStatusHasBeenSet = true;
}

bool UserStore::LastStatusHasBeenSet() const
{
    return m_lastStatusHasBeenSet;
}

bool UserStore::GetDefaultStatus() const
{
    return m_defaultStatus;
}

void UserStore::SetDefaultStatus(const bool& _defaultStatus)
{
    m_defaultStatus = _defaultStatus;
    m_defaultStatusHasBeenSet = true;
}

bool UserStore::DefaultStatusHasBeenSet() const
{
    return m_defaultStatusHasBeenSet;
}

int64_t UserStore::GetCreateDate() const
{
    return m_createDate;
}

void UserStore::SetCreateDate(const int64_t& _createDate)
{
    m_createDate = _createDate;
    m_createDateHasBeenSet = true;
}

bool UserStore::CreateDateHasBeenSet() const
{
    return m_createDateHasBeenSet;
}

int64_t UserStore::GetLastStatusTime() const
{
    return m_lastStatusTime;
}

void UserStore::SetLastStatusTime(const int64_t& _lastStatusTime)
{
    m_lastStatusTime = _lastStatusTime;
    m_lastStatusTimeHasBeenSet = true;
}

bool UserStore::LastStatusTimeHasBeenSet() const
{
    return m_lastStatusTimeHasBeenSet;
}

string UserStore::GetUserStoreProtocolHost() const
{
    return m_userStoreProtocolHost;
}

void UserStore::SetUserStoreProtocolHost(const string& _userStoreProtocolHost)
{
    m_userStoreProtocolHost = _userStoreProtocolHost;
    m_userStoreProtocolHostHasBeenSet = true;
}

bool UserStore::UserStoreProtocolHostHasBeenSet() const
{
    return m_userStoreProtocolHostHasBeenSet;
}

