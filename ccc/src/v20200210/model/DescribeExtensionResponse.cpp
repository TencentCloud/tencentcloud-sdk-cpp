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

#include <tencentcloud/ccc/v20200210/model/DescribeExtensionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

DescribeExtensionResponse::DescribeExtensionResponse() :
    m_extensionIdHasBeenSet(false),
    m_extensionDomainHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_outboundProxyHasBeenSet(false),
    m_transportHasBeenSet(false)
{
}

CoreInternalOutcome DescribeExtensionResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ExtensionId") && !rsp["ExtensionId"].IsNull())
    {
        if (!rsp["ExtensionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtensionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extensionId = string(rsp["ExtensionId"].GetString());
        m_extensionIdHasBeenSet = true;
    }

    if (rsp.HasMember("ExtensionDomain") && !rsp["ExtensionDomain"].IsNull())
    {
        if (!rsp["ExtensionDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtensionDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extensionDomain = string(rsp["ExtensionDomain"].GetString());
        m_extensionDomainHasBeenSet = true;
    }

    if (rsp.HasMember("Password") && !rsp["Password"].IsNull())
    {
        if (!rsp["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(rsp["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (rsp.HasMember("OutboundProxy") && !rsp["OutboundProxy"].IsNull())
    {
        if (!rsp["OutboundProxy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutboundProxy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outboundProxy = string(rsp["OutboundProxy"].GetString());
        m_outboundProxyHasBeenSet = true;
    }

    if (rsp.HasMember("Transport") && !rsp["Transport"].IsNull())
    {
        if (!rsp["Transport"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Transport` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transport = string(rsp["Transport"].GetString());
        m_transportHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeExtensionResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_extensionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtensionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extensionId.c_str(), allocator).Move(), allocator);
    }

    if (m_extensionDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtensionDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extensionDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_outboundProxyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutboundProxy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outboundProxy.c_str(), allocator).Move(), allocator);
    }

    if (m_transportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Transport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transport.c_str(), allocator).Move(), allocator);
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


string DescribeExtensionResponse::GetExtensionId() const
{
    return m_extensionId;
}

bool DescribeExtensionResponse::ExtensionIdHasBeenSet() const
{
    return m_extensionIdHasBeenSet;
}

string DescribeExtensionResponse::GetExtensionDomain() const
{
    return m_extensionDomain;
}

bool DescribeExtensionResponse::ExtensionDomainHasBeenSet() const
{
    return m_extensionDomainHasBeenSet;
}

string DescribeExtensionResponse::GetPassword() const
{
    return m_password;
}

bool DescribeExtensionResponse::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string DescribeExtensionResponse::GetOutboundProxy() const
{
    return m_outboundProxy;
}

bool DescribeExtensionResponse::OutboundProxyHasBeenSet() const
{
    return m_outboundProxyHasBeenSet;
}

string DescribeExtensionResponse::GetTransport() const
{
    return m_transport;
}

bool DescribeExtensionResponse::TransportHasBeenSet() const
{
    return m_transportHasBeenSet;
}


