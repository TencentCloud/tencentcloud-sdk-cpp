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

#include <tencentcloud/vod/v20180717/model/ComposeMediaTaskOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

ComposeMediaTaskOutput::ComposeMediaTaskOutput() :
    m_fileTypeHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_fileUrlHasBeenSet(false)
{
}

CoreInternalOutcome ComposeMediaTaskOutput::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("FileType") && !value["FileType"].IsNull())
    {
        if (!value["FileType"].IsString())
        {
            return CoreInternalOutcome(Error("response `ComposeMediaTaskOutput.FileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = string(value["FileType"].GetString());
        m_fileTypeHasBeenSet = true;
    }

    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ComposeMediaTaskOutput.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("FileUrl") && !value["FileUrl"].IsNull())
    {
        if (!value["FileUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `ComposeMediaTaskOutput.FileUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileUrl = string(value["FileUrl"].GetString());
        m_fileUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComposeMediaTaskOutput::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_fileTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_fileUrl.c_str(), allocator).Move(), allocator);
    }

}


string ComposeMediaTaskOutput::GetFileType() const
{
    return m_fileType;
}

void ComposeMediaTaskOutput::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool ComposeMediaTaskOutput::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string ComposeMediaTaskOutput::GetFileId() const
{
    return m_fileId;
}

void ComposeMediaTaskOutput::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool ComposeMediaTaskOutput::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

string ComposeMediaTaskOutput::GetFileUrl() const
{
    return m_fileUrl;
}

void ComposeMediaTaskOutput::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool ComposeMediaTaskOutput::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}

