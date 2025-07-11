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

#include <tencentcloud/redis/v20180412/model/DescribeSSLStatusResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

DescribeSSLStatusResponse::DescribeSSLStatusResponse() :
    m_certDownloadUrlHasBeenSet(false),
    m_urlExpiredTimeHasBeenSet(false),
    m_sSLConfigHasBeenSet(false),
    m_featureSupportHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSSLStatusResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CertDownloadUrl") && !rsp["CertDownloadUrl"].IsNull())
    {
        if (!rsp["CertDownloadUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertDownloadUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certDownloadUrl = string(rsp["CertDownloadUrl"].GetString());
        m_certDownloadUrlHasBeenSet = true;
    }

    if (rsp.HasMember("UrlExpiredTime") && !rsp["UrlExpiredTime"].IsNull())
    {
        if (!rsp["UrlExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UrlExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_urlExpiredTime = string(rsp["UrlExpiredTime"].GetString());
        m_urlExpiredTimeHasBeenSet = true;
    }

    if (rsp.HasMember("SSLConfig") && !rsp["SSLConfig"].IsNull())
    {
        if (!rsp["SSLConfig"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SSLConfig` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_sSLConfig = rsp["SSLConfig"].GetBool();
        m_sSLConfigHasBeenSet = true;
    }

    if (rsp.HasMember("FeatureSupport") && !rsp["FeatureSupport"].IsNull())
    {
        if (!rsp["FeatureSupport"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FeatureSupport` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_featureSupport = rsp["FeatureSupport"].GetBool();
        m_featureSupportHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeSSLStatusResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_certDownloadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertDownloadUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certDownloadUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_urlExpiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_urlExpiredTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sSLConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSLConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sSLConfig, allocator);
    }

    if (m_featureSupportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeatureSupport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_featureSupport, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
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


string DescribeSSLStatusResponse::GetCertDownloadUrl() const
{
    return m_certDownloadUrl;
}

bool DescribeSSLStatusResponse::CertDownloadUrlHasBeenSet() const
{
    return m_certDownloadUrlHasBeenSet;
}

string DescribeSSLStatusResponse::GetUrlExpiredTime() const
{
    return m_urlExpiredTime;
}

bool DescribeSSLStatusResponse::UrlExpiredTimeHasBeenSet() const
{
    return m_urlExpiredTimeHasBeenSet;
}

bool DescribeSSLStatusResponse::GetSSLConfig() const
{
    return m_sSLConfig;
}

bool DescribeSSLStatusResponse::SSLConfigHasBeenSet() const
{
    return m_sSLConfigHasBeenSet;
}

bool DescribeSSLStatusResponse::GetFeatureSupport() const
{
    return m_featureSupport;
}

bool DescribeSSLStatusResponse::FeatureSupportHasBeenSet() const
{
    return m_featureSupportHasBeenSet;
}

int64_t DescribeSSLStatusResponse::GetStatus() const
{
    return m_status;
}

bool DescribeSSLStatusResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


