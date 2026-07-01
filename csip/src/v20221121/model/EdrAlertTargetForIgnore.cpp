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

#include <tencentcloud/csip/v20221121/model/EdrAlertTargetForIgnore.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

EdrAlertTargetForIgnore::EdrAlertTargetForIgnore() :
    m_idHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_alertIdHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

CoreInternalOutcome EdrAlertTargetForIgnore::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertTargetForIgnore.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertTargetForIgnore.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("AlertId") && !value["AlertId"].IsNull())
    {
        if (!value["AlertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertTargetForIgnore.AlertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alertId = string(value["AlertId"].GetString());
        m_alertIdHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertTargetForIgnore.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertTargetForIgnore.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EdrAlertTargetForIgnore::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_alertIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alertId.c_str(), allocator).Move(), allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

}


int64_t EdrAlertTargetForIgnore::GetId() const
{
    return m_id;
}

void EdrAlertTargetForIgnore::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool EdrAlertTargetForIgnore::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t EdrAlertTargetForIgnore::GetAppId() const
{
    return m_appId;
}

void EdrAlertTargetForIgnore::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool EdrAlertTargetForIgnore::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string EdrAlertTargetForIgnore::GetAlertId() const
{
    return m_alertId;
}

void EdrAlertTargetForIgnore::SetAlertId(const string& _alertId)
{
    m_alertId = _alertId;
    m_alertIdHasBeenSet = true;
}

bool EdrAlertTargetForIgnore::AlertIdHasBeenSet() const
{
    return m_alertIdHasBeenSet;
}

string EdrAlertTargetForIgnore::GetQuuid() const
{
    return m_quuid;
}

void EdrAlertTargetForIgnore::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool EdrAlertTargetForIgnore::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string EdrAlertTargetForIgnore::GetInstanceId() const
{
    return m_instanceId;
}

void EdrAlertTargetForIgnore::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool EdrAlertTargetForIgnore::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

