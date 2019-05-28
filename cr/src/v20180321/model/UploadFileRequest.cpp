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

#include <tencentcloud/cr/v20180321/model/UploadFileRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud;
using namespace TencentCloud::Cr::V20180321;
using namespace TencentCloud::Cr::V20180321::Model;
using namespace rapidjson;
using namespace std;

UploadFileRequest::UploadFileRequest() :
    m_moduleHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_fileUrlHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileDateHasBeenSet(false)
{
}

string UploadFileRequest::ToJsonString()
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_operationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_fileUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_fileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileDateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_fileDate.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UploadFileRequest::GetModule() const
{
    return m_module;
}

void UploadFileRequest::SetModule(const string& module)
{
    m_module = module;
    m_moduleHasBeenSet = true;
}

bool UploadFileRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string UploadFileRequest::GetOperation() const
{
    return m_operation;
}

void UploadFileRequest::SetOperation(const string& operation)
{
    m_operation = operation;
    m_operationHasBeenSet = true;
}

bool UploadFileRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string UploadFileRequest::GetFileUrl() const
{
    return m_fileUrl;
}

void UploadFileRequest::SetFileUrl(const string& fileUrl)
{
    m_fileUrl = fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool UploadFileRequest::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}

string UploadFileRequest::GetFileName() const
{
    return m_fileName;
}

void UploadFileRequest::SetFileName(const string& fileName)
{
    m_fileName = fileName;
    m_fileNameHasBeenSet = true;
}

bool UploadFileRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string UploadFileRequest::GetFileDate() const
{
    return m_fileDate;
}

void UploadFileRequest::SetFileDate(const string& fileDate)
{
    m_fileDate = fileDate;
    m_fileDateHasBeenSet = true;
}

bool UploadFileRequest::FileDateHasBeenSet() const
{
    return m_fileDateHasBeenSet;
}


