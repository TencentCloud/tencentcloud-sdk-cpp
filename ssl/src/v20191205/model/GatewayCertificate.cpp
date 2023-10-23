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

#include <tencentcloud/ssl/v20191205/model/GatewayCertificate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

GatewayCertificate::GatewayCertificate() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_bindDomainsHasBeenSet(false),
    m_certSourceHasBeenSet(false),
    m_certIdHasBeenSet(false)
{
}

CoreInternalOutcome GatewayCertificate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayCertificate.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayCertificate.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("BindDomains") && !value["BindDomains"].IsNull())
    {
        if (!value["BindDomains"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GatewayCertificate.BindDomains` is not array type"));

        const rapidjson::Value &tmpValue = value["BindDomains"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_bindDomains.push_back((*itr).GetString());
        }
        m_bindDomainsHasBeenSet = true;
    }

    if (value.HasMember("CertSource") && !value["CertSource"].IsNull())
    {
        if (!value["CertSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayCertificate.CertSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certSource = string(value["CertSource"].GetString());
        m_certSourceHasBeenSet = true;
    }

    if (value.HasMember("CertId") && !value["CertId"].IsNull())
    {
        if (!value["CertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayCertificate.CertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certId = string(value["CertId"].GetString());
        m_certIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GatewayCertificate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_bindDomainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindDomains";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bindDomains.begin(); itr != m_bindDomains.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_certSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certSource.c_str(), allocator).Move(), allocator);
    }

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certId.c_str(), allocator).Move(), allocator);
    }

}


string GatewayCertificate::GetId() const
{
    return m_id;
}

void GatewayCertificate::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool GatewayCertificate::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string GatewayCertificate::GetName() const
{
    return m_name;
}

void GatewayCertificate::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool GatewayCertificate::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> GatewayCertificate::GetBindDomains() const
{
    return m_bindDomains;
}

void GatewayCertificate::SetBindDomains(const vector<string>& _bindDomains)
{
    m_bindDomains = _bindDomains;
    m_bindDomainsHasBeenSet = true;
}

bool GatewayCertificate::BindDomainsHasBeenSet() const
{
    return m_bindDomainsHasBeenSet;
}

string GatewayCertificate::GetCertSource() const
{
    return m_certSource;
}

void GatewayCertificate::SetCertSource(const string& _certSource)
{
    m_certSource = _certSource;
    m_certSourceHasBeenSet = true;
}

bool GatewayCertificate::CertSourceHasBeenSet() const
{
    return m_certSourceHasBeenSet;
}

string GatewayCertificate::GetCertId() const
{
    return m_certId;
}

void GatewayCertificate::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool GatewayCertificate::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

