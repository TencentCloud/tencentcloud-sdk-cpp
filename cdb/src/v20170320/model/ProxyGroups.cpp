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

#include <tencentcloud/cdb/v20170320/model/ProxyGroups.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

ProxyGroups::ProxyGroups() :
    m_baseGroupHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_connectionPoolInfoHasBeenSet(false),
    m_proxyNodeHasBeenSet(false),
    m_rWInstInfoHasBeenSet(false)
{
}

CoreInternalOutcome ProxyGroups::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BaseGroup") && !value["BaseGroup"].IsNull())
    {
        if (!value["BaseGroup"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroups.BaseGroup` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_baseGroup.Deserialize(value["BaseGroup"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_baseGroupHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProxyGroups.Address` is not array type"));

        const rapidjson::Value &tmpValue = value["Address"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Address item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_address.push_back(item);
        }
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("ConnectionPoolInfo") && !value["ConnectionPoolInfo"].IsNull())
    {
        if (!value["ConnectionPoolInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroups.ConnectionPoolInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_connectionPoolInfo.Deserialize(value["ConnectionPoolInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_connectionPoolInfoHasBeenSet = true;
    }

    if (value.HasMember("ProxyNode") && !value["ProxyNode"].IsNull())
    {
        if (!value["ProxyNode"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProxyGroups.ProxyNode` is not array type"));

        const rapidjson::Value &tmpValue = value["ProxyNode"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProxyNodeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_proxyNode.push_back(item);
        }
        m_proxyNodeHasBeenSet = true;
    }

    if (value.HasMember("RWInstInfo") && !value["RWInstInfo"].IsNull())
    {
        if (!value["RWInstInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroups.RWInstInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rWInstInfo.Deserialize(value["RWInstInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rWInstInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxyGroups::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_baseGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_baseGroup.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_address.begin(); itr != m_address.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_connectionPoolInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionPoolInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_connectionPoolInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_proxyNodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyNode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_proxyNode.begin(); itr != m_proxyNode.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_rWInstInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RWInstInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rWInstInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


BaseGroupInfo ProxyGroups::GetBaseGroup() const
{
    return m_baseGroup;
}

void ProxyGroups::SetBaseGroup(const BaseGroupInfo& _baseGroup)
{
    m_baseGroup = _baseGroup;
    m_baseGroupHasBeenSet = true;
}

bool ProxyGroups::BaseGroupHasBeenSet() const
{
    return m_baseGroupHasBeenSet;
}

vector<Address> ProxyGroups::GetAddress() const
{
    return m_address;
}

void ProxyGroups::SetAddress(const vector<Address>& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool ProxyGroups::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

ConnectionPoolInfo ProxyGroups::GetConnectionPoolInfo() const
{
    return m_connectionPoolInfo;
}

void ProxyGroups::SetConnectionPoolInfo(const ConnectionPoolInfo& _connectionPoolInfo)
{
    m_connectionPoolInfo = _connectionPoolInfo;
    m_connectionPoolInfoHasBeenSet = true;
}

bool ProxyGroups::ConnectionPoolInfoHasBeenSet() const
{
    return m_connectionPoolInfoHasBeenSet;
}

vector<ProxyNodeInfo> ProxyGroups::GetProxyNode() const
{
    return m_proxyNode;
}

void ProxyGroups::SetProxyNode(const vector<ProxyNodeInfo>& _proxyNode)
{
    m_proxyNode = _proxyNode;
    m_proxyNodeHasBeenSet = true;
}

bool ProxyGroups::ProxyNodeHasBeenSet() const
{
    return m_proxyNodeHasBeenSet;
}

RWInfos ProxyGroups::GetRWInstInfo() const
{
    return m_rWInstInfo;
}

void ProxyGroups::SetRWInstInfo(const RWInfos& _rWInstInfo)
{
    m_rWInstInfo = _rWInstInfo;
    m_rWInstInfoHasBeenSet = true;
}

bool ProxyGroups::RWInstInfoHasBeenSet() const
{
    return m_rWInstInfoHasBeenSet;
}

