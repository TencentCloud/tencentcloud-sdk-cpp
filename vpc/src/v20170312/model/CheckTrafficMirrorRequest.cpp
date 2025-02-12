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

#include <tencentcloud/vpc/v20170312/model/CheckTrafficMirrorRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CheckTrafficMirrorRequest::CheckTrafficMirrorRequest() :
    m_vpcIdHasBeenSet(false),
    m_trafficMirrorIdHasBeenSet(false),
    m_collectorSourcesHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_collectorTargetHasBeenSet(false)
{
}

string CheckTrafficMirrorRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_trafficMirrorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficMirrorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_trafficMirrorId.c_str(), allocator).Move(), allocator);
    }

    if (m_collectorSourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectorSources";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_collectorSources.begin(); itr != m_collectorSources.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_collectorTargetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectorTarget";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_collectorTarget.begin(); itr != m_collectorTarget.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CheckTrafficMirrorRequest::GetVpcId() const
{
    return m_vpcId;
}

void CheckTrafficMirrorRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CheckTrafficMirrorRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CheckTrafficMirrorRequest::GetTrafficMirrorId() const
{
    return m_trafficMirrorId;
}

void CheckTrafficMirrorRequest::SetTrafficMirrorId(const string& _trafficMirrorId)
{
    m_trafficMirrorId = _trafficMirrorId;
    m_trafficMirrorIdHasBeenSet = true;
}

bool CheckTrafficMirrorRequest::TrafficMirrorIdHasBeenSet() const
{
    return m_trafficMirrorIdHasBeenSet;
}

vector<string> CheckTrafficMirrorRequest::GetCollectorSources() const
{
    return m_collectorSources;
}

void CheckTrafficMirrorRequest::SetCollectorSources(const vector<string>& _collectorSources)
{
    m_collectorSources = _collectorSources;
    m_collectorSourcesHasBeenSet = true;
}

bool CheckTrafficMirrorRequest::CollectorSourcesHasBeenSet() const
{
    return m_collectorSourcesHasBeenSet;
}

string CheckTrafficMirrorRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CheckTrafficMirrorRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CheckTrafficMirrorRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

vector<TrafficMirrorTarget> CheckTrafficMirrorRequest::GetCollectorTarget() const
{
    return m_collectorTarget;
}

void CheckTrafficMirrorRequest::SetCollectorTarget(const vector<TrafficMirrorTarget>& _collectorTarget)
{
    m_collectorTarget = _collectorTarget;
    m_collectorTargetHasBeenSet = true;
}

bool CheckTrafficMirrorRequest::CollectorTargetHasBeenSet() const
{
    return m_collectorTargetHasBeenSet;
}


