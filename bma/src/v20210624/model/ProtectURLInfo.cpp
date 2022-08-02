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

#include <tencentcloud/bma/v20210624/model/ProtectURLInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bma::V20210624::Model;
using namespace std;

ProtectURLInfo::ProtectURLInfo() :
    m_protectURLIdHasBeenSet(false),
    m_protectURLHasBeenSet(false),
    m_protectWebHasBeenSet(false),
    m_protectURLStatusHasBeenSet(false),
    m_protectURLNoteHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome ProtectURLInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProtectURLId") && !value["ProtectURLId"].IsNull())
    {
        if (!value["ProtectURLId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectURLInfo.ProtectURLId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_protectURLId = value["ProtectURLId"].GetInt64();
        m_protectURLIdHasBeenSet = true;
    }

    if (value.HasMember("ProtectURL") && !value["ProtectURL"].IsNull())
    {
        if (!value["ProtectURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectURLInfo.ProtectURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectURL = string(value["ProtectURL"].GetString());
        m_protectURLHasBeenSet = true;
    }

    if (value.HasMember("ProtectWeb") && !value["ProtectWeb"].IsNull())
    {
        if (!value["ProtectWeb"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectURLInfo.ProtectWeb` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectWeb = string(value["ProtectWeb"].GetString());
        m_protectWebHasBeenSet = true;
    }

    if (value.HasMember("ProtectURLStatus") && !value["ProtectURLStatus"].IsNull())
    {
        if (!value["ProtectURLStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectURLInfo.ProtectURLStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_protectURLStatus = value["ProtectURLStatus"].GetInt64();
        m_protectURLStatusHasBeenSet = true;
    }

    if (value.HasMember("ProtectURLNote") && !value["ProtectURLNote"].IsNull())
    {
        if (!value["ProtectURLNote"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectURLInfo.ProtectURLNote` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectURLNote = string(value["ProtectURLNote"].GetString());
        m_protectURLNoteHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectURLInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProtectURLInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_protectURLIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectURLId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectURLId, allocator);
    }

    if (m_protectURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectURL.c_str(), allocator).Move(), allocator);
    }

    if (m_protectWebHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectWeb";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectWeb.c_str(), allocator).Move(), allocator);
    }

    if (m_protectURLStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectURLStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectURLStatus, allocator);
    }

    if (m_protectURLNoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectURLNote";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectURLNote.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t ProtectURLInfo::GetProtectURLId() const
{
    return m_protectURLId;
}

void ProtectURLInfo::SetProtectURLId(const int64_t& _protectURLId)
{
    m_protectURLId = _protectURLId;
    m_protectURLIdHasBeenSet = true;
}

bool ProtectURLInfo::ProtectURLIdHasBeenSet() const
{
    return m_protectURLIdHasBeenSet;
}

string ProtectURLInfo::GetProtectURL() const
{
    return m_protectURL;
}

void ProtectURLInfo::SetProtectURL(const string& _protectURL)
{
    m_protectURL = _protectURL;
    m_protectURLHasBeenSet = true;
}

bool ProtectURLInfo::ProtectURLHasBeenSet() const
{
    return m_protectURLHasBeenSet;
}

string ProtectURLInfo::GetProtectWeb() const
{
    return m_protectWeb;
}

void ProtectURLInfo::SetProtectWeb(const string& _protectWeb)
{
    m_protectWeb = _protectWeb;
    m_protectWebHasBeenSet = true;
}

bool ProtectURLInfo::ProtectWebHasBeenSet() const
{
    return m_protectWebHasBeenSet;
}

int64_t ProtectURLInfo::GetProtectURLStatus() const
{
    return m_protectURLStatus;
}

void ProtectURLInfo::SetProtectURLStatus(const int64_t& _protectURLStatus)
{
    m_protectURLStatus = _protectURLStatus;
    m_protectURLStatusHasBeenSet = true;
}

bool ProtectURLInfo::ProtectURLStatusHasBeenSet() const
{
    return m_protectURLStatusHasBeenSet;
}

string ProtectURLInfo::GetProtectURLNote() const
{
    return m_protectURLNote;
}

void ProtectURLInfo::SetProtectURLNote(const string& _protectURLNote)
{
    m_protectURLNote = _protectURLNote;
    m_protectURLNoteHasBeenSet = true;
}

bool ProtectURLInfo::ProtectURLNoteHasBeenSet() const
{
    return m_protectURLNoteHasBeenSet;
}

string ProtectURLInfo::GetCreateTime() const
{
    return m_createTime;
}

void ProtectURLInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ProtectURLInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

