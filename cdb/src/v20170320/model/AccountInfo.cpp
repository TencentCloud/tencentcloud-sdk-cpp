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

#include <tencentcloud/cdb/v20170320/model/AccountInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

AccountInfo::AccountInfo() :
    m_notesHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_userHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_modifyPasswordTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_maxUserConnectionsHasBeenSet(false),
    m_openCamHasBeenSet(false)
{
}

CoreInternalOutcome AccountInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Notes") && !value["Notes"].IsNull())
    {
        if (!value["Notes"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountInfo.Notes` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notes = string(value["Notes"].GetString());
        m_notesHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountInfo.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountInfo.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountInfo.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyPasswordTime") && !value["ModifyPasswordTime"].IsNull())
    {
        if (!value["ModifyPasswordTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountInfo.ModifyPasswordTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyPasswordTime = string(value["ModifyPasswordTime"].GetString());
        m_modifyPasswordTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("MaxUserConnections") && !value["MaxUserConnections"].IsNull())
    {
        if (!value["MaxUserConnections"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccountInfo.MaxUserConnections` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxUserConnections = value["MaxUserConnections"].GetInt64();
        m_maxUserConnectionsHasBeenSet = true;
    }

    if (value.HasMember("OpenCam") && !value["OpenCam"].IsNull())
    {
        if (!value["OpenCam"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AccountInfo.OpenCam` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_openCam = value["OpenCam"].GetBool();
        m_openCamHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccountInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_notesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Notes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notes.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyPasswordTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyPasswordTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyPasswordTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_maxUserConnectionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxUserConnections";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxUserConnections, allocator);
    }

    if (m_openCamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenCam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_openCam, allocator);
    }

}


string AccountInfo::GetNotes() const
{
    return m_notes;
}

void AccountInfo::SetNotes(const string& _notes)
{
    m_notes = _notes;
    m_notesHasBeenSet = true;
}

bool AccountInfo::NotesHasBeenSet() const
{
    return m_notesHasBeenSet;
}

string AccountInfo::GetHost() const
{
    return m_host;
}

void AccountInfo::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool AccountInfo::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string AccountInfo::GetUser() const
{
    return m_user;
}

void AccountInfo::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool AccountInfo::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string AccountInfo::GetModifyTime() const
{
    return m_modifyTime;
}

void AccountInfo::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool AccountInfo::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string AccountInfo::GetModifyPasswordTime() const
{
    return m_modifyPasswordTime;
}

void AccountInfo::SetModifyPasswordTime(const string& _modifyPasswordTime)
{
    m_modifyPasswordTime = _modifyPasswordTime;
    m_modifyPasswordTimeHasBeenSet = true;
}

bool AccountInfo::ModifyPasswordTimeHasBeenSet() const
{
    return m_modifyPasswordTimeHasBeenSet;
}

string AccountInfo::GetCreateTime() const
{
    return m_createTime;
}

void AccountInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AccountInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t AccountInfo::GetMaxUserConnections() const
{
    return m_maxUserConnections;
}

void AccountInfo::SetMaxUserConnections(const int64_t& _maxUserConnections)
{
    m_maxUserConnections = _maxUserConnections;
    m_maxUserConnectionsHasBeenSet = true;
}

bool AccountInfo::MaxUserConnectionsHasBeenSet() const
{
    return m_maxUserConnectionsHasBeenSet;
}

bool AccountInfo::GetOpenCam() const
{
    return m_openCam;
}

void AccountInfo::SetOpenCam(const bool& _openCam)
{
    m_openCam = _openCam;
    m_openCamHasBeenSet = true;
}

bool AccountInfo::OpenCamHasBeenSet() const
{
    return m_openCamHasBeenSet;
}

