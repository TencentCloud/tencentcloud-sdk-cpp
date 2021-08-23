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

#include <tencentcloud/vpc/v20170312/model/NetworkAclEntrySet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

NetworkAclEntrySet::NetworkAclEntrySet() :
    m_ingressHasBeenSet(false),
    m_egressHasBeenSet(false)
{
}

CoreInternalOutcome NetworkAclEntrySet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ingress") && !value["Ingress"].IsNull())
    {
        if (!value["Ingress"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NetworkAclEntrySet.Ingress` is not array type"));

        const rapidjson::Value &tmpValue = value["Ingress"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NetworkAclEntry item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ingress.push_back(item);
        }
        m_ingressHasBeenSet = true;
    }

    if (value.HasMember("Egress") && !value["Egress"].IsNull())
    {
        if (!value["Egress"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NetworkAclEntrySet.Egress` is not array type"));

        const rapidjson::Value &tmpValue = value["Egress"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NetworkAclEntry item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_egress.push_back(item);
        }
        m_egressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetworkAclEntrySet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ingressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ingress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ingress.begin(); itr != m_ingress.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_egressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Egress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_egress.begin(); itr != m_egress.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<NetworkAclEntry> NetworkAclEntrySet::GetIngress() const
{
    return m_ingress;
}

void NetworkAclEntrySet::SetIngress(const vector<NetworkAclEntry>& _ingress)
{
    m_ingress = _ingress;
    m_ingressHasBeenSet = true;
}

bool NetworkAclEntrySet::IngressHasBeenSet() const
{
    return m_ingressHasBeenSet;
}

vector<NetworkAclEntry> NetworkAclEntrySet::GetEgress() const
{
    return m_egress;
}

void NetworkAclEntrySet::SetEgress(const vector<NetworkAclEntry>& _egress)
{
    m_egress = _egress;
    m_egressHasBeenSet = true;
}

bool NetworkAclEntrySet::EgressHasBeenSet() const
{
    return m_egressHasBeenSet;
}

