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

#include <tencentcloud/vpc/v20170312/model/CreateTrafficMirrorRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CreateTrafficMirrorRequest::CreateTrafficMirrorRequest() :
    m_vpcIdHasBeenSet(false),
    m_trafficMirrorNameHasBeenSet(false),
    m_trafficMirrorDescribeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_collectorSrcsHasBeenSet(false),
    m_natIdHasBeenSet(false),
    m_collectorNormalFiltersHasBeenSet(false),
    m_collectorTargetHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateTrafficMirrorRequest::ToJsonString() const
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

    if (m_trafficMirrorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficMirrorName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_trafficMirrorName.c_str(), allocator).Move(), allocator);
    }

    if (m_trafficMirrorDescribeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficMirrorDescribe";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_trafficMirrorDescribe.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_direction.c_str(), allocator).Move(), allocator);
    }

    if (m_collectorSrcsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectorSrcs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_collectorSrcs.begin(); itr != m_collectorSrcs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_natIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_natId.c_str(), allocator).Move(), allocator);
    }

    if (m_collectorNormalFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectorNormalFilters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_collectorNormalFilters.begin(); itr != m_collectorNormalFilters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
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


string CreateTrafficMirrorRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateTrafficMirrorRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateTrafficMirrorRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateTrafficMirrorRequest::GetTrafficMirrorName() const
{
    return m_trafficMirrorName;
}

void CreateTrafficMirrorRequest::SetTrafficMirrorName(const string& _trafficMirrorName)
{
    m_trafficMirrorName = _trafficMirrorName;
    m_trafficMirrorNameHasBeenSet = true;
}

bool CreateTrafficMirrorRequest::TrafficMirrorNameHasBeenSet() const
{
    return m_trafficMirrorNameHasBeenSet;
}

string CreateTrafficMirrorRequest::GetTrafficMirrorDescribe() const
{
    return m_trafficMirrorDescribe;
}

void CreateTrafficMirrorRequest::SetTrafficMirrorDescribe(const string& _trafficMirrorDescribe)
{
    m_trafficMirrorDescribe = _trafficMirrorDescribe;
    m_trafficMirrorDescribeHasBeenSet = true;
}

bool CreateTrafficMirrorRequest::TrafficMirrorDescribeHasBeenSet() const
{
    return m_trafficMirrorDescribeHasBeenSet;
}

string CreateTrafficMirrorRequest::GetState() const
{
    return m_state;
}

void CreateTrafficMirrorRequest::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool CreateTrafficMirrorRequest::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string CreateTrafficMirrorRequest::GetDirection() const
{
    return m_direction;
}

void CreateTrafficMirrorRequest::SetDirection(const string& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool CreateTrafficMirrorRequest::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

vector<string> CreateTrafficMirrorRequest::GetCollectorSrcs() const
{
    return m_collectorSrcs;
}

void CreateTrafficMirrorRequest::SetCollectorSrcs(const vector<string>& _collectorSrcs)
{
    m_collectorSrcs = _collectorSrcs;
    m_collectorSrcsHasBeenSet = true;
}

bool CreateTrafficMirrorRequest::CollectorSrcsHasBeenSet() const
{
    return m_collectorSrcsHasBeenSet;
}

string CreateTrafficMirrorRequest::GetNatId() const
{
    return m_natId;
}

void CreateTrafficMirrorRequest::SetNatId(const string& _natId)
{
    m_natId = _natId;
    m_natIdHasBeenSet = true;
}

bool CreateTrafficMirrorRequest::NatIdHasBeenSet() const
{
    return m_natIdHasBeenSet;
}

vector<TrafficMirrorFilter> CreateTrafficMirrorRequest::GetCollectorNormalFilters() const
{
    return m_collectorNormalFilters;
}

void CreateTrafficMirrorRequest::SetCollectorNormalFilters(const vector<TrafficMirrorFilter>& _collectorNormalFilters)
{
    m_collectorNormalFilters = _collectorNormalFilters;
    m_collectorNormalFiltersHasBeenSet = true;
}

bool CreateTrafficMirrorRequest::CollectorNormalFiltersHasBeenSet() const
{
    return m_collectorNormalFiltersHasBeenSet;
}

TrafficMirrorTarget CreateTrafficMirrorRequest::GetCollectorTarget() const
{
    return m_collectorTarget;
}

void CreateTrafficMirrorRequest::SetCollectorTarget(const TrafficMirrorTarget& _collectorTarget)
{
    m_collectorTarget = _collectorTarget;
    m_collectorTargetHasBeenSet = true;
}

bool CreateTrafficMirrorRequest::CollectorTargetHasBeenSet() const
{
    return m_collectorTargetHasBeenSet;
}

string CreateTrafficMirrorRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateTrafficMirrorRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateTrafficMirrorRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateTrafficMirrorRequest::GetType() const
{
    return m_type;
}

void CreateTrafficMirrorRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateTrafficMirrorRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<Tag> CreateTrafficMirrorRequest::GetTags() const
{
    return m_tags;
}

void CreateTrafficMirrorRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateTrafficMirrorRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


