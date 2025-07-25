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

#include <tencentcloud/dnspod/v20210323/model/CreateSubdomainValidateTXTValueResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

CreateSubdomainValidateTXTValueResponse::CreateSubdomainValidateTXTValueResponse() :
    m_domainHasBeenSet(false),
    m_subdomainHasBeenSet(false),
    m_recordTypeHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_parentDomainHasBeenSet(false)
{
}

CoreInternalOutcome CreateSubdomainValidateTXTValueResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Domain") && !rsp["Domain"].IsNull())
    {
        if (!rsp["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(rsp["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (rsp.HasMember("Subdomain") && !rsp["Subdomain"].IsNull())
    {
        if (!rsp["Subdomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Subdomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subdomain = string(rsp["Subdomain"].GetString());
        m_subdomainHasBeenSet = true;
    }

    if (rsp.HasMember("RecordType") && !rsp["RecordType"].IsNull())
    {
        if (!rsp["RecordType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordType = string(rsp["RecordType"].GetString());
        m_recordTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Value") && !rsp["Value"].IsNull())
    {
        if (!rsp["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(rsp["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (rsp.HasMember("ParentDomain") && !rsp["ParentDomain"].IsNull())
    {
        if (!rsp["ParentDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParentDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentDomain = string(rsp["ParentDomain"].GetString());
        m_parentDomainHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateSubdomainValidateTXTValueResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_subdomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Subdomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subdomain.c_str(), allocator).Move(), allocator);
    }

    if (m_recordTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordType.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_parentDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentDomain.c_str(), allocator).Move(), allocator);
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


string CreateSubdomainValidateTXTValueResponse::GetDomain() const
{
    return m_domain;
}

bool CreateSubdomainValidateTXTValueResponse::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string CreateSubdomainValidateTXTValueResponse::GetSubdomain() const
{
    return m_subdomain;
}

bool CreateSubdomainValidateTXTValueResponse::SubdomainHasBeenSet() const
{
    return m_subdomainHasBeenSet;
}

string CreateSubdomainValidateTXTValueResponse::GetRecordType() const
{
    return m_recordType;
}

bool CreateSubdomainValidateTXTValueResponse::RecordTypeHasBeenSet() const
{
    return m_recordTypeHasBeenSet;
}

string CreateSubdomainValidateTXTValueResponse::GetValue() const
{
    return m_value;
}

bool CreateSubdomainValidateTXTValueResponse::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string CreateSubdomainValidateTXTValueResponse::GetParentDomain() const
{
    return m_parentDomain;
}

bool CreateSubdomainValidateTXTValueResponse::ParentDomainHasBeenSet() const
{
    return m_parentDomainHasBeenSet;
}


