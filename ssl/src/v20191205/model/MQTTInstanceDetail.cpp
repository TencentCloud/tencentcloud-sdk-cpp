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

#include <tencentcloud/ssl/v20191205/model/MQTTInstanceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

MQTTInstanceDetail::MQTTInstanceDetail() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_noMatchDomainsHasBeenSet(false),
    m_serverCertIdListHasBeenSet(false),
    m_caCertIdListHasBeenSet(false)
{
}

CoreInternalOutcome MQTTInstanceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTInstanceDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTInstanceDetail.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTInstanceDetail.InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(value["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("NoMatchDomains") && !value["NoMatchDomains"].IsNull())
    {
        if (!value["NoMatchDomains"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MQTTInstanceDetail.NoMatchDomains` is not array type"));

        const rapidjson::Value &tmpValue = value["NoMatchDomains"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_noMatchDomains.push_back((*itr).GetString());
        }
        m_noMatchDomainsHasBeenSet = true;
    }

    if (value.HasMember("ServerCertIdList") && !value["ServerCertIdList"].IsNull())
    {
        if (!value["ServerCertIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MQTTInstanceDetail.ServerCertIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["ServerCertIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_serverCertIdList.push_back((*itr).GetString());
        }
        m_serverCertIdListHasBeenSet = true;
    }

    if (value.HasMember("CaCertIdList") && !value["CaCertIdList"].IsNull())
    {
        if (!value["CaCertIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MQTTInstanceDetail.CaCertIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["CaCertIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_caCertIdList.push_back((*itr).GetString());
        }
        m_caCertIdListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MQTTInstanceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_serverCertIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerCertIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_serverCertIdList.begin(); itr != m_serverCertIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_caCertIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaCertIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_caCertIdList.begin(); itr != m_caCertIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string MQTTInstanceDetail::GetInstanceId() const
{
    return m_instanceId;
}

void MQTTInstanceDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool MQTTInstanceDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string MQTTInstanceDetail::GetInstanceName() const
{
    return m_instanceName;
}

void MQTTInstanceDetail::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool MQTTInstanceDetail::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string MQTTInstanceDetail::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void MQTTInstanceDetail::SetInstanceStatus(const string& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool MQTTInstanceDetail::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

vector<string> MQTTInstanceDetail::GetNoMatchDomains() const
{
    return m_noMatchDomains;
}

void MQTTInstanceDetail::SetNoMatchDomains(const vector<string>& _noMatchDomains)
{
    m_noMatchDomains = _noMatchDomains;
    m_noMatchDomainsHasBeenSet = true;
}

bool MQTTInstanceDetail::NoMatchDomainsHasBeenSet() const
{
    return m_noMatchDomainsHasBeenSet;
}

vector<string> MQTTInstanceDetail::GetServerCertIdList() const
{
    return m_serverCertIdList;
}

void MQTTInstanceDetail::SetServerCertIdList(const vector<string>& _serverCertIdList)
{
    m_serverCertIdList = _serverCertIdList;
    m_serverCertIdListHasBeenSet = true;
}

bool MQTTInstanceDetail::ServerCertIdListHasBeenSet() const
{
    return m_serverCertIdListHasBeenSet;
}

vector<string> MQTTInstanceDetail::GetCaCertIdList() const
{
    return m_caCertIdList;
}

void MQTTInstanceDetail::SetCaCertIdList(const vector<string>& _caCertIdList)
{
    m_caCertIdList = _caCertIdList;
    m_caCertIdListHasBeenSet = true;
}

bool MQTTInstanceDetail::CaCertIdListHasBeenSet() const
{
    return m_caCertIdListHasBeenSet;
}

