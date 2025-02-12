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

#include <tencentcloud/vpc/v20170312/model/ResetTrafficMirrorTargetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ResetTrafficMirrorTargetRequest::ResetTrafficMirrorTargetRequest() :
    m_trafficMirrorIdHasBeenSet(false),
    m_collectorTargetHasBeenSet(false),
    m_subnetIdHasBeenSet(false)
{
}

string ResetTrafficMirrorTargetRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_trafficMirrorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficMirrorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_trafficMirrorId.c_str(), allocator).Move(), allocator);
    }

    if (m_collectorTargetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectorTarget";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_collectorTarget.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ResetTrafficMirrorTargetRequest::GetTrafficMirrorId() const
{
    return m_trafficMirrorId;
}

void ResetTrafficMirrorTargetRequest::SetTrafficMirrorId(const string& _trafficMirrorId)
{
    m_trafficMirrorId = _trafficMirrorId;
    m_trafficMirrorIdHasBeenSet = true;
}

bool ResetTrafficMirrorTargetRequest::TrafficMirrorIdHasBeenSet() const
{
    return m_trafficMirrorIdHasBeenSet;
}

TrafficMirrorTarget ResetTrafficMirrorTargetRequest::GetCollectorTarget() const
{
    return m_collectorTarget;
}

void ResetTrafficMirrorTargetRequest::SetCollectorTarget(const TrafficMirrorTarget& _collectorTarget)
{
    m_collectorTarget = _collectorTarget;
    m_collectorTargetHasBeenSet = true;
}

bool ResetTrafficMirrorTargetRequest::CollectorTargetHasBeenSet() const
{
    return m_collectorTargetHasBeenSet;
}

string ResetTrafficMirrorTargetRequest::GetSubnetId() const
{
    return m_subnetId;
}

void ResetTrafficMirrorTargetRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ResetTrafficMirrorTargetRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}


