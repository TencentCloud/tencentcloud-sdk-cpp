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

#include <tencentcloud/tcss/v20201101/model/StopVulScanTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

StopVulScanTaskRequest::StopVulScanTaskRequest() :
    m_localTaskIDHasBeenSet(false),
    m_localImageIDsHasBeenSet(false),
    m_registryImageIDsHasBeenSet(false),
    m_registryTaskIDHasBeenSet(false)
{
}

string StopVulScanTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_localTaskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalTaskID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_localTaskID, allocator);
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

    if (m_registryTaskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryTaskID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_registryTaskID, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t StopVulScanTaskRequest::GetLocalTaskID() const
{
    return m_localTaskID;
}

void StopVulScanTaskRequest::SetLocalTaskID(const int64_t& _localTaskID)
{
    m_localTaskID = _localTaskID;
    m_localTaskIDHasBeenSet = true;
}

bool StopVulScanTaskRequest::LocalTaskIDHasBeenSet() const
{
    return m_localTaskIDHasBeenSet;
}

vector<string> StopVulScanTaskRequest::GetLocalImageIDs() const
{
    return m_localImageIDs;
}

void StopVulScanTaskRequest::SetLocalImageIDs(const vector<string>& _localImageIDs)
{
    m_localImageIDs = _localImageIDs;
    m_localImageIDsHasBeenSet = true;
}

bool StopVulScanTaskRequest::LocalImageIDsHasBeenSet() const
{
    return m_localImageIDsHasBeenSet;
}

vector<uint64_t> StopVulScanTaskRequest::GetRegistryImageIDs() const
{
    return m_registryImageIDs;
}

void StopVulScanTaskRequest::SetRegistryImageIDs(const vector<uint64_t>& _registryImageIDs)
{
    m_registryImageIDs = _registryImageIDs;
    m_registryImageIDsHasBeenSet = true;
}

bool StopVulScanTaskRequest::RegistryImageIDsHasBeenSet() const
{
    return m_registryImageIDsHasBeenSet;
}

int64_t StopVulScanTaskRequest::GetRegistryTaskID() const
{
    return m_registryTaskID;
}

void StopVulScanTaskRequest::SetRegistryTaskID(const int64_t& _registryTaskID)
{
    m_registryTaskID = _registryTaskID;
    m_registryTaskIDHasBeenSet = true;
}

bool StopVulScanTaskRequest::RegistryTaskIDHasBeenSet() const
{
    return m_registryTaskIDHasBeenSet;
}


