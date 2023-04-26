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

#include <tencentcloud/tke/v20180525/model/DescribeTKEEdgeClusterCredentialResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

DescribeTKEEdgeClusterCredentialResponse::DescribeTKEEdgeClusterCredentialResponse() :
    m_addressesHasBeenSet(false),
    m_credentialHasBeenSet(false),
    m_publicLBHasBeenSet(false),
    m_internalLBHasBeenSet(false),
    m_coreDnsHasBeenSet(false),
    m_healthRegionHasBeenSet(false),
    m_healthHasBeenSet(false),
    m_gridDaemonHasBeenSet(false),
    m_unitClusterHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTKEEdgeClusterCredentialResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Addresses") && !rsp["Addresses"].IsNull())
    {
        if (!rsp["Addresses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Addresses` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Addresses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IPAddress item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_addresses.push_back(item);
        }
        m_addressesHasBeenSet = true;
    }

    if (rsp.HasMember("Credential") && !rsp["Credential"].IsNull())
    {
        if (!rsp["Credential"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Credential` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_credential.Deserialize(rsp["Credential"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_credentialHasBeenSet = true;
    }

    if (rsp.HasMember("PublicLB") && !rsp["PublicLB"].IsNull())
    {
        if (!rsp["PublicLB"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PublicLB` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_publicLB.Deserialize(rsp["PublicLB"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_publicLBHasBeenSet = true;
    }

    if (rsp.HasMember("InternalLB") && !rsp["InternalLB"].IsNull())
    {
        if (!rsp["InternalLB"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InternalLB` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_internalLB.Deserialize(rsp["InternalLB"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_internalLBHasBeenSet = true;
    }

    if (rsp.HasMember("CoreDns") && !rsp["CoreDns"].IsNull())
    {
        if (!rsp["CoreDns"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CoreDns` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coreDns = string(rsp["CoreDns"].GetString());
        m_coreDnsHasBeenSet = true;
    }

    if (rsp.HasMember("HealthRegion") && !rsp["HealthRegion"].IsNull())
    {
        if (!rsp["HealthRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthRegion = string(rsp["HealthRegion"].GetString());
        m_healthRegionHasBeenSet = true;
    }

    if (rsp.HasMember("Health") && !rsp["Health"].IsNull())
    {
        if (!rsp["Health"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Health` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_health = string(rsp["Health"].GetString());
        m_healthHasBeenSet = true;
    }

    if (rsp.HasMember("GridDaemon") && !rsp["GridDaemon"].IsNull())
    {
        if (!rsp["GridDaemon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GridDaemon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gridDaemon = string(rsp["GridDaemon"].GetString());
        m_gridDaemonHasBeenSet = true;
    }

    if (rsp.HasMember("UnitCluster") && !rsp["UnitCluster"].IsNull())
    {
        if (!rsp["UnitCluster"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnitCluster` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unitCluster = string(rsp["UnitCluster"].GetString());
        m_unitClusterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTKEEdgeClusterCredentialResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_addressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Addresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_addresses.begin(); itr != m_addresses.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_credentialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Credential";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_credential.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_publicLBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicLB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_publicLB.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_internalLBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternalLB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_internalLB.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_coreDnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoreDns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_coreDns.c_str(), allocator).Move(), allocator);
    }

    if (m_healthRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_healthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Health";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_health.c_str(), allocator).Move(), allocator);
    }

    if (m_gridDaemonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GridDaemon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gridDaemon.c_str(), allocator).Move(), allocator);
    }

    if (m_unitClusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitCluster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unitCluster.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


vector<IPAddress> DescribeTKEEdgeClusterCredentialResponse::GetAddresses() const
{
    return m_addresses;
}

bool DescribeTKEEdgeClusterCredentialResponse::AddressesHasBeenSet() const
{
    return m_addressesHasBeenSet;
}

ClusterCredential DescribeTKEEdgeClusterCredentialResponse::GetCredential() const
{
    return m_credential;
}

bool DescribeTKEEdgeClusterCredentialResponse::CredentialHasBeenSet() const
{
    return m_credentialHasBeenSet;
}

EdgeClusterPublicLB DescribeTKEEdgeClusterCredentialResponse::GetPublicLB() const
{
    return m_publicLB;
}

bool DescribeTKEEdgeClusterCredentialResponse::PublicLBHasBeenSet() const
{
    return m_publicLBHasBeenSet;
}

EdgeClusterInternalLB DescribeTKEEdgeClusterCredentialResponse::GetInternalLB() const
{
    return m_internalLB;
}

bool DescribeTKEEdgeClusterCredentialResponse::InternalLBHasBeenSet() const
{
    return m_internalLBHasBeenSet;
}

string DescribeTKEEdgeClusterCredentialResponse::GetCoreDns() const
{
    return m_coreDns;
}

bool DescribeTKEEdgeClusterCredentialResponse::CoreDnsHasBeenSet() const
{
    return m_coreDnsHasBeenSet;
}

string DescribeTKEEdgeClusterCredentialResponse::GetHealthRegion() const
{
    return m_healthRegion;
}

bool DescribeTKEEdgeClusterCredentialResponse::HealthRegionHasBeenSet() const
{
    return m_healthRegionHasBeenSet;
}

string DescribeTKEEdgeClusterCredentialResponse::GetHealth() const
{
    return m_health;
}

bool DescribeTKEEdgeClusterCredentialResponse::HealthHasBeenSet() const
{
    return m_healthHasBeenSet;
}

string DescribeTKEEdgeClusterCredentialResponse::GetGridDaemon() const
{
    return m_gridDaemon;
}

bool DescribeTKEEdgeClusterCredentialResponse::GridDaemonHasBeenSet() const
{
    return m_gridDaemonHasBeenSet;
}

string DescribeTKEEdgeClusterCredentialResponse::GetUnitCluster() const
{
    return m_unitCluster;
}

bool DescribeTKEEdgeClusterCredentialResponse::UnitClusterHasBeenSet() const
{
    return m_unitClusterHasBeenSet;
}


