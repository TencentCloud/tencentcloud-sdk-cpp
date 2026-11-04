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
    m_statusHasBeenSet(false),
    m_addressTypeHasBeenSet(false),
    m_encryptAddressHasBeenSet(false),
    m_certSourceHasBeenSet(false),
    m_certStatusHasBeenSet(false),
    m_certIdHasBeenSet(false),
    m_certAliasHasBeenSet(false),
    m_certExpireTimeHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_sSLMinVersionHasBeenSet(false),
    m_encryptionModeHasBeenSet(false)
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

    if (rsp.HasMember("AddressType") && !rsp["AddressType"].IsNull())
    {
        if (!rsp["AddressType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AddressType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_addressType = rsp["AddressType"].GetInt64();
        m_addressTypeHasBeenSet = true;
    }

    if (rsp.HasMember("EncryptAddress") && !rsp["EncryptAddress"].IsNull())
    {
        if (!rsp["EncryptAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptAddress = string(rsp["EncryptAddress"].GetString());
        m_encryptAddressHasBeenSet = true;
    }

    if (rsp.HasMember("CertSource") && !rsp["CertSource"].IsNull())
    {
        if (!rsp["CertSource"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CertSource` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_certSource = rsp["CertSource"].GetUint64();
        m_certSourceHasBeenSet = true;
    }

    if (rsp.HasMember("CertStatus") && !rsp["CertStatus"].IsNull())
    {
        if (!rsp["CertStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CertStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_certStatus = rsp["CertStatus"].GetUint64();
        m_certStatusHasBeenSet = true;
    }

    if (rsp.HasMember("CertId") && !rsp["CertId"].IsNull())
    {
        if (!rsp["CertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certId = string(rsp["CertId"].GetString());
        m_certIdHasBeenSet = true;
    }

    if (rsp.HasMember("CertAlias") && !rsp["CertAlias"].IsNull())
    {
        if (!rsp["CertAlias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certAlias = string(rsp["CertAlias"].GetString());
        m_certAliasHasBeenSet = true;
    }

    if (rsp.HasMember("CertExpireTime") && !rsp["CertExpireTime"].IsNull())
    {
        if (!rsp["CertExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certExpireTime = string(rsp["CertExpireTime"].GetString());
        m_certExpireTimeHasBeenSet = true;
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

    if (rsp.HasMember("SSLMinVersion") && !rsp["SSLMinVersion"].IsNull())
    {
        if (!rsp["SSLMinVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSLMinVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sSLMinVersion = string(rsp["SSLMinVersion"].GetString());
        m_sSLMinVersionHasBeenSet = true;
    }

    if (rsp.HasMember("EncryptionMode") && !rsp["EncryptionMode"].IsNull())
    {
        if (!rsp["EncryptionMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptionMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptionMode = string(rsp["EncryptionMode"].GetString());
        m_encryptionModeHasBeenSet = true;
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

    if (m_addressTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_addressType, allocator);
    }

    if (m_encryptAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_certSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_certSource, allocator);
    }

    if (m_certStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_certStatus, allocator);
    }

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certId.c_str(), allocator).Move(), allocator);
    }

    if (m_certAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_certExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certExpireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_sSLMinVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSLMinVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sSLMinVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptionModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptionMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptionMode.c_str(), allocator).Move(), allocator);
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

int64_t DescribeSSLStatusResponse::GetAddressType() const
{
    return m_addressType;
}

bool DescribeSSLStatusResponse::AddressTypeHasBeenSet() const
{
    return m_addressTypeHasBeenSet;
}

string DescribeSSLStatusResponse::GetEncryptAddress() const
{
    return m_encryptAddress;
}

bool DescribeSSLStatusResponse::EncryptAddressHasBeenSet() const
{
    return m_encryptAddressHasBeenSet;
}

uint64_t DescribeSSLStatusResponse::GetCertSource() const
{
    return m_certSource;
}

bool DescribeSSLStatusResponse::CertSourceHasBeenSet() const
{
    return m_certSourceHasBeenSet;
}

uint64_t DescribeSSLStatusResponse::GetCertStatus() const
{
    return m_certStatus;
}

bool DescribeSSLStatusResponse::CertStatusHasBeenSet() const
{
    return m_certStatusHasBeenSet;
}

string DescribeSSLStatusResponse::GetCertId() const
{
    return m_certId;
}

bool DescribeSSLStatusResponse::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

string DescribeSSLStatusResponse::GetCertAlias() const
{
    return m_certAlias;
}

bool DescribeSSLStatusResponse::CertAliasHasBeenSet() const
{
    return m_certAliasHasBeenSet;
}

string DescribeSSLStatusResponse::GetCertExpireTime() const
{
    return m_certExpireTime;
}

bool DescribeSSLStatusResponse::CertExpireTimeHasBeenSet() const
{
    return m_certExpireTimeHasBeenSet;
}

string DescribeSSLStatusResponse::GetDomain() const
{
    return m_domain;
}

bool DescribeSSLStatusResponse::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DescribeSSLStatusResponse::GetSSLMinVersion() const
{
    return m_sSLMinVersion;
}

bool DescribeSSLStatusResponse::SSLMinVersionHasBeenSet() const
{
    return m_sSLMinVersionHasBeenSet;
}

string DescribeSSLStatusResponse::GetEncryptionMode() const
{
    return m_encryptionMode;
}

bool DescribeSSLStatusResponse::EncryptionModeHasBeenSet() const
{
    return m_encryptionModeHasBeenSet;
}


