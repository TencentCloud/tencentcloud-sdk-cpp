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

#include <tencentcloud/vod/v20180717/model/RoundPlayFilePlayInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

RoundPlayFilePlayInfo::RoundPlayFilePlayInfo() :
    m_itemIdHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_startPlayTimeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_progressHasBeenSet(false)
{
}

CoreInternalOutcome RoundPlayFilePlayInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ItemId") && !value["ItemId"].IsNull())
    {
        if (!value["ItemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoundPlayFilePlayInfo.ItemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemId = string(value["ItemId"].GetString());
        m_itemIdHasBeenSet = true;
    }

    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoundPlayFilePlayInfo.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("StartPlayTime") && !value["StartPlayTime"].IsNull())
    {
        if (!value["StartPlayTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoundPlayFilePlayInfo.StartPlayTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startPlayTime = string(value["StartPlayTime"].GetString());
        m_startPlayTimeHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RoundPlayFilePlayInfo.Duration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetDouble();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RoundPlayFilePlayInfo.Progress` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetDouble();
        m_progressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoundPlayFilePlayInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_itemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_startPlayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartPlayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startPlayTime.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

}


string RoundPlayFilePlayInfo::GetItemId() const
{
    return m_itemId;
}

void RoundPlayFilePlayInfo::SetItemId(const string& _itemId)
{
    m_itemId = _itemId;
    m_itemIdHasBeenSet = true;
}

bool RoundPlayFilePlayInfo::ItemIdHasBeenSet() const
{
    return m_itemIdHasBeenSet;
}

string RoundPlayFilePlayInfo::GetFileId() const
{
    return m_fileId;
}

void RoundPlayFilePlayInfo::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool RoundPlayFilePlayInfo::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

string RoundPlayFilePlayInfo::GetStartPlayTime() const
{
    return m_startPlayTime;
}

void RoundPlayFilePlayInfo::SetStartPlayTime(const string& _startPlayTime)
{
    m_startPlayTime = _startPlayTime;
    m_startPlayTimeHasBeenSet = true;
}

bool RoundPlayFilePlayInfo::StartPlayTimeHasBeenSet() const
{
    return m_startPlayTimeHasBeenSet;
}

double RoundPlayFilePlayInfo::GetDuration() const
{
    return m_duration;
}

void RoundPlayFilePlayInfo::SetDuration(const double& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool RoundPlayFilePlayInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

double RoundPlayFilePlayInfo::GetProgress() const
{
    return m_progress;
}

void RoundPlayFilePlayInfo::SetProgress(const double& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool RoundPlayFilePlayInfo::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

