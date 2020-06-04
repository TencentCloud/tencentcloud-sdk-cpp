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

#include <tencentcloud/apigateway/v20180808/model/CreateServiceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace rapidjson;
using namespace std;

CreateServiceResponse::CreateServiceResponse() :
    m_serviceIdHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_serviceDescHasBeenSet(false),
    m_outerSubDomainHasBeenSet(false),
    m_innerSubDomainHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_netTypesHasBeenSet(false),
    m_ipVersionHasBeenSet(false)
{
}

CoreInternalOutcome CreateServiceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ServiceId") && !rsp["ServiceId"].IsNull())
    {
        if (!rsp["ServiceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = string(rsp["ServiceId"].GetString());
        m_serviceIdHasBeenSet = true;
    }

    if (rsp.HasMember("ServiceName") && !rsp["ServiceName"].IsNull())
    {
        if (!rsp["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(rsp["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (rsp.HasMember("ServiceDesc") && !rsp["ServiceDesc"].IsNull())
    {
        if (!rsp["ServiceDesc"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServiceDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceDesc = string(rsp["ServiceDesc"].GetString());
        m_serviceDescHasBeenSet = true;
    }

    if (rsp.HasMember("OuterSubDomain") && !rsp["OuterSubDomain"].IsNull())
    {
        if (!rsp["OuterSubDomain"].IsString())
        {
            return CoreInternalOutcome(Error("response `OuterSubDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outerSubDomain = string(rsp["OuterSubDomain"].GetString());
        m_outerSubDomainHasBeenSet = true;
    }

    if (rsp.HasMember("InnerSubDomain") && !rsp["InnerSubDomain"].IsNull())
    {
        if (!rsp["InnerSubDomain"].IsString())
        {
            return CoreInternalOutcome(Error("response `InnerSubDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_innerSubDomain = string(rsp["InnerSubDomain"].GetString());
        m_innerSubDomainHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedTime") && !rsp["CreatedTime"].IsNull())
    {
        if (!rsp["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(rsp["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (rsp.HasMember("NetTypes") && !rsp["NetTypes"].IsNull())
    {
        if (!rsp["NetTypes"].IsArray())
            return CoreInternalOutcome(Error("response `NetTypes` is not array type"));

        const Value &tmpValue = rsp["NetTypes"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_netTypes.push_back((*itr).GetString());
        }
        m_netTypesHasBeenSet = true;
    }

    if (rsp.HasMember("IpVersion") && !rsp["IpVersion"].IsNull())
    {
        if (!rsp["IpVersion"].IsString())
        {
            return CoreInternalOutcome(Error("response `IpVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipVersion = string(rsp["IpVersion"].GetString());
        m_ipVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string CreateServiceResponse::GetServiceId() const
{
    return m_serviceId;
}

bool CreateServiceResponse::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string CreateServiceResponse::GetServiceName() const
{
    return m_serviceName;
}

bool CreateServiceResponse::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string CreateServiceResponse::GetServiceDesc() const
{
    return m_serviceDesc;
}

bool CreateServiceResponse::ServiceDescHasBeenSet() const
{
    return m_serviceDescHasBeenSet;
}

string CreateServiceResponse::GetOuterSubDomain() const
{
    return m_outerSubDomain;
}

bool CreateServiceResponse::OuterSubDomainHasBeenSet() const
{
    return m_outerSubDomainHasBeenSet;
}

string CreateServiceResponse::GetInnerSubDomain() const
{
    return m_innerSubDomain;
}

bool CreateServiceResponse::InnerSubDomainHasBeenSet() const
{
    return m_innerSubDomainHasBeenSet;
}

string CreateServiceResponse::GetCreatedTime() const
{
    return m_createdTime;
}

bool CreateServiceResponse::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

vector<string> CreateServiceResponse::GetNetTypes() const
{
    return m_netTypes;
}

bool CreateServiceResponse::NetTypesHasBeenSet() const
{
    return m_netTypesHasBeenSet;
}

string CreateServiceResponse::GetIpVersion() const
{
    return m_ipVersion;
}

bool CreateServiceResponse::IpVersionHasBeenSet() const
{
    return m_ipVersionHasBeenSet;
}


