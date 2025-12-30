/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/ssl/v20191205/model/TDMQInstanceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

TDMQInstanceDetail::TDMQInstanceDetail() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_certIdHasBeenSet(false),
    m_caCertIdHasBeenSet(false),
    m_noMatchDomainsHasBeenSet(false)
{
}

CoreInternalOutcome TDMQInstanceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TDMQInstanceDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TDMQInstanceDetail.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TDMQInstanceDetail.InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(value["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("CertId") && !value["CertId"].IsNull())
    {
        if (!value["CertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TDMQInstanceDetail.CertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certId = string(value["CertId"].GetString());
        m_certIdHasBeenSet = true;
    }

    if (value.HasMember("CaCertId") && !value["CaCertId"].IsNull())
    {
        if (!value["CaCertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TDMQInstanceDetail.CaCertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_caCertId = string(value["CaCertId"].GetString());
        m_caCertIdHasBeenSet = true;
    }

    if (value.HasMember("NoMatchDomains") && !value["NoMatchDomains"].IsNull())
    {
        if (!value["NoMatchDomains"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TDMQInstanceDetail.NoMatchDomains` is not array type"));

        const rapidjson::Value &tmpValue = value["NoMatchDomains"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_noMatchDomains.push_back((*itr).GetString());
        }
        m_noMatchDomainsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TDMQInstanceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certId.c_str(), allocator).Move(), allocator);
    }

    if (m_caCertIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaCertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_caCertId.c_str(), allocator).Move(), allocator);
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


string TDMQInstanceDetail::GetInstanceId() const
{
    return m_instanceId;
}

void TDMQInstanceDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool TDMQInstanceDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string TDMQInstanceDetail::GetInstanceName() const
{
    return m_instanceName;
}

void TDMQInstanceDetail::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool TDMQInstanceDetail::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string TDMQInstanceDetail::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void TDMQInstanceDetail::SetInstanceStatus(const string& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool TDMQInstanceDetail::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

string TDMQInstanceDetail::GetCertId() const
{
    return m_certId;
}

void TDMQInstanceDetail::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool TDMQInstanceDetail::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

string TDMQInstanceDetail::GetCaCertId() const
{
    return m_caCertId;
}

void TDMQInstanceDetail::SetCaCertId(const string& _caCertId)
{
    m_caCertId = _caCertId;
    m_caCertIdHasBeenSet = true;
}

bool TDMQInstanceDetail::CaCertIdHasBeenSet() const
{
    return m_caCertIdHasBeenSet;
}

vector<string> TDMQInstanceDetail::GetNoMatchDomains() const
{
    return m_noMatchDomains;
}

void TDMQInstanceDetail::SetNoMatchDomains(const vector<string>& _noMatchDomains)
{
    m_noMatchDomains = _noMatchDomains;
    m_noMatchDomainsHasBeenSet = true;
}

bool TDMQInstanceDetail::NoMatchDomainsHasBeenSet() const
{
    return m_noMatchDomainsHasBeenSet;
}

