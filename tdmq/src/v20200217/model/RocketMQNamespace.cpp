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

#include <tencentcloud/tdmq/v20200217/model/RocketMQNamespace.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RocketMQNamespace::RocketMQNamespace() :
    m_namespaceIdHasBeenSet(false),
    m_ttlHasBeenSet(false),
    m_retentionTimeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_publicEndpointHasBeenSet(false),
    m_vpcEndpointHasBeenSet(false),
    m_internalEndpointHasBeenSet(false)
{
}

CoreInternalOutcome RocketMQNamespace::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NamespaceId") && !value["NamespaceId"].IsNull())
    {
        if (!value["NamespaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQNamespace.NamespaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceId = string(value["NamespaceId"].GetString());
        m_namespaceIdHasBeenSet = true;
    }

    if (value.HasMember("Ttl") && !value["Ttl"].IsNull())
    {
        if (!value["Ttl"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQNamespace.Ttl` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ttl = value["Ttl"].GetUint64();
        m_ttlHasBeenSet = true;
    }

    if (value.HasMember("RetentionTime") && !value["RetentionTime"].IsNull())
    {
        if (!value["RetentionTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQNamespace.RetentionTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_retentionTime = value["RetentionTime"].GetUint64();
        m_retentionTimeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQNamespace.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("PublicEndpoint") && !value["PublicEndpoint"].IsNull())
    {
        if (!value["PublicEndpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQNamespace.PublicEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicEndpoint = string(value["PublicEndpoint"].GetString());
        m_publicEndpointHasBeenSet = true;
    }

    if (value.HasMember("VpcEndpoint") && !value["VpcEndpoint"].IsNull())
    {
        if (!value["VpcEndpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQNamespace.VpcEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcEndpoint = string(value["VpcEndpoint"].GetString());
        m_vpcEndpointHasBeenSet = true;
    }

    if (value.HasMember("InternalEndpoint") && !value["InternalEndpoint"].IsNull())
    {
        if (!value["InternalEndpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQNamespace.InternalEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internalEndpoint = string(value["InternalEndpoint"].GetString());
        m_internalEndpointHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RocketMQNamespace::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_namespaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_ttlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ttl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ttl, allocator);
    }

    if (m_retentionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retentionTime, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_publicEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicEndpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcEndpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_internalEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternalEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internalEndpoint.c_str(), allocator).Move(), allocator);
    }

}


string RocketMQNamespace::GetNamespaceId() const
{
    return m_namespaceId;
}

void RocketMQNamespace::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool RocketMQNamespace::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

uint64_t RocketMQNamespace::GetTtl() const
{
    return m_ttl;
}

void RocketMQNamespace::SetTtl(const uint64_t& _ttl)
{
    m_ttl = _ttl;
    m_ttlHasBeenSet = true;
}

bool RocketMQNamespace::TtlHasBeenSet() const
{
    return m_ttlHasBeenSet;
}

uint64_t RocketMQNamespace::GetRetentionTime() const
{
    return m_retentionTime;
}

void RocketMQNamespace::SetRetentionTime(const uint64_t& _retentionTime)
{
    m_retentionTime = _retentionTime;
    m_retentionTimeHasBeenSet = true;
}

bool RocketMQNamespace::RetentionTimeHasBeenSet() const
{
    return m_retentionTimeHasBeenSet;
}

string RocketMQNamespace::GetRemark() const
{
    return m_remark;
}

void RocketMQNamespace::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool RocketMQNamespace::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string RocketMQNamespace::GetPublicEndpoint() const
{
    return m_publicEndpoint;
}

void RocketMQNamespace::SetPublicEndpoint(const string& _publicEndpoint)
{
    m_publicEndpoint = _publicEndpoint;
    m_publicEndpointHasBeenSet = true;
}

bool RocketMQNamespace::PublicEndpointHasBeenSet() const
{
    return m_publicEndpointHasBeenSet;
}

string RocketMQNamespace::GetVpcEndpoint() const
{
    return m_vpcEndpoint;
}

void RocketMQNamespace::SetVpcEndpoint(const string& _vpcEndpoint)
{
    m_vpcEndpoint = _vpcEndpoint;
    m_vpcEndpointHasBeenSet = true;
}

bool RocketMQNamespace::VpcEndpointHasBeenSet() const
{
    return m_vpcEndpointHasBeenSet;
}

string RocketMQNamespace::GetInternalEndpoint() const
{
    return m_internalEndpoint;
}

void RocketMQNamespace::SetInternalEndpoint(const string& _internalEndpoint)
{
    m_internalEndpoint = _internalEndpoint;
    m_internalEndpointHasBeenSet = true;
}

bool RocketMQNamespace::InternalEndpointHasBeenSet() const
{
    return m_internalEndpointHasBeenSet;
}

