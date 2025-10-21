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

#include <tencentcloud/ioa/v20220601/model/CreateDLPFileDetectTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

CreateDLPFileDetectTaskRequest::CreateDLPFileDetectTaskRequest() :
    m_downloadUrlHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileMd5HasBeenSet(false),
    m_balanceTypeHasBeenSet(false),
    m_domainInstanceIdHasBeenSet(false),
    m_selectNodeIdsHasBeenSet(false),
    m_groupIdHasBeenSet(false)
{
}

string CreateDLPFileDetectTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_downloadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_downloadUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileMd5";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_balanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BalanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_balanceType, allocator);
    }

    if (m_domainInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_selectNodeIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectNodeIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_selectNodeIds.begin(); itr != m_selectNodeIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDLPFileDetectTaskRequest::GetDownloadUrl() const
{
    return m_downloadUrl;
}

void CreateDLPFileDetectTaskRequest::SetDownloadUrl(const string& _downloadUrl)
{
    m_downloadUrl = _downloadUrl;
    m_downloadUrlHasBeenSet = true;
}

bool CreateDLPFileDetectTaskRequest::DownloadUrlHasBeenSet() const
{
    return m_downloadUrlHasBeenSet;
}

string CreateDLPFileDetectTaskRequest::GetFileName() const
{
    return m_fileName;
}

void CreateDLPFileDetectTaskRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool CreateDLPFileDetectTaskRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string CreateDLPFileDetectTaskRequest::GetFileMd5() const
{
    return m_fileMd5;
}

void CreateDLPFileDetectTaskRequest::SetFileMd5(const string& _fileMd5)
{
    m_fileMd5 = _fileMd5;
    m_fileMd5HasBeenSet = true;
}

bool CreateDLPFileDetectTaskRequest::FileMd5HasBeenSet() const
{
    return m_fileMd5HasBeenSet;
}

int64_t CreateDLPFileDetectTaskRequest::GetBalanceType() const
{
    return m_balanceType;
}

void CreateDLPFileDetectTaskRequest::SetBalanceType(const int64_t& _balanceType)
{
    m_balanceType = _balanceType;
    m_balanceTypeHasBeenSet = true;
}

bool CreateDLPFileDetectTaskRequest::BalanceTypeHasBeenSet() const
{
    return m_balanceTypeHasBeenSet;
}

string CreateDLPFileDetectTaskRequest::GetDomainInstanceId() const
{
    return m_domainInstanceId;
}

void CreateDLPFileDetectTaskRequest::SetDomainInstanceId(const string& _domainInstanceId)
{
    m_domainInstanceId = _domainInstanceId;
    m_domainInstanceIdHasBeenSet = true;
}

bool CreateDLPFileDetectTaskRequest::DomainInstanceIdHasBeenSet() const
{
    return m_domainInstanceIdHasBeenSet;
}

vector<string> CreateDLPFileDetectTaskRequest::GetSelectNodeIds() const
{
    return m_selectNodeIds;
}

void CreateDLPFileDetectTaskRequest::SetSelectNodeIds(const vector<string>& _selectNodeIds)
{
    m_selectNodeIds = _selectNodeIds;
    m_selectNodeIdsHasBeenSet = true;
}

bool CreateDLPFileDetectTaskRequest::SelectNodeIdsHasBeenSet() const
{
    return m_selectNodeIdsHasBeenSet;
}

string CreateDLPFileDetectTaskRequest::GetGroupId() const
{
    return m_groupId;
}

void CreateDLPFileDetectTaskRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool CreateDLPFileDetectTaskRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}


