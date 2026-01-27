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

#include <tencentcloud/cynosdb/v20190107/model/RedoLogItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

RedoLogItem::RedoLogItem() :
    m_fileNameHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_backupTimeHasBeenSet(false),
    m_redoLogIdHasBeenSet(false),
    m_redoCrossRegionsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_finishTimeHasBeenSet(false)
{
}

CoreInternalOutcome RedoLogItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedoLogItem.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RedoLogItem.FileSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetInt64();
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("BackupTime") && !value["BackupTime"].IsNull())
    {
        if (!value["BackupTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedoLogItem.BackupTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupTime = string(value["BackupTime"].GetString());
        m_backupTimeHasBeenSet = true;
    }

    if (value.HasMember("RedoLogId") && !value["RedoLogId"].IsNull())
    {
        if (!value["RedoLogId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RedoLogItem.RedoLogId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_redoLogId = value["RedoLogId"].GetInt64();
        m_redoLogIdHasBeenSet = true;
    }

    if (value.HasMember("RedoCrossRegions") && !value["RedoCrossRegions"].IsNull())
    {
        if (!value["RedoCrossRegions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RedoLogItem.RedoCrossRegions` is not array type"));

        const rapidjson::Value &tmpValue = value["RedoCrossRegions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BackupRegionAndIds item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_redoCrossRegions.push_back(item);
        }
        m_redoCrossRegionsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedoLogItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedoLogItem.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("FinishTime") && !value["FinishTime"].IsNull())
    {
        if (!value["FinishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedoLogItem.FinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = string(value["FinishTime"].GetString());
        m_finishTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RedoLogItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileSize, allocator);
    }

    if (m_backupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupTime.c_str(), allocator).Move(), allocator);
    }

    if (m_redoLogIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedoLogId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_redoLogId, allocator);
    }

    if (m_redoCrossRegionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedoCrossRegions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_redoCrossRegions.begin(); itr != m_redoCrossRegions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_finishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishTime.c_str(), allocator).Move(), allocator);
    }

}


string RedoLogItem::GetFileName() const
{
    return m_fileName;
}

void RedoLogItem::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool RedoLogItem::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

int64_t RedoLogItem::GetFileSize() const
{
    return m_fileSize;
}

void RedoLogItem::SetFileSize(const int64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool RedoLogItem::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string RedoLogItem::GetBackupTime() const
{
    return m_backupTime;
}

void RedoLogItem::SetBackupTime(const string& _backupTime)
{
    m_backupTime = _backupTime;
    m_backupTimeHasBeenSet = true;
}

bool RedoLogItem::BackupTimeHasBeenSet() const
{
    return m_backupTimeHasBeenSet;
}

int64_t RedoLogItem::GetRedoLogId() const
{
    return m_redoLogId;
}

void RedoLogItem::SetRedoLogId(const int64_t& _redoLogId)
{
    m_redoLogId = _redoLogId;
    m_redoLogIdHasBeenSet = true;
}

bool RedoLogItem::RedoLogIdHasBeenSet() const
{
    return m_redoLogIdHasBeenSet;
}

vector<BackupRegionAndIds> RedoLogItem::GetRedoCrossRegions() const
{
    return m_redoCrossRegions;
}

void RedoLogItem::SetRedoCrossRegions(const vector<BackupRegionAndIds>& _redoCrossRegions)
{
    m_redoCrossRegions = _redoCrossRegions;
    m_redoCrossRegionsHasBeenSet = true;
}

bool RedoLogItem::RedoCrossRegionsHasBeenSet() const
{
    return m_redoCrossRegionsHasBeenSet;
}

string RedoLogItem::GetStatus() const
{
    return m_status;
}

void RedoLogItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RedoLogItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RedoLogItem::GetStartTime() const
{
    return m_startTime;
}

void RedoLogItem::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool RedoLogItem::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string RedoLogItem::GetFinishTime() const
{
    return m_finishTime;
}

void RedoLogItem::SetFinishTime(const string& _finishTime)
{
    m_finishTime = _finishTime;
    m_finishTimeHasBeenSet = true;
}

bool RedoLogItem::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

