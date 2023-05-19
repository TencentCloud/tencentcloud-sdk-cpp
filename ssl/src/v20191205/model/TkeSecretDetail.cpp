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

#include <tencentcloud/ssl/v20191205/model/TkeSecretDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

TkeSecretDetail::TkeSecretDetail() :
    m_nameHasBeenSet(false),
    m_certIdHasBeenSet(false),
    m_ingressListHasBeenSet(false),
    m_noMatchDomainsHasBeenSet(false)
{
}

CoreInternalOutcome TkeSecretDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TkeSecretDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("CertId") && !value["CertId"].IsNull())
    {
        if (!value["CertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TkeSecretDetail.CertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certId = string(value["CertId"].GetString());
        m_certIdHasBeenSet = true;
    }

    if (value.HasMember("IngressList") && !value["IngressList"].IsNull())
    {
        if (!value["IngressList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TkeSecretDetail.IngressList` is not array type"));

        const rapidjson::Value &tmpValue = value["IngressList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TkeIngressDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ingressList.push_back(item);
        }
        m_ingressListHasBeenSet = true;
    }

    if (value.HasMember("NoMatchDomains") && !value["NoMatchDomains"].IsNull())
    {
        if (!value["NoMatchDomains"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TkeSecretDetail.NoMatchDomains` is not array type"));

        const rapidjson::Value &tmpValue = value["NoMatchDomains"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_noMatchDomains.push_back((*itr).GetString());
        }
        m_noMatchDomainsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TkeSecretDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certId.c_str(), allocator).Move(), allocator);
    }

    if (m_ingressListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IngressList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ingressList.begin(); itr != m_ingressList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_noMatchDomainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoMatchDomains";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_noMatchDomains.begin(); itr != m_noMatchDomains.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string TkeSecretDetail::GetName() const
{
    return m_name;
}

void TkeSecretDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TkeSecretDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string TkeSecretDetail::GetCertId() const
{
    return m_certId;
}

void TkeSecretDetail::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool TkeSecretDetail::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

vector<TkeIngressDetail> TkeSecretDetail::GetIngressList() const
{
    return m_ingressList;
}

void TkeSecretDetail::SetIngressList(const vector<TkeIngressDetail>& _ingressList)
{
    m_ingressList = _ingressList;
    m_ingressListHasBeenSet = true;
}

bool TkeSecretDetail::IngressListHasBeenSet() const
{
    return m_ingressListHasBeenSet;
}

vector<string> TkeSecretDetail::GetNoMatchDomains() const
{
    return m_noMatchDomains;
}

void TkeSecretDetail::SetNoMatchDomains(const vector<string>& _noMatchDomains)
{
    m_noMatchDomains = _noMatchDomains;
    m_noMatchDomainsHasBeenSet = true;
}

bool TkeSecretDetail::NoMatchDomainsHasBeenSet() const
{
    return m_noMatchDomainsHasBeenSet;
}

