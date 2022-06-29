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

#include <tencentcloud/rum/v20210622/model/DescribeOfflineLogsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeOfflineLogsRequest::DescribeOfflineLogsRequest() :
    m_projectKeyHasBeenSet(false),
    m_fileIDsHasBeenSet(false)
{
}

string DescribeOfflineLogsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectKey.c_str(), allocator).Move(), allocator);
    }

    if (m_fileIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileIDs.begin(); itr != m_fileIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeOfflineLogsRequest::GetProjectKey() const
{
    return m_projectKey;
}

void DescribeOfflineLogsRequest::SetProjectKey(const string& _projectKey)
{
    m_projectKey = _projectKey;
    m_projectKeyHasBeenSet = true;
}

bool DescribeOfflineLogsRequest::ProjectKeyHasBeenSet() const
{
    return m_projectKeyHasBeenSet;
}

vector<string> DescribeOfflineLogsRequest::GetFileIDs() const
{
    return m_fileIDs;
}

void DescribeOfflineLogsRequest::SetFileIDs(const vector<string>& _fileIDs)
{
    m_fileIDs = _fileIDs;
    m_fileIDsHasBeenSet = true;
}

bool DescribeOfflineLogsRequest::FileIDsHasBeenSet() const
{
    return m_fileIDsHasBeenSet;
}


