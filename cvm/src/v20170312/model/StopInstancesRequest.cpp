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

#include <tencentcloud/cvm/v20170312/model/StopInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

StopInstancesRequest::StopInstancesRequest() :
    m_instanceIdsHasBeenSet(false),
    m_forceStopHasBeenSet(false),
    m_stopTypeHasBeenSet(false),
    m_stoppedModeHasBeenSet(false)
{
}

string StopInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_forceStopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceStop";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forceStop, allocator);
    }

    if (m_stopTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StopType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_stopType.c_str(), allocator).Move(), allocator);
    }

    if (m_stoppedModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoppedMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_stoppedMode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> StopInstancesRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void StopInstancesRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool StopInstancesRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

bool StopInstancesRequest::GetForceStop() const
{
    return m_forceStop;
}

void StopInstancesRequest::SetForceStop(const bool& _forceStop)
{
    m_forceStop = _forceStop;
    m_forceStopHasBeenSet = true;
}

bool StopInstancesRequest::ForceStopHasBeenSet() const
{
    return m_forceStopHasBeenSet;
}

string StopInstancesRequest::GetStopType() const
{
    return m_stopType;
}

void StopInstancesRequest::SetStopType(const string& _stopType)
{
    m_stopType = _stopType;
    m_stopTypeHasBeenSet = true;
}

bool StopInstancesRequest::StopTypeHasBeenSet() const
{
    return m_stopTypeHasBeenSet;
}

string StopInstancesRequest::GetStoppedMode() const
{
    return m_stoppedMode;
}

void StopInstancesRequest::SetStoppedMode(const string& _stoppedMode)
{
    m_stoppedMode = _stoppedMode;
    m_stoppedModeHasBeenSet = true;
}

bool StopInstancesRequest::StoppedModeHasBeenSet() const
{
    return m_stoppedModeHasBeenSet;
}


