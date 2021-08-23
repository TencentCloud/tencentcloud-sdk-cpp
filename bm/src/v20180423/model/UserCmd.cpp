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

#include <tencentcloud/bm/v20180423/model/UserCmd.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bm::V20180423::Model;
using namespace std;

UserCmd::UserCmd() :
    m_aliasHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_autoIdHasBeenSet(false),
    m_cmdIdHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_osTypeHasBeenSet(false)
{
}

CoreInternalOutcome UserCmd::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCmd.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UserCmd.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("AutoId") && !value["AutoId"].IsNull())
    {
        if (!value["AutoId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UserCmd.AutoId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoId = value["AutoId"].GetUint64();
        m_autoIdHasBeenSet = true;
    }

    if (value.HasMember("CmdId") && !value["CmdId"].IsNull())
    {
        if (!value["CmdId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCmd.CmdId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmdId = string(value["CmdId"].GetString());
        m_cmdIdHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCmd.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCmd.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCmd.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("OsType") && !value["OsType"].IsNull())
    {
        if (!value["OsType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCmd.OsType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osType = string(value["OsType"].GetString());
        m_osTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserCmd::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_autoIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoId, allocator);
    }

    if (m_cmdIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmdId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cmdId.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_osTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osType.c_str(), allocator).Move(), allocator);
    }

}


string UserCmd::GetAlias() const
{
    return m_alias;
}

void UserCmd::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool UserCmd::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

uint64_t UserCmd::GetAppId() const
{
    return m_appId;
}

void UserCmd::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool UserCmd::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

uint64_t UserCmd::GetAutoId() const
{
    return m_autoId;
}

void UserCmd::SetAutoId(const uint64_t& _autoId)
{
    m_autoId = _autoId;
    m_autoIdHasBeenSet = true;
}

bool UserCmd::AutoIdHasBeenSet() const
{
    return m_autoIdHasBeenSet;
}

string UserCmd::GetCmdId() const
{
    return m_cmdId;
}

void UserCmd::SetCmdId(const string& _cmdId)
{
    m_cmdId = _cmdId;
    m_cmdIdHasBeenSet = true;
}

bool UserCmd::CmdIdHasBeenSet() const
{
    return m_cmdIdHasBeenSet;
}

string UserCmd::GetContent() const
{
    return m_content;
}

void UserCmd::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool UserCmd::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string UserCmd::GetCreateTime() const
{
    return m_createTime;
}

void UserCmd::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool UserCmd::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string UserCmd::GetModifyTime() const
{
    return m_modifyTime;
}

void UserCmd::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool UserCmd::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string UserCmd::GetOsType() const
{
    return m_osType;
}

void UserCmd::SetOsType(const string& _osType)
{
    m_osType = _osType;
    m_osTypeHasBeenSet = true;
}

bool UserCmd::OsTypeHasBeenSet() const
{
    return m_osTypeHasBeenSet;
}

