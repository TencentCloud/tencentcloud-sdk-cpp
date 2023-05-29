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

#include <tencentcloud/dcdb/v20180411/model/ReservedNetResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

ReservedNetResource::ReservedNetResource() :
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportsHasBeenSet(false),
    m_recycleTimeHasBeenSet(false)
{
}

CoreInternalOutcome ReservedNetResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedNetResource.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedNetResource.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedNetResource.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vports") && !value["Vports"].IsNull())
    {
        if (!value["Vports"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReservedNetResource.Vports` is not array type"));

        const rapidjson::Value &tmpValue = value["Vports"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_vports.push_back((*itr).GetInt64());
        }
        m_vportsHasBeenSet = true;
    }

    if (value.HasMember("RecycleTime") && !value["RecycleTime"].IsNull())
    {
        if (!value["RecycleTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedNetResource.RecycleTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recycleTime = string(value["RecycleTime"].GetString());
        m_recycleTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReservedNetResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vportsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vports";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vports.begin(); itr != m_vports.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_recycleTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecycleTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recycleTime.c_str(), allocator).Move(), allocator);
    }

}


string ReservedNetResource::GetVpcId() const
{
    return m_vpcId;
}

void ReservedNetResource::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ReservedNetResource::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ReservedNetResource::GetSubnetId() const
{
    return m_subnetId;
}

void ReservedNetResource::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ReservedNetResource::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string ReservedNetResource::GetVip() const
{
    return m_vip;
}

void ReservedNetResource::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool ReservedNetResource::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

vector<int64_t> ReservedNetResource::GetVports() const
{
    return m_vports;
}

void ReservedNetResource::SetVports(const vector<int64_t>& _vports)
{
    m_vports = _vports;
    m_vportsHasBeenSet = true;
}

bool ReservedNetResource::VportsHasBeenSet() const
{
    return m_vportsHasBeenSet;
}

string ReservedNetResource::GetRecycleTime() const
{
    return m_recycleTime;
}

void ReservedNetResource::SetRecycleTime(const string& _recycleTime)
{
    m_recycleTime = _recycleTime;
    m_recycleTimeHasBeenSet = true;
}

bool ReservedNetResource::RecycleTimeHasBeenSet() const
{
    return m_recycleTimeHasBeenSet;
}

