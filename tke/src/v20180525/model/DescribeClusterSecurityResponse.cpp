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

#include <tencentcloud/tke/v20180525/model/DescribeClusterSecurityResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace rapidjson;
using namespace std;

DescribeClusterSecurityResponse::DescribeClusterSecurityResponse() :
    m_userNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_certificationAuthorityHasBeenSet(false),
    m_clusterExternalEndpointHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_pgwEndpointHasBeenSet(false),
    m_securityPolicyHasBeenSet(false),
    m_kubeconfigHasBeenSet(false),
    m_jnsGwEndpointHasBeenSet(false)
{
}

CoreInternalOutcome DescribeClusterSecurityResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("UserName") && !rsp["UserName"].IsNull())
    {
        if (!rsp["UserName"].IsString())
        {
            return CoreInternalOutcome(Error("response `UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(rsp["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (rsp.HasMember("Password") && !rsp["Password"].IsNull())
    {
        if (!rsp["Password"].IsString())
        {
            return CoreInternalOutcome(Error("response `Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(rsp["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (rsp.HasMember("CertificationAuthority") && !rsp["CertificationAuthority"].IsNull())
    {
        if (!rsp["CertificationAuthority"].IsString())
        {
            return CoreInternalOutcome(Error("response `CertificationAuthority` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificationAuthority = string(rsp["CertificationAuthority"].GetString());
        m_certificationAuthorityHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterExternalEndpoint") && !rsp["ClusterExternalEndpoint"].IsNull())
    {
        if (!rsp["ClusterExternalEndpoint"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterExternalEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterExternalEndpoint = string(rsp["ClusterExternalEndpoint"].GetString());
        m_clusterExternalEndpointHasBeenSet = true;
    }

    if (rsp.HasMember("Domain") && !rsp["Domain"].IsNull())
    {
        if (!rsp["Domain"].IsString())
        {
            return CoreInternalOutcome(Error("response `Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(rsp["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (rsp.HasMember("PgwEndpoint") && !rsp["PgwEndpoint"].IsNull())
    {
        if (!rsp["PgwEndpoint"].IsString())
        {
            return CoreInternalOutcome(Error("response `PgwEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pgwEndpoint = string(rsp["PgwEndpoint"].GetString());
        m_pgwEndpointHasBeenSet = true;
    }

    if (rsp.HasMember("SecurityPolicy") && !rsp["SecurityPolicy"].IsNull())
    {
        if (!rsp["SecurityPolicy"].IsArray())
            return CoreInternalOutcome(Error("response `SecurityPolicy` is not array type"));

        const Value &tmpValue = rsp["SecurityPolicy"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_securityPolicy.push_back((*itr).GetString());
        }
        m_securityPolicyHasBeenSet = true;
    }

    if (rsp.HasMember("Kubeconfig") && !rsp["Kubeconfig"].IsNull())
    {
        if (!rsp["Kubeconfig"].IsString())
        {
            return CoreInternalOutcome(Error("response `Kubeconfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kubeconfig = string(rsp["Kubeconfig"].GetString());
        m_kubeconfigHasBeenSet = true;
    }

    if (rsp.HasMember("JnsGwEndpoint") && !rsp["JnsGwEndpoint"].IsNull())
    {
        if (!rsp["JnsGwEndpoint"].IsString())
        {
            return CoreInternalOutcome(Error("response `JnsGwEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jnsGwEndpoint = string(rsp["JnsGwEndpoint"].GetString());
        m_jnsGwEndpointHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeClusterSecurityResponse::GetUserName() const
{
    return m_userName;
}

bool DescribeClusterSecurityResponse::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string DescribeClusterSecurityResponse::GetPassword() const
{
    return m_password;
}

bool DescribeClusterSecurityResponse::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string DescribeClusterSecurityResponse::GetCertificationAuthority() const
{
    return m_certificationAuthority;
}

bool DescribeClusterSecurityResponse::CertificationAuthorityHasBeenSet() const
{
    return m_certificationAuthorityHasBeenSet;
}

string DescribeClusterSecurityResponse::GetClusterExternalEndpoint() const
{
    return m_clusterExternalEndpoint;
}

bool DescribeClusterSecurityResponse::ClusterExternalEndpointHasBeenSet() const
{
    return m_clusterExternalEndpointHasBeenSet;
}

string DescribeClusterSecurityResponse::GetDomain() const
{
    return m_domain;
}

bool DescribeClusterSecurityResponse::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DescribeClusterSecurityResponse::GetPgwEndpoint() const
{
    return m_pgwEndpoint;
}

bool DescribeClusterSecurityResponse::PgwEndpointHasBeenSet() const
{
    return m_pgwEndpointHasBeenSet;
}

vector<string> DescribeClusterSecurityResponse::GetSecurityPolicy() const
{
    return m_securityPolicy;
}

bool DescribeClusterSecurityResponse::SecurityPolicyHasBeenSet() const
{
    return m_securityPolicyHasBeenSet;
}

string DescribeClusterSecurityResponse::GetKubeconfig() const
{
    return m_kubeconfig;
}

bool DescribeClusterSecurityResponse::KubeconfigHasBeenSet() const
{
    return m_kubeconfigHasBeenSet;
}

string DescribeClusterSecurityResponse::GetJnsGwEndpoint() const
{
    return m_jnsGwEndpoint;
}

bool DescribeClusterSecurityResponse::JnsGwEndpointHasBeenSet() const
{
    return m_jnsGwEndpointHasBeenSet;
}


