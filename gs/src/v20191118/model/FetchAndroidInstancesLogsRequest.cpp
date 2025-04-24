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

#include <tencentcloud/gs/v20191118/model/FetchAndroidInstancesLogsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

FetchAndroidInstancesLogsRequest::FetchAndroidInstancesLogsRequest() :
    m_androidInstanceIdsHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_bucketRegionHasBeenSet(false),
    m_bucketDirectoryHasBeenSet(false),
    m_recentDaysHasBeenSet(false)
{
}

string FetchAndroidInstancesLogsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_androidInstanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_androidInstanceIds.begin(); itr != m_androidInstanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_bucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bucketRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketDirectoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketDirectory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bucketDirectory.c_str(), allocator).Move(), allocator);
    }

    if (m_recentDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecentDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_recentDays, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> FetchAndroidInstancesLogsRequest::GetAndroidInstanceIds() const
{
    return m_androidInstanceIds;
}

void FetchAndroidInstancesLogsRequest::SetAndroidInstanceIds(const vector<string>& _androidInstanceIds)
{
    m_androidInstanceIds = _androidInstanceIds;
    m_androidInstanceIdsHasBeenSet = true;
}

bool FetchAndroidInstancesLogsRequest::AndroidInstanceIdsHasBeenSet() const
{
    return m_androidInstanceIdsHasBeenSet;
}

string FetchAndroidInstancesLogsRequest::GetBucketName() const
{
    return m_bucketName;
}

void FetchAndroidInstancesLogsRequest::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool FetchAndroidInstancesLogsRequest::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

string FetchAndroidInstancesLogsRequest::GetBucketRegion() const
{
    return m_bucketRegion;
}

void FetchAndroidInstancesLogsRequest::SetBucketRegion(const string& _bucketRegion)
{
    m_bucketRegion = _bucketRegion;
    m_bucketRegionHasBeenSet = true;
}

bool FetchAndroidInstancesLogsRequest::BucketRegionHasBeenSet() const
{
    return m_bucketRegionHasBeenSet;
}

string FetchAndroidInstancesLogsRequest::GetBucketDirectory() const
{
    return m_bucketDirectory;
}

void FetchAndroidInstancesLogsRequest::SetBucketDirectory(const string& _bucketDirectory)
{
    m_bucketDirectory = _bucketDirectory;
    m_bucketDirectoryHasBeenSet = true;
}

bool FetchAndroidInstancesLogsRequest::BucketDirectoryHasBeenSet() const
{
    return m_bucketDirectoryHasBeenSet;
}

uint64_t FetchAndroidInstancesLogsRequest::GetRecentDays() const
{
    return m_recentDays;
}

void FetchAndroidInstancesLogsRequest::SetRecentDays(const uint64_t& _recentDays)
{
    m_recentDays = _recentDays;
    m_recentDaysHasBeenSet = true;
}

bool FetchAndroidInstancesLogsRequest::RecentDaysHasBeenSet() const
{
    return m_recentDaysHasBeenSet;
}


