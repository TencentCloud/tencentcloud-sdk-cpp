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

#include <tencentcloud/tke/v20180525/model/GetMostSuitableImageCacheResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

GetMostSuitableImageCacheResponse::GetMostSuitableImageCacheResponse() :
    m_foundHasBeenSet(false),
    m_imageCacheHasBeenSet(false)
{
}

CoreInternalOutcome GetMostSuitableImageCacheResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Found") && !rsp["Found"].IsNull())
    {
        if (!rsp["Found"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Found` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_found = rsp["Found"].GetBool();
        m_foundHasBeenSet = true;
    }

    if (rsp.HasMember("ImageCache") && !rsp["ImageCache"].IsNull())
    {
        if (!rsp["ImageCache"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageCache` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageCache.Deserialize(rsp["ImageCache"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageCacheHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetMostSuitableImageCacheResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_foundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Found";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_found, allocator);
    }

    if (m_imageCacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageCache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageCache.ToJsonObject(value[key.c_str()], allocator);
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


bool GetMostSuitableImageCacheResponse::GetFound() const
{
    return m_found;
}

bool GetMostSuitableImageCacheResponse::FoundHasBeenSet() const
{
    return m_foundHasBeenSet;
}

ImageCache GetMostSuitableImageCacheResponse::GetImageCache() const
{
    return m_imageCache;
}

bool GetMostSuitableImageCacheResponse::ImageCacheHasBeenSet() const
{
    return m_imageCacheHasBeenSet;
}


