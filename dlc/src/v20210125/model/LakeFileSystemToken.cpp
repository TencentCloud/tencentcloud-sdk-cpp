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

#include <tencentcloud/dlc/v20210125/model/LakeFileSystemToken.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

LakeFileSystemToken::LakeFileSystemToken() :
    m_secretIdHasBeenSet(false),
    m_secretKeyHasBeenSet(false),
    m_tokenHasBeenSet(false),
    m_expiredTimeHasBeenSet(false),
    m_issueTimeHasBeenSet(false)
{
}

CoreInternalOutcome LakeFileSystemToken::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SecretId") && !value["SecretId"].IsNull())
    {
        if (!value["SecretId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LakeFileSystemToken.SecretId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretId = string(value["SecretId"].GetString());
        m_secretIdHasBeenSet = true;
    }

    if (value.HasMember("SecretKey") && !value["SecretKey"].IsNull())
    {
        if (!value["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LakeFileSystemToken.SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(value["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
    }

    if (value.HasMember("Token") && !value["Token"].IsNull())
    {
        if (!value["Token"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LakeFileSystemToken.Token` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_token = string(value["Token"].GetString());
        m_tokenHasBeenSet = true;
    }

    if (value.HasMember("ExpiredTime") && !value["ExpiredTime"].IsNull())
    {
        if (!value["ExpiredTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LakeFileSystemToken.ExpiredTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = value["ExpiredTime"].GetInt64();
        m_expiredTimeHasBeenSet = true;
    }

    if (value.HasMember("IssueTime") && !value["IssueTime"].IsNull())
    {
        if (!value["IssueTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LakeFileSystemToken.IssueTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_issueTime = value["IssueTime"].GetInt64();
        m_issueTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LakeFileSystemToken::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_tokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Token";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_token.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expiredTime, allocator);
    }

    if (m_issueTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_issueTime, allocator);
    }

}


string LakeFileSystemToken::GetSecretId() const
{
    return m_secretId;
}

void LakeFileSystemToken::SetSecretId(const string& _secretId)
{
    m_secretId = _secretId;
    m_secretIdHasBeenSet = true;
}

bool LakeFileSystemToken::SecretIdHasBeenSet() const
{
    return m_secretIdHasBeenSet;
}

string LakeFileSystemToken::GetSecretKey() const
{
    return m_secretKey;
}

void LakeFileSystemToken::SetSecretKey(const string& _secretKey)
{
    m_secretKey = _secretKey;
    m_secretKeyHasBeenSet = true;
}

bool LakeFileSystemToken::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

string LakeFileSystemToken::GetToken() const
{
    return m_token;
}

void LakeFileSystemToken::SetToken(const string& _token)
{
    m_token = _token;
    m_tokenHasBeenSet = true;
}

bool LakeFileSystemToken::TokenHasBeenSet() const
{
    return m_tokenHasBeenSet;
}

int64_t LakeFileSystemToken::GetExpiredTime() const
{
    return m_expiredTime;
}

void LakeFileSystemToken::SetExpiredTime(const int64_t& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool LakeFileSystemToken::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

int64_t LakeFileSystemToken::GetIssueTime() const
{
    return m_issueTime;
}

void LakeFileSystemToken::SetIssueTime(const int64_t& _issueTime)
{
    m_issueTime = _issueTime;
    m_issueTimeHasBeenSet = true;
}

bool LakeFileSystemToken::IssueTimeHasBeenSet() const
{
    return m_issueTimeHasBeenSet;
}

