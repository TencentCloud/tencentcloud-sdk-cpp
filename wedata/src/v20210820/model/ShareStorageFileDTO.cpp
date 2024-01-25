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

#include <tencentcloud/wedata/v20210820/model/ShareStorageFileDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ShareStorageFileDTO::ShareStorageFileDTO() :
    m_tokenHasBeenSet(false),
    m_secretIdHasBeenSet(false),
    m_secretKeyHasBeenSet(false),
    m_tokenExpiredTimeHasBeenSet(false),
    m_tokenCreateTimeHasBeenSet(false),
    m_shareStorageTypeHasBeenSet(false),
    m_shareStorageEndPointHasBeenSet(false),
    m_bucketRegionHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_fileMappingsHasBeenSet(false),
    m_fileExpireTimeHasBeenSet(false)
{
}

CoreInternalOutcome ShareStorageFileDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Token") && !value["Token"].IsNull())
    {
        if (!value["Token"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShareStorageFileDTO.Token` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_token = string(value["Token"].GetString());
        m_tokenHasBeenSet = true;
    }

    if (value.HasMember("SecretId") && !value["SecretId"].IsNull())
    {
        if (!value["SecretId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShareStorageFileDTO.SecretId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretId = string(value["SecretId"].GetString());
        m_secretIdHasBeenSet = true;
    }

    if (value.HasMember("SecretKey") && !value["SecretKey"].IsNull())
    {
        if (!value["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShareStorageFileDTO.SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(value["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
    }

    if (value.HasMember("TokenExpiredTime") && !value["TokenExpiredTime"].IsNull())
    {
        if (!value["TokenExpiredTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ShareStorageFileDTO.TokenExpiredTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tokenExpiredTime = value["TokenExpiredTime"].GetInt64();
        m_tokenExpiredTimeHasBeenSet = true;
    }

    if (value.HasMember("TokenCreateTime") && !value["TokenCreateTime"].IsNull())
    {
        if (!value["TokenCreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ShareStorageFileDTO.TokenCreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tokenCreateTime = value["TokenCreateTime"].GetInt64();
        m_tokenCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("ShareStorageType") && !value["ShareStorageType"].IsNull())
    {
        if (!value["ShareStorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShareStorageFileDTO.ShareStorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shareStorageType = string(value["ShareStorageType"].GetString());
        m_shareStorageTypeHasBeenSet = true;
    }

    if (value.HasMember("ShareStorageEndPoint") && !value["ShareStorageEndPoint"].IsNull())
    {
        if (!value["ShareStorageEndPoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShareStorageFileDTO.ShareStorageEndPoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shareStorageEndPoint = string(value["ShareStorageEndPoint"].GetString());
        m_shareStorageEndPointHasBeenSet = true;
    }

    if (value.HasMember("BucketRegion") && !value["BucketRegion"].IsNull())
    {
        if (!value["BucketRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShareStorageFileDTO.BucketRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketRegion = string(value["BucketRegion"].GetString());
        m_bucketRegionHasBeenSet = true;
    }

    if (value.HasMember("BucketName") && !value["BucketName"].IsNull())
    {
        if (!value["BucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShareStorageFileDTO.BucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketName = string(value["BucketName"].GetString());
        m_bucketNameHasBeenSet = true;
    }

    if (value.HasMember("FileMappings") && !value["FileMappings"].IsNull())
    {
        if (!value["FileMappings"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ShareStorageFileDTO.FileMappings` is not array type"));

        const rapidjson::Value &tmpValue = value["FileMappings"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ShareStorageFileMappingDTO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fileMappings.push_back(item);
        }
        m_fileMappingsHasBeenSet = true;
    }

    if (value.HasMember("FileExpireTime") && !value["FileExpireTime"].IsNull())
    {
        if (!value["FileExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ShareStorageFileDTO.FileExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileExpireTime = value["FileExpireTime"].GetInt64();
        m_fileExpireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ShareStorageFileDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_tokenExpiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tokenExpiredTime, allocator);
    }

    if (m_tokenCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tokenCreateTime, allocator);
    }

    if (m_shareStorageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareStorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shareStorageType.c_str(), allocator).Move(), allocator);
    }

    if (m_shareStorageEndPointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareStorageEndPoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shareStorageEndPoint.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileMappingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileMappings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fileMappings.begin(); itr != m_fileMappings.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_fileExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileExpireTime, allocator);
    }

}


string ShareStorageFileDTO::GetToken() const
{
    return m_token;
}

void ShareStorageFileDTO::SetToken(const string& _token)
{
    m_token = _token;
    m_tokenHasBeenSet = true;
}

bool ShareStorageFileDTO::TokenHasBeenSet() const
{
    return m_tokenHasBeenSet;
}

string ShareStorageFileDTO::GetSecretId() const
{
    return m_secretId;
}

void ShareStorageFileDTO::SetSecretId(const string& _secretId)
{
    m_secretId = _secretId;
    m_secretIdHasBeenSet = true;
}

bool ShareStorageFileDTO::SecretIdHasBeenSet() const
{
    return m_secretIdHasBeenSet;
}

string ShareStorageFileDTO::GetSecretKey() const
{
    return m_secretKey;
}

void ShareStorageFileDTO::SetSecretKey(const string& _secretKey)
{
    m_secretKey = _secretKey;
    m_secretKeyHasBeenSet = true;
}

bool ShareStorageFileDTO::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

int64_t ShareStorageFileDTO::GetTokenExpiredTime() const
{
    return m_tokenExpiredTime;
}

void ShareStorageFileDTO::SetTokenExpiredTime(const int64_t& _tokenExpiredTime)
{
    m_tokenExpiredTime = _tokenExpiredTime;
    m_tokenExpiredTimeHasBeenSet = true;
}

bool ShareStorageFileDTO::TokenExpiredTimeHasBeenSet() const
{
    return m_tokenExpiredTimeHasBeenSet;
}

int64_t ShareStorageFileDTO::GetTokenCreateTime() const
{
    return m_tokenCreateTime;
}

void ShareStorageFileDTO::SetTokenCreateTime(const int64_t& _tokenCreateTime)
{
    m_tokenCreateTime = _tokenCreateTime;
    m_tokenCreateTimeHasBeenSet = true;
}

bool ShareStorageFileDTO::TokenCreateTimeHasBeenSet() const
{
    return m_tokenCreateTimeHasBeenSet;
}

string ShareStorageFileDTO::GetShareStorageType() const
{
    return m_shareStorageType;
}

void ShareStorageFileDTO::SetShareStorageType(const string& _shareStorageType)
{
    m_shareStorageType = _shareStorageType;
    m_shareStorageTypeHasBeenSet = true;
}

bool ShareStorageFileDTO::ShareStorageTypeHasBeenSet() const
{
    return m_shareStorageTypeHasBeenSet;
}

string ShareStorageFileDTO::GetShareStorageEndPoint() const
{
    return m_shareStorageEndPoint;
}

void ShareStorageFileDTO::SetShareStorageEndPoint(const string& _shareStorageEndPoint)
{
    m_shareStorageEndPoint = _shareStorageEndPoint;
    m_shareStorageEndPointHasBeenSet = true;
}

bool ShareStorageFileDTO::ShareStorageEndPointHasBeenSet() const
{
    return m_shareStorageEndPointHasBeenSet;
}

string ShareStorageFileDTO::GetBucketRegion() const
{
    return m_bucketRegion;
}

void ShareStorageFileDTO::SetBucketRegion(const string& _bucketRegion)
{
    m_bucketRegion = _bucketRegion;
    m_bucketRegionHasBeenSet = true;
}

bool ShareStorageFileDTO::BucketRegionHasBeenSet() const
{
    return m_bucketRegionHasBeenSet;
}

string ShareStorageFileDTO::GetBucketName() const
{
    return m_bucketName;
}

void ShareStorageFileDTO::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool ShareStorageFileDTO::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

vector<ShareStorageFileMappingDTO> ShareStorageFileDTO::GetFileMappings() const
{
    return m_fileMappings;
}

void ShareStorageFileDTO::SetFileMappings(const vector<ShareStorageFileMappingDTO>& _fileMappings)
{
    m_fileMappings = _fileMappings;
    m_fileMappingsHasBeenSet = true;
}

bool ShareStorageFileDTO::FileMappingsHasBeenSet() const
{
    return m_fileMappingsHasBeenSet;
}

int64_t ShareStorageFileDTO::GetFileExpireTime() const
{
    return m_fileExpireTime;
}

void ShareStorageFileDTO::SetFileExpireTime(const int64_t& _fileExpireTime)
{
    m_fileExpireTime = _fileExpireTime;
    m_fileExpireTimeHasBeenSet = true;
}

bool ShareStorageFileDTO::FileExpireTimeHasBeenSet() const
{
    return m_fileExpireTimeHasBeenSet;
}

