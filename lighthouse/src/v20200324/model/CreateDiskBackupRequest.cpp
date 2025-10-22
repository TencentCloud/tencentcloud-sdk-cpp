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

#include <tencentcloud/lighthouse/v20200324/model/CreateDiskBackupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

CreateDiskBackupRequest::CreateDiskBackupRequest() :
    m_diskIdHasBeenSet(false),
    m_diskBackupNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateDiskBackupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_diskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_diskId.c_str(), allocator).Move(), allocator);
    }

    if (m_diskBackupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskBackupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_diskBackupName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
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


string CreateDiskBackupRequest::GetDiskId() const
{
    return m_diskId;
}

void CreateDiskBackupRequest::SetDiskId(const string& _diskId)
{
    m_diskId = _diskId;
    m_diskIdHasBeenSet = true;
}

bool CreateDiskBackupRequest::DiskIdHasBeenSet() const
{
    return m_diskIdHasBeenSet;
}

string CreateDiskBackupRequest::GetDiskBackupName() const
{
    return m_diskBackupName;
}

void CreateDiskBackupRequest::SetDiskBackupName(const string& _diskBackupName)
{
    m_diskBackupName = _diskBackupName;
    m_diskBackupNameHasBeenSet = true;
}

bool CreateDiskBackupRequest::DiskBackupNameHasBeenSet() const
{
    return m_diskBackupNameHasBeenSet;
}

vector<Tag> CreateDiskBackupRequest::GetTags() const
{
    return m_tags;
}

void CreateDiskBackupRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateDiskBackupRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


