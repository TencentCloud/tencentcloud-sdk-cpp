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

#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseRunServerDomainNameResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribeCloudBaseRunServerDomainNameResponse::DescribeCloudBaseRunServerDomainNameResponse() :
    m_publicDomainHasBeenSet(false),
    m_internalDomainHasBeenSet(false),
    m_domainNameHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCloudBaseRunServerDomainNameResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("PublicDomain") && !rsp["PublicDomain"].IsNull())
    {
        if (!rsp["PublicDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicDomain = string(rsp["PublicDomain"].GetString());
        m_publicDomainHasBeenSet = true;
    }

    if (rsp.HasMember("InternalDomain") && !rsp["InternalDomain"].IsNull())
    {
        if (!rsp["InternalDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternalDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internalDomain = string(rsp["InternalDomain"].GetString());
        m_internalDomainHasBeenSet = true;
    }

    if (rsp.HasMember("DomainName") && !rsp["DomainName"].IsNull())
    {
        if (!rsp["DomainName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainName = string(rsp["DomainName"].GetString());
        m_domainNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCloudBaseRunServerDomainNameResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_publicDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_internalDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternalDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internalDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
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


string DescribeCloudBaseRunServerDomainNameResponse::GetPublicDomain() const
{
    return m_publicDomain;
}

bool DescribeCloudBaseRunServerDomainNameResponse::PublicDomainHasBeenSet() const
{
    return m_publicDomainHasBeenSet;
}

string DescribeCloudBaseRunServerDomainNameResponse::GetInternalDomain() const
{
    return m_internalDomain;
}

bool DescribeCloudBaseRunServerDomainNameResponse::InternalDomainHasBeenSet() const
{
    return m_internalDomainHasBeenSet;
}

string DescribeCloudBaseRunServerDomainNameResponse::GetDomainName() const
{
    return m_domainName;
}

bool DescribeCloudBaseRunServerDomainNameResponse::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}


