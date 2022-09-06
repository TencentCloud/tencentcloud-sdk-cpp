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

#include <tencentcloud/bda/v20200324/model/SegmentPortraitPicResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bda::V20200324::Model;
using namespace std;

SegmentPortraitPicResponse::SegmentPortraitPicResponse() :
    m_resultImageHasBeenSet(false),
    m_resultMaskHasBeenSet(false),
    m_hasForegroundHasBeenSet(false),
    m_resultImageUrlHasBeenSet(false),
    m_resultMaskUrlHasBeenSet(false)
{
}

CoreInternalOutcome SegmentPortraitPicResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ResultImage") && !rsp["ResultImage"].IsNull())
    {
        if (!rsp["ResultImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultImage = string(rsp["ResultImage"].GetString());
        m_resultImageHasBeenSet = true;
    }

    if (rsp.HasMember("ResultMask") && !rsp["ResultMask"].IsNull())
    {
        if (!rsp["ResultMask"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultMask` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultMask = string(rsp["ResultMask"].GetString());
        m_resultMaskHasBeenSet = true;
    }

    if (rsp.HasMember("HasForeground") && !rsp["HasForeground"].IsNull())
    {
        if (!rsp["HasForeground"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HasForeground` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasForeground = rsp["HasForeground"].GetBool();
        m_hasForegroundHasBeenSet = true;
    }

    if (rsp.HasMember("ResultImageUrl") && !rsp["ResultImageUrl"].IsNull())
    {
        if (!rsp["ResultImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultImageUrl = string(rsp["ResultImageUrl"].GetString());
        m_resultImageUrlHasBeenSet = true;
    }

    if (rsp.HasMember("ResultMaskUrl") && !rsp["ResultMaskUrl"].IsNull())
    {
        if (!rsp["ResultMaskUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultMaskUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultMaskUrl = string(rsp["ResultMaskUrl"].GetString());
        m_resultMaskUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string SegmentPortraitPicResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_resultImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultImage.c_str(), allocator).Move(), allocator);
    }

    if (m_resultMaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultMask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultMask.c_str(), allocator).Move(), allocator);
    }

    if (m_hasForegroundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasForeground";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasForeground, allocator);
    }

    if (m_resultImageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultImageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_resultMaskUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultMaskUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultMaskUrl.c_str(), allocator).Move(), allocator);
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


string SegmentPortraitPicResponse::GetResultImage() const
{
    return m_resultImage;
}

bool SegmentPortraitPicResponse::ResultImageHasBeenSet() const
{
    return m_resultImageHasBeenSet;
}

string SegmentPortraitPicResponse::GetResultMask() const
{
    return m_resultMask;
}

bool SegmentPortraitPicResponse::ResultMaskHasBeenSet() const
{
    return m_resultMaskHasBeenSet;
}

bool SegmentPortraitPicResponse::GetHasForeground() const
{
    return m_hasForeground;
}

bool SegmentPortraitPicResponse::HasForegroundHasBeenSet() const
{
    return m_hasForegroundHasBeenSet;
}

string SegmentPortraitPicResponse::GetResultImageUrl() const
{
    return m_resultImageUrl;
}

bool SegmentPortraitPicResponse::ResultImageUrlHasBeenSet() const
{
    return m_resultImageUrlHasBeenSet;
}

string SegmentPortraitPicResponse::GetResultMaskUrl() const
{
    return m_resultMaskUrl;
}

bool SegmentPortraitPicResponse::ResultMaskUrlHasBeenSet() const
{
    return m_resultMaskUrlHasBeenSet;
}


