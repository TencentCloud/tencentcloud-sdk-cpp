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

#include <tencentcloud/tione/v20211111/model/PrivateLinkInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

PrivateLinkInfo::PrivateLinkInfo() :
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_innerHttpAddrHasBeenSet(false),
    m_innerHttpsAddrHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_innerGrpcAddrHasBeenSet(false)
{
}

CoreInternalOutcome PrivateLinkInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateLinkInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateLinkInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("InnerHttpAddr") && !value["InnerHttpAddr"].IsNull())
    {
        if (!value["InnerHttpAddr"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrivateLinkInfo.InnerHttpAddr` is not array type"));

        const rapidjson::Value &tmpValue = value["InnerHttpAddr"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_innerHttpAddr.push_back((*itr).GetString());
        }
        m_innerHttpAddrHasBeenSet = true;
    }

    if (value.HasMember("InnerHttpsAddr") && !value["InnerHttpsAddr"].IsNull())
    {
        if (!value["InnerHttpsAddr"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrivateLinkInfo.InnerHttpsAddr` is not array type"));

        const rapidjson::Value &tmpValue = value["InnerHttpsAddr"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_innerHttpsAddr.push_back((*itr).GetString());
        }
        m_innerHttpsAddrHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateLinkInfo.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("InnerGrpcAddr") && !value["InnerGrpcAddr"].IsNull())
    {
        if (!value["InnerGrpcAddr"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrivateLinkInfo.InnerGrpcAddr` is not array type"));

        const rapidjson::Value &tmpValue = value["InnerGrpcAddr"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_innerGrpcAddr.push_back((*itr).GetString());
        }
        m_innerGrpcAddrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrivateLinkInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_innerHttpAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InnerHttpAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_innerHttpAddr.begin(); itr != m_innerHttpAddr.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_innerHttpsAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InnerHttpsAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_innerHttpsAddr.begin(); itr != m_innerHttpsAddr.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_innerGrpcAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InnerGrpcAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_innerGrpcAddr.begin(); itr != m_innerGrpcAddr.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string PrivateLinkInfo::GetVpcId() const
{
    return m_vpcId;
}

void PrivateLinkInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool PrivateLinkInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string PrivateLinkInfo::GetSubnetId() const
{
    return m_subnetId;
}

void PrivateLinkInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool PrivateLinkInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

vector<string> PrivateLinkInfo::GetInnerHttpAddr() const
{
    return m_innerHttpAddr;
}

void PrivateLinkInfo::SetInnerHttpAddr(const vector<string>& _innerHttpAddr)
{
    m_innerHttpAddr = _innerHttpAddr;
    m_innerHttpAddrHasBeenSet = true;
}

bool PrivateLinkInfo::InnerHttpAddrHasBeenSet() const
{
    return m_innerHttpAddrHasBeenSet;
}

vector<string> PrivateLinkInfo::GetInnerHttpsAddr() const
{
    return m_innerHttpsAddr;
}

void PrivateLinkInfo::SetInnerHttpsAddr(const vector<string>& _innerHttpsAddr)
{
    m_innerHttpsAddr = _innerHttpsAddr;
    m_innerHttpsAddrHasBeenSet = true;
}

bool PrivateLinkInfo::InnerHttpsAddrHasBeenSet() const
{
    return m_innerHttpsAddrHasBeenSet;
}

string PrivateLinkInfo::GetState() const
{
    return m_state;
}

void PrivateLinkInfo::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool PrivateLinkInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

vector<string> PrivateLinkInfo::GetInnerGrpcAddr() const
{
    return m_innerGrpcAddr;
}

void PrivateLinkInfo::SetInnerGrpcAddr(const vector<string>& _innerGrpcAddr)
{
    m_innerGrpcAddr = _innerGrpcAddr;
    m_innerGrpcAddrHasBeenSet = true;
}

bool PrivateLinkInfo::InnerGrpcAddrHasBeenSet() const
{
    return m_innerGrpcAddrHasBeenSet;
}

