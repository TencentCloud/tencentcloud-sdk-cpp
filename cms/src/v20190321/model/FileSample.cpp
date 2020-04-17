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

#include <tencentcloud/cms/v20190321/model/FileSample.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace rapidjson;
using namespace std;

FileSample::FileSample() :
    m_fileMd5HasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileUrlHasBeenSet(false),
    m_compressFileUrlHasBeenSet(false)
{
}

CoreInternalOutcome FileSample::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("FileMd5") && !value["FileMd5"].IsNull())
    {
        if (!value["FileMd5"].IsString())
        {
            return CoreInternalOutcome(Error("response `FileSample.FileMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileMd5 = string(value["FileMd5"].GetString());
        m_fileMd5HasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Error("response `FileSample.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileUrl") && !value["FileUrl"].IsNull())
    {
        if (!value["FileUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `FileSample.FileUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileUrl = string(value["FileUrl"].GetString());
        m_fileUrlHasBeenSet = true;
    }

    if (value.HasMember("CompressFileUrl") && !value["CompressFileUrl"].IsNull())
    {
        if (!value["CompressFileUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `FileSample.CompressFileUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compressFileUrl = string(value["CompressFileUrl"].GetString());
        m_compressFileUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileSample::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_fileMd5HasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_fileMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_fileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_compressFileUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CompressFileUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_compressFileUrl.c_str(), allocator).Move(), allocator);
    }

}


string FileSample::GetFileMd5() const
{
    return m_fileMd5;
}

void FileSample::SetFileMd5(const string& _fileMd5)
{
    m_fileMd5 = _fileMd5;
    m_fileMd5HasBeenSet = true;
}

bool FileSample::FileMd5HasBeenSet() const
{
    return m_fileMd5HasBeenSet;
}

string FileSample::GetFileName() const
{
    return m_fileName;
}

void FileSample::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool FileSample::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string FileSample::GetFileUrl() const
{
    return m_fileUrl;
}

void FileSample::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool FileSample::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}

string FileSample::GetCompressFileUrl() const
{
    return m_compressFileUrl;
}

void FileSample::SetCompressFileUrl(const string& _compressFileUrl)
{
    m_compressFileUrl = _compressFileUrl;
    m_compressFileUrlHasBeenSet = true;
}

bool FileSample::CompressFileUrlHasBeenSet() const
{
    return m_compressFileUrlHasBeenSet;
}

