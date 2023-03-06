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

#include <tencentcloud/gme/v20180711/model/RecordInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

RecordInfo::RecordInfo() :
    m_userIdHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_recordBeginTimeHasBeenSet(false),
    m_recordStatusHasBeenSet(false)
{
}

CoreInternalOutcome RecordInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordInfo.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("RecordBeginTime") && !value["RecordBeginTime"].IsNull())
    {
        if (!value["RecordBeginTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordInfo.RecordBeginTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_recordBeginTime = value["RecordBeginTime"].GetUint64();
        m_recordBeginTimeHasBeenSet = true;
    }

    if (value.HasMember("RecordStatus") && !value["RecordStatus"].IsNull())
    {
        if (!value["RecordStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordInfo.RecordStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_recordStatus = value["RecordStatus"].GetUint64();
        m_recordStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecordInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_recordBeginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordBeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordBeginTime, allocator);
    }

    if (m_recordStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordStatus, allocator);
    }

}


string RecordInfo::GetUserId() const
{
    return m_userId;
}

void RecordInfo::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool RecordInfo::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string RecordInfo::GetFileName() const
{
    return m_fileName;
}

void RecordInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool RecordInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

uint64_t RecordInfo::GetRecordBeginTime() const
{
    return m_recordBeginTime;
}

void RecordInfo::SetRecordBeginTime(const uint64_t& _recordBeginTime)
{
    m_recordBeginTime = _recordBeginTime;
    m_recordBeginTimeHasBeenSet = true;
}

bool RecordInfo::RecordBeginTimeHasBeenSet() const
{
    return m_recordBeginTimeHasBeenSet;
}

uint64_t RecordInfo::GetRecordStatus() const
{
    return m_recordStatus;
}

void RecordInfo::SetRecordStatus(const uint64_t& _recordStatus)
{
    m_recordStatus = _recordStatus;
    m_recordStatusHasBeenSet = true;
}

bool RecordInfo::RecordStatusHasBeenSet() const
{
    return m_recordStatusHasBeenSet;
}

