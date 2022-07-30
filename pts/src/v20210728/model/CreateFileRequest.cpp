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

#include <tencentcloud/pts/v20210728/model/CreateFileRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

CreateFileRequest::CreateFileRequest() :
    m_fileIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_lineCountHasBeenSet(false),
    m_headLinesHasBeenSet(false),
    m_tailLinesHasBeenSet(false),
    m_headerInFileHasBeenSet(false),
    m_headerColumnsHasBeenSet(false),
    m_fileInfosHasBeenSet(false)
{
}

string CreateFileRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_kind, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_size, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_lineCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_lineCount, allocator);
    }

    if (m_headLinesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadLines";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_headLines.begin(); itr != m_headLines.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tailLinesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TailLines";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tailLines.begin(); itr != m_tailLines.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_headerInFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeaderInFile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_headerInFile, allocator);
    }

    if (m_headerColumnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeaderColumns";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_headerColumns.begin(); itr != m_headerColumns.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fileInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fileInfos.begin(); itr != m_fileInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateFileRequest::GetFileId() const
{
    return m_fileId;
}

void CreateFileRequest::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool CreateFileRequest::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

string CreateFileRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateFileRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateFileRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t CreateFileRequest::GetKind() const
{
    return m_kind;
}

void CreateFileRequest::SetKind(const int64_t& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool CreateFileRequest::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string CreateFileRequest::GetName() const
{
    return m_name;
}

void CreateFileRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateFileRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t CreateFileRequest::GetSize() const
{
    return m_size;
}

void CreateFileRequest::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool CreateFileRequest::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string CreateFileRequest::GetType() const
{
    return m_type;
}

void CreateFileRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateFileRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t CreateFileRequest::GetLineCount() const
{
    return m_lineCount;
}

void CreateFileRequest::SetLineCount(const int64_t& _lineCount)
{
    m_lineCount = _lineCount;
    m_lineCountHasBeenSet = true;
}

bool CreateFileRequest::LineCountHasBeenSet() const
{
    return m_lineCountHasBeenSet;
}

vector<string> CreateFileRequest::GetHeadLines() const
{
    return m_headLines;
}

void CreateFileRequest::SetHeadLines(const vector<string>& _headLines)
{
    m_headLines = _headLines;
    m_headLinesHasBeenSet = true;
}

bool CreateFileRequest::HeadLinesHasBeenSet() const
{
    return m_headLinesHasBeenSet;
}

vector<string> CreateFileRequest::GetTailLines() const
{
    return m_tailLines;
}

void CreateFileRequest::SetTailLines(const vector<string>& _tailLines)
{
    m_tailLines = _tailLines;
    m_tailLinesHasBeenSet = true;
}

bool CreateFileRequest::TailLinesHasBeenSet() const
{
    return m_tailLinesHasBeenSet;
}

bool CreateFileRequest::GetHeaderInFile() const
{
    return m_headerInFile;
}

void CreateFileRequest::SetHeaderInFile(const bool& _headerInFile)
{
    m_headerInFile = _headerInFile;
    m_headerInFileHasBeenSet = true;
}

bool CreateFileRequest::HeaderInFileHasBeenSet() const
{
    return m_headerInFileHasBeenSet;
}

vector<string> CreateFileRequest::GetHeaderColumns() const
{
    return m_headerColumns;
}

void CreateFileRequest::SetHeaderColumns(const vector<string>& _headerColumns)
{
    m_headerColumns = _headerColumns;
    m_headerColumnsHasBeenSet = true;
}

bool CreateFileRequest::HeaderColumnsHasBeenSet() const
{
    return m_headerColumnsHasBeenSet;
}

vector<FileInfo> CreateFileRequest::GetFileInfos() const
{
    return m_fileInfos;
}

void CreateFileRequest::SetFileInfos(const vector<FileInfo>& _fileInfos)
{
    m_fileInfos = _fileInfos;
    m_fileInfosHasBeenSet = true;
}

bool CreateFileRequest::FileInfosHasBeenSet() const
{
    return m_fileInfosHasBeenSet;
}


