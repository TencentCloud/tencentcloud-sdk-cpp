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

#include <tencentcloud/gs/v20191118/model/UploadFileToAndroidInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

UploadFileToAndroidInstancesRequest::UploadFileToAndroidInstancesRequest() :
    m_androidInstanceIdsHasBeenSet(false),
    m_fileURLHasBeenSet(false),
    m_destinationDirectoryHasBeenSet(false)
{
}

string UploadFileToAndroidInstancesRequest::ToJsonString() const
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

    if (m_fileURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileURL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileURL.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationDirectoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationDirectory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_destinationDirectory.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> UploadFileToAndroidInstancesRequest::GetAndroidInstanceIds() const
{
    return m_androidInstanceIds;
}

void UploadFileToAndroidInstancesRequest::SetAndroidInstanceIds(const vector<string>& _androidInstanceIds)
{
    m_androidInstanceIds = _androidInstanceIds;
    m_androidInstanceIdsHasBeenSet = true;
}

bool UploadFileToAndroidInstancesRequest::AndroidInstanceIdsHasBeenSet() const
{
    return m_androidInstanceIdsHasBeenSet;
}

string UploadFileToAndroidInstancesRequest::GetFileURL() const
{
    return m_fileURL;
}

void UploadFileToAndroidInstancesRequest::SetFileURL(const string& _fileURL)
{
    m_fileURL = _fileURL;
    m_fileURLHasBeenSet = true;
}

bool UploadFileToAndroidInstancesRequest::FileURLHasBeenSet() const
{
    return m_fileURLHasBeenSet;
}

string UploadFileToAndroidInstancesRequest::GetDestinationDirectory() const
{
    return m_destinationDirectory;
}

void UploadFileToAndroidInstancesRequest::SetDestinationDirectory(const string& _destinationDirectory)
{
    m_destinationDirectory = _destinationDirectory;
    m_destinationDirectoryHasBeenSet = true;
}

bool UploadFileToAndroidInstancesRequest::DestinationDirectoryHasBeenSet() const
{
    return m_destinationDirectoryHasBeenSet;
}


