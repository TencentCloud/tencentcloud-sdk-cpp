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

#include <tencentcloud/tke/v20180525/model/DescribeEKSClusterCredentialResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

DescribeEKSClusterCredentialResponse::DescribeEKSClusterCredentialResponse() :
    m_addressesHasBeenSet(false),
    m_credentialHasBeenSet(false),
    m_publicLBHasBeenSet(false),
    m_internalLBHasBeenSet(false),
    m_proxyLBHasBeenSet(false),
    m_kubeconfigHasBeenSet(false)
{
}

CoreInternalOutcome DescribeEKSClusterCredentialResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("ProxyLB") && !rsp["ProxyLB"].IsNull())
    {
        if (!rsp["ProxyLB"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyLB` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_proxyLB = rsp["ProxyLB"].GetBool();
        m_proxyLBHasBeenSet = true;
    }

    if (rsp.HasMember("Kubeconfig") && !rsp["Kubeconfig"].IsNull())
    {
        if (!rsp["Kubeconfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Kubeconfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kubeconfig = string(rsp["Kubeconfig"].GetString());
        m_kubeconfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeEKSClusterCredentialResponse::ToJsonString() const
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

    if (m_proxyLBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyLB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_proxyLB, allocator);
    }

    if (m_kubeconfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kubeconfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kubeconfig.c_str(), allocator).Move(), allocator);
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


vector<IPAddress> DescribeEKSClusterCredentialResponse::GetAddresses() const
{
    return m_addresses;
}

bool DescribeEKSClusterCredentialResponse::AddressesHasBeenSet() const
{
    return m_addressesHasBeenSet;
}

ClusterCredential DescribeEKSClusterCredentialResponse::GetCredential() const
{
    return m_credential;
}

bool DescribeEKSClusterCredentialResponse::CredentialHasBeenSet() const
{
    return m_credentialHasBeenSet;
}

ClusterPublicLB DescribeEKSClusterCredentialResponse::GetPublicLB() const
{
    return m_publicLB;
}

bool DescribeEKSClusterCredentialResponse::PublicLBHasBeenSet() const
{
    return m_publicLBHasBeenSet;
}

ClusterInternalLB DescribeEKSClusterCredentialResponse::GetInternalLB() const
{
    return m_internalLB;
}

bool DescribeEKSClusterCredentialResponse::InternalLBHasBeenSet() const
{
    return m_internalLBHasBeenSet;
}

bool DescribeEKSClusterCredentialResponse::GetProxyLB() const
{
    return m_proxyLB;
}

bool DescribeEKSClusterCredentialResponse::ProxyLBHasBeenSet() const
{
    return m_proxyLBHasBeenSet;
}

string DescribeEKSClusterCredentialResponse::GetKubeconfig() const
{
    return m_kubeconfig;
}

bool DescribeEKSClusterCredentialResponse::KubeconfigHasBeenSet() const
{
    return m_kubeconfigHasBeenSet;
}


