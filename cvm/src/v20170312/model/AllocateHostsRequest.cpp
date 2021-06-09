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

#include <tencentcloud/cvm/v20170312/model/AllocateHostsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

AllocateHostsRequest::AllocateHostsRequest() :
    m_placementHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_hostChargePrepaidHasBeenSet(false),
    m_hostChargeTypeHasBeenSet(false),
    m_hostTypeHasBeenSet(false),
    m_hostCountHasBeenSet(false),
    m_tagSpecificationHasBeenSet(false)
{
}

string AllocateHostsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_placementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Placement";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_placement.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_hostChargePrepaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hostChargePrepaid.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_hostChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hostChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_hostTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hostType.c_str(), allocator).Move(), allocator);
    }

    if (m_hostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hostCount, allocator);
    }

    if (m_tagSpecificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSpecification";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSpecification.begin(); itr != m_tagSpecification.end(); ++itr, ++i)
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


Placement AllocateHostsRequest::GetPlacement() const
{
    return m_placement;
}

void AllocateHostsRequest::SetPlacement(const Placement& _placement)
{
    m_placement = _placement;
    m_placementHasBeenSet = true;
}

bool AllocateHostsRequest::PlacementHasBeenSet() const
{
    return m_placementHasBeenSet;
}

string AllocateHostsRequest::GetClientToken() const
{
    return m_clientToken;
}

void AllocateHostsRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool AllocateHostsRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

ChargePrepaid AllocateHostsRequest::GetHostChargePrepaid() const
{
    return m_hostChargePrepaid;
}

void AllocateHostsRequest::SetHostChargePrepaid(const ChargePrepaid& _hostChargePrepaid)
{
    m_hostChargePrepaid = _hostChargePrepaid;
    m_hostChargePrepaidHasBeenSet = true;
}

bool AllocateHostsRequest::HostChargePrepaidHasBeenSet() const
{
    return m_hostChargePrepaidHasBeenSet;
}

string AllocateHostsRequest::GetHostChargeType() const
{
    return m_hostChargeType;
}

void AllocateHostsRequest::SetHostChargeType(const string& _hostChargeType)
{
    m_hostChargeType = _hostChargeType;
    m_hostChargeTypeHasBeenSet = true;
}

bool AllocateHostsRequest::HostChargeTypeHasBeenSet() const
{
    return m_hostChargeTypeHasBeenSet;
}

string AllocateHostsRequest::GetHostType() const
{
    return m_hostType;
}

void AllocateHostsRequest::SetHostType(const string& _hostType)
{
    m_hostType = _hostType;
    m_hostTypeHasBeenSet = true;
}

bool AllocateHostsRequest::HostTypeHasBeenSet() const
{
    return m_hostTypeHasBeenSet;
}

uint64_t AllocateHostsRequest::GetHostCount() const
{
    return m_hostCount;
}

void AllocateHostsRequest::SetHostCount(const uint64_t& _hostCount)
{
    m_hostCount = _hostCount;
    m_hostCountHasBeenSet = true;
}

bool AllocateHostsRequest::HostCountHasBeenSet() const
{
    return m_hostCountHasBeenSet;
}

vector<TagSpecification> AllocateHostsRequest::GetTagSpecification() const
{
    return m_tagSpecification;
}

void AllocateHostsRequest::SetTagSpecification(const vector<TagSpecification>& _tagSpecification)
{
    m_tagSpecification = _tagSpecification;
    m_tagSpecificationHasBeenSet = true;
}

bool AllocateHostsRequest::TagSpecificationHasBeenSet() const
{
    return m_tagSpecificationHasBeenSet;
}


