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

#include <tencentcloud/ecm/v20190719/model/RebootInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

RebootInstancesRequest::RebootInstancesRequest() :
    m_instanceIdSetHasBeenSet(false),
    m_forceRebootHasBeenSet(false),
    m_stopTypeHasBeenSet(false)
{
}

string RebootInstancesRequest::ToJsonString() const
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

    if (m_forceRebootHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceReboot";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forceReboot, allocator);
    }

    if (m_stopTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StopType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_stopType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> RebootInstancesRequest::GetInstanceIdSet() const
{
    return m_instanceIdSet;
}

void RebootInstancesRequest::SetInstanceIdSet(const vector<string>& _instanceIdSet)
{
    m_instanceIdSet = _instanceIdSet;
    m_instanceIdSetHasBeenSet = true;
}

bool RebootInstancesRequest::InstanceIdSetHasBeenSet() const
{
    return m_instanceIdSetHasBeenSet;
}

bool RebootInstancesRequest::GetForceReboot() const
{
    return m_forceReboot;
}

void RebootInstancesRequest::SetForceReboot(const bool& _forceReboot)
{
    m_forceReboot = _forceReboot;
    m_forceRebootHasBeenSet = true;
}

bool RebootInstancesRequest::ForceRebootHasBeenSet() const
{
    return m_forceRebootHasBeenSet;
}

string RebootInstancesRequest::GetStopType() const
{
    return m_stopType;
}

void RebootInstancesRequest::SetStopType(const string& _stopType)
{
    m_stopType = _stopType;
    m_stopTypeHasBeenSet = true;
}

bool RebootInstancesRequest::StopTypeHasBeenSet() const
{
    return m_stopTypeHasBeenSet;
}


