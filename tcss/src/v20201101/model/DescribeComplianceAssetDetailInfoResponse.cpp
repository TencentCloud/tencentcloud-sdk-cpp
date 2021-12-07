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

#include <tencentcloud/tcss/v20201101/model/DescribeComplianceAssetDetailInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeComplianceAssetDetailInfoResponse::DescribeComplianceAssetDetailInfoResponse() :
    m_assetDetailInfoHasBeenSet(false),
    m_containerDetailInfoHasBeenSet(false),
    m_imageDetailInfoHasBeenSet(false),
    m_hostDetailInfoHasBeenSet(false),
    m_k8SDetailInfoHasBeenSet(false)
{
}

CoreInternalOutcome DescribeComplianceAssetDetailInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AssetDetailInfo") && !rsp["AssetDetailInfo"].IsNull())
    {
        if (!rsp["AssetDetailInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetailInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_assetDetailInfo.Deserialize(rsp["AssetDetailInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_assetDetailInfoHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerDetailInfo") && !rsp["ContainerDetailInfo"].IsNull())
    {
        if (!rsp["ContainerDetailInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerDetailInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_containerDetailInfo.Deserialize(rsp["ContainerDetailInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_containerDetailInfoHasBeenSet = true;
    }

    if (rsp.HasMember("ImageDetailInfo") && !rsp["ImageDetailInfo"].IsNull())
    {
        if (!rsp["ImageDetailInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDetailInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageDetailInfo.Deserialize(rsp["ImageDetailInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageDetailInfoHasBeenSet = true;
    }

    if (rsp.HasMember("HostDetailInfo") && !rsp["HostDetailInfo"].IsNull())
    {
        if (!rsp["HostDetailInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HostDetailInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hostDetailInfo.Deserialize(rsp["HostDetailInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hostDetailInfoHasBeenSet = true;
    }

    if (rsp.HasMember("K8SDetailInfo") && !rsp["K8SDetailInfo"].IsNull())
    {
        if (!rsp["K8SDetailInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `K8SDetailInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_k8SDetailInfo.Deserialize(rsp["K8SDetailInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_k8SDetailInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeComplianceAssetDetailInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_assetDetailInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetDetailInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_assetDetailInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_containerDetailInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerDetailInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_containerDetailInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_imageDetailInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageDetailInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageDetailInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hostDetailInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostDetailInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hostDetailInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_k8SDetailInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "K8SDetailInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_k8SDetailInfo.ToJsonObject(value[key.c_str()], allocator);
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


ComplianceAssetDetailInfo DescribeComplianceAssetDetailInfoResponse::GetAssetDetailInfo() const
{
    return m_assetDetailInfo;
}

bool DescribeComplianceAssetDetailInfoResponse::AssetDetailInfoHasBeenSet() const
{
    return m_assetDetailInfoHasBeenSet;
}

ComplianceContainerDetailInfo DescribeComplianceAssetDetailInfoResponse::GetContainerDetailInfo() const
{
    return m_containerDetailInfo;
}

bool DescribeComplianceAssetDetailInfoResponse::ContainerDetailInfoHasBeenSet() const
{
    return m_containerDetailInfoHasBeenSet;
}

ComplianceImageDetailInfo DescribeComplianceAssetDetailInfoResponse::GetImageDetailInfo() const
{
    return m_imageDetailInfo;
}

bool DescribeComplianceAssetDetailInfoResponse::ImageDetailInfoHasBeenSet() const
{
    return m_imageDetailInfoHasBeenSet;
}

ComplianceHostDetailInfo DescribeComplianceAssetDetailInfoResponse::GetHostDetailInfo() const
{
    return m_hostDetailInfo;
}

bool DescribeComplianceAssetDetailInfoResponse::HostDetailInfoHasBeenSet() const
{
    return m_hostDetailInfoHasBeenSet;
}

ComplianceK8SDetailInfo DescribeComplianceAssetDetailInfoResponse::GetK8SDetailInfo() const
{
    return m_k8SDetailInfo;
}

bool DescribeComplianceAssetDetailInfoResponse::K8SDetailInfoHasBeenSet() const
{
    return m_k8SDetailInfoHasBeenSet;
}


