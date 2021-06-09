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

#include <tencentcloud/ecm/v20190719/model/TerminateInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

TerminateInstancesRequest::TerminateInstancesRequest() :
    m_instanceIdSetHasBeenSet(false),
    m_terminateDelayHasBeenSet(false),
    m_terminateTimeHasBeenSet(false),
    m_associatedResourceDestroyHasBeenSet(false)
{
}

string TerminateInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIdSet.begin(); itr != m_instanceIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_terminateDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TerminateDelay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_terminateDelay, allocator);
    }

    if (m_terminateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TerminateTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_terminateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_associatedResourceDestroyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssociatedResourceDestroy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_associatedResourceDestroy, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> TerminateInstancesRequest::GetInstanceIdSet() const
{
    return m_instanceIdSet;
}

void TerminateInstancesRequest::SetInstanceIdSet(const vector<string>& _instanceIdSet)
{
    m_instanceIdSet = _instanceIdSet;
    m_instanceIdSetHasBeenSet = true;
}

bool TerminateInstancesRequest::InstanceIdSetHasBeenSet() const
{
    return m_instanceIdSetHasBeenSet;
}

bool TerminateInstancesRequest::GetTerminateDelay() const
{
    return m_terminateDelay;
}

void TerminateInstancesRequest::SetTerminateDelay(const bool& _terminateDelay)
{
    m_terminateDelay = _terminateDelay;
    m_terminateDelayHasBeenSet = true;
}

bool TerminateInstancesRequest::TerminateDelayHasBeenSet() const
{
    return m_terminateDelayHasBeenSet;
}

string TerminateInstancesRequest::GetTerminateTime() const
{
    return m_terminateTime;
}

void TerminateInstancesRequest::SetTerminateTime(const string& _terminateTime)
{
    m_terminateTime = _terminateTime;
    m_terminateTimeHasBeenSet = true;
}

bool TerminateInstancesRequest::TerminateTimeHasBeenSet() const
{
    return m_terminateTimeHasBeenSet;
}

bool TerminateInstancesRequest::GetAssociatedResourceDestroy() const
{
    return m_associatedResourceDestroy;
}

void TerminateInstancesRequest::SetAssociatedResourceDestroy(const bool& _associatedResourceDestroy)
{
    m_associatedResourceDestroy = _associatedResourceDestroy;
    m_associatedResourceDestroyHasBeenSet = true;
}

bool TerminateInstancesRequest::AssociatedResourceDestroyHasBeenSet() const
{
    return m_associatedResourceDestroyHasBeenSet;
}


