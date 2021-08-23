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

#include <tencentcloud/tiia/v20190529/model/CropImageResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiia::V20190529::Model;
using namespace std;

CropImageResponse::CropImageResponse() :
    m_xHasBeenSet(false),
    m_yHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_originalWidthHasBeenSet(false),
    m_originalHeightHasBeenSet(false),
    m_cropResultHasBeenSet(false)
{
}

CoreInternalOutcome CropImageResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("X") && !rsp["X"].IsNull())
    {
        if (!rsp["X"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `X` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_x = rsp["X"].GetInt64();
        m_xHasBeenSet = true;
    }

    if (rsp.HasMember("Y") && !rsp["Y"].IsNull())
    {
        if (!rsp["Y"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Y` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_y = rsp["Y"].GetInt64();
        m_yHasBeenSet = true;
    }

    if (rsp.HasMember("Width") && !rsp["Width"].IsNull())
    {
        if (!rsp["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = rsp["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (rsp.HasMember("Height") && !rsp["Height"].IsNull())
    {
        if (!rsp["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = rsp["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (rsp.HasMember("OriginalWidth") && !rsp["OriginalWidth"].IsNull())
    {
        if (!rsp["OriginalWidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OriginalWidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_originalWidth = rsp["OriginalWidth"].GetInt64();
        m_originalWidthHasBeenSet = true;
    }

    if (rsp.HasMember("OriginalHeight") && !rsp["OriginalHeight"].IsNull())
    {
        if (!rsp["OriginalHeight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OriginalHeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_originalHeight = rsp["OriginalHeight"].GetInt64();
        m_originalHeightHasBeenSet = true;
    }

    if (rsp.HasMember("CropResult") && !rsp["CropResult"].IsNull())
    {
        if (!rsp["CropResult"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CropResult` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cropResult = rsp["CropResult"].GetInt64();
        m_cropResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CropImageResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_xHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "X";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_x, allocator);
    }

    if (m_yHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Y";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_y, allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

    if (m_originalWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originalWidth, allocator);
    }

    if (m_originalHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originalHeight, allocator);
    }

    if (m_cropResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CropResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cropResult, allocator);
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


int64_t CropImageResponse::GetX() const
{
    return m_x;
}

bool CropImageResponse::XHasBeenSet() const
{
    return m_xHasBeenSet;
}

int64_t CropImageResponse::GetY() const
{
    return m_y;
}

bool CropImageResponse::YHasBeenSet() const
{
    return m_yHasBeenSet;
}

int64_t CropImageResponse::GetWidth() const
{
    return m_width;
}

bool CropImageResponse::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t CropImageResponse::GetHeight() const
{
    return m_height;
}

bool CropImageResponse::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

int64_t CropImageResponse::GetOriginalWidth() const
{
    return m_originalWidth;
}

bool CropImageResponse::OriginalWidthHasBeenSet() const
{
    return m_originalWidthHasBeenSet;
}

int64_t CropImageResponse::GetOriginalHeight() const
{
    return m_originalHeight;
}

bool CropImageResponse::OriginalHeightHasBeenSet() const
{
    return m_originalHeightHasBeenSet;
}

int64_t CropImageResponse::GetCropResult() const
{
    return m_cropResult;
}

bool CropImageResponse::CropResultHasBeenSet() const
{
    return m_cropResultHasBeenSet;
}


