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

#include <tencentcloud/tcss/v20201101/model/DescribeContainerAssetSummaryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeContainerAssetSummaryResponse::DescribeContainerAssetSummaryResponse() :
    m_containerTotalCntHasBeenSet(false),
    m_containerRunningCntHasBeenSet(false),
    m_containerPauseCntHasBeenSet(false),
    m_containerStoppedHasBeenSet(false),
    m_imageCntHasBeenSet(false),
    m_hostCntHasBeenSet(false),
    m_hostRunningCntHasBeenSet(false),
    m_hostOfflineCntHasBeenSet(false),
    m_imageRegistryCntHasBeenSet(false),
    m_imageTotalCntHasBeenSet(false),
    m_hostUnInstallCntHasBeenSet(false),
    m_hostSuperNodeCntHasBeenSet(false)
{
}

CoreInternalOutcome DescribeContainerAssetSummaryResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ContainerTotalCnt") && !rsp["ContainerTotalCnt"].IsNull())
    {
        if (!rsp["ContainerTotalCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerTotalCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_containerTotalCnt = rsp["ContainerTotalCnt"].GetUint64();
        m_containerTotalCntHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerRunningCnt") && !rsp["ContainerRunningCnt"].IsNull())
    {
        if (!rsp["ContainerRunningCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerRunningCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_containerRunningCnt = rsp["ContainerRunningCnt"].GetUint64();
        m_containerRunningCntHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerPauseCnt") && !rsp["ContainerPauseCnt"].IsNull())
    {
        if (!rsp["ContainerPauseCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerPauseCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_containerPauseCnt = rsp["ContainerPauseCnt"].GetUint64();
        m_containerPauseCntHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerStopped") && !rsp["ContainerStopped"].IsNull())
    {
        if (!rsp["ContainerStopped"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerStopped` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_containerStopped = rsp["ContainerStopped"].GetUint64();
        m_containerStoppedHasBeenSet = true;
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

    if (rsp.HasMember("HostCnt") && !rsp["HostCnt"].IsNull())
    {
        if (!rsp["HostCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hostCnt = rsp["HostCnt"].GetUint64();
        m_hostCntHasBeenSet = true;
    }

    if (rsp.HasMember("HostRunningCnt") && !rsp["HostRunningCnt"].IsNull())
    {
        if (!rsp["HostRunningCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostRunningCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hostRunningCnt = rsp["HostRunningCnt"].GetUint64();
        m_hostRunningCntHasBeenSet = true;
    }

    if (rsp.HasMember("HostOfflineCnt") && !rsp["HostOfflineCnt"].IsNull())
    {
        if (!rsp["HostOfflineCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostOfflineCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hostOfflineCnt = rsp["HostOfflineCnt"].GetUint64();
        m_hostOfflineCntHasBeenSet = true;
    }

    if (rsp.HasMember("ImageRegistryCnt") && !rsp["ImageRegistryCnt"].IsNull())
    {
        if (!rsp["ImageRegistryCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageRegistryCnt = rsp["ImageRegistryCnt"].GetUint64();
        m_imageRegistryCntHasBeenSet = true;
    }

    if (rsp.HasMember("ImageTotalCnt") && !rsp["ImageTotalCnt"].IsNull())
    {
        if (!rsp["ImageTotalCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTotalCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageTotalCnt = rsp["ImageTotalCnt"].GetUint64();
        m_imageTotalCntHasBeenSet = true;
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

    if (rsp.HasMember("HostSuperNodeCnt") && !rsp["HostSuperNodeCnt"].IsNull())
    {
        if (!rsp["HostSuperNodeCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostSuperNodeCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hostSuperNodeCnt = rsp["HostSuperNodeCnt"].GetUint64();
        m_hostSuperNodeCntHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeContainerAssetSummaryResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_containerTotalCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerTotalCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerTotalCnt, allocator);
    }

    if (m_containerRunningCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerRunningCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerRunningCnt, allocator);
    }

    if (m_containerPauseCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerPauseCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerPauseCnt, allocator);
    }

    if (m_containerStoppedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerStopped";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerStopped, allocator);
    }

    if (m_imageCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageCnt, allocator);
    }

    if (m_hostCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostCnt, allocator);
    }

    if (m_hostRunningCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostRunningCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostRunningCnt, allocator);
    }

    if (m_hostOfflineCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostOfflineCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostOfflineCnt, allocator);
    }

    if (m_imageRegistryCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageRegistryCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageRegistryCnt, allocator);
    }

    if (m_imageTotalCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageTotalCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageTotalCnt, allocator);
    }

    if (m_hostUnInstallCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostUnInstallCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostUnInstallCnt, allocator);
    }

    if (m_hostSuperNodeCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostSuperNodeCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostSuperNodeCnt, allocator);
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


uint64_t DescribeContainerAssetSummaryResponse::GetContainerTotalCnt() const
{
    return m_containerTotalCnt;
}

bool DescribeContainerAssetSummaryResponse::ContainerTotalCntHasBeenSet() const
{
    return m_containerTotalCntHasBeenSet;
}

uint64_t DescribeContainerAssetSummaryResponse::GetContainerRunningCnt() const
{
    return m_containerRunningCnt;
}

bool DescribeContainerAssetSummaryResponse::ContainerRunningCntHasBeenSet() const
{
    return m_containerRunningCntHasBeenSet;
}

uint64_t DescribeContainerAssetSummaryResponse::GetContainerPauseCnt() const
{
    return m_containerPauseCnt;
}

bool DescribeContainerAssetSummaryResponse::ContainerPauseCntHasBeenSet() const
{
    return m_containerPauseCntHasBeenSet;
}

uint64_t DescribeContainerAssetSummaryResponse::GetContainerStopped() const
{
    return m_containerStopped;
}

bool DescribeContainerAssetSummaryResponse::ContainerStoppedHasBeenSet() const
{
    return m_containerStoppedHasBeenSet;
}

uint64_t DescribeContainerAssetSummaryResponse::GetImageCnt() const
{
    return m_imageCnt;
}

bool DescribeContainerAssetSummaryResponse::ImageCntHasBeenSet() const
{
    return m_imageCntHasBeenSet;
}

uint64_t DescribeContainerAssetSummaryResponse::GetHostCnt() const
{
    return m_hostCnt;
}

bool DescribeContainerAssetSummaryResponse::HostCntHasBeenSet() const
{
    return m_hostCntHasBeenSet;
}

uint64_t DescribeContainerAssetSummaryResponse::GetHostRunningCnt() const
{
    return m_hostRunningCnt;
}

bool DescribeContainerAssetSummaryResponse::HostRunningCntHasBeenSet() const
{
    return m_hostRunningCntHasBeenSet;
}

uint64_t DescribeContainerAssetSummaryResponse::GetHostOfflineCnt() const
{
    return m_hostOfflineCnt;
}

bool DescribeContainerAssetSummaryResponse::HostOfflineCntHasBeenSet() const
{
    return m_hostOfflineCntHasBeenSet;
}

uint64_t DescribeContainerAssetSummaryResponse::GetImageRegistryCnt() const
{
    return m_imageRegistryCnt;
}

bool DescribeContainerAssetSummaryResponse::ImageRegistryCntHasBeenSet() const
{
    return m_imageRegistryCntHasBeenSet;
}

uint64_t DescribeContainerAssetSummaryResponse::GetImageTotalCnt() const
{
    return m_imageTotalCnt;
}

bool DescribeContainerAssetSummaryResponse::ImageTotalCntHasBeenSet() const
{
    return m_imageTotalCntHasBeenSet;
}

uint64_t DescribeContainerAssetSummaryResponse::GetHostUnInstallCnt() const
{
    return m_hostUnInstallCnt;
}

bool DescribeContainerAssetSummaryResponse::HostUnInstallCntHasBeenSet() const
{
    return m_hostUnInstallCntHasBeenSet;
}

uint64_t DescribeContainerAssetSummaryResponse::GetHostSuperNodeCnt() const
{
    return m_hostSuperNodeCnt;
}

bool DescribeContainerAssetSummaryResponse::HostSuperNodeCntHasBeenSet() const
{
    return m_hostSuperNodeCntHasBeenSet;
}


