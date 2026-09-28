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

#include <tencentcloud/ags/v20250920/model/DescribePreCacheImageTaskResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

DescribePreCacheImageTaskResponse::DescribePreCacheImageTaskResponse() :
    m_imageHasBeenSet(false),
    m_imageDigestHasBeenSet(false),
    m_imageRegistryTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_preCacheImageIdHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_cachedImageSizeBytesHasBeenSet(false),
    m_lastUsedTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribePreCacheImageTaskResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Image") && !rsp["Image"].IsNull())
    {
        if (!rsp["Image"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(rsp["Image"].GetString());
        m_imageHasBeenSet = true;
    }

    if (rsp.HasMember("ImageDigest") && !rsp["ImageDigest"].IsNull())
    {
        if (!rsp["ImageDigest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDigest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageDigest = string(rsp["ImageDigest"].GetString());
        m_imageDigestHasBeenSet = true;
    }

    if (rsp.HasMember("ImageRegistryType") && !rsp["ImageRegistryType"].IsNull())
    {
        if (!rsp["ImageRegistryType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageRegistryType = string(rsp["ImageRegistryType"].GetString());
        m_imageRegistryTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Message") && !rsp["Message"].IsNull())
    {
        if (!rsp["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(rsp["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("PreCacheImageId") && !rsp["PreCacheImageId"].IsNull())
    {
        if (!rsp["PreCacheImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreCacheImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_preCacheImageId = string(rsp["PreCacheImageId"].GetString());
        m_preCacheImageIdHasBeenSet = true;
    }

    if (rsp.HasMember("SourceType") && !rsp["SourceType"].IsNull())
    {
        if (!rsp["SourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = string(rsp["SourceType"].GetString());
        m_sourceTypeHasBeenSet = true;
    }

    if (rsp.HasMember("CachedImageSizeBytes") && !rsp["CachedImageSizeBytes"].IsNull())
    {
        if (!rsp["CachedImageSizeBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CachedImageSizeBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cachedImageSizeBytes = rsp["CachedImageSizeBytes"].GetInt64();
        m_cachedImageSizeBytesHasBeenSet = true;
    }

    if (rsp.HasMember("LastUsedTime") && !rsp["LastUsedTime"].IsNull())
    {
        if (!rsp["LastUsedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LastUsedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastUsedTime = string(rsp["LastUsedTime"].GetString());
        m_lastUsedTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribePreCacheImageTaskResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_imageDigestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageDigest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageDigest.c_str(), allocator).Move(), allocator);
    }

    if (m_imageRegistryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageRegistryType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageRegistryType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_preCacheImageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreCacheImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_preCacheImageId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_cachedImageSizeBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CachedImageSizeBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cachedImageSizeBytes, allocator);
    }

    if (m_lastUsedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUsedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastUsedTime.c_str(), allocator).Move(), allocator);
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


string DescribePreCacheImageTaskResponse::GetImage() const
{
    return m_image;
}

bool DescribePreCacheImageTaskResponse::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string DescribePreCacheImageTaskResponse::GetImageDigest() const
{
    return m_imageDigest;
}

bool DescribePreCacheImageTaskResponse::ImageDigestHasBeenSet() const
{
    return m_imageDigestHasBeenSet;
}

string DescribePreCacheImageTaskResponse::GetImageRegistryType() const
{
    return m_imageRegistryType;
}

bool DescribePreCacheImageTaskResponse::ImageRegistryTypeHasBeenSet() const
{
    return m_imageRegistryTypeHasBeenSet;
}

string DescribePreCacheImageTaskResponse::GetStatus() const
{
    return m_status;
}

bool DescribePreCacheImageTaskResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribePreCacheImageTaskResponse::GetMessage() const
{
    return m_message;
}

bool DescribePreCacheImageTaskResponse::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string DescribePreCacheImageTaskResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribePreCacheImageTaskResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribePreCacheImageTaskResponse::GetPreCacheImageId() const
{
    return m_preCacheImageId;
}

bool DescribePreCacheImageTaskResponse::PreCacheImageIdHasBeenSet() const
{
    return m_preCacheImageIdHasBeenSet;
}

string DescribePreCacheImageTaskResponse::GetSourceType() const
{
    return m_sourceType;
}

bool DescribePreCacheImageTaskResponse::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

int64_t DescribePreCacheImageTaskResponse::GetCachedImageSizeBytes() const
{
    return m_cachedImageSizeBytes;
}

bool DescribePreCacheImageTaskResponse::CachedImageSizeBytesHasBeenSet() const
{
    return m_cachedImageSizeBytesHasBeenSet;
}

string DescribePreCacheImageTaskResponse::GetLastUsedTime() const
{
    return m_lastUsedTime;
}

bool DescribePreCacheImageTaskResponse::LastUsedTimeHasBeenSet() const
{
    return m_lastUsedTimeHasBeenSet;
}


