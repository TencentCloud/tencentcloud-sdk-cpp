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

#include <tencentcloud/ie/v20200304/model/SubTaskResultItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

SubTaskResultItem::SubTaskResultItem() :
    m_taskNameHasBeenSet(false),
    m_statusCodeHasBeenSet(false),
    m_statusMsgHasBeenSet(false),
    m_progressRateHasBeenSet(false),
    m_downloadUrlHasBeenSet(false),
    m_md5HasBeenSet(false),
    m_fileInfoHasBeenSet(false)
{
}

CoreInternalOutcome SubTaskResultItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubTaskResultItem.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("StatusCode") && !value["StatusCode"].IsNull())
    {
        if (!value["StatusCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubTaskResultItem.StatusCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_statusCode = value["StatusCode"].GetInt64();
        m_statusCodeHasBeenSet = true;
    }

    if (value.HasMember("StatusMsg") && !value["StatusMsg"].IsNull())
    {
        if (!value["StatusMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubTaskResultItem.StatusMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusMsg = string(value["StatusMsg"].GetString());
        m_statusMsgHasBeenSet = true;
    }

    if (value.HasMember("ProgressRate") && !value["ProgressRate"].IsNull())
    {
        if (!value["ProgressRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubTaskResultItem.ProgressRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_progressRate = value["ProgressRate"].GetInt64();
        m_progressRateHasBeenSet = true;
    }

    if (value.HasMember("DownloadUrl") && !value["DownloadUrl"].IsNull())
    {
        if (!value["DownloadUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubTaskResultItem.DownloadUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downloadUrl = string(value["DownloadUrl"].GetString());
        m_downloadUrlHasBeenSet = true;
    }

    if (value.HasMember("Md5") && !value["Md5"].IsNull())
    {
        if (!value["Md5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubTaskResultItem.Md5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_md5 = string(value["Md5"].GetString());
        m_md5HasBeenSet = true;
    }

    if (value.HasMember("FileInfo") && !value["FileInfo"].IsNull())
    {
        if (!value["FileInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SubTaskResultItem.FileInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fileInfo.Deserialize(value["FileInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fileInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubTaskResultItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statusCode, allocator);
    }

    if (m_statusMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_progressRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgressRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progressRate, allocator);
    }

    if (m_downloadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downloadUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_md5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Md5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_md5.c_str(), allocator).Move(), allocator);
    }

    if (m_fileInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fileInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string SubTaskResultItem::GetTaskName() const
{
    return m_taskName;
}

void SubTaskResultItem::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool SubTaskResultItem::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

int64_t SubTaskResultItem::GetStatusCode() const
{
    return m_statusCode;
}

void SubTaskResultItem::SetStatusCode(const int64_t& _statusCode)
{
    m_statusCode = _statusCode;
    m_statusCodeHasBeenSet = true;
}

bool SubTaskResultItem::StatusCodeHasBeenSet() const
{
    return m_statusCodeHasBeenSet;
}

string SubTaskResultItem::GetStatusMsg() const
{
    return m_statusMsg;
}

void SubTaskResultItem::SetStatusMsg(const string& _statusMsg)
{
    m_statusMsg = _statusMsg;
    m_statusMsgHasBeenSet = true;
}

bool SubTaskResultItem::StatusMsgHasBeenSet() const
{
    return m_statusMsgHasBeenSet;
}

int64_t SubTaskResultItem::GetProgressRate() const
{
    return m_progressRate;
}

void SubTaskResultItem::SetProgressRate(const int64_t& _progressRate)
{
    m_progressRate = _progressRate;
    m_progressRateHasBeenSet = true;
}

bool SubTaskResultItem::ProgressRateHasBeenSet() const
{
    return m_progressRateHasBeenSet;
}

string SubTaskResultItem::GetDownloadUrl() const
{
    return m_downloadUrl;
}

void SubTaskResultItem::SetDownloadUrl(const string& _downloadUrl)
{
    m_downloadUrl = _downloadUrl;
    m_downloadUrlHasBeenSet = true;
}

bool SubTaskResultItem::DownloadUrlHasBeenSet() const
{
    return m_downloadUrlHasBeenSet;
}

string SubTaskResultItem::GetMd5() const
{
    return m_md5;
}

void SubTaskResultItem::SetMd5(const string& _md5)
{
    m_md5 = _md5;
    m_md5HasBeenSet = true;
}

bool SubTaskResultItem::Md5HasBeenSet() const
{
    return m_md5HasBeenSet;
}

FileInfo SubTaskResultItem::GetFileInfo() const
{
    return m_fileInfo;
}

void SubTaskResultItem::SetFileInfo(const FileInfo& _fileInfo)
{
    m_fileInfo = _fileInfo;
    m_fileInfoHasBeenSet = true;
}

bool SubTaskResultItem::FileInfoHasBeenSet() const
{
    return m_fileInfoHasBeenSet;
}

