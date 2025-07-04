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

#include <tencentcloud/postgres/v20170312/model/DescribeDBInstanceSSLConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

DescribeDBInstanceSSLConfigResponse::DescribeDBInstanceSSLConfigResponse() :
    m_sSLEnabledHasBeenSet(false),
    m_cAUrlHasBeenSet(false),
    m_connectAddressHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDBInstanceSSLConfigResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SSLEnabled") && !rsp["SSLEnabled"].IsNull())
    {
        if (!rsp["SSLEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SSLEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_sSLEnabled = rsp["SSLEnabled"].GetBool();
        m_sSLEnabledHasBeenSet = true;
    }

    if (rsp.HasMember("CAUrl") && !rsp["CAUrl"].IsNull())
    {
        if (!rsp["CAUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CAUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cAUrl = string(rsp["CAUrl"].GetString());
        m_cAUrlHasBeenSet = true;
    }

    if (rsp.HasMember("ConnectAddress") && !rsp["ConnectAddress"].IsNull())
    {
        if (!rsp["ConnectAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectAddress = string(rsp["ConnectAddress"].GetString());
        m_connectAddressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDBInstanceSSLConfigResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_sSLEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSLEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sSLEnabled, allocator);
    }

    if (m_cAUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CAUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cAUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_connectAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectAddress.c_str(), allocator).Move(), allocator);
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


bool DescribeDBInstanceSSLConfigResponse::GetSSLEnabled() const
{
    return m_sSLEnabled;
}

bool DescribeDBInstanceSSLConfigResponse::SSLEnabledHasBeenSet() const
{
    return m_sSLEnabledHasBeenSet;
}

string DescribeDBInstanceSSLConfigResponse::GetCAUrl() const
{
    return m_cAUrl;
}

bool DescribeDBInstanceSSLConfigResponse::CAUrlHasBeenSet() const
{
    return m_cAUrlHasBeenSet;
}

string DescribeDBInstanceSSLConfigResponse::GetConnectAddress() const
{
    return m_connectAddress;
}

bool DescribeDBInstanceSSLConfigResponse::ConnectAddressHasBeenSet() const
{
    return m_connectAddressHasBeenSet;
}


