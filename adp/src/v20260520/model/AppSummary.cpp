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

#include <tencentcloud/adp/v20260520/model/AppSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AppSummary::AppSummary() :
    m_appIdHasBeenSet(false),
    m_appModeHasBeenSet(false),
    m_avatarHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_operationInfoHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_subStatusHasBeenSet(false),
    m_permissionIdListHasBeenSet(false)
{
}

CoreInternalOutcome AppSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppSummary.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("AppMode") && !value["AppMode"].IsNull())
    {
        if (!value["AppMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppSummary.AppMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appMode = value["AppMode"].GetInt64();
        m_appModeHasBeenSet = true;
    }

    if (value.HasMember("Avatar") && !value["Avatar"].IsNull())
    {
        if (!value["Avatar"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppSummary.Avatar` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_avatar = string(value["Avatar"].GetString());
        m_avatarHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppSummary.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("OperationInfo") && !value["OperationInfo"].IsNull())
    {
        if (!value["OperationInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppSummary.OperationInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_operationInfo.Deserialize(value["OperationInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_operationInfoHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppSummary.Status` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_status.Deserialize(value["Status"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SubStatus") && !value["SubStatus"].IsNull())
    {
        if (!value["SubStatus"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppSummary.SubStatus` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_subStatus.Deserialize(value["SubStatus"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_subStatusHasBeenSet = true;
    }

    if (value.HasMember("PermissionIdList") && !value["PermissionIdList"].IsNull())
    {
        if (!value["PermissionIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AppSummary.PermissionIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["PermissionIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_permissionIdList.push_back((*itr).GetString());
        }
        m_permissionIdListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_appModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appMode, allocator);
    }

    if (m_avatarHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Avatar";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_avatar.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_operationInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operationInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_status.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_subStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_subStatus.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_permissionIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermissionIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_permissionIdList.begin(); itr != m_permissionIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string AppSummary::GetAppId() const
{
    return m_appId;
}

void AppSummary::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool AppSummary::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t AppSummary::GetAppMode() const
{
    return m_appMode;
}

void AppSummary::SetAppMode(const int64_t& _appMode)
{
    m_appMode = _appMode;
    m_appModeHasBeenSet = true;
}

bool AppSummary::AppModeHasBeenSet() const
{
    return m_appModeHasBeenSet;
}

string AppSummary::GetAvatar() const
{
    return m_avatar;
}

void AppSummary::SetAvatar(const string& _avatar)
{
    m_avatar = _avatar;
    m_avatarHasBeenSet = true;
}

bool AppSummary::AvatarHasBeenSet() const
{
    return m_avatarHasBeenSet;
}

string AppSummary::GetName() const
{
    return m_name;
}

void AppSummary::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AppSummary::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

AppOperation AppSummary::GetOperationInfo() const
{
    return m_operationInfo;
}

void AppSummary::SetOperationInfo(const AppOperation& _operationInfo)
{
    m_operationInfo = _operationInfo;
    m_operationInfoHasBeenSet = true;
}

bool AppSummary::OperationInfoHasBeenSet() const
{
    return m_operationInfoHasBeenSet;
}

AppStatusInfo AppSummary::GetStatus() const
{
    return m_status;
}

void AppSummary::SetStatus(const AppStatusInfo& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AppSummary::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

AppSubStatusInfo AppSummary::GetSubStatus() const
{
    return m_subStatus;
}

void AppSummary::SetSubStatus(const AppSubStatusInfo& _subStatus)
{
    m_subStatus = _subStatus;
    m_subStatusHasBeenSet = true;
}

bool AppSummary::SubStatusHasBeenSet() const
{
    return m_subStatusHasBeenSet;
}

vector<string> AppSummary::GetPermissionIdList() const
{
    return m_permissionIdList;
}

void AppSummary::SetPermissionIdList(const vector<string>& _permissionIdList)
{
    m_permissionIdList = _permissionIdList;
    m_permissionIdListHasBeenSet = true;
}

bool AppSummary::PermissionIdListHasBeenSet() const
{
    return m_permissionIdListHasBeenSet;
}

