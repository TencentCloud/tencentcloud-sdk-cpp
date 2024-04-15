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

#include <tencentcloud/lcic/v20220817/model/DescribeDocumentResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

DescribeDocumentResponse::DescribeDocumentResponse() :
    m_documentIdHasBeenSet(false),
    m_documentUrlHasBeenSet(false),
    m_documentNameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_sdkAppIdHasBeenSet(false),
    m_permissionHasBeenSet(false),
    m_transcodeResultHasBeenSet(false),
    m_transcodeTypeHasBeenSet(false),
    m_transcodeProgressHasBeenSet(false),
    m_transcodeStateHasBeenSet(false),
    m_transcodeInfoHasBeenSet(false),
    m_documentTypeHasBeenSet(false),
    m_documentSizeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_pagesHasBeenSet(false),
    m_previewHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_minScaleResolutionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDocumentResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DocumentId") && !rsp["DocumentId"].IsNull())
    {
        if (!rsp["DocumentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_documentId = string(rsp["DocumentId"].GetString());
        m_documentIdHasBeenSet = true;
    }

    if (rsp.HasMember("DocumentUrl") && !rsp["DocumentUrl"].IsNull())
    {
        if (!rsp["DocumentUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_documentUrl = string(rsp["DocumentUrl"].GetString());
        m_documentUrlHasBeenSet = true;
    }

    if (rsp.HasMember("DocumentName") && !rsp["DocumentName"].IsNull())
    {
        if (!rsp["DocumentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_documentName = string(rsp["DocumentName"].GetString());
        m_documentNameHasBeenSet = true;
    }

    if (rsp.HasMember("Owner") && !rsp["Owner"].IsNull())
    {
        if (!rsp["Owner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Owner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_owner = string(rsp["Owner"].GetString());
        m_ownerHasBeenSet = true;
    }

    if (rsp.HasMember("SdkAppId") && !rsp["SdkAppId"].IsNull())
    {
        if (!rsp["SdkAppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SdkAppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sdkAppId = rsp["SdkAppId"].GetUint64();
        m_sdkAppIdHasBeenSet = true;
    }

    if (rsp.HasMember("Permission") && !rsp["Permission"].IsNull())
    {
        if (!rsp["Permission"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Permission` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_permission = rsp["Permission"].GetUint64();
        m_permissionHasBeenSet = true;
    }

    if (rsp.HasMember("TranscodeResult") && !rsp["TranscodeResult"].IsNull())
    {
        if (!rsp["TranscodeResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transcodeResult = string(rsp["TranscodeResult"].GetString());
        m_transcodeResultHasBeenSet = true;
    }

    if (rsp.HasMember("TranscodeType") && !rsp["TranscodeType"].IsNull())
    {
        if (!rsp["TranscodeType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_transcodeType = rsp["TranscodeType"].GetUint64();
        m_transcodeTypeHasBeenSet = true;
    }

    if (rsp.HasMember("TranscodeProgress") && !rsp["TranscodeProgress"].IsNull())
    {
        if (!rsp["TranscodeProgress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeProgress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_transcodeProgress = rsp["TranscodeProgress"].GetUint64();
        m_transcodeProgressHasBeenSet = true;
    }

    if (rsp.HasMember("TranscodeState") && !rsp["TranscodeState"].IsNull())
    {
        if (!rsp["TranscodeState"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeState` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_transcodeState = rsp["TranscodeState"].GetUint64();
        m_transcodeStateHasBeenSet = true;
    }

    if (rsp.HasMember("TranscodeInfo") && !rsp["TranscodeInfo"].IsNull())
    {
        if (!rsp["TranscodeInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transcodeInfo = string(rsp["TranscodeInfo"].GetString());
        m_transcodeInfoHasBeenSet = true;
    }

    if (rsp.HasMember("DocumentType") && !rsp["DocumentType"].IsNull())
    {
        if (!rsp["DocumentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_documentType = string(rsp["DocumentType"].GetString());
        m_documentTypeHasBeenSet = true;
    }

    if (rsp.HasMember("DocumentSize") && !rsp["DocumentSize"].IsNull())
    {
        if (!rsp["DocumentSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_documentSize = rsp["DocumentSize"].GetUint64();
        m_documentSizeHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = rsp["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Pages") && !rsp["Pages"].IsNull())
    {
        if (!rsp["Pages"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Pages` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pages = rsp["Pages"].GetUint64();
        m_pagesHasBeenSet = true;
    }

    if (rsp.HasMember("Preview") && !rsp["Preview"].IsNull())
    {
        if (!rsp["Preview"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Preview` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_preview = string(rsp["Preview"].GetString());
        m_previewHasBeenSet = true;
    }

    if (rsp.HasMember("Resolution") && !rsp["Resolution"].IsNull())
    {
        if (!rsp["Resolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolution = string(rsp["Resolution"].GetString());
        m_resolutionHasBeenSet = true;
    }

    if (rsp.HasMember("MinScaleResolution") && !rsp["MinScaleResolution"].IsNull())
    {
        if (!rsp["MinScaleResolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MinScaleResolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_minScaleResolution = string(rsp["MinScaleResolution"].GetString());
        m_minScaleResolutionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDocumentResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_documentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocumentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_documentId.c_str(), allocator).Move(), allocator);
    }

    if (m_documentUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocumentUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_documentUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_documentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocumentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_documentName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_owner.c_str(), allocator).Move(), allocator);
    }

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_permissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_permission, allocator);
    }

    if (m_transcodeResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranscodeResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transcodeResult.c_str(), allocator).Move(), allocator);
    }

    if (m_transcodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranscodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transcodeType, allocator);
    }

    if (m_transcodeProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranscodeProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transcodeProgress, allocator);
    }

    if (m_transcodeStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranscodeState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transcodeState, allocator);
    }

    if (m_transcodeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranscodeInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transcodeInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_documentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocumentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_documentType.c_str(), allocator).Move(), allocator);
    }

    if (m_documentSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocumentSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_documentSize, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_pagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pages, allocator);
    }

    if (m_previewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Preview";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_preview.c_str(), allocator).Move(), allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resolution.c_str(), allocator).Move(), allocator);
    }

    if (m_minScaleResolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinScaleResolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_minScaleResolution.c_str(), allocator).Move(), allocator);
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


string DescribeDocumentResponse::GetDocumentId() const
{
    return m_documentId;
}

bool DescribeDocumentResponse::DocumentIdHasBeenSet() const
{
    return m_documentIdHasBeenSet;
}

string DescribeDocumentResponse::GetDocumentUrl() const
{
    return m_documentUrl;
}

bool DescribeDocumentResponse::DocumentUrlHasBeenSet() const
{
    return m_documentUrlHasBeenSet;
}

string DescribeDocumentResponse::GetDocumentName() const
{
    return m_documentName;
}

bool DescribeDocumentResponse::DocumentNameHasBeenSet() const
{
    return m_documentNameHasBeenSet;
}

string DescribeDocumentResponse::GetOwner() const
{
    return m_owner;
}

bool DescribeDocumentResponse::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

uint64_t DescribeDocumentResponse::GetSdkAppId() const
{
    return m_sdkAppId;
}

bool DescribeDocumentResponse::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

uint64_t DescribeDocumentResponse::GetPermission() const
{
    return m_permission;
}

bool DescribeDocumentResponse::PermissionHasBeenSet() const
{
    return m_permissionHasBeenSet;
}

string DescribeDocumentResponse::GetTranscodeResult() const
{
    return m_transcodeResult;
}

bool DescribeDocumentResponse::TranscodeResultHasBeenSet() const
{
    return m_transcodeResultHasBeenSet;
}

uint64_t DescribeDocumentResponse::GetTranscodeType() const
{
    return m_transcodeType;
}

bool DescribeDocumentResponse::TranscodeTypeHasBeenSet() const
{
    return m_transcodeTypeHasBeenSet;
}

uint64_t DescribeDocumentResponse::GetTranscodeProgress() const
{
    return m_transcodeProgress;
}

bool DescribeDocumentResponse::TranscodeProgressHasBeenSet() const
{
    return m_transcodeProgressHasBeenSet;
}

uint64_t DescribeDocumentResponse::GetTranscodeState() const
{
    return m_transcodeState;
}

bool DescribeDocumentResponse::TranscodeStateHasBeenSet() const
{
    return m_transcodeStateHasBeenSet;
}

string DescribeDocumentResponse::GetTranscodeInfo() const
{
    return m_transcodeInfo;
}

bool DescribeDocumentResponse::TranscodeInfoHasBeenSet() const
{
    return m_transcodeInfoHasBeenSet;
}

string DescribeDocumentResponse::GetDocumentType() const
{
    return m_documentType;
}

bool DescribeDocumentResponse::DocumentTypeHasBeenSet() const
{
    return m_documentTypeHasBeenSet;
}

uint64_t DescribeDocumentResponse::GetDocumentSize() const
{
    return m_documentSize;
}

bool DescribeDocumentResponse::DocumentSizeHasBeenSet() const
{
    return m_documentSizeHasBeenSet;
}

uint64_t DescribeDocumentResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool DescribeDocumentResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t DescribeDocumentResponse::GetPages() const
{
    return m_pages;
}

bool DescribeDocumentResponse::PagesHasBeenSet() const
{
    return m_pagesHasBeenSet;
}

string DescribeDocumentResponse::GetPreview() const
{
    return m_preview;
}

bool DescribeDocumentResponse::PreviewHasBeenSet() const
{
    return m_previewHasBeenSet;
}

string DescribeDocumentResponse::GetResolution() const
{
    return m_resolution;
}

bool DescribeDocumentResponse::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

string DescribeDocumentResponse::GetMinScaleResolution() const
{
    return m_minScaleResolution;
}

bool DescribeDocumentResponse::MinScaleResolutionHasBeenSet() const
{
    return m_minScaleResolutionHasBeenSet;
}


