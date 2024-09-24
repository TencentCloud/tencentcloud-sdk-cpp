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

#include <tencentcloud/tcss/v20201101/model/DescribeAssetSummaryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeAssetSummaryResponse::DescribeAssetSummaryResponse() :
    m_appCntHasBeenSet(false),
    m_containerCntHasBeenSet(false),
    m_containerPauseHasBeenSet(false),
    m_containerRunningHasBeenSet(false),
    m_containerStopHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_dbCntHasBeenSet(false),
    m_imageCntHasBeenSet(false),
    m_hostOnlineHasBeenSet(false),
    m_hostCntHasBeenSet(false),
    m_imageHasRiskInfoCntHasBeenSet(false),
    m_imageHasVirusCntHasBeenSet(false),
    m_imageHasVulsCntHasBeenSet(false),
    m_imageUntrustCntHasBeenSet(false),
    m_listenPortCntHasBeenSet(false),
    m_processCntHasBeenSet(false),
    m_webServiceCntHasBeenSet(false),
    m_latestImageScanTimeHasBeenSet(false),
    m_imageUnsafeCntHasBeenSet(false),
    m_hostUnInstallCntHasBeenSet(false),
    m_superNodeCntHasBeenSet(false),
    m_superNodeRunningCntHasBeenSet(false),
    m_todayNewImageCntHasBeenSet(false),
    m_todayUnsafeImageCntHasBeenSet(false),
    m_recommendedFixImageCntHasBeenSet(false),
    m_scannedImageCntHasBeenSet(false),
    m_unScannedImageCntHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAssetSummaryResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AppCnt") && !rsp["AppCnt"].IsNull())
    {
        if (!rsp["AppCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AppCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appCnt = rsp["AppCnt"].GetUint64();
        m_appCntHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerCnt") && !rsp["ContainerCnt"].IsNull())
    {
        if (!rsp["ContainerCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_containerCnt = rsp["ContainerCnt"].GetUint64();
        m_containerCntHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerPause") && !rsp["ContainerPause"].IsNull())
    {
        if (!rsp["ContainerPause"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerPause` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_containerPause = rsp["ContainerPause"].GetUint64();
        m_containerPauseHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerRunning") && !rsp["ContainerRunning"].IsNull())
    {
        if (!rsp["ContainerRunning"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerRunning` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_containerRunning = rsp["ContainerRunning"].GetUint64();
        m_containerRunningHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerStop") && !rsp["ContainerStop"].IsNull())
    {
        if (!rsp["ContainerStop"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerStop` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_containerStop = rsp["ContainerStop"].GetUint64();
        m_containerStopHasBeenSet = true;
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

    if (rsp.HasMember("DbCnt") && !rsp["DbCnt"].IsNull())
    {
        if (!rsp["DbCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DbCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dbCnt = rsp["DbCnt"].GetUint64();
        m_dbCntHasBeenSet = true;
    }

    if (rsp.HasMember("ImageCnt") && !rsp["ImageCnt"].IsNull())
    {
        if (!rsp["ImageCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageCnt = rsp["ImageCnt"].GetUint64();
        m_imageCntHasBeenSet = true;
    }

    if (rsp.HasMember("HostOnline") && !rsp["HostOnline"].IsNull())
    {
        if (!rsp["HostOnline"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostOnline` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hostOnline = rsp["HostOnline"].GetUint64();
        m_hostOnlineHasBeenSet = true;
    }

    if (rsp.HasMember("HostCnt") && !rsp["HostCnt"].IsNull())
    {
        if (!rsp["HostCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hostCnt = rsp["HostCnt"].GetUint64();
        m_hostCntHasBeenSet = true;
    }

    if (rsp.HasMember("ImageHasRiskInfoCnt") && !rsp["ImageHasRiskInfoCnt"].IsNull())
    {
        if (!rsp["ImageHasRiskInfoCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageHasRiskInfoCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageHasRiskInfoCnt = rsp["ImageHasRiskInfoCnt"].GetUint64();
        m_imageHasRiskInfoCntHasBeenSet = true;
    }

    if (rsp.HasMember("ImageHasVirusCnt") && !rsp["ImageHasVirusCnt"].IsNull())
    {
        if (!rsp["ImageHasVirusCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageHasVirusCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageHasVirusCnt = rsp["ImageHasVirusCnt"].GetUint64();
        m_imageHasVirusCntHasBeenSet = true;
    }

    if (rsp.HasMember("ImageHasVulsCnt") && !rsp["ImageHasVulsCnt"].IsNull())
    {
        if (!rsp["ImageHasVulsCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageHasVulsCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageHasVulsCnt = rsp["ImageHasVulsCnt"].GetUint64();
        m_imageHasVulsCntHasBeenSet = true;
    }

    if (rsp.HasMember("ImageUntrustCnt") && !rsp["ImageUntrustCnt"].IsNull())
    {
        if (!rsp["ImageUntrustCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageUntrustCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageUntrustCnt = rsp["ImageUntrustCnt"].GetUint64();
        m_imageUntrustCntHasBeenSet = true;
    }

    if (rsp.HasMember("ListenPortCnt") && !rsp["ListenPortCnt"].IsNull())
    {
        if (!rsp["ListenPortCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ListenPortCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_listenPortCnt = rsp["ListenPortCnt"].GetUint64();
        m_listenPortCntHasBeenSet = true;
    }

    if (rsp.HasMember("ProcessCnt") && !rsp["ProcessCnt"].IsNull())
    {
        if (!rsp["ProcessCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_processCnt = rsp["ProcessCnt"].GetUint64();
        m_processCntHasBeenSet = true;
    }

    if (rsp.HasMember("WebServiceCnt") && !rsp["WebServiceCnt"].IsNull())
    {
        if (!rsp["WebServiceCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WebServiceCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_webServiceCnt = rsp["WebServiceCnt"].GetUint64();
        m_webServiceCntHasBeenSet = true;
    }

    if (rsp.HasMember("LatestImageScanTime") && !rsp["LatestImageScanTime"].IsNull())
    {
        if (!rsp["LatestImageScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LatestImageScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestImageScanTime = string(rsp["LatestImageScanTime"].GetString());
        m_latestImageScanTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ImageUnsafeCnt") && !rsp["ImageUnsafeCnt"].IsNull())
    {
        if (!rsp["ImageUnsafeCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageUnsafeCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageUnsafeCnt = rsp["ImageUnsafeCnt"].GetUint64();
        m_imageUnsafeCntHasBeenSet = true;
    }

    if (rsp.HasMember("HostUnInstallCnt") && !rsp["HostUnInstallCnt"].IsNull())
    {
        if (!rsp["HostUnInstallCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostUnInstallCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hostUnInstallCnt = rsp["HostUnInstallCnt"].GetUint64();
        m_hostUnInstallCntHasBeenSet = true;
    }

    if (rsp.HasMember("SuperNodeCnt") && !rsp["SuperNodeCnt"].IsNull())
    {
        if (!rsp["SuperNodeCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodeCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_superNodeCnt = rsp["SuperNodeCnt"].GetUint64();
        m_superNodeCntHasBeenSet = true;
    }

    if (rsp.HasMember("SuperNodeRunningCnt") && !rsp["SuperNodeRunningCnt"].IsNull())
    {
        if (!rsp["SuperNodeRunningCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodeRunningCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_superNodeRunningCnt = rsp["SuperNodeRunningCnt"].GetUint64();
        m_superNodeRunningCntHasBeenSet = true;
    }

    if (rsp.HasMember("TodayNewImageCnt") && !rsp["TodayNewImageCnt"].IsNull())
    {
        if (!rsp["TodayNewImageCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TodayNewImageCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_todayNewImageCnt = rsp["TodayNewImageCnt"].GetUint64();
        m_todayNewImageCntHasBeenSet = true;
    }

    if (rsp.HasMember("TodayUnsafeImageCnt") && !rsp["TodayUnsafeImageCnt"].IsNull())
    {
        if (!rsp["TodayUnsafeImageCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TodayUnsafeImageCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_todayUnsafeImageCnt = rsp["TodayUnsafeImageCnt"].GetUint64();
        m_todayUnsafeImageCntHasBeenSet = true;
    }

    if (rsp.HasMember("RecommendedFixImageCnt") && !rsp["RecommendedFixImageCnt"].IsNull())
    {
        if (!rsp["RecommendedFixImageCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecommendedFixImageCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_recommendedFixImageCnt = rsp["RecommendedFixImageCnt"].GetUint64();
        m_recommendedFixImageCntHasBeenSet = true;
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

    if (rsp.HasMember("UnScannedImageCnt") && !rsp["UnScannedImageCnt"].IsNull())
    {
        if (!rsp["UnScannedImageCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UnScannedImageCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unScannedImageCnt = rsp["UnScannedImageCnt"].GetUint64();
        m_unScannedImageCntHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAssetSummaryResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_appCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appCnt, allocator);
    }

    if (m_containerCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerCnt, allocator);
    }

    if (m_containerPauseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerPause";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerPause, allocator);
    }

    if (m_containerRunningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerRunning";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerRunning, allocator);
    }

    if (m_containerStopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerStop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerStop, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dbCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dbCnt, allocator);
    }

    if (m_imageCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageCnt, allocator);
    }

    if (m_hostOnlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostOnline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostOnline, allocator);
    }

    if (m_hostCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostCnt, allocator);
    }

    if (m_imageHasRiskInfoCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageHasRiskInfoCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageHasRiskInfoCnt, allocator);
    }

    if (m_imageHasVirusCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageHasVirusCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageHasVirusCnt, allocator);
    }

    if (m_imageHasVulsCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageHasVulsCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageHasVulsCnt, allocator);
    }

    if (m_imageUntrustCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUntrustCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageUntrustCnt, allocator);
    }

    if (m_listenPortCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenPortCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_listenPortCnt, allocator);
    }

    if (m_processCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processCnt, allocator);
    }

    if (m_webServiceCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebServiceCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_webServiceCnt, allocator);
    }

    if (m_latestImageScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestImageScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestImageScanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUnsafeCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUnsafeCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageUnsafeCnt, allocator);
    }

    if (m_hostUnInstallCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostUnInstallCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostUnInstallCnt, allocator);
    }

    if (m_superNodeCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuperNodeCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_superNodeCnt, allocator);
    }

    if (m_superNodeRunningCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuperNodeRunningCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_superNodeRunningCnt, allocator);
    }

    if (m_todayNewImageCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TodayNewImageCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_todayNewImageCnt, allocator);
    }

    if (m_todayUnsafeImageCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TodayUnsafeImageCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_todayUnsafeImageCnt, allocator);
    }

    if (m_recommendedFixImageCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecommendedFixImageCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recommendedFixImageCnt, allocator);
    }

    if (m_scannedImageCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScannedImageCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scannedImageCnt, allocator);
    }

    if (m_unScannedImageCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnScannedImageCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unScannedImageCnt, allocator);
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


uint64_t DescribeAssetSummaryResponse::GetAppCnt() const
{
    return m_appCnt;
}

bool DescribeAssetSummaryResponse::AppCntHasBeenSet() const
{
    return m_appCntHasBeenSet;
}

uint64_t DescribeAssetSummaryResponse::GetContainerCnt() const
{
    return m_containerCnt;
}

bool DescribeAssetSummaryResponse::ContainerCntHasBeenSet() const
{
    return m_containerCntHasBeenSet;
}

uint64_t DescribeAssetSummaryResponse::GetContainerPause() const
{
    return m_containerPause;
}

bool DescribeAssetSummaryResponse::ContainerPauseHasBeenSet() const
{
    return m_containerPauseHasBeenSet;
}

uint64_t DescribeAssetSummaryResponse::GetContainerRunning() const
{
    return m_containerRunning;
}

bool DescribeAssetSummaryResponse::ContainerRunningHasBeenSet() const
{
    return m_containerRunningHasBeenSet;
}

uint64_t DescribeAssetSummaryResponse::GetContainerStop() const
{
    return m_containerStop;
}

bool DescribeAssetSummaryResponse::ContainerStopHasBeenSet() const
{
    return m_containerStopHasBeenSet;
}

string DescribeAssetSummaryResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeAssetSummaryResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t DescribeAssetSummaryResponse::GetDbCnt() const
{
    return m_dbCnt;
}

bool DescribeAssetSummaryResponse::DbCntHasBeenSet() const
{
    return m_dbCntHasBeenSet;
}

uint64_t DescribeAssetSummaryResponse::GetImageCnt() const
{
    return m_imageCnt;
}

bool DescribeAssetSummaryResponse::ImageCntHasBeenSet() const
{
    return m_imageCntHasBeenSet;
}

uint64_t DescribeAssetSummaryResponse::GetHostOnline() const
{
    return m_hostOnline;
}

bool DescribeAssetSummaryResponse::HostOnlineHasBeenSet() const
{
    return m_hostOnlineHasBeenSet;
}

uint64_t DescribeAssetSummaryResponse::GetHostCnt() const
{
    return m_hostCnt;
}

bool DescribeAssetSummaryResponse::HostCntHasBeenSet() const
{
    return m_hostCntHasBeenSet;
}

uint64_t DescribeAssetSummaryResponse::GetImageHasRiskInfoCnt() const
{
    return m_imageHasRiskInfoCnt;
}

bool DescribeAssetSummaryResponse::ImageHasRiskInfoCntHasBeenSet() const
{
    return m_imageHasRiskInfoCntHasBeenSet;
}

uint64_t DescribeAssetSummaryResponse::GetImageHasVirusCnt() const
{
    return m_imageHasVirusCnt;
}

bool DescribeAssetSummaryResponse::ImageHasVirusCntHasBeenSet() const
{
    return m_imageHasVirusCntHasBeenSet;
}

uint64_t DescribeAssetSummaryResponse::GetImageHasVulsCnt() const
{
    return m_imageHasVulsCnt;
}

bool DescribeAssetSummaryResponse::ImageHasVulsCntHasBeenSet() const
{
    return m_imageHasVulsCntHasBeenSet;
}

uint64_t DescribeAssetSummaryResponse::GetImageUntrustCnt() const
{
    return m_imageUntrustCnt;
}

bool DescribeAssetSummaryResponse::ImageUntrustCntHasBeenSet() const
{
    return m_imageUntrustCntHasBeenSet;
}

uint64_t DescribeAssetSummaryResponse::GetListenPortCnt() const
{
    return m_listenPortCnt;
}

bool DescribeAssetSummaryResponse::ListenPortCntHasBeenSet() const
{
    return m_listenPortCntHasBeenSet;
}

uint64_t DescribeAssetSummaryResponse::GetProcessCnt() const
{
    return m_processCnt;
}

bool DescribeAssetSummaryResponse::ProcessCntHasBeenSet() const
{
    return m_processCntHasBeenSet;
}

uint64_t DescribeAssetSummaryResponse::GetWebServiceCnt() const
{
    return m_webServiceCnt;
}

bool DescribeAssetSummaryResponse::WebServiceCntHasBeenSet() const
{
    return m_webServiceCntHasBeenSet;
}

string DescribeAssetSummaryResponse::GetLatestImageScanTime() const
{
    return m_latestImageScanTime;
}

bool DescribeAssetSummaryResponse::LatestImageScanTimeHasBeenSet() const
{
    return m_latestImageScanTimeHasBeenSet;
}

uint64_t DescribeAssetSummaryResponse::GetImageUnsafeCnt() const
{
    return m_imageUnsafeCnt;
}

bool DescribeAssetSummaryResponse::ImageUnsafeCntHasBeenSet() const
{
    return m_imageUnsafeCntHasBeenSet;
}

uint64_t DescribeAssetSummaryResponse::GetHostUnInstallCnt() const
{
    return m_hostUnInstallCnt;
}

bool DescribeAssetSummaryResponse::HostUnInstallCntHasBeenSet() const
{
    return m_hostUnInstallCntHasBeenSet;
}

uint64_t DescribeAssetSummaryResponse::GetSuperNodeCnt() const
{
    return m_superNodeCnt;
}

bool DescribeAssetSummaryResponse::SuperNodeCntHasBeenSet() const
{
    return m_superNodeCntHasBeenSet;
}

uint64_t DescribeAssetSummaryResponse::GetSuperNodeRunningCnt() const
{
    return m_superNodeRunningCnt;
}

bool DescribeAssetSummaryResponse::SuperNodeRunningCntHasBeenSet() const
{
    return m_superNodeRunningCntHasBeenSet;
}

uint64_t DescribeAssetSummaryResponse::GetTodayNewImageCnt() const
{
    return m_todayNewImageCnt;
}

bool DescribeAssetSummaryResponse::TodayNewImageCntHasBeenSet() const
{
    return m_todayNewImageCntHasBeenSet;
}

uint64_t DescribeAssetSummaryResponse::GetTodayUnsafeImageCnt() const
{
    return m_todayUnsafeImageCnt;
}

bool DescribeAssetSummaryResponse::TodayUnsafeImageCntHasBeenSet() const
{
    return m_todayUnsafeImageCntHasBeenSet;
}

uint64_t DescribeAssetSummaryResponse::GetRecommendedFixImageCnt() const
{
    return m_recommendedFixImageCnt;
}

bool DescribeAssetSummaryResponse::RecommendedFixImageCntHasBeenSet() const
{
    return m_recommendedFixImageCntHasBeenSet;
}

uint64_t DescribeAssetSummaryResponse::GetScannedImageCnt() const
{
    return m_scannedImageCnt;
}

bool DescribeAssetSummaryResponse::ScannedImageCntHasBeenSet() const
{
    return m_scannedImageCntHasBeenSet;
}

uint64_t DescribeAssetSummaryResponse::GetUnScannedImageCnt() const
{
    return m_unScannedImageCnt;
}

bool DescribeAssetSummaryResponse::UnScannedImageCntHasBeenSet() const
{
    return m_unScannedImageCntHasBeenSet;
}


