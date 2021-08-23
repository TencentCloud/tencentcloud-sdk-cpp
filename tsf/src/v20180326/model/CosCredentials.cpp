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

#include <tencentcloud/tsf/v20180326/model/CosCredentials.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

CosCredentials::CosCredentials() :
    m_sessionTokenHasBeenSet(false),
    m_tmpAppIdHasBeenSet(false),
    m_tmpSecretIdHasBeenSet(false),
    m_tmpSecretKeyHasBeenSet(false),
    m_expiredTimeHasBeenSet(false),
    m_domainHasBeenSet(false)
{
}

CoreInternalOutcome CosCredentials::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SessionToken") && !value["SessionToken"].IsNull())
    {
        if (!value["SessionToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosCredentials.SessionToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionToken = string(value["SessionToken"].GetString());
        m_sessionTokenHasBeenSet = true;
    }

    if (value.HasMember("TmpAppId") && !value["TmpAppId"].IsNull())
    {
        if (!value["TmpAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosCredentials.TmpAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tmpAppId = string(value["TmpAppId"].GetString());
        m_tmpAppIdHasBeenSet = true;
    }

    if (value.HasMember("TmpSecretId") && !value["TmpSecretId"].IsNull())
    {
        if (!value["TmpSecretId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosCredentials.TmpSecretId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tmpSecretId = string(value["TmpSecretId"].GetString());
        m_tmpSecretIdHasBeenSet = true;
    }

    if (value.HasMember("TmpSecretKey") && !value["TmpSecretKey"].IsNull())
    {
        if (!value["TmpSecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosCredentials.TmpSecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tmpSecretKey = string(value["TmpSecretKey"].GetString());
        m_tmpSecretKeyHasBeenSet = true;
    }

    if (value.HasMember("ExpiredTime") && !value["ExpiredTime"].IsNull())
    {
        if (!value["ExpiredTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosCredentials.ExpiredTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = value["ExpiredTime"].GetInt64();
        m_expiredTimeHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosCredentials.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosCredentials::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sessionTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionToken.c_str(), allocator).Move(), allocator);
    }

    if (m_tmpAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TmpAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tmpAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_tmpSecretIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TmpSecretId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tmpSecretId.c_str(), allocator).Move(), allocator);
    }

    if (m_tmpSecretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TmpSecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tmpSecretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expiredTime, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

}


string CosCredentials::GetSessionToken() const
{
    return m_sessionToken;
}

void CosCredentials::SetSessionToken(const string& _sessionToken)
{
    m_sessionToken = _sessionToken;
    m_sessionTokenHasBeenSet = true;
}

bool CosCredentials::SessionTokenHasBeenSet() const
{
    return m_sessionTokenHasBeenSet;
}

string CosCredentials::GetTmpAppId() const
{
    return m_tmpAppId;
}

void CosCredentials::SetTmpAppId(const string& _tmpAppId)
{
    m_tmpAppId = _tmpAppId;
    m_tmpAppIdHasBeenSet = true;
}

bool CosCredentials::TmpAppIdHasBeenSet() const
{
    return m_tmpAppIdHasBeenSet;
}

string CosCredentials::GetTmpSecretId() const
{
    return m_tmpSecretId;
}

void CosCredentials::SetTmpSecretId(const string& _tmpSecretId)
{
    m_tmpSecretId = _tmpSecretId;
    m_tmpSecretIdHasBeenSet = true;
}

bool CosCredentials::TmpSecretIdHasBeenSet() const
{
    return m_tmpSecretIdHasBeenSet;
}

string CosCredentials::GetTmpSecretKey() const
{
    return m_tmpSecretKey;
}

void CosCredentials::SetTmpSecretKey(const string& _tmpSecretKey)
{
    m_tmpSecretKey = _tmpSecretKey;
    m_tmpSecretKeyHasBeenSet = true;
}

bool CosCredentials::TmpSecretKeyHasBeenSet() const
{
    return m_tmpSecretKeyHasBeenSet;
}

int64_t CosCredentials::GetExpiredTime() const
{
    return m_expiredTime;
}

void CosCredentials::SetExpiredTime(const int64_t& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool CosCredentials::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

string CosCredentials::GetDomain() const
{
    return m_domain;
}

void CosCredentials::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CosCredentials::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

