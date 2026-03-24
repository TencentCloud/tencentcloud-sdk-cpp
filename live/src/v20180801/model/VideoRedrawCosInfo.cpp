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

#include <tencentcloud/live/v20180801/model/VideoRedrawCosInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

VideoRedrawCosInfo::VideoRedrawCosInfo() :
    m_regionHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_dirHasBeenSet(false),
    m_tmpSecretIdHasBeenSet(false),
    m_tmpSecretKeyHasBeenSet(false),
    m_tokenHasBeenSet(false)
{
}

CoreInternalOutcome VideoRedrawCosInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoRedrawCosInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoRedrawCosInfo.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("Dir") && !value["Dir"].IsNull())
    {
        if (!value["Dir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoRedrawCosInfo.Dir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dir = string(value["Dir"].GetString());
        m_dirHasBeenSet = true;
    }

    if (value.HasMember("TmpSecretId") && !value["TmpSecretId"].IsNull())
    {
        if (!value["TmpSecretId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoRedrawCosInfo.TmpSecretId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tmpSecretId = string(value["TmpSecretId"].GetString());
        m_tmpSecretIdHasBeenSet = true;
    }

    if (value.HasMember("TmpSecretKey") && !value["TmpSecretKey"].IsNull())
    {
        if (!value["TmpSecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoRedrawCosInfo.TmpSecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tmpSecretKey = string(value["TmpSecretKey"].GetString());
        m_tmpSecretKeyHasBeenSet = true;
    }

    if (value.HasMember("Token") && !value["Token"].IsNull())
    {
        if (!value["Token"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoRedrawCosInfo.Token` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_token = string(value["Token"].GetString());
        m_tokenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoRedrawCosInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_dirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dir.c_str(), allocator).Move(), allocator);
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

    if (m_tokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Token";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_token.c_str(), allocator).Move(), allocator);
    }

}


string VideoRedrawCosInfo::GetRegion() const
{
    return m_region;
}

void VideoRedrawCosInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool VideoRedrawCosInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string VideoRedrawCosInfo::GetBucket() const
{
    return m_bucket;
}

void VideoRedrawCosInfo::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool VideoRedrawCosInfo::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string VideoRedrawCosInfo::GetDir() const
{
    return m_dir;
}

void VideoRedrawCosInfo::SetDir(const string& _dir)
{
    m_dir = _dir;
    m_dirHasBeenSet = true;
}

bool VideoRedrawCosInfo::DirHasBeenSet() const
{
    return m_dirHasBeenSet;
}

string VideoRedrawCosInfo::GetTmpSecretId() const
{
    return m_tmpSecretId;
}

void VideoRedrawCosInfo::SetTmpSecretId(const string& _tmpSecretId)
{
    m_tmpSecretId = _tmpSecretId;
    m_tmpSecretIdHasBeenSet = true;
}

bool VideoRedrawCosInfo::TmpSecretIdHasBeenSet() const
{
    return m_tmpSecretIdHasBeenSet;
}

string VideoRedrawCosInfo::GetTmpSecretKey() const
{
    return m_tmpSecretKey;
}

void VideoRedrawCosInfo::SetTmpSecretKey(const string& _tmpSecretKey)
{
    m_tmpSecretKey = _tmpSecretKey;
    m_tmpSecretKeyHasBeenSet = true;
}

bool VideoRedrawCosInfo::TmpSecretKeyHasBeenSet() const
{
    return m_tmpSecretKeyHasBeenSet;
}

string VideoRedrawCosInfo::GetToken() const
{
    return m_token;
}

void VideoRedrawCosInfo::SetToken(const string& _token)
{
    m_token = _token;
    m_tokenHasBeenSet = true;
}

bool VideoRedrawCosInfo::TokenHasBeenSet() const
{
    return m_tokenHasBeenSet;
}

