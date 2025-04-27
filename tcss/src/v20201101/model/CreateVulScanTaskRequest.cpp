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

#include <tencentcloud/tcss/v20201101/model/CreateVulScanTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

CreateVulScanTaskRequest::CreateVulScanTaskRequest() :
    m_localImageScanTypeHasBeenSet(false),
    m_localImageIDsHasBeenSet(false),
    m_registryImageScanTypeHasBeenSet(false),
    m_registryImageIDsHasBeenSet(false),
    m_localTaskIDHasBeenSet(false),
    m_registryTaskIDHasBeenSet(false),
    m_localImageContainerRunningHasBeenSet(false),
    m_registryImageContainerRunningHasBeenSet(false),
    m_isLatestHasBeenSet(false)
{
}

string CreateVulScanTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_localImageScanTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalImageScanType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_localImageScanType.c_str(), allocator).Move(), allocator);
    }

    if (m_localImageIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalImageIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_localImageIDs.begin(); itr != m_localImageIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_registryImageScanTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryImageScanType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryImageScanType.c_str(), allocator).Move(), allocator);
    }

    if (m_registryImageIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryImageIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_registryImageIDs.begin(); itr != m_registryImageIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_localTaskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalTaskID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_localTaskID, allocator);
    }

    if (m_registryTaskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryTaskID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_registryTaskID, allocator);
    }

    if (m_localImageContainerRunningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalImageContainerRunning";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_localImageContainerRunning, allocator);
    }

    if (m_registryImageContainerRunningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryImageContainerRunning";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_registryImageContainerRunning, allocator);
    }

    if (m_isLatestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLatest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isLatest, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateVulScanTaskRequest::GetLocalImageScanType() const
{
    return m_localImageScanType;
}

void CreateVulScanTaskRequest::SetLocalImageScanType(const string& _localImageScanType)
{
    m_localImageScanType = _localImageScanType;
    m_localImageScanTypeHasBeenSet = true;
}

bool CreateVulScanTaskRequest::LocalImageScanTypeHasBeenSet() const
{
    return m_localImageScanTypeHasBeenSet;
}

vector<string> CreateVulScanTaskRequest::GetLocalImageIDs() const
{
    return m_localImageIDs;
}

void CreateVulScanTaskRequest::SetLocalImageIDs(const vector<string>& _localImageIDs)
{
    m_localImageIDs = _localImageIDs;
    m_localImageIDsHasBeenSet = true;
}

bool CreateVulScanTaskRequest::LocalImageIDsHasBeenSet() const
{
    return m_localImageIDsHasBeenSet;
}

string CreateVulScanTaskRequest::GetRegistryImageScanType() const
{
    return m_registryImageScanType;
}

void CreateVulScanTaskRequest::SetRegistryImageScanType(const string& _registryImageScanType)
{
    m_registryImageScanType = _registryImageScanType;
    m_registryImageScanTypeHasBeenSet = true;
}

bool CreateVulScanTaskRequest::RegistryImageScanTypeHasBeenSet() const
{
    return m_registryImageScanTypeHasBeenSet;
}

vector<uint64_t> CreateVulScanTaskRequest::GetRegistryImageIDs() const
{
    return m_registryImageIDs;
}

void CreateVulScanTaskRequest::SetRegistryImageIDs(const vector<uint64_t>& _registryImageIDs)
{
    m_registryImageIDs = _registryImageIDs;
    m_registryImageIDsHasBeenSet = true;
}

bool CreateVulScanTaskRequest::RegistryImageIDsHasBeenSet() const
{
    return m_registryImageIDsHasBeenSet;
}

int64_t CreateVulScanTaskRequest::GetLocalTaskID() const
{
    return m_localTaskID;
}

void CreateVulScanTaskRequest::SetLocalTaskID(const int64_t& _localTaskID)
{
    m_localTaskID = _localTaskID;
    m_localTaskIDHasBeenSet = true;
}

bool CreateVulScanTaskRequest::LocalTaskIDHasBeenSet() const
{
    return m_localTaskIDHasBeenSet;
}

int64_t CreateVulScanTaskRequest::GetRegistryTaskID() const
{
    return m_registryTaskID;
}

void CreateVulScanTaskRequest::SetRegistryTaskID(const int64_t& _registryTaskID)
{
    m_registryTaskID = _registryTaskID;
    m_registryTaskIDHasBeenSet = true;
}

bool CreateVulScanTaskRequest::RegistryTaskIDHasBeenSet() const
{
    return m_registryTaskIDHasBeenSet;
}

bool CreateVulScanTaskRequest::GetLocalImageContainerRunning() const
{
    return m_localImageContainerRunning;
}

void CreateVulScanTaskRequest::SetLocalImageContainerRunning(const bool& _localImageContainerRunning)
{
    m_localImageContainerRunning = _localImageContainerRunning;
    m_localImageContainerRunningHasBeenSet = true;
}

bool CreateVulScanTaskRequest::LocalImageContainerRunningHasBeenSet() const
{
    return m_localImageContainerRunningHasBeenSet;
}

bool CreateVulScanTaskRequest::GetRegistryImageContainerRunning() const
{
    return m_registryImageContainerRunning;
}

void CreateVulScanTaskRequest::SetRegistryImageContainerRunning(const bool& _registryImageContainerRunning)
{
    m_registryImageContainerRunning = _registryImageContainerRunning;
    m_registryImageContainerRunningHasBeenSet = true;
}

bool CreateVulScanTaskRequest::RegistryImageContainerRunningHasBeenSet() const
{
    return m_registryImageContainerRunningHasBeenSet;
}

bool CreateVulScanTaskRequest::GetIsLatest() const
{
    return m_isLatest;
}

void CreateVulScanTaskRequest::SetIsLatest(const bool& _isLatest)
{
    m_isLatest = _isLatest;
    m_isLatestHasBeenSet = true;
}

bool CreateVulScanTaskRequest::IsLatestHasBeenSet() const
{
    return m_isLatestHasBeenSet;
}


