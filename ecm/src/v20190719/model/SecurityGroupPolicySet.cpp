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

#include <tencentcloud/ecm/v20190719/model/SecurityGroupPolicySet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

SecurityGroupPolicySet::SecurityGroupPolicySet() :
    m_versionHasBeenSet(false),
    m_egressHasBeenSet(false),
    m_ingressHasBeenSet(false)
{
}

CoreInternalOutcome SecurityGroupPolicySet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupPolicySet.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Egress") && !value["Egress"].IsNull())
    {
        if (!value["Egress"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecurityGroupPolicySet.Egress` is not array type"));

        const rapidjson::Value &tmpValue = value["Egress"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityGroupPolicy item;
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

    if (value.HasMember("Ingress") && !value["Ingress"].IsNull())
    {
        if (!value["Ingress"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecurityGroupPolicySet.Ingress` is not array type"));

        const rapidjson::Value &tmpValue = value["Ingress"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityGroupPolicy item;
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


    return CoreInternalOutcome(true);
}

void SecurityGroupPolicySet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
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

}


string SecurityGroupPolicySet::GetVersion() const
{
    return m_version;
}

void SecurityGroupPolicySet::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool SecurityGroupPolicySet::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

vector<SecurityGroupPolicy> SecurityGroupPolicySet::GetEgress() const
{
    return m_egress;
}

void SecurityGroupPolicySet::SetEgress(const vector<SecurityGroupPolicy>& _egress)
{
    m_egress = _egress;
    m_egressHasBeenSet = true;
}

bool SecurityGroupPolicySet::EgressHasBeenSet() const
{
    return m_egressHasBeenSet;
}

vector<SecurityGroupPolicy> SecurityGroupPolicySet::GetIngress() const
{
    return m_ingress;
}

void SecurityGroupPolicySet::SetIngress(const vector<SecurityGroupPolicy>& _ingress)
{
    m_ingress = _ingress;
    m_ingressHasBeenSet = true;
}

bool SecurityGroupPolicySet::IngressHasBeenSet() const
{
    return m_ingressHasBeenSet;
}

