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

#include <tencentcloud/apigateway/v20180808/model/DescribeServiceForApiAppResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

DescribeServiceForApiAppResponse::DescribeServiceForApiAppResponse() :
    m_serviceIdHasBeenSet(false),
    m_availableEnvironmentsHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_serviceDescHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
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
    m_setIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeServiceForApiAppResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ServiceId") && !rsp["ServiceId"].IsNull())
    {
        if (!rsp["ServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = string(rsp["ServiceId"].GetString());
        m_serviceIdHasBeenSet = true;
    }

    if (rsp.HasMember("AvailableEnvironments") && !rsp["AvailableEnvironments"].IsNull())
    {
        if (!rsp["AvailableEnvironments"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AvailableEnvironments` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AvailableEnvironments"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_availableEnvironments.push_back((*itr).GetString());
        }
        m_availableEnvironmentsHasBeenSet = true;
    }

    if (rsp.HasMember("ServiceName") && !rsp["ServiceName"].IsNull())
    {
        if (!rsp["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(rsp["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (rsp.HasMember("ServiceDesc") && !rsp["ServiceDesc"].IsNull())
    {
        if (!rsp["ServiceDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceDesc = string(rsp["ServiceDesc"].GetString());
        m_serviceDescHasBeenSet = true;
    }

    if (rsp.HasMember("Protocol") && !rsp["Protocol"].IsNull())
    {
        if (!rsp["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(rsp["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedTime") && !rsp["CreatedTime"].IsNull())
    {
        if (!rsp["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(rsp["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ModifiedTime") && !rsp["ModifiedTime"].IsNull())
    {
        if (!rsp["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(rsp["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }

    if (rsp.HasMember("NetTypes") && !rsp["NetTypes"].IsNull())
    {
        if (!rsp["NetTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NetTypes` is not array type"));

        const rapidjson::Value &tmpValue = rsp["NetTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_netTypes.push_back((*itr).GetString());
        }
        m_netTypesHasBeenSet = true;
    }

    if (rsp.HasMember("InternalSubDomain") && !rsp["InternalSubDomain"].IsNull())
    {
        if (!rsp["InternalSubDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternalSubDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internalSubDomain = string(rsp["InternalSubDomain"].GetString());
        m_internalSubDomainHasBeenSet = true;
    }

    if (rsp.HasMember("OuterSubDomain") && !rsp["OuterSubDomain"].IsNull())
    {
        if (!rsp["OuterSubDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OuterSubDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outerSubDomain = string(rsp["OuterSubDomain"].GetString());
        m_outerSubDomainHasBeenSet = true;
    }

    if (rsp.HasMember("InnerHttpPort") && !rsp["InnerHttpPort"].IsNull())
    {
        if (!rsp["InnerHttpPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InnerHttpPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_innerHttpPort = rsp["InnerHttpPort"].GetInt64();
        m_innerHttpPortHasBeenSet = true;
    }

    if (rsp.HasMember("InnerHttpsPort") && !rsp["InnerHttpsPort"].IsNull())
    {
        if (!rsp["InnerHttpsPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InnerHttpsPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_innerHttpsPort = rsp["InnerHttpsPort"].GetInt64();
        m_innerHttpsPortHasBeenSet = true;
    }

    if (rsp.HasMember("ApiTotalCount") && !rsp["ApiTotalCount"].IsNull())
    {
        if (!rsp["ApiTotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiTotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_apiTotalCount = rsp["ApiTotalCount"].GetInt64();
        m_apiTotalCountHasBeenSet = true;
    }

    if (rsp.HasMember("ApiIdStatusSet") && !rsp["ApiIdStatusSet"].IsNull())
    {
        if (!rsp["ApiIdStatusSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiIdStatusSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ApiIdStatusSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Core::Error("response `UsagePlanTotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usagePlanTotalCount = rsp["UsagePlanTotalCount"].GetInt64();
        m_usagePlanTotalCountHasBeenSet = true;
    }

    if (rsp.HasMember("UsagePlanList") && !rsp["UsagePlanList"].IsNull())
    {
        if (!rsp["UsagePlanList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UsagePlanList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["UsagePlanList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Core::Error("response `IpVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipVersion = string(rsp["IpVersion"].GetString());
        m_ipVersionHasBeenSet = true;
    }

    if (rsp.HasMember("UserType") && !rsp["UserType"].IsNull())
    {
        if (!rsp["UserType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userType = string(rsp["UserType"].GetString());
        m_userTypeHasBeenSet = true;
    }

    if (rsp.HasMember("SetId") && !rsp["SetId"].IsNull())
    {
        if (!rsp["SetId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SetId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_setId = rsp["SetId"].GetInt64();
        m_setIdHasBeenSet = true;
    }

    if (rsp.HasMember("Tags") && !rsp["Tags"].IsNull())
    {
        if (!rsp["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Tags` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeServiceForApiAppResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_availableEnvironmentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableEnvironments";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_availableEnvironments.begin(); itr != m_availableEnvironments.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_netTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_netTypes.begin(); itr != m_netTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_internalSubDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternalSubDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internalSubDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_outerSubDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OuterSubDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outerSubDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_innerHttpPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InnerHttpPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_innerHttpPort, allocator);
    }

    if (m_innerHttpsPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InnerHttpsPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_innerHttpsPort, allocator);
    }

    if (m_apiTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_apiTotalCount, allocator);
    }

    if (m_apiIdStatusSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiIdStatusSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_apiIdStatusSet.begin(); itr != m_apiIdStatusSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_usagePlanTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsagePlanTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usagePlanTotalCount, allocator);
    }

    if (m_usagePlanListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsagePlanList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_usagePlanList.begin(); itr != m_usagePlanList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ipVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_userTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userType.c_str(), allocator).Move(), allocator);
    }

    if (m_setIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_setId, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


string DescribeServiceForApiAppResponse::GetServiceId() const
{
    return m_serviceId;
}

bool DescribeServiceForApiAppResponse::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

vector<string> DescribeServiceForApiAppResponse::GetAvailableEnvironments() const
{
    return m_availableEnvironments;
}

bool DescribeServiceForApiAppResponse::AvailableEnvironmentsHasBeenSet() const
{
    return m_availableEnvironmentsHasBeenSet;
}

string DescribeServiceForApiAppResponse::GetServiceName() const
{
    return m_serviceName;
}

bool DescribeServiceForApiAppResponse::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string DescribeServiceForApiAppResponse::GetServiceDesc() const
{
    return m_serviceDesc;
}

bool DescribeServiceForApiAppResponse::ServiceDescHasBeenSet() const
{
    return m_serviceDescHasBeenSet;
}

string DescribeServiceForApiAppResponse::GetProtocol() const
{
    return m_protocol;
}

bool DescribeServiceForApiAppResponse::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string DescribeServiceForApiAppResponse::GetCreatedTime() const
{
    return m_createdTime;
}

bool DescribeServiceForApiAppResponse::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string DescribeServiceForApiAppResponse::GetModifiedTime() const
{
    return m_modifiedTime;
}

bool DescribeServiceForApiAppResponse::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

vector<string> DescribeServiceForApiAppResponse::GetNetTypes() const
{
    return m_netTypes;
}

bool DescribeServiceForApiAppResponse::NetTypesHasBeenSet() const
{
    return m_netTypesHasBeenSet;
}

string DescribeServiceForApiAppResponse::GetInternalSubDomain() const
{
    return m_internalSubDomain;
}

bool DescribeServiceForApiAppResponse::InternalSubDomainHasBeenSet() const
{
    return m_internalSubDomainHasBeenSet;
}

string DescribeServiceForApiAppResponse::GetOuterSubDomain() const
{
    return m_outerSubDomain;
}

bool DescribeServiceForApiAppResponse::OuterSubDomainHasBeenSet() const
{
    return m_outerSubDomainHasBeenSet;
}

int64_t DescribeServiceForApiAppResponse::GetInnerHttpPort() const
{
    return m_innerHttpPort;
}

bool DescribeServiceForApiAppResponse::InnerHttpPortHasBeenSet() const
{
    return m_innerHttpPortHasBeenSet;
}

int64_t DescribeServiceForApiAppResponse::GetInnerHttpsPort() const
{
    return m_innerHttpsPort;
}

bool DescribeServiceForApiAppResponse::InnerHttpsPortHasBeenSet() const
{
    return m_innerHttpsPortHasBeenSet;
}

int64_t DescribeServiceForApiAppResponse::GetApiTotalCount() const
{
    return m_apiTotalCount;
}

bool DescribeServiceForApiAppResponse::ApiTotalCountHasBeenSet() const
{
    return m_apiTotalCountHasBeenSet;
}

vector<ApiIdStatus> DescribeServiceForApiAppResponse::GetApiIdStatusSet() const
{
    return m_apiIdStatusSet;
}

bool DescribeServiceForApiAppResponse::ApiIdStatusSetHasBeenSet() const
{
    return m_apiIdStatusSetHasBeenSet;
}

int64_t DescribeServiceForApiAppResponse::GetUsagePlanTotalCount() const
{
    return m_usagePlanTotalCount;
}

bool DescribeServiceForApiAppResponse::UsagePlanTotalCountHasBeenSet() const
{
    return m_usagePlanTotalCountHasBeenSet;
}

vector<UsagePlan> DescribeServiceForApiAppResponse::GetUsagePlanList() const
{
    return m_usagePlanList;
}

bool DescribeServiceForApiAppResponse::UsagePlanListHasBeenSet() const
{
    return m_usagePlanListHasBeenSet;
}

string DescribeServiceForApiAppResponse::GetIpVersion() const
{
    return m_ipVersion;
}

bool DescribeServiceForApiAppResponse::IpVersionHasBeenSet() const
{
    return m_ipVersionHasBeenSet;
}

string DescribeServiceForApiAppResponse::GetUserType() const
{
    return m_userType;
}

bool DescribeServiceForApiAppResponse::UserTypeHasBeenSet() const
{
    return m_userTypeHasBeenSet;
}

int64_t DescribeServiceForApiAppResponse::GetSetId() const
{
    return m_setId;
}

bool DescribeServiceForApiAppResponse::SetIdHasBeenSet() const
{
    return m_setIdHasBeenSet;
}

vector<Tag> DescribeServiceForApiAppResponse::GetTags() const
{
    return m_tags;
}

bool DescribeServiceForApiAppResponse::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


