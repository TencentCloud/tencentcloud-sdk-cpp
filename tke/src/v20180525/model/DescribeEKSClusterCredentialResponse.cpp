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
using namespace rapidjson;
using namespace std;

DescribeEKSClusterCredentialResponse::DescribeEKSClusterCredentialResponse() :
    m_addressesHasBeenSet(false),
    m_credentialHasBeenSet(false),
    m_publicLBHasBeenSet(false),
    m_internalLBHasBeenSet(false)
{
}

CoreInternalOutcome DescribeEKSClusterCredentialResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Addresses") && !rsp["Addresses"].IsNull())
    {
        if (!rsp["Addresses"].IsArray())
            return CoreInternalOutcome(Error("response `Addresses` is not array type"));

        const Value &tmpValue = rsp["Addresses"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Error("response `Credential` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `PublicLB` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `InternalLB` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_internalLB.Deserialize(rsp["InternalLB"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_internalLBHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
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


