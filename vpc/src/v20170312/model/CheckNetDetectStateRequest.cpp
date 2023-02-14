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

#include <tencentcloud/vpc/v20170312/model/CheckNetDetectStateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CheckNetDetectStateRequest::CheckNetDetectStateRequest() :
    m_detectDestinationIpHasBeenSet(false),
    m_netDetectIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_netDetectNameHasBeenSet(false),
    m_nextHopTypeHasBeenSet(false),
    m_nextHopDestinationHasBeenSet(false)
{
}

string CheckNetDetectStateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_detectDestinationIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectDestinationIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_detectDestinationIp.begin(); itr != m_detectDestinationIp.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_netDetectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetDetectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_netDetectId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_netDetectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetDetectName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_netDetectName.c_str(), allocator).Move(), allocator);
    }

    if (m_nextHopTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextHopType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nextHopType.c_str(), allocator).Move(), allocator);
    }

    if (m_nextHopDestinationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextHopDestination";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nextHopDestination.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> CheckNetDetectStateRequest::GetDetectDestinationIp() const
{
    return m_detectDestinationIp;
}

void CheckNetDetectStateRequest::SetDetectDestinationIp(const vector<string>& _detectDestinationIp)
{
    m_detectDestinationIp = _detectDestinationIp;
    m_detectDestinationIpHasBeenSet = true;
}

bool CheckNetDetectStateRequest::DetectDestinationIpHasBeenSet() const
{
    return m_detectDestinationIpHasBeenSet;
}

string CheckNetDetectStateRequest::GetNetDetectId() const
{
    return m_netDetectId;
}

void CheckNetDetectStateRequest::SetNetDetectId(const string& _netDetectId)
{
    m_netDetectId = _netDetectId;
    m_netDetectIdHasBeenSet = true;
}

bool CheckNetDetectStateRequest::NetDetectIdHasBeenSet() const
{
    return m_netDetectIdHasBeenSet;
}

string CheckNetDetectStateRequest::GetVpcId() const
{
    return m_vpcId;
}

void CheckNetDetectStateRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CheckNetDetectStateRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CheckNetDetectStateRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CheckNetDetectStateRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CheckNetDetectStateRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CheckNetDetectStateRequest::GetNetDetectName() const
{
    return m_netDetectName;
}

void CheckNetDetectStateRequest::SetNetDetectName(const string& _netDetectName)
{
    m_netDetectName = _netDetectName;
    m_netDetectNameHasBeenSet = true;
}

bool CheckNetDetectStateRequest::NetDetectNameHasBeenSet() const
{
    return m_netDetectNameHasBeenSet;
}

string CheckNetDetectStateRequest::GetNextHopType() const
{
    return m_nextHopType;
}

void CheckNetDetectStateRequest::SetNextHopType(const string& _nextHopType)
{
    m_nextHopType = _nextHopType;
    m_nextHopTypeHasBeenSet = true;
}

bool CheckNetDetectStateRequest::NextHopTypeHasBeenSet() const
{
    return m_nextHopTypeHasBeenSet;
}

string CheckNetDetectStateRequest::GetNextHopDestination() const
{
    return m_nextHopDestination;
}

void CheckNetDetectStateRequest::SetNextHopDestination(const string& _nextHopDestination)
{
    m_nextHopDestination = _nextHopDestination;
    m_nextHopDestinationHasBeenSet = true;
}

bool CheckNetDetectStateRequest::NextHopDestinationHasBeenSet() const
{
    return m_nextHopDestinationHasBeenSet;
}


