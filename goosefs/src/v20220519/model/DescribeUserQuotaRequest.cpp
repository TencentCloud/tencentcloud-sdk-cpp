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

#include <tencentcloud/goosefs/v20220519/model/DescribeUserQuotaRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

DescribeUserQuotaRequest::DescribeUserQuotaRequest() :
    m_fileSystemIdHasBeenSet(false),
    m_quotaIdsHasBeenSet(false),
    m_quotaTypeHasBeenSet(false),
    m_quotaObjectNamesHasBeenSet(false)
{
}

string DescribeUserQuotaRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_quotaIds.begin(); itr != m_quotaIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_quotaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_quotaType.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaObjectNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaObjectNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_quotaObjectNames.begin(); itr != m_quotaObjectNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeUserQuotaRequest::GetFileSystemId() const
{
    return m_fileSystemId;
}

void DescribeUserQuotaRequest::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool DescribeUserQuotaRequest::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

vector<string> DescribeUserQuotaRequest::GetQuotaIds() const
{
    return m_quotaIds;
}

void DescribeUserQuotaRequest::SetQuotaIds(const vector<string>& _quotaIds)
{
    m_quotaIds = _quotaIds;
    m_quotaIdsHasBeenSet = true;
}

bool DescribeUserQuotaRequest::QuotaIdsHasBeenSet() const
{
    return m_quotaIdsHasBeenSet;
}

string DescribeUserQuotaRequest::GetQuotaType() const
{
    return m_quotaType;
}

void DescribeUserQuotaRequest::SetQuotaType(const string& _quotaType)
{
    m_quotaType = _quotaType;
    m_quotaTypeHasBeenSet = true;
}

bool DescribeUserQuotaRequest::QuotaTypeHasBeenSet() const
{
    return m_quotaTypeHasBeenSet;
}

vector<string> DescribeUserQuotaRequest::GetQuotaObjectNames() const
{
    return m_quotaObjectNames;
}

void DescribeUserQuotaRequest::SetQuotaObjectNames(const vector<string>& _quotaObjectNames)
{
    m_quotaObjectNames = _quotaObjectNames;
    m_quotaObjectNamesHasBeenSet = true;
}

bool DescribeUserQuotaRequest::QuotaObjectNamesHasBeenSet() const
{
    return m_quotaObjectNamesHasBeenSet;
}


