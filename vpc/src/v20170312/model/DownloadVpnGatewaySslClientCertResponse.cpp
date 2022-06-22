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

#include <tencentcloud/vpc/v20170312/model/DownloadVpnGatewaySslClientCertResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DownloadVpnGatewaySslClientCertResponse::DownloadVpnGatewaySslClientCertResponse() :
    m_sslClientConfigsSetHasBeenSet(false),
    m_sslClientConfigHasBeenSet(false),
    m_authenticatedHasBeenSet(false)
{
}

CoreInternalOutcome DownloadVpnGatewaySslClientCertResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SslClientConfigsSet") && !rsp["SslClientConfigsSet"].IsNull())
    {
        if (!rsp["SslClientConfigsSet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SslClientConfigsSet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sslClientConfigsSet = string(rsp["SslClientConfigsSet"].GetString());
        m_sslClientConfigsSetHasBeenSet = true;
    }

    if (rsp.HasMember("SslClientConfig") && !rsp["SslClientConfig"].IsNull())
    {
        if (!rsp["SslClientConfig"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SslClientConfig` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SslClientConfig"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SslClientConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sslClientConfig.push_back(item);
        }
        m_sslClientConfigHasBeenSet = true;
    }

    if (rsp.HasMember("Authenticated") && !rsp["Authenticated"].IsNull())
    {
        if (!rsp["Authenticated"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Authenticated` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_authenticated = rsp["Authenticated"].GetUint64();
        m_authenticatedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DownloadVpnGatewaySslClientCertResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_sslClientConfigsSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SslClientConfigsSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sslClientConfigsSet.c_str(), allocator).Move(), allocator);
    }

    if (m_sslClientConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SslClientConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sslClientConfig.begin(); itr != m_sslClientConfig.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_authenticatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Authenticated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authenticated, allocator);
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


string DownloadVpnGatewaySslClientCertResponse::GetSslClientConfigsSet() const
{
    return m_sslClientConfigsSet;
}

bool DownloadVpnGatewaySslClientCertResponse::SslClientConfigsSetHasBeenSet() const
{
    return m_sslClientConfigsSetHasBeenSet;
}

vector<SslClientConfig> DownloadVpnGatewaySslClientCertResponse::GetSslClientConfig() const
{
    return m_sslClientConfig;
}

bool DownloadVpnGatewaySslClientCertResponse::SslClientConfigHasBeenSet() const
{
    return m_sslClientConfigHasBeenSet;
}

uint64_t DownloadVpnGatewaySslClientCertResponse::GetAuthenticated() const
{
    return m_authenticated;
}

bool DownloadVpnGatewaySslClientCertResponse::AuthenticatedHasBeenSet() const
{
    return m_authenticatedHasBeenSet;
}


