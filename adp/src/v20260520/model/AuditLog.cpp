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

#include <tencentcloud/adp/v20260520/model/AuditLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AuditLog::AuditLog() :
    m_accountInfoHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_operateTimeHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_bizHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_uniqueIdHasBeenSet(false)
{
}

CoreInternalOutcome AuditLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccountInfo") && !value["AccountInfo"].IsNull())
    {
        if (!value["AccountInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLog.AccountInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_accountInfo.Deserialize(value["AccountInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_accountInfoHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLog.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLog.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("OperateTime") && !value["OperateTime"].IsNull())
    {
        if (!value["OperateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLog.OperateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operateTime = string(value["OperateTime"].GetString());
        m_operateTimeHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLog.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("Biz") && !value["Biz"].IsNull())
    {
        if (!value["Biz"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLog.Biz` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_biz = string(value["Biz"].GetString());
        m_bizHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLog.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("UniqueId") && !value["UniqueId"].IsNull())
    {
        if (!value["UniqueId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLog.UniqueId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqueId = string(value["UniqueId"].GetString());
        m_uniqueIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuditLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accountInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_accountInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_operateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_bizHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Biz";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_biz.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqueIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqueId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqueId.c_str(), allocator).Move(), allocator);
    }

}


AccountInfo AuditLog::GetAccountInfo() const
{
    return m_accountInfo;
}

void AuditLog::SetAccountInfo(const AccountInfo& _accountInfo)
{
    m_accountInfo = _accountInfo;
    m_accountInfoHasBeenSet = true;
}

bool AuditLog::AccountInfoHasBeenSet() const
{
    return m_accountInfoHasBeenSet;
}

string AuditLog::GetAppId() const
{
    return m_appId;
}

void AuditLog::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool AuditLog::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string AuditLog::GetAppName() const
{
    return m_appName;
}

void AuditLog::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool AuditLog::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string AuditLog::GetOperateTime() const
{
    return m_operateTime;
}

void AuditLog::SetOperateTime(const string& _operateTime)
{
    m_operateTime = _operateTime;
    m_operateTimeHasBeenSet = true;
}

bool AuditLog::OperateTimeHasBeenSet() const
{
    return m_operateTimeHasBeenSet;
}

string AuditLog::GetAction() const
{
    return m_action;
}

void AuditLog::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool AuditLog::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string AuditLog::GetBiz() const
{
    return m_biz;
}

void AuditLog::SetBiz(const string& _biz)
{
    m_biz = _biz;
    m_bizHasBeenSet = true;
}

bool AuditLog::BizHasBeenSet() const
{
    return m_bizHasBeenSet;
}

string AuditLog::GetContent() const
{
    return m_content;
}

void AuditLog::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool AuditLog::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string AuditLog::GetUniqueId() const
{
    return m_uniqueId;
}

void AuditLog::SetUniqueId(const string& _uniqueId)
{
    m_uniqueId = _uniqueId;
    m_uniqueIdHasBeenSet = true;
}

bool AuditLog::UniqueIdHasBeenSet() const
{
    return m_uniqueIdHasBeenSet;
}

