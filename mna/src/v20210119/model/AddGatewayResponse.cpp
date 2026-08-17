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

#include <tencentcloud/mna/v20210119/model/AddGatewayResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

AddGatewayResponse::AddGatewayResponse() :
    m_gatewayIdHasBeenSet(false),
    m_tokenHasBeenSet(false),
    m_registerCenterUrlHasBeenSet(false),
    m_telemetryUrlHasBeenSet(false)
{
}

CoreInternalOutcome AddGatewayResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("GatewayId") && !rsp["GatewayId"].IsNull())
    {
        if (!rsp["GatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayId = string(rsp["GatewayId"].GetString());
        m_gatewayIdHasBeenSet = true;
    }

    if (rsp.HasMember("Token") && !rsp["Token"].IsNull())
    {
        if (!rsp["Token"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Token` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_token = string(rsp["Token"].GetString());
        m_tokenHasBeenSet = true;
    }

    if (rsp.HasMember("RegisterCenterUrl") && !rsp["RegisterCenterUrl"].IsNull())
    {
        if (!rsp["RegisterCenterUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterCenterUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registerCenterUrl = string(rsp["RegisterCenterUrl"].GetString());
        m_registerCenterUrlHasBeenSet = true;
    }

    if (rsp.HasMember("TelemetryUrl") && !rsp["TelemetryUrl"].IsNull())
    {
        if (!rsp["TelemetryUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TelemetryUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_telemetryUrl = string(rsp["TelemetryUrl"].GetString());
        m_telemetryUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string AddGatewayResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Token";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_token.c_str(), allocator).Move(), allocator);
    }

    if (m_registerCenterUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterCenterUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registerCenterUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_telemetryUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TelemetryUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_telemetryUrl.c_str(), allocator).Move(), allocator);
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


string AddGatewayResponse::GetGatewayId() const
{
    return m_gatewayId;
}

bool AddGatewayResponse::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string AddGatewayResponse::GetToken() const
{
    return m_token;
}

bool AddGatewayResponse::TokenHasBeenSet() const
{
    return m_tokenHasBeenSet;
}

string AddGatewayResponse::GetRegisterCenterUrl() const
{
    return m_registerCenterUrl;
}

bool AddGatewayResponse::RegisterCenterUrlHasBeenSet() const
{
    return m_registerCenterUrlHasBeenSet;
}

string AddGatewayResponse::GetTelemetryUrl() const
{
    return m_telemetryUrl;
}

bool AddGatewayResponse::TelemetryUrlHasBeenSet() const
{
    return m_telemetryUrlHasBeenSet;
}


