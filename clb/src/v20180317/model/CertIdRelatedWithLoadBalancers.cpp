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

#include <tencentcloud/clb/v20180317/model/CertIdRelatedWithLoadBalancers.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

CertIdRelatedWithLoadBalancers::CertIdRelatedWithLoadBalancers() :
    m_certIdHasBeenSet(false),
    m_loadBalancersHasBeenSet(false)
{
}

CoreInternalOutcome CertIdRelatedWithLoadBalancers::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CertId") && !value["CertId"].IsNull())
    {
        if (!value["CertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertIdRelatedWithLoadBalancers.CertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certId = string(value["CertId"].GetString());
        m_certIdHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancers") && !value["LoadBalancers"].IsNull())
    {
        if (!value["LoadBalancers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CertIdRelatedWithLoadBalancers.LoadBalancers` is not array type"));

        const rapidjson::Value &tmpValue = value["LoadBalancers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LoadBalancer item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_loadBalancers.push_back(item);
        }
        m_loadBalancersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CertIdRelatedWithLoadBalancers::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certId.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_loadBalancers.begin(); itr != m_loadBalancers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string CertIdRelatedWithLoadBalancers::GetCertId() const
{
    return m_certId;
}

void CertIdRelatedWithLoadBalancers::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool CertIdRelatedWithLoadBalancers::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

vector<LoadBalancer> CertIdRelatedWithLoadBalancers::GetLoadBalancers() const
{
    return m_loadBalancers;
}

void CertIdRelatedWithLoadBalancers::SetLoadBalancers(const vector<LoadBalancer>& _loadBalancers)
{
    m_loadBalancers = _loadBalancers;
    m_loadBalancersHasBeenSet = true;
}

bool CertIdRelatedWithLoadBalancers::LoadBalancersHasBeenSet() const
{
    return m_loadBalancersHasBeenSet;
}

