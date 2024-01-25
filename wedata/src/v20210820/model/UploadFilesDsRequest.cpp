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

#include <tencentcloud/wedata/v20210820/model/UploadFilesDsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

UploadFilesDsRequest::UploadFilesDsRequest() :
    m_projectIdHasBeenSet(false),
    m_fileNamesHasBeenSet(false),
    m_originDomainHasBeenSet(false)
{
}

string UploadFilesDsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileNames.begin(); itr != m_fileNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_originDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_originDomain.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UploadFilesDsRequest::GetProjectId() const
{
    return m_projectId;
}

void UploadFilesDsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool UploadFilesDsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<string> UploadFilesDsRequest::GetFileNames() const
{
    return m_fileNames;
}

void UploadFilesDsRequest::SetFileNames(const vector<string>& _fileNames)
{
    m_fileNames = _fileNames;
    m_fileNamesHasBeenSet = true;
}

bool UploadFilesDsRequest::FileNamesHasBeenSet() const
{
    return m_fileNamesHasBeenSet;
}

string UploadFilesDsRequest::GetOriginDomain() const
{
    return m_originDomain;
}

void UploadFilesDsRequest::SetOriginDomain(const string& _originDomain)
{
    m_originDomain = _originDomain;
    m_originDomainHasBeenSet = true;
}

bool UploadFilesDsRequest::OriginDomainHasBeenSet() const
{
    return m_originDomainHasBeenSet;
}


