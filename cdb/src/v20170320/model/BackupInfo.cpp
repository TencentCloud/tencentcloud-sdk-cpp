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

#include <tencentcloud/cdb/v20170320/model/BackupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace rapidjson;
using namespace std;

BackupInfo::BackupInfo() :
    m_nameHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_intranetUrlHasBeenSet(false),
    m_internetUrlHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_backupIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_finishTimeHasBeenSet(false),
    m_creatorHasBeenSet(false)
{
}

CoreInternalOutcome BackupInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `BackupInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `BackupInfo.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Error("response `BackupInfo.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("IntranetUrl") && !value["IntranetUrl"].IsNull())
    {
        if (!value["IntranetUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `BackupInfo.IntranetUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_intranetUrl = string(value["IntranetUrl"].GetString());
        m_intranetUrlHasBeenSet = true;
    }

    if (value.HasMember("InternetUrl") && !value["InternetUrl"].IsNull())
    {
        if (!value["InternetUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `BackupInfo.InternetUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internetUrl = string(value["InternetUrl"].GetString());
        m_internetUrlHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `BackupInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("BackupId") && !value["BackupId"].IsNull())
    {
        if (!value["BackupId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `BackupInfo.BackupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupId = value["BackupId"].GetInt64();
        m_backupIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `BackupInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("FinishTime") && !value["FinishTime"].IsNull())
    {
        if (!value["FinishTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `BackupInfo.FinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = string(value["FinishTime"].GetString());
        m_finishTimeHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Error("response `BackupInfo.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_dateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_intranetUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IntranetUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_intranetUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_internetUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InternetUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_internetUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_backupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BackupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_finishTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_finishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_creator.c_str(), allocator).Move(), allocator);
    }

}


string BackupInfo::GetName() const
{
    return m_name;
}

void BackupInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BackupInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t BackupInfo::GetSize() const
{
    return m_size;
}

void BackupInfo::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool BackupInfo::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string BackupInfo::GetDate() const
{
    return m_date;
}

void BackupInfo::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool BackupInfo::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string BackupInfo::GetIntranetUrl() const
{
    return m_intranetUrl;
}

void BackupInfo::SetIntranetUrl(const string& _intranetUrl)
{
    m_intranetUrl = _intranetUrl;
    m_intranetUrlHasBeenSet = true;
}

bool BackupInfo::IntranetUrlHasBeenSet() const
{
    return m_intranetUrlHasBeenSet;
}

string BackupInfo::GetInternetUrl() const
{
    return m_internetUrl;
}

void BackupInfo::SetInternetUrl(const string& _internetUrl)
{
    m_internetUrl = _internetUrl;
    m_internetUrlHasBeenSet = true;
}

bool BackupInfo::InternetUrlHasBeenSet() const
{
    return m_internetUrlHasBeenSet;
}

string BackupInfo::GetType() const
{
    return m_type;
}

void BackupInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool BackupInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t BackupInfo::GetBackupId() const
{
    return m_backupId;
}

void BackupInfo::SetBackupId(const int64_t& _backupId)
{
    m_backupId = _backupId;
    m_backupIdHasBeenSet = true;
}

bool BackupInfo::BackupIdHasBeenSet() const
{
    return m_backupIdHasBeenSet;
}

string BackupInfo::GetStatus() const
{
    return m_status;
}

void BackupInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BackupInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string BackupInfo::GetFinishTime() const
{
    return m_finishTime;
}

void BackupInfo::SetFinishTime(const string& _finishTime)
{
    m_finishTime = _finishTime;
    m_finishTimeHasBeenSet = true;
}

bool BackupInfo::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

string BackupInfo::GetCreator() const
{
    return m_creator;
}

void BackupInfo::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool BackupInfo::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

