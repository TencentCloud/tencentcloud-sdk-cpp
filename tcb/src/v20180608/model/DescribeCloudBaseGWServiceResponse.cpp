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

#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseGWServiceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribeCloudBaseGWServiceResponse::DescribeCloudBaseGWServiceResponse() :
    m_serviceSetHasBeenSet(false),
    m_enableServiceHasBeenSet(false),
    m_defaultDomainHasBeenSet(false),
    m_enableUnionHasBeenSet(false),
    m_enableCheckAcrossDomainHasBeenSet(false),
    m_customRoutingRulesHasBeenSet(false),
    m_accessFlagHasBeenSet(false),
    m_originDomainHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCloudBaseGWServiceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ServiceSet") && !rsp["ServiceSet"].IsNull())
    {
        if (!rsp["ServiceSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ServiceSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CloudBaseGWService item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_serviceSet.push_back(item);
        }
        m_serviceSetHasBeenSet = true;
    }

    if (rsp.HasMember("EnableService") && !rsp["EnableService"].IsNull())
    {
        if (!rsp["EnableService"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnableService` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableService = rsp["EnableService"].GetBool();
        m_enableServiceHasBeenSet = true;
    }

    if (rsp.HasMember("DefaultDomain") && !rsp["DefaultDomain"].IsNull())
    {
        if (!rsp["DefaultDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DefaultDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultDomain = string(rsp["DefaultDomain"].GetString());
        m_defaultDomainHasBeenSet = true;
    }

    if (rsp.HasMember("EnableUnion") && !rsp["EnableUnion"].IsNull())
    {
        if (!rsp["EnableUnion"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnableUnion` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableUnion = rsp["EnableUnion"].GetBool();
        m_enableUnionHasBeenSet = true;
    }

    if (rsp.HasMember("EnableCheckAcrossDomain") && !rsp["EnableCheckAcrossDomain"].IsNull())
    {
        if (!rsp["EnableCheckAcrossDomain"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnableCheckAcrossDomain` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableCheckAcrossDomain = rsp["EnableCheckAcrossDomain"].GetBool();
        m_enableCheckAcrossDomainHasBeenSet = true;
    }

    if (rsp.HasMember("CustomRoutingRules") && !rsp["CustomRoutingRules"].IsNull())
    {
        if (!rsp["CustomRoutingRules"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRoutingRules` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customRoutingRules = string(rsp["CustomRoutingRules"].GetString());
        m_customRoutingRulesHasBeenSet = true;
    }

    if (rsp.HasMember("AccessFlag") && !rsp["AccessFlag"].IsNull())
    {
        if (!rsp["AccessFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_accessFlag = rsp["AccessFlag"].GetUint64();
        m_accessFlagHasBeenSet = true;
    }

    if (rsp.HasMember("OriginDomain") && !rsp["OriginDomain"].IsNull())
    {
        if (!rsp["OriginDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originDomain = string(rsp["OriginDomain"].GetString());
        m_originDomainHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCloudBaseGWServiceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_serviceSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serviceSet.begin(); itr != m_serviceSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_enableServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableService";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableService, allocator);
    }

    if (m_defaultDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_enableUnionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableUnion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableUnion, allocator);
    }

    if (m_enableCheckAcrossDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCheckAcrossDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableCheckAcrossDomain, allocator);
    }

    if (m_customRoutingRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomRoutingRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customRoutingRules.c_str(), allocator).Move(), allocator);
    }

    if (m_accessFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessFlag, allocator);
    }

    if (m_originDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originDomain.c_str(), allocator).Move(), allocator);
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


vector<CloudBaseGWService> DescribeCloudBaseGWServiceResponse::GetServiceSet() const
{
    return m_serviceSet;
}

bool DescribeCloudBaseGWServiceResponse::ServiceSetHasBeenSet() const
{
    return m_serviceSetHasBeenSet;
}

bool DescribeCloudBaseGWServiceResponse::GetEnableService() const
{
    return m_enableService;
}

bool DescribeCloudBaseGWServiceResponse::EnableServiceHasBeenSet() const
{
    return m_enableServiceHasBeenSet;
}

string DescribeCloudBaseGWServiceResponse::GetDefaultDomain() const
{
    return m_defaultDomain;
}

bool DescribeCloudBaseGWServiceResponse::DefaultDomainHasBeenSet() const
{
    return m_defaultDomainHasBeenSet;
}

bool DescribeCloudBaseGWServiceResponse::GetEnableUnion() const
{
    return m_enableUnion;
}

bool DescribeCloudBaseGWServiceResponse::EnableUnionHasBeenSet() const
{
    return m_enableUnionHasBeenSet;
}

bool DescribeCloudBaseGWServiceResponse::GetEnableCheckAcrossDomain() const
{
    return m_enableCheckAcrossDomain;
}

bool DescribeCloudBaseGWServiceResponse::EnableCheckAcrossDomainHasBeenSet() const
{
    return m_enableCheckAcrossDomainHasBeenSet;
}

string DescribeCloudBaseGWServiceResponse::GetCustomRoutingRules() const
{
    return m_customRoutingRules;
}

bool DescribeCloudBaseGWServiceResponse::CustomRoutingRulesHasBeenSet() const
{
    return m_customRoutingRulesHasBeenSet;
}

uint64_t DescribeCloudBaseGWServiceResponse::GetAccessFlag() const
{
    return m_accessFlag;
}

bool DescribeCloudBaseGWServiceResponse::AccessFlagHasBeenSet() const
{
    return m_accessFlagHasBeenSet;
}

string DescribeCloudBaseGWServiceResponse::GetOriginDomain() const
{
    return m_originDomain;
}

bool DescribeCloudBaseGWServiceResponse::OriginDomainHasBeenSet() const
{
    return m_originDomainHasBeenSet;
}


