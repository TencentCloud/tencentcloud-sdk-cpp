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

#include <tencentcloud/thpc/v20230321/model/GenerateRegisterCommandResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Thpc::V20230321::Model;
using namespace std;

GenerateRegisterCommandResponse::GenerateRegisterCommandResponse() :
    m_registerCommandHasBeenSet(false),
    m_registerCodeHasBeenSet(false),
    m_expireAtHasBeenSet(false),
    m_proxyHasBeenSet(false),
    m_endPointVipHasBeenSet(false),
    m_endPointStatusHasBeenSet(false),
    m_clusterIdHasBeenSet(false)
{
}

CoreInternalOutcome GenerateRegisterCommandResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("RegisterCommand") && !rsp["RegisterCommand"].IsNull())
    {
        if (!rsp["RegisterCommand"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterCommand` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registerCommand = string(rsp["RegisterCommand"].GetString());
        m_registerCommandHasBeenSet = true;
    }

    if (rsp.HasMember("RegisterCode") && !rsp["RegisterCode"].IsNull())
    {
        if (!rsp["RegisterCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registerCode = string(rsp["RegisterCode"].GetString());
        m_registerCodeHasBeenSet = true;
    }

    if (rsp.HasMember("ExpireAt") && !rsp["ExpireAt"].IsNull())
    {
        if (!rsp["ExpireAt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpireAt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireAt = rsp["ExpireAt"].GetInt64();
        m_expireAtHasBeenSet = true;
    }

    if (rsp.HasMember("Proxy") && !rsp["Proxy"].IsNull())
    {
        if (!rsp["Proxy"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Proxy` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_proxy = rsp["Proxy"].GetBool();
        m_proxyHasBeenSet = true;
    }

    if (rsp.HasMember("EndPointVip") && !rsp["EndPointVip"].IsNull())
    {
        if (!rsp["EndPointVip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPointVip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endPointVip = string(rsp["EndPointVip"].GetString());
        m_endPointVipHasBeenSet = true;
    }

    if (rsp.HasMember("EndPointStatus") && !rsp["EndPointStatus"].IsNull())
    {
        if (!rsp["EndPointStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPointStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endPointStatus = string(rsp["EndPointStatus"].GetString());
        m_endPointStatusHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterId") && !rsp["ClusterId"].IsNull())
    {
        if (!rsp["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(rsp["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GenerateRegisterCommandResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_registerCommandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterCommand";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registerCommand.c_str(), allocator).Move(), allocator);
    }

    if (m_registerCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registerCode.c_str(), allocator).Move(), allocator);
    }

    if (m_expireAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireAt, allocator);
    }

    if (m_proxyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Proxy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_proxy, allocator);
    }

    if (m_endPointVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endPointVip.c_str(), allocator).Move(), allocator);
    }

    if (m_endPointStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endPointStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
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


string GenerateRegisterCommandResponse::GetRegisterCommand() const
{
    return m_registerCommand;
}

bool GenerateRegisterCommandResponse::RegisterCommandHasBeenSet() const
{
    return m_registerCommandHasBeenSet;
}

string GenerateRegisterCommandResponse::GetRegisterCode() const
{
    return m_registerCode;
}

bool GenerateRegisterCommandResponse::RegisterCodeHasBeenSet() const
{
    return m_registerCodeHasBeenSet;
}

int64_t GenerateRegisterCommandResponse::GetExpireAt() const
{
    return m_expireAt;
}

bool GenerateRegisterCommandResponse::ExpireAtHasBeenSet() const
{
    return m_expireAtHasBeenSet;
}

bool GenerateRegisterCommandResponse::GetProxy() const
{
    return m_proxy;
}

bool GenerateRegisterCommandResponse::ProxyHasBeenSet() const
{
    return m_proxyHasBeenSet;
}

string GenerateRegisterCommandResponse::GetEndPointVip() const
{
    return m_endPointVip;
}

bool GenerateRegisterCommandResponse::EndPointVipHasBeenSet() const
{
    return m_endPointVipHasBeenSet;
}

string GenerateRegisterCommandResponse::GetEndPointStatus() const
{
    return m_endPointStatus;
}

bool GenerateRegisterCommandResponse::EndPointStatusHasBeenSet() const
{
    return m_endPointStatusHasBeenSet;
}

string GenerateRegisterCommandResponse::GetClusterId() const
{
    return m_clusterId;
}

bool GenerateRegisterCommandResponse::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}


