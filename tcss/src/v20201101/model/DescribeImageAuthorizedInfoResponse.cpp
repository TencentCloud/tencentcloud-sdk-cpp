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

#include <tencentcloud/tcss/v20201101/model/DescribeImageAuthorizedInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeImageAuthorizedInfoResponse::DescribeImageAuthorizedInfoResponse() :
    m_totalAuthorizedCntHasBeenSet(false),
    m_usedAuthorizedCntHasBeenSet(false),
    m_scannedImageCntHasBeenSet(false),
    m_notScannedImageCntHasBeenSet(false),
    m_notScannedLocalImageCntHasBeenSet(false)
{
}

CoreInternalOutcome DescribeImageAuthorizedInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalAuthorizedCnt") && !rsp["TotalAuthorizedCnt"].IsNull())
    {
        if (!rsp["TotalAuthorizedCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalAuthorizedCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalAuthorizedCnt = rsp["TotalAuthorizedCnt"].GetUint64();
        m_totalAuthorizedCntHasBeenSet = true;
    }

    if (rsp.HasMember("UsedAuthorizedCnt") && !rsp["UsedAuthorizedCnt"].IsNull())
    {
        if (!rsp["UsedAuthorizedCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsedAuthorizedCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedAuthorizedCnt = rsp["UsedAuthorizedCnt"].GetUint64();
        m_usedAuthorizedCntHasBeenSet = true;
    }

    if (rsp.HasMember("ScannedImageCnt") && !rsp["ScannedImageCnt"].IsNull())
    {
        if (!rsp["ScannedImageCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScannedImageCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scannedImageCnt = rsp["ScannedImageCnt"].GetUint64();
        m_scannedImageCntHasBeenSet = true;
    }

    if (rsp.HasMember("NotScannedImageCnt") && !rsp["NotScannedImageCnt"].IsNull())
    {
        if (!rsp["NotScannedImageCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NotScannedImageCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_notScannedImageCnt = rsp["NotScannedImageCnt"].GetUint64();
        m_notScannedImageCntHasBeenSet = true;
    }

    if (rsp.HasMember("NotScannedLocalImageCnt") && !rsp["NotScannedLocalImageCnt"].IsNull())
    {
        if (!rsp["NotScannedLocalImageCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NotScannedLocalImageCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_notScannedLocalImageCnt = rsp["NotScannedLocalImageCnt"].GetUint64();
        m_notScannedLocalImageCntHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeImageAuthorizedInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalAuthorizedCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalAuthorizedCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalAuthorizedCnt, allocator);
    }

    if (m_usedAuthorizedCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedAuthorizedCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedAuthorizedCnt, allocator);
    }

    if (m_scannedImageCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScannedImageCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scannedImageCnt, allocator);
    }

    if (m_notScannedImageCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotScannedImageCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notScannedImageCnt, allocator);
    }

    if (m_notScannedLocalImageCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotScannedLocalImageCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notScannedLocalImageCnt, allocator);
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


uint64_t DescribeImageAuthorizedInfoResponse::GetTotalAuthorizedCnt() const
{
    return m_totalAuthorizedCnt;
}

bool DescribeImageAuthorizedInfoResponse::TotalAuthorizedCntHasBeenSet() const
{
    return m_totalAuthorizedCntHasBeenSet;
}

uint64_t DescribeImageAuthorizedInfoResponse::GetUsedAuthorizedCnt() const
{
    return m_usedAuthorizedCnt;
}

bool DescribeImageAuthorizedInfoResponse::UsedAuthorizedCntHasBeenSet() const
{
    return m_usedAuthorizedCntHasBeenSet;
}

uint64_t DescribeImageAuthorizedInfoResponse::GetScannedImageCnt() const
{
    return m_scannedImageCnt;
}

bool DescribeImageAuthorizedInfoResponse::ScannedImageCntHasBeenSet() const
{
    return m_scannedImageCntHasBeenSet;
}

uint64_t DescribeImageAuthorizedInfoResponse::GetNotScannedImageCnt() const
{
    return m_notScannedImageCnt;
}

bool DescribeImageAuthorizedInfoResponse::NotScannedImageCntHasBeenSet() const
{
    return m_notScannedImageCntHasBeenSet;
}

uint64_t DescribeImageAuthorizedInfoResponse::GetNotScannedLocalImageCnt() const
{
    return m_notScannedLocalImageCnt;
}

bool DescribeImageAuthorizedInfoResponse::NotScannedLocalImageCntHasBeenSet() const
{
    return m_notScannedLocalImageCntHasBeenSet;
}


