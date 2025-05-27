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

#include <tencentcloud/wedata/v20210820/model/DownloadLogByLineRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DownloadLogByLineRequest::DownloadLogByLineRequest() :
    m_startLineHasBeenSet(false),
    m_lineCountHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_curRunDateHasBeenSet(false),
    m_detailIdHasBeenSet(false),
    m_filePathHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_subJobIdHasBeenSet(false),
    m_jobTypeHasBeenSet(false),
    m_parseErrorTipHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_queryFileFlagHasBeenSet(false),
    m_extInfoHasBeenSet(false)
{
}

string DownloadLogByLineRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_startLineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartLine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startLine, allocator);
    }

    if (m_lineCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_lineCount, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_curRunDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurRunDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_curRunDate.c_str(), allocator).Move(), allocator);
    }

    if (m_detailIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetailId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_detailId.c_str(), allocator).Move(), allocator);
    }

    if (m_filePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filePath.c_str(), allocator).Move(), allocator);
    }

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recordId.c_str(), allocator).Move(), allocator);
    }

    if (m_subJobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubJobId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subJobId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobType.c_str(), allocator).Move(), allocator);
    }

    if (m_parseErrorTipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParseErrorTip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_parseErrorTip, allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fileType, allocator);
    }

    if (m_queryFileFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryFileFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queryFileFlag, allocator);
    }

    if (m_extInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extInfo.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DownloadLogByLineRequest::GetStartLine() const
{
    return m_startLine;
}

void DownloadLogByLineRequest::SetStartLine(const int64_t& _startLine)
{
    m_startLine = _startLine;
    m_startLineHasBeenSet = true;
}

bool DownloadLogByLineRequest::StartLineHasBeenSet() const
{
    return m_startLineHasBeenSet;
}

int64_t DownloadLogByLineRequest::GetLineCount() const
{
    return m_lineCount;
}

void DownloadLogByLineRequest::SetLineCount(const int64_t& _lineCount)
{
    m_lineCount = _lineCount;
    m_lineCountHasBeenSet = true;
}

bool DownloadLogByLineRequest::LineCountHasBeenSet() const
{
    return m_lineCountHasBeenSet;
}

string DownloadLogByLineRequest::GetProjectId() const
{
    return m_projectId;
}

void DownloadLogByLineRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DownloadLogByLineRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DownloadLogByLineRequest::GetTaskId() const
{
    return m_taskId;
}

void DownloadLogByLineRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DownloadLogByLineRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DownloadLogByLineRequest::GetCurRunDate() const
{
    return m_curRunDate;
}

void DownloadLogByLineRequest::SetCurRunDate(const string& _curRunDate)
{
    m_curRunDate = _curRunDate;
    m_curRunDateHasBeenSet = true;
}

bool DownloadLogByLineRequest::CurRunDateHasBeenSet() const
{
    return m_curRunDateHasBeenSet;
}

string DownloadLogByLineRequest::GetDetailId() const
{
    return m_detailId;
}

void DownloadLogByLineRequest::SetDetailId(const string& _detailId)
{
    m_detailId = _detailId;
    m_detailIdHasBeenSet = true;
}

bool DownloadLogByLineRequest::DetailIdHasBeenSet() const
{
    return m_detailIdHasBeenSet;
}

string DownloadLogByLineRequest::GetFilePath() const
{
    return m_filePath;
}

void DownloadLogByLineRequest::SetFilePath(const string& _filePath)
{
    m_filePath = _filePath;
    m_filePathHasBeenSet = true;
}

bool DownloadLogByLineRequest::FilePathHasBeenSet() const
{
    return m_filePathHasBeenSet;
}

string DownloadLogByLineRequest::GetRecordId() const
{
    return m_recordId;
}

void DownloadLogByLineRequest::SetRecordId(const string& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool DownloadLogByLineRequest::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

string DownloadLogByLineRequest::GetSubJobId() const
{
    return m_subJobId;
}

void DownloadLogByLineRequest::SetSubJobId(const string& _subJobId)
{
    m_subJobId = _subJobId;
    m_subJobIdHasBeenSet = true;
}

bool DownloadLogByLineRequest::SubJobIdHasBeenSet() const
{
    return m_subJobIdHasBeenSet;
}

string DownloadLogByLineRequest::GetJobType() const
{
    return m_jobType;
}

void DownloadLogByLineRequest::SetJobType(const string& _jobType)
{
    m_jobType = _jobType;
    m_jobTypeHasBeenSet = true;
}

bool DownloadLogByLineRequest::JobTypeHasBeenSet() const
{
    return m_jobTypeHasBeenSet;
}

bool DownloadLogByLineRequest::GetParseErrorTip() const
{
    return m_parseErrorTip;
}

void DownloadLogByLineRequest::SetParseErrorTip(const bool& _parseErrorTip)
{
    m_parseErrorTip = _parseErrorTip;
    m_parseErrorTipHasBeenSet = true;
}

bool DownloadLogByLineRequest::ParseErrorTipHasBeenSet() const
{
    return m_parseErrorTipHasBeenSet;
}

int64_t DownloadLogByLineRequest::GetFileType() const
{
    return m_fileType;
}

void DownloadLogByLineRequest::SetFileType(const int64_t& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool DownloadLogByLineRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

int64_t DownloadLogByLineRequest::GetQueryFileFlag() const
{
    return m_queryFileFlag;
}

void DownloadLogByLineRequest::SetQueryFileFlag(const int64_t& _queryFileFlag)
{
    m_queryFileFlag = _queryFileFlag;
    m_queryFileFlagHasBeenSet = true;
}

bool DownloadLogByLineRequest::QueryFileFlagHasBeenSet() const
{
    return m_queryFileFlagHasBeenSet;
}

string DownloadLogByLineRequest::GetExtInfo() const
{
    return m_extInfo;
}

void DownloadLogByLineRequest::SetExtInfo(const string& _extInfo)
{
    m_extInfo = _extInfo;
    m_extInfoHasBeenSet = true;
}

bool DownloadLogByLineRequest::ExtInfoHasBeenSet() const
{
    return m_extInfoHasBeenSet;
}


