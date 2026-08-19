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

#include <tencentcloud/csip/v20221121/model/UserConfSyncStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

UserConfSyncStatus::UserConfSyncStatus() :
    m_appIDHasBeenSet(false),
    m_allowSyncHasBeenSet(false),
    m_inConfHasBeenSet(false),
    m_managedByOtherHasBeenSet(false)
{
}

CoreInternalOutcome UserConfSyncStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UserConfSyncStatus.AppID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetUint64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("AllowSync") && !value["AllowSync"].IsNull())
    {
        if (!value["AllowSync"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UserConfSyncStatus.AllowSync` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allowSync = value["AllowSync"].GetBool();
        m_allowSyncHasBeenSet = true;
    }

    if (value.HasMember("InConf") && !value["InConf"].IsNull())
    {
        if (!value["InConf"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UserConfSyncStatus.InConf` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_inConf = value["InConf"].GetBool();
        m_inConfHasBeenSet = true;
    }

    if (value.HasMember("ManagedByOther") && !value["ManagedByOther"].IsNull())
    {
        if (!value["ManagedByOther"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UserConfSyncStatus.ManagedByOther` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_managedByOther = value["ManagedByOther"].GetBool();
        m_managedByOtherHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserConfSyncStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_allowSyncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowSync";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowSync, allocator);
    }

    if (m_inConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inConf, allocator);
    }

    if (m_managedByOtherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagedByOther";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_managedByOther, allocator);
    }

}


uint64_t UserConfSyncStatus::GetAppID() const
{
    return m_appID;
}

void UserConfSyncStatus::SetAppID(const uint64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool UserConfSyncStatus::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

bool UserConfSyncStatus::GetAllowSync() const
{
    return m_allowSync;
}

void UserConfSyncStatus::SetAllowSync(const bool& _allowSync)
{
    m_allowSync = _allowSync;
    m_allowSyncHasBeenSet = true;
}

bool UserConfSyncStatus::AllowSyncHasBeenSet() const
{
    return m_allowSyncHasBeenSet;
}

bool UserConfSyncStatus::GetInConf() const
{
    return m_inConf;
}

void UserConfSyncStatus::SetInConf(const bool& _inConf)
{
    m_inConf = _inConf;
    m_inConfHasBeenSet = true;
}

bool UserConfSyncStatus::InConfHasBeenSet() const
{
    return m_inConfHasBeenSet;
}

bool UserConfSyncStatus::GetManagedByOther() const
{
    return m_managedByOther;
}

void UserConfSyncStatus::SetManagedByOther(const bool& _managedByOther)
{
    m_managedByOther = _managedByOther;
    m_managedByOtherHasBeenSet = true;
}

bool UserConfSyncStatus::ManagedByOtherHasBeenSet() const
{
    return m_managedByOtherHasBeenSet;
}

