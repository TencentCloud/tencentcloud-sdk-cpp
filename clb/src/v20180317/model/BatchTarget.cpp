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

#include <tencentcloud/clb/v20180317/model/BatchTarget.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

BatchTarget::BatchTarget() :
    m_listenerIdHasBeenSet(false),
    m_portHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_eniIpHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_locationIdHasBeenSet(false),
    m_tagHasBeenSet(false)
{
}

CoreInternalOutcome BatchTarget::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ListenerId") && !value["ListenerId"].IsNull())
    {
        if (!value["ListenerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTarget.ListenerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerId = string(value["ListenerId"].GetString());
        m_listenerIdHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTarget.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTarget.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("EniIp") && !value["EniIp"].IsNull())
    {
        if (!value["EniIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTarget.EniIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eniIp = string(value["EniIp"].GetString());
        m_eniIpHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTarget.Weight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetInt64();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("LocationId") && !value["LocationId"].IsNull())
    {
        if (!value["LocationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTarget.LocationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_locationId = string(value["LocationId"].GetString());
        m_locationIdHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTarget.Tag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tag = string(value["Tag"].GetString());
        m_tagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BatchTarget::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_eniIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EniIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eniIp.c_str(), allocator).Move(), allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

    if (m_locationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_locationId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
    }

}


string BatchTarget::GetListenerId() const
{
    return m_listenerId;
}

void BatchTarget::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool BatchTarget::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

int64_t BatchTarget::GetPort() const
{
    return m_port;
}

void BatchTarget::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool BatchTarget::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string BatchTarget::GetInstanceId() const
{
    return m_instanceId;
}

void BatchTarget::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool BatchTarget::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string BatchTarget::GetEniIp() const
{
    return m_eniIp;
}

void BatchTarget::SetEniIp(const string& _eniIp)
{
    m_eniIp = _eniIp;
    m_eniIpHasBeenSet = true;
}

bool BatchTarget::EniIpHasBeenSet() const
{
    return m_eniIpHasBeenSet;
}

int64_t BatchTarget::GetWeight() const
{
    return m_weight;
}

void BatchTarget::SetWeight(const int64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool BatchTarget::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

string BatchTarget::GetLocationId() const
{
    return m_locationId;
}

void BatchTarget::SetLocationId(const string& _locationId)
{
    m_locationId = _locationId;
    m_locationIdHasBeenSet = true;
}

bool BatchTarget::LocationIdHasBeenSet() const
{
    return m_locationIdHasBeenSet;
}

string BatchTarget::GetTag() const
{
    return m_tag;
}

void BatchTarget::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool BatchTarget::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

