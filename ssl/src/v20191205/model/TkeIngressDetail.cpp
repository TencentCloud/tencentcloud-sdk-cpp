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

#include <tencentcloud/ssl/v20191205/model/TkeIngressDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

TkeIngressDetail::TkeIngressDetail() :
    m_ingressNameHasBeenSet(false),
    m_tlsDomainsHasBeenSet(false),
    m_domainsHasBeenSet(false)
{
}

CoreInternalOutcome TkeIngressDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IngressName") && !value["IngressName"].IsNull())
    {
        if (!value["IngressName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TkeIngressDetail.IngressName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ingressName = string(value["IngressName"].GetString());
        m_ingressNameHasBeenSet = true;
    }

    if (value.HasMember("TlsDomains") && !value["TlsDomains"].IsNull())
    {
        if (!value["TlsDomains"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TkeIngressDetail.TlsDomains` is not array type"));

        const rapidjson::Value &tmpValue = value["TlsDomains"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tlsDomains.push_back((*itr).GetString());
        }
        m_tlsDomainsHasBeenSet = true;
    }

    if (value.HasMember("Domains") && !value["Domains"].IsNull())
    {
        if (!value["Domains"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TkeIngressDetail.Domains` is not array type"));

        const rapidjson::Value &tmpValue = value["Domains"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_domains.push_back((*itr).GetString());
        }
        m_domainsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TkeIngressDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ingressNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IngressName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ingressName.c_str(), allocator).Move(), allocator);
    }

    if (m_tlsDomainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TlsDomains";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tlsDomains.begin(); itr != m_tlsDomains.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_domainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domains";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domains.begin(); itr != m_domains.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string TkeIngressDetail::GetIngressName() const
{
    return m_ingressName;
}

void TkeIngressDetail::SetIngressName(const string& _ingressName)
{
    m_ingressName = _ingressName;
    m_ingressNameHasBeenSet = true;
}

bool TkeIngressDetail::IngressNameHasBeenSet() const
{
    return m_ingressNameHasBeenSet;
}

vector<string> TkeIngressDetail::GetTlsDomains() const
{
    return m_tlsDomains;
}

void TkeIngressDetail::SetTlsDomains(const vector<string>& _tlsDomains)
{
    m_tlsDomains = _tlsDomains;
    m_tlsDomainsHasBeenSet = true;
}

bool TkeIngressDetail::TlsDomainsHasBeenSet() const
{
    return m_tlsDomainsHasBeenSet;
}

vector<string> TkeIngressDetail::GetDomains() const
{
    return m_domains;
}

void TkeIngressDetail::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool TkeIngressDetail::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

