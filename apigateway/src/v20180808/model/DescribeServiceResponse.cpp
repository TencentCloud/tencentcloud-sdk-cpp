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

#include <tencentcloud/apigateway/v20180808/model/DescribeServiceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace rapidjson;
using namespace std;

DescribeServiceResponse::DescribeServiceResponse() :
    m_serviceIdHasBeenSet(false),
    m_availableEnvironmentsHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_serviceDescHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_exclusiveSetNameHasBeenSet(false),
    m_netTypesHasBeenSet(false),
    m_internalSubDomainHasBeenSet(false),
    m_outerSubDomainHasBeenSet(false),
    m_innerHttpPortHasBeenSet(false),
    m_innerHttpsPortHasBeenSet(false),
    m_apiTotalCountHasBeenSet(false),
    m_apiIdStatusSetHasBeenSet(false),
    m_usagePlanTotalCountHasBeenSet(false),
    m_usagePlanListHasBeenSet(false),
    m_ipVersionHasBeenSet(false),
    m_userTypeHasBeenSet(false),
    m_setIdHasBeenSet(false)
{
}

CoreInternalOutcome DescribeServiceResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("AvailableEnvironments") && !rsp["AvailableEnvironments"].IsNull())
    {
        if (!rsp["AvailableEnvironments"].IsArray())
            return CoreInternalOutcome(Error("response `AvailableEnvironments` is not array type"));

        const Value &tmpValue = rsp["AvailableEnvironments"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_availableEnvironments.push_back((*itr).GetString());
        }
        m_availableEnvironmentsHasBeenSet = true;
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

    if (rsp.HasMember("Protocol") && !rsp["Protocol"].IsNull())
    {
        if (!rsp["Protocol"].IsString())
        {
            return CoreInternalOutcome(Error("response `Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(rsp["Protocol"].GetString());
        m_protocolHasBeenSet = true;
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

    if (rsp.HasMember("ModifiedTime") && !rsp["ModifiedTime"].IsNull())
    {
        if (!rsp["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(rsp["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ExclusiveSetName") && !rsp["ExclusiveSetName"].IsNull())
    {
        if (!rsp["ExclusiveSetName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ExclusiveSetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exclusiveSetName = string(rsp["ExclusiveSetName"].GetString());
        m_exclusiveSetNameHasBeenSet = true;
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

    if (rsp.HasMember("InternalSubDomain") && !rsp["InternalSubDomain"].IsNull())
    {
        if (!rsp["InternalSubDomain"].IsString())
        {
            return CoreInternalOutcome(Error("response `InternalSubDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internalSubDomain = string(rsp["InternalSubDomain"].GetString());
        m_internalSubDomainHasBeenSet = true;
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

    if (rsp.HasMember("InnerHttpPort") && !rsp["InnerHttpPort"].IsNull())
    {
        if (!rsp["InnerHttpPort"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InnerHttpPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_innerHttpPort = rsp["InnerHttpPort"].GetInt64();
        m_innerHttpPortHasBeenSet = true;
    }

    if (rsp.HasMember("InnerHttpsPort") && !rsp["InnerHttpsPort"].IsNull())
    {
        if (!rsp["InnerHttpsPort"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InnerHttpsPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_innerHttpsPort = rsp["InnerHttpsPort"].GetInt64();
        m_innerHttpsPortHasBeenSet = true;
    }

    if (rsp.HasMember("ApiTotalCount") && !rsp["ApiTotalCount"].IsNull())
    {
        if (!rsp["ApiTotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ApiTotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_apiTotalCount = rsp["ApiTotalCount"].GetInt64();
        m_apiTotalCountHasBeenSet = true;
    }

    if (rsp.HasMember("ApiIdStatusSet") && !rsp["ApiIdStatusSet"].IsNull())
    {
        if (!rsp["ApiIdStatusSet"].IsArray())
            return CoreInternalOutcome(Error("response `ApiIdStatusSet` is not array type"));

        const Value &tmpValue = rsp["ApiIdStatusSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApiIdStatus item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_apiIdStatusSet.push_back(item);
        }
        m_apiIdStatusSetHasBeenSet = true;
    }

    if (rsp.HasMember("UsagePlanTotalCount") && !rsp["UsagePlanTotalCount"].IsNull())
    {
        if (!rsp["UsagePlanTotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `UsagePlanTotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usagePlanTotalCount = rsp["UsagePlanTotalCount"].GetInt64();
        m_usagePlanTotalCountHasBeenSet = true;
    }

    if (rsp.HasMember("UsagePlanList") && !rsp["UsagePlanList"].IsNull())
    {
        if (!rsp["UsagePlanList"].IsArray())
            return CoreInternalOutcome(Error("response `UsagePlanList` is not array type"));

        const Value &tmpValue = rsp["UsagePlanList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UsagePlan item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_usagePlanList.push_back(item);
        }
        m_usagePlanListHasBeenSet = true;
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

    if (rsp.HasMember("UserType") && !rsp["UserType"].IsNull())
    {
        if (!rsp["UserType"].IsString())
        {
            return CoreInternalOutcome(Error("response `UserType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userType = string(rsp["UserType"].GetString());
        m_userTypeHasBeenSet = true;
    }

    if (rsp.HasMember("SetId") && !rsp["SetId"].IsNull())
    {
        if (!rsp["SetId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SetId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_setId = rsp["SetId"].GetInt64();
        m_setIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeServiceResponse::GetServiceId() const
{
    return m_serviceId;
}

bool DescribeServiceResponse::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

vector<string> DescribeServiceResponse::GetAvailableEnvironments() const
{
    return m_availableEnvironments;
}

bool DescribeServiceResponse::AvailableEnvironmentsHasBeenSet() const
{
    return m_availableEnvironmentsHasBeenSet;
}

string DescribeServiceResponse::GetServiceName() const
{
    return m_serviceName;
}

bool DescribeServiceResponse::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string DescribeServiceResponse::GetServiceDesc() const
{
    return m_serviceDesc;
}

bool DescribeServiceResponse::ServiceDescHasBeenSet() const
{
    return m_serviceDescHasBeenSet;
}

string DescribeServiceResponse::GetProtocol() const
{
    return m_protocol;
}

bool DescribeServiceResponse::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string DescribeServiceResponse::GetCreatedTime() const
{
    return m_createdTime;
}

bool DescribeServiceResponse::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string DescribeServiceResponse::GetModifiedTime() const
{
    return m_modifiedTime;
}

bool DescribeServiceResponse::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

string DescribeServiceResponse::GetExclusiveSetName() const
{
    return m_exclusiveSetName;
}

bool DescribeServiceResponse::ExclusiveSetNameHasBeenSet() const
{
    return m_exclusiveSetNameHasBeenSet;
}

vector<string> DescribeServiceResponse::GetNetTypes() const
{
    return m_netTypes;
}

bool DescribeServiceResponse::NetTypesHasBeenSet() const
{
    return m_netTypesHasBeenSet;
}

string DescribeServiceResponse::GetInternalSubDomain() const
{
    return m_internalSubDomain;
}

bool DescribeServiceResponse::InternalSubDomainHasBeenSet() const
{
    return m_internalSubDomainHasBeenSet;
}

string DescribeServiceResponse::GetOuterSubDomain() const
{
    return m_outerSubDomain;
}

bool DescribeServiceResponse::OuterSubDomainHasBeenSet() const
{
    return m_outerSubDomainHasBeenSet;
}

int64_t DescribeServiceResponse::GetInnerHttpPort() const
{
    return m_innerHttpPort;
}

bool DescribeServiceResponse::InnerHttpPortHasBeenSet() const
{
    return m_innerHttpPortHasBeenSet;
}

int64_t DescribeServiceResponse::GetInnerHttpsPort() const
{
    return m_innerHttpsPort;
}

bool DescribeServiceResponse::InnerHttpsPortHasBeenSet() const
{
    return m_innerHttpsPortHasBeenSet;
}

int64_t DescribeServiceResponse::GetApiTotalCount() const
{
    return m_apiTotalCount;
}

bool DescribeServiceResponse::ApiTotalCountHasBeenSet() const
{
    return m_apiTotalCountHasBeenSet;
}

vector<ApiIdStatus> DescribeServiceResponse::GetApiIdStatusSet() const
{
    return m_apiIdStatusSet;
}

bool DescribeServiceResponse::ApiIdStatusSetHasBeenSet() const
{
    return m_apiIdStatusSetHasBeenSet;
}

int64_t DescribeServiceResponse::GetUsagePlanTotalCount() const
{
    return m_usagePlanTotalCount;
}

bool DescribeServiceResponse::UsagePlanTotalCountHasBeenSet() const
{
    return m_usagePlanTotalCountHasBeenSet;
}

vector<UsagePlan> DescribeServiceResponse::GetUsagePlanList() const
{
    return m_usagePlanList;
}

bool DescribeServiceResponse::UsagePlanListHasBeenSet() const
{
    return m_usagePlanListHasBeenSet;
}

string DescribeServiceResponse::GetIpVersion() const
{
    return m_ipVersion;
}

bool DescribeServiceResponse::IpVersionHasBeenSet() const
{
    return m_ipVersionHasBeenSet;
}

string DescribeServiceResponse::GetUserType() const
{
    return m_userType;
}

bool DescribeServiceResponse::UserTypeHasBeenSet() const
{
    return m_userTypeHasBeenSet;
}

int64_t DescribeServiceResponse::GetSetId() const
{
    return m_setId;
}

bool DescribeServiceResponse::SetIdHasBeenSet() const
{
    return m_setIdHasBeenSet;
}


