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

#include <tencentcloud/wedata/v20210820/model/ExportEventDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ExportEventDTO::ExportEventDTO() :
    m_cosPathHasBeenSet(false),
    m_cosBucketNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_tokenHasBeenSet(false),
    m_secretIdHasBeenSet(false),
    m_secretKeyHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_expiredTimeHasBeenSet(false)
{
}

CoreInternalOutcome ExportEventDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CosPath") && !value["CosPath"].IsNull())
    {
        if (!value["CosPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportEventDTO.CosPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosPath = string(value["CosPath"].GetString());
        m_cosPathHasBeenSet = true;
    }

    if (value.HasMember("CosBucketName") && !value["CosBucketName"].IsNull())
    {
        if (!value["CosBucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportEventDTO.CosBucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucketName = string(value["CosBucketName"].GetString());
        m_cosBucketNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportEventDTO.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Token") && !value["Token"].IsNull())
    {
        if (!value["Token"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportEventDTO.Token` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_token = string(value["Token"].GetString());
        m_tokenHasBeenSet = true;
    }

    if (value.HasMember("SecretId") && !value["SecretId"].IsNull())
    {
        if (!value["SecretId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportEventDTO.SecretId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretId = string(value["SecretId"].GetString());
        m_secretIdHasBeenSet = true;
    }

    if (value.HasMember("SecretKey") && !value["SecretKey"].IsNull())
    {
        if (!value["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportEventDTO.SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(value["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExportEventDTO.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpiredTime") && !value["ExpiredTime"].IsNull())
    {
        if (!value["ExpiredTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExportEventDTO.ExpiredTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = value["ExpiredTime"].GetInt64();
        m_expiredTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExportEventDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cosPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosPath.c_str(), allocator).Move(), allocator);
    }

    if (m_cosBucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosBucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Token";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_token.c_str(), allocator).Move(), allocator);
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expiredTime, allocator);
    }

}


string ExportEventDTO::GetCosPath() const
{
    return m_cosPath;
}

void ExportEventDTO::SetCosPath(const string& _cosPath)
{
    m_cosPath = _cosPath;
    m_cosPathHasBeenSet = true;
}

bool ExportEventDTO::CosPathHasBeenSet() const
{
    return m_cosPathHasBeenSet;
}

string ExportEventDTO::GetCosBucketName() const
{
    return m_cosBucketName;
}

void ExportEventDTO::SetCosBucketName(const string& _cosBucketName)
{
    m_cosBucketName = _cosBucketName;
    m_cosBucketNameHasBeenSet = true;
}

bool ExportEventDTO::CosBucketNameHasBeenSet() const
{
    return m_cosBucketNameHasBeenSet;
}

string ExportEventDTO::GetRegion() const
{
    return m_region;
}

void ExportEventDTO::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ExportEventDTO::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string ExportEventDTO::GetToken() const
{
    return m_token;
}

void ExportEventDTO::SetToken(const string& _token)
{
    m_token = _token;
    m_tokenHasBeenSet = true;
}

bool ExportEventDTO::TokenHasBeenSet() const
{
    return m_tokenHasBeenSet;
}

string ExportEventDTO::GetSecretId() const
{
    return m_secretId;
}

void ExportEventDTO::SetSecretId(const string& _secretId)
{
    m_secretId = _secretId;
    m_secretIdHasBeenSet = true;
}

bool ExportEventDTO::SecretIdHasBeenSet() const
{
    return m_secretIdHasBeenSet;
}

string ExportEventDTO::GetSecretKey() const
{
    return m_secretKey;
}

void ExportEventDTO::SetSecretKey(const string& _secretKey)
{
    m_secretKey = _secretKey;
    m_secretKeyHasBeenSet = true;
}

bool ExportEventDTO::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

int64_t ExportEventDTO::GetCreateTime() const
{
    return m_createTime;
}

void ExportEventDTO::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ExportEventDTO::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t ExportEventDTO::GetExpiredTime() const
{
    return m_expiredTime;
}

void ExportEventDTO::SetExpiredTime(const int64_t& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool ExportEventDTO::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

