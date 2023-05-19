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

#include <tencentcloud/ssl/v20191205/model/Certificate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

Certificate::Certificate() :
    m_certIdHasBeenSet(false),
    m_dnsNamesHasBeenSet(false)
{
}

CoreInternalOutcome Certificate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CertId") && !value["CertId"].IsNull())
    {
        if (!value["CertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Certificate.CertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certId = string(value["CertId"].GetString());
        m_certIdHasBeenSet = true;
    }

    if (value.HasMember("DnsNames") && !value["DnsNames"].IsNull())
    {
        if (!value["DnsNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Certificate.DnsNames` is not array type"));

        const rapidjson::Value &tmpValue = value["DnsNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dnsNames.push_back((*itr).GetString());
        }
        m_dnsNamesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Certificate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certId.c_str(), allocator).Move(), allocator);
    }

    if (m_dnsNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dnsNames.begin(); itr != m_dnsNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string Certificate::GetCertId() const
{
    return m_certId;
}

void Certificate::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool Certificate::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

vector<string> Certificate::GetDnsNames() const
{
    return m_dnsNames;
}

void Certificate::SetDnsNames(const vector<string>& _dnsNames)
{
    m_dnsNames = _dnsNames;
    m_dnsNamesHasBeenSet = true;
}

bool Certificate::DnsNamesHasBeenSet() const
{
    return m_dnsNamesHasBeenSet;
}

