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

#include <tencentcloud/weilingwith/v20230427/model/FileInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

FileInfo::FileInfo() :
    m_fileIdHasBeenSet(false),
    m_reportNameHasBeenSet(false)
{
}

CoreInternalOutcome FileInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("ReportName") && !value["ReportName"].IsNull())
    {
        if (!value["ReportName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.ReportName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportName = string(value["ReportName"].GetString());
        m_reportNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_reportNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportName.c_str(), allocator).Move(), allocator);
    }

}


string FileInfo::GetFileId() const
{
    return m_fileId;
}

void FileInfo::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool FileInfo::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

string FileInfo::GetReportName() const
{
    return m_reportName;
}

void FileInfo::SetReportName(const string& _reportName)
{
    m_reportName = _reportName;
    m_reportNameHasBeenSet = true;
}

bool FileInfo::ReportNameHasBeenSet() const
{
    return m_reportNameHasBeenSet;
}

