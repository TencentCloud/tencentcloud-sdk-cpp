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

#include <tencentcloud/cynosdb/v20190107/model/BinlogItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

BinlogItem::BinlogItem() :
    m_fileNameHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_finishTimeHasBeenSet(false),
    m_binlogIdHasBeenSet(false)
{
}

CoreInternalOutcome BinlogItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BinlogItem.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BinlogItem.FileSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetInt64();
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BinlogItem.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("FinishTime") && !value["FinishTime"].IsNull())
    {
        if (!value["FinishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BinlogItem.FinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = string(value["FinishTime"].GetString());
        m_finishTimeHasBeenSet = true;
    }

    if (value.HasMember("BinlogId") && !value["BinlogId"].IsNull())
    {
        if (!value["BinlogId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BinlogItem.BinlogId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_binlogId = value["BinlogId"].GetInt64();
        m_binlogIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BinlogItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_binlogIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BinlogId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_binlogId, allocator);
    }

}


string BinlogItem::GetFileName() const
{
    return m_fileName;
}

void BinlogItem::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool BinlogItem::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

int64_t BinlogItem::GetFileSize() const
{
    return m_fileSize;
}

void BinlogItem::SetFileSize(const int64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool BinlogItem::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string BinlogItem::GetStartTime() const
{
    return m_startTime;
}

void BinlogItem::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool BinlogItem::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string BinlogItem::GetFinishTime() const
{
    return m_finishTime;
}

void BinlogItem::SetFinishTime(const string& _finishTime)
{
    m_finishTime = _finishTime;
    m_finishTimeHasBeenSet = true;
}

bool BinlogItem::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

int64_t BinlogItem::GetBinlogId() const
{
    return m_binlogId;
}

void BinlogItem::SetBinlogId(const int64_t& _binlogId)
{
    m_binlogId = _binlogId;
    m_binlogIdHasBeenSet = true;
}

bool BinlogItem::BinlogIdHasBeenSet() const
{
    return m_binlogIdHasBeenSet;
}

