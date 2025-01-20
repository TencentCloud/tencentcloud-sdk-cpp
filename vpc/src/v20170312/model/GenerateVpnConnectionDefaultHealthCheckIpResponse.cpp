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

#include <tencentcloud/vpc/v20170312/model/GenerateVpnConnectionDefaultHealthCheckIpResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

GenerateVpnConnectionDefaultHealthCheckIpResponse::GenerateVpnConnectionDefaultHealthCheckIpResponse() :
    m_healthCheckLocalIpHasBeenSet(false),
    m_healthCheckRemoteIpHasBeenSet(false)
{
}

CoreInternalOutcome GenerateVpnConnectionDefaultHealthCheckIpResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("HealthCheckLocalIp") && !rsp["HealthCheckLocalIp"].IsNull())
    {
        if (!rsp["HealthCheckLocalIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckLocalIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckLocalIp = string(rsp["HealthCheckLocalIp"].GetString());
        m_healthCheckLocalIpHasBeenSet = true;
    }

    if (rsp.HasMember("HealthCheckRemoteIp") && !rsp["HealthCheckRemoteIp"].IsNull())
    {
        if (!rsp["HealthCheckRemoteIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckRemoteIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckRemoteIp = string(rsp["HealthCheckRemoteIp"].GetString());
        m_healthCheckRemoteIpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GenerateVpnConnectionDefaultHealthCheckIpResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_healthCheckLocalIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckLocalIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthCheckLocalIp.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckRemoteIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckRemoteIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthCheckRemoteIp.c_str(), allocator).Move(), allocator);
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


string GenerateVpnConnectionDefaultHealthCheckIpResponse::GetHealthCheckLocalIp() const
{
    return m_healthCheckLocalIp;
}

bool GenerateVpnConnectionDefaultHealthCheckIpResponse::HealthCheckLocalIpHasBeenSet() const
{
    return m_healthCheckLocalIpHasBeenSet;
}

string GenerateVpnConnectionDefaultHealthCheckIpResponse::GetHealthCheckRemoteIp() const
{
    return m_healthCheckRemoteIp;
}

bool GenerateVpnConnectionDefaultHealthCheckIpResponse::HealthCheckRemoteIpHasBeenSet() const
{
    return m_healthCheckRemoteIpHasBeenSet;
}


