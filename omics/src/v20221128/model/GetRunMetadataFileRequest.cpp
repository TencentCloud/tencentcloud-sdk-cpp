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

#include <tencentcloud/omics/v20221128/model/GetRunMetadataFileRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

GetRunMetadataFileRequest::GetRunMetadataFileRequest() :
    m_runUuidHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_keysHasBeenSet(false)
{
}

string GetRunMetadataFileRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_runUuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunUuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_runUuid.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_keysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keys";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_keys.begin(); itr != m_keys.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetRunMetadataFileRequest::GetRunUuid() const
{
    return m_runUuid;
}

void GetRunMetadataFileRequest::SetRunUuid(const string& _runUuid)
{
    m_runUuid = _runUuid;
    m_runUuidHasBeenSet = true;
}

bool GetRunMetadataFileRequest::RunUuidHasBeenSet() const
{
    return m_runUuidHasBeenSet;
}

string GetRunMetadataFileRequest::GetProjectId() const
{
    return m_projectId;
}

void GetRunMetadataFileRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool GetRunMetadataFileRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string GetRunMetadataFileRequest::GetKey() const
{
    return m_key;
}

void GetRunMetadataFileRequest::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool GetRunMetadataFileRequest::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

vector<string> GetRunMetadataFileRequest::GetKeys() const
{
    return m_keys;
}

void GetRunMetadataFileRequest::SetKeys(const vector<string>& _keys)
{
    m_keys = _keys;
    m_keysHasBeenSet = true;
}

bool GetRunMetadataFileRequest::KeysHasBeenSet() const
{
    return m_keysHasBeenSet;
}


