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
    m_notScannedLocalImageCntHasBeenSet(false),
    m_trialAuthorizedCntHasBeenSet(false),
    m_usedTrialAuthorizedCntHasBeenSet(false),
    m_purchasedAuthorizedCntHasBeenSet(false),
    m_usedPurchasedAuthorizedCntHasBeenSet(false),
    m_canApplyFreeImageAuthorizeHasBeenSet(false),
    m_imageScanInquireInfoHasBeenSet(false),
    m_repeatImageIdCntHasBeenSet(false)
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

    if (rsp.HasMember("TrialAuthorizedCnt") && !rsp["TrialAuthorizedCnt"].IsNull())
    {
        if (!rsp["TrialAuthorizedCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TrialAuthorizedCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_trialAuthorizedCnt = rsp["TrialAuthorizedCnt"].GetUint64();
        m_trialAuthorizedCntHasBeenSet = true;
    }

    if (rsp.HasMember("UsedTrialAuthorizedCnt") && !rsp["UsedTrialAuthorizedCnt"].IsNull())
    {
        if (!rsp["UsedTrialAuthorizedCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsedTrialAuthorizedCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedTrialAuthorizedCnt = rsp["UsedTrialAuthorizedCnt"].GetUint64();
        m_usedTrialAuthorizedCntHasBeenSet = true;
    }

    if (rsp.HasMember("PurchasedAuthorizedCnt") && !rsp["PurchasedAuthorizedCnt"].IsNull())
    {
        if (!rsp["PurchasedAuthorizedCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PurchasedAuthorizedCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_purchasedAuthorizedCnt = rsp["PurchasedAuthorizedCnt"].GetUint64();
        m_purchasedAuthorizedCntHasBeenSet = true;
    }

    if (rsp.HasMember("UsedPurchasedAuthorizedCnt") && !rsp["UsedPurchasedAuthorizedCnt"].IsNull())
    {
        if (!rsp["UsedPurchasedAuthorizedCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsedPurchasedAuthorizedCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedPurchasedAuthorizedCnt = rsp["UsedPurchasedAuthorizedCnt"].GetUint64();
        m_usedPurchasedAuthorizedCntHasBeenSet = true;
    }

    if (rsp.HasMember("CanApplyFreeImageAuthorize") && !rsp["CanApplyFreeImageAuthorize"].IsNull())
    {
        if (!rsp["CanApplyFreeImageAuthorize"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CanApplyFreeImageAuthorize` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canApplyFreeImageAuthorize = rsp["CanApplyFreeImageAuthorize"].GetBool();
        m_canApplyFreeImageAuthorizeHasBeenSet = true;
    }

    if (rsp.HasMember("ImageScanInquireInfo") && !rsp["ImageScanInquireInfo"].IsNull())
    {
        if (!rsp["ImageScanInquireInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageScanInquireInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageScanInquireInfo.Deserialize(rsp["ImageScanInquireInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageScanInquireInfoHasBeenSet = true;
    }

    if (rsp.HasMember("RepeatImageIdCnt") && !rsp["RepeatImageIdCnt"].IsNull())
    {
        if (!rsp["RepeatImageIdCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RepeatImageIdCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_repeatImageIdCnt = rsp["RepeatImageIdCnt"].GetUint64();
        m_repeatImageIdCntHasBeenSet = true;
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

    if (m_trialAuthorizedCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrialAuthorizedCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trialAuthorizedCnt, allocator);
    }

    if (m_usedTrialAuthorizedCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedTrialAuthorizedCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedTrialAuthorizedCnt, allocator);
    }

    if (m_purchasedAuthorizedCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PurchasedAuthorizedCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_purchasedAuthorizedCnt, allocator);
    }

    if (m_usedPurchasedAuthorizedCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedPurchasedAuthorizedCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedPurchasedAuthorizedCnt, allocator);
    }

    if (m_canApplyFreeImageAuthorizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanApplyFreeImageAuthorize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canApplyFreeImageAuthorize, allocator);
    }

    if (m_imageScanInquireInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageScanInquireInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageScanInquireInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_repeatImageIdCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepeatImageIdCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_repeatImageIdCnt, allocator);
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

uint64_t DescribeImageAuthorizedInfoResponse::GetTrialAuthorizedCnt() const
{
    return m_trialAuthorizedCnt;
}

bool DescribeImageAuthorizedInfoResponse::TrialAuthorizedCntHasBeenSet() const
{
    return m_trialAuthorizedCntHasBeenSet;
}

uint64_t DescribeImageAuthorizedInfoResponse::GetUsedTrialAuthorizedCnt() const
{
    return m_usedTrialAuthorizedCnt;
}

bool DescribeImageAuthorizedInfoResponse::UsedTrialAuthorizedCntHasBeenSet() const
{
    return m_usedTrialAuthorizedCntHasBeenSet;
}

uint64_t DescribeImageAuthorizedInfoResponse::GetPurchasedAuthorizedCnt() const
{
    return m_purchasedAuthorizedCnt;
}

bool DescribeImageAuthorizedInfoResponse::PurchasedAuthorizedCntHasBeenSet() const
{
    return m_purchasedAuthorizedCntHasBeenSet;
}

uint64_t DescribeImageAuthorizedInfoResponse::GetUsedPurchasedAuthorizedCnt() const
{
    return m_usedPurchasedAuthorizedCnt;
}

bool DescribeImageAuthorizedInfoResponse::UsedPurchasedAuthorizedCntHasBeenSet() const
{
    return m_usedPurchasedAuthorizedCntHasBeenSet;
}

bool DescribeImageAuthorizedInfoResponse::GetCanApplyFreeImageAuthorize() const
{
    return m_canApplyFreeImageAuthorize;
}

bool DescribeImageAuthorizedInfoResponse::CanApplyFreeImageAuthorizeHasBeenSet() const
{
    return m_canApplyFreeImageAuthorizeHasBeenSet;
}

ImageScanInquireInfo DescribeImageAuthorizedInfoResponse::GetImageScanInquireInfo() const
{
    return m_imageScanInquireInfo;
}

bool DescribeImageAuthorizedInfoResponse::ImageScanInquireInfoHasBeenSet() const
{
    return m_imageScanInquireInfoHasBeenSet;
}

uint64_t DescribeImageAuthorizedInfoResponse::GetRepeatImageIdCnt() const
{
    return m_repeatImageIdCnt;
}

bool DescribeImageAuthorizedInfoResponse::RepeatImageIdCntHasBeenSet() const
{
    return m_repeatImageIdCntHasBeenSet;
}


