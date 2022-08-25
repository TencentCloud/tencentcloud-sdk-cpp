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

#include <tencentcloud/vod/v20180717/model/SDMCDrmKeyProviderInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

SDMCDrmKeyProviderInfo::SDMCDrmKeyProviderInfo() :
    m_uidHasBeenSet(false),
    m_secretIdHasBeenSet(false),
    m_secretKeyHasBeenSet(false),
    m_fairPlayCertificateUrlHasBeenSet(false)
{
}

CoreInternalOutcome SDMCDrmKeyProviderInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uid") && !value["Uid"].IsNull())
    {
        if (!value["Uid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SDMCDrmKeyProviderInfo.Uid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uid = string(value["Uid"].GetString());
        m_uidHasBeenSet = true;
    }

    if (value.HasMember("SecretId") && !value["SecretId"].IsNull())
    {
        if (!value["SecretId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SDMCDrmKeyProviderInfo.SecretId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretId = string(value["SecretId"].GetString());
        m_secretIdHasBeenSet = true;
    }

    if (value.HasMember("SecretKey") && !value["SecretKey"].IsNull())
    {
        if (!value["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SDMCDrmKeyProviderInfo.SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(value["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
    }

    if (value.HasMember("FairPlayCertificateUrl") && !value["FairPlayCertificateUrl"].IsNull())
    {
        if (!value["FairPlayCertificateUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SDMCDrmKeyProviderInfo.FairPlayCertificateUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fairPlayCertificateUrl = string(value["FairPlayCertificateUrl"].GetString());
        m_fairPlayCertificateUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SDMCDrmKeyProviderInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uid.c_str(), allocator).Move(), allocator);
    }

    if (m_secretIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretId.c_str(), allocator).Move(), allocator);
    }

    if (m_secretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_fairPlayCertificateUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FairPlayCertificateUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fairPlayCertificateUrl.c_str(), allocator).Move(), allocator);
    }

}


string SDMCDrmKeyProviderInfo::GetUid() const
{
    return m_uid;
}

void SDMCDrmKeyProviderInfo::SetUid(const string& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool SDMCDrmKeyProviderInfo::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

string SDMCDrmKeyProviderInfo::GetSecretId() const
{
    return m_secretId;
}

void SDMCDrmKeyProviderInfo::SetSecretId(const string& _secretId)
{
    m_secretId = _secretId;
    m_secretIdHasBeenSet = true;
}

bool SDMCDrmKeyProviderInfo::SecretIdHasBeenSet() const
{
    return m_secretIdHasBeenSet;
}

string SDMCDrmKeyProviderInfo::GetSecretKey() const
{
    return m_secretKey;
}

void SDMCDrmKeyProviderInfo::SetSecretKey(const string& _secretKey)
{
    m_secretKey = _secretKey;
    m_secretKeyHasBeenSet = true;
}

bool SDMCDrmKeyProviderInfo::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

string SDMCDrmKeyProviderInfo::GetFairPlayCertificateUrl() const
{
    return m_fairPlayCertificateUrl;
}

void SDMCDrmKeyProviderInfo::SetFairPlayCertificateUrl(const string& _fairPlayCertificateUrl)
{
    m_fairPlayCertificateUrl = _fairPlayCertificateUrl;
    m_fairPlayCertificateUrlHasBeenSet = true;
}

bool SDMCDrmKeyProviderInfo::FairPlayCertificateUrlHasBeenSet() const
{
    return m_fairPlayCertificateUrlHasBeenSet;
}

