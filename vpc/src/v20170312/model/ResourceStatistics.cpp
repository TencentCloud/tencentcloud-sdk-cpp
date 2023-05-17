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

#include <tencentcloud/vpc/v20170312/model/ResourceStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ResourceStatistics::ResourceStatistics() :
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_resourceStatisticsItemSetHasBeenSet(false)
{
}

CoreInternalOutcome ResourceStatistics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceStatistics.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceStatistics.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceStatistics.Ip` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ip = value["Ip"].GetUint64();
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("ResourceStatisticsItemSet") && !value["ResourceStatisticsItemSet"].IsNull())
    {
        if (!value["ResourceStatisticsItemSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourceStatistics.ResourceStatisticsItemSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceStatisticsItemSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResourceStatisticsItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceStatisticsItemSet.push_back(item);
        }
        m_resourceStatisticsItemSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceStatistics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ip, allocator);
    }

    if (m_resourceStatisticsItemSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceStatisticsItemSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceStatisticsItemSet.begin(); itr != m_resourceStatisticsItemSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ResourceStatistics::GetVpcId() const
{
    return m_vpcId;
}

void ResourceStatistics::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ResourceStatistics::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ResourceStatistics::GetSubnetId() const
{
    return m_subnetId;
}

void ResourceStatistics::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ResourceStatistics::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

uint64_t ResourceStatistics::GetIp() const
{
    return m_ip;
}

void ResourceStatistics::SetIp(const uint64_t& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool ResourceStatistics::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

vector<ResourceStatisticsItem> ResourceStatistics::GetResourceStatisticsItemSet() const
{
    return m_resourceStatisticsItemSet;
}

void ResourceStatistics::SetResourceStatisticsItemSet(const vector<ResourceStatisticsItem>& _resourceStatisticsItemSet)
{
    m_resourceStatisticsItemSet = _resourceStatisticsItemSet;
    m_resourceStatisticsItemSetHasBeenSet = true;
}

bool ResourceStatistics::ResourceStatisticsItemSetHasBeenSet() const
{
    return m_resourceStatisticsItemSetHasBeenSet;
}

