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

#include <tencentcloud/lcic/v20220817/model/DocumentInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

DocumentInfo::DocumentInfo() :
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
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_coverHasBeenSet(false),
    m_previewHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_minScaleResolutionHasBeenSet(false)
{
}

CoreInternalOutcome DocumentInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DocumentId") && !value["DocumentId"].IsNull())
    {
        if (!value["DocumentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentInfo.DocumentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_documentId = string(value["DocumentId"].GetString());
        m_documentIdHasBeenSet = true;
    }

    if (value.HasMember("DocumentUrl") && !value["DocumentUrl"].IsNull())
    {
        if (!value["DocumentUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentInfo.DocumentUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_documentUrl = string(value["DocumentUrl"].GetString());
        m_documentUrlHasBeenSet = true;
    }

    if (value.HasMember("DocumentName") && !value["DocumentName"].IsNull())
    {
        if (!value["DocumentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentInfo.DocumentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_documentName = string(value["DocumentName"].GetString());
        m_documentNameHasBeenSet = true;
    }

    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentInfo.Owner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_owner = string(value["Owner"].GetString());
        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("SdkAppId") && !value["SdkAppId"].IsNull())
    {
        if (!value["SdkAppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentInfo.SdkAppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sdkAppId = value["SdkAppId"].GetUint64();
        m_sdkAppIdHasBeenSet = true;
    }

    if (value.HasMember("Permission") && !value["Permission"].IsNull())
    {
        if (!value["Permission"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentInfo.Permission` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_permission = value["Permission"].GetUint64();
        m_permissionHasBeenSet = true;
    }

    if (value.HasMember("TranscodeResult") && !value["TranscodeResult"].IsNull())
    {
        if (!value["TranscodeResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentInfo.TranscodeResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transcodeResult = string(value["TranscodeResult"].GetString());
        m_transcodeResultHasBeenSet = true;
    }

    if (value.HasMember("TranscodeType") && !value["TranscodeType"].IsNull())
    {
        if (!value["TranscodeType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentInfo.TranscodeType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_transcodeType = value["TranscodeType"].GetUint64();
        m_transcodeTypeHasBeenSet = true;
    }

    if (value.HasMember("TranscodeProgress") && !value["TranscodeProgress"].IsNull())
    {
        if (!value["TranscodeProgress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentInfo.TranscodeProgress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_transcodeProgress = value["TranscodeProgress"].GetUint64();
        m_transcodeProgressHasBeenSet = true;
    }

    if (value.HasMember("TranscodeState") && !value["TranscodeState"].IsNull())
    {
        if (!value["TranscodeState"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentInfo.TranscodeState` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_transcodeState = value["TranscodeState"].GetUint64();
        m_transcodeStateHasBeenSet = true;
    }

    if (value.HasMember("TranscodeInfo") && !value["TranscodeInfo"].IsNull())
    {
        if (!value["TranscodeInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentInfo.TranscodeInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transcodeInfo = string(value["TranscodeInfo"].GetString());
        m_transcodeInfoHasBeenSet = true;
    }

    if (value.HasMember("DocumentType") && !value["DocumentType"].IsNull())
    {
        if (!value["DocumentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentInfo.DocumentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_documentType = string(value["DocumentType"].GetString());
        m_documentTypeHasBeenSet = true;
    }

    if (value.HasMember("DocumentSize") && !value["DocumentSize"].IsNull())
    {
        if (!value["DocumentSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentInfo.DocumentSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_documentSize = value["DocumentSize"].GetUint64();
        m_documentSizeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentInfo.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Pages") && !value["Pages"].IsNull())
    {
        if (!value["Pages"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentInfo.Pages` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pages = value["Pages"].GetUint64();
        m_pagesHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentInfo.Width` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetUint64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentInfo.Height` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetUint64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Cover") && !value["Cover"].IsNull())
    {
        if (!value["Cover"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentInfo.Cover` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cover = string(value["Cover"].GetString());
        m_coverHasBeenSet = true;
    }

    if (value.HasMember("Preview") && !value["Preview"].IsNull())
    {
        if (!value["Preview"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentInfo.Preview` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_preview = string(value["Preview"].GetString());
        m_previewHasBeenSet = true;
    }

    if (value.HasMember("Resolution") && !value["Resolution"].IsNull())
    {
        if (!value["Resolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentInfo.Resolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolution = string(value["Resolution"].GetString());
        m_resolutionHasBeenSet = true;
    }

    if (value.HasMember("MinScaleResolution") && !value["MinScaleResolution"].IsNull())
    {
        if (!value["MinScaleResolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentInfo.MinScaleResolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_minScaleResolution = string(value["MinScaleResolution"].GetString());
        m_minScaleResolutionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DocumentInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_coverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cover";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cover.c_str(), allocator).Move(), allocator);
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

}


string DocumentInfo::GetDocumentId() const
{
    return m_documentId;
}

void DocumentInfo::SetDocumentId(const string& _documentId)
{
    m_documentId = _documentId;
    m_documentIdHasBeenSet = true;
}

bool DocumentInfo::DocumentIdHasBeenSet() const
{
    return m_documentIdHasBeenSet;
}

string DocumentInfo::GetDocumentUrl() const
{
    return m_documentUrl;
}

void DocumentInfo::SetDocumentUrl(const string& _documentUrl)
{
    m_documentUrl = _documentUrl;
    m_documentUrlHasBeenSet = true;
}

bool DocumentInfo::DocumentUrlHasBeenSet() const
{
    return m_documentUrlHasBeenSet;
}

string DocumentInfo::GetDocumentName() const
{
    return m_documentName;
}

void DocumentInfo::SetDocumentName(const string& _documentName)
{
    m_documentName = _documentName;
    m_documentNameHasBeenSet = true;
}

bool DocumentInfo::DocumentNameHasBeenSet() const
{
    return m_documentNameHasBeenSet;
}

string DocumentInfo::GetOwner() const
{
    return m_owner;
}

void DocumentInfo::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool DocumentInfo::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

uint64_t DocumentInfo::GetSdkAppId() const
{
    return m_sdkAppId;
}

void DocumentInfo::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool DocumentInfo::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

uint64_t DocumentInfo::GetPermission() const
{
    return m_permission;
}

void DocumentInfo::SetPermission(const uint64_t& _permission)
{
    m_permission = _permission;
    m_permissionHasBeenSet = true;
}

bool DocumentInfo::PermissionHasBeenSet() const
{
    return m_permissionHasBeenSet;
}

string DocumentInfo::GetTranscodeResult() const
{
    return m_transcodeResult;
}

void DocumentInfo::SetTranscodeResult(const string& _transcodeResult)
{
    m_transcodeResult = _transcodeResult;
    m_transcodeResultHasBeenSet = true;
}

bool DocumentInfo::TranscodeResultHasBeenSet() const
{
    return m_transcodeResultHasBeenSet;
}

uint64_t DocumentInfo::GetTranscodeType() const
{
    return m_transcodeType;
}

void DocumentInfo::SetTranscodeType(const uint64_t& _transcodeType)
{
    m_transcodeType = _transcodeType;
    m_transcodeTypeHasBeenSet = true;
}

bool DocumentInfo::TranscodeTypeHasBeenSet() const
{
    return m_transcodeTypeHasBeenSet;
}

uint64_t DocumentInfo::GetTranscodeProgress() const
{
    return m_transcodeProgress;
}

void DocumentInfo::SetTranscodeProgress(const uint64_t& _transcodeProgress)
{
    m_transcodeProgress = _transcodeProgress;
    m_transcodeProgressHasBeenSet = true;
}

bool DocumentInfo::TranscodeProgressHasBeenSet() const
{
    return m_transcodeProgressHasBeenSet;
}

uint64_t DocumentInfo::GetTranscodeState() const
{
    return m_transcodeState;
}

void DocumentInfo::SetTranscodeState(const uint64_t& _transcodeState)
{
    m_transcodeState = _transcodeState;
    m_transcodeStateHasBeenSet = true;
}

bool DocumentInfo::TranscodeStateHasBeenSet() const
{
    return m_transcodeStateHasBeenSet;
}

string DocumentInfo::GetTranscodeInfo() const
{
    return m_transcodeInfo;
}

void DocumentInfo::SetTranscodeInfo(const string& _transcodeInfo)
{
    m_transcodeInfo = _transcodeInfo;
    m_transcodeInfoHasBeenSet = true;
}

bool DocumentInfo::TranscodeInfoHasBeenSet() const
{
    return m_transcodeInfoHasBeenSet;
}

string DocumentInfo::GetDocumentType() const
{
    return m_documentType;
}

void DocumentInfo::SetDocumentType(const string& _documentType)
{
    m_documentType = _documentType;
    m_documentTypeHasBeenSet = true;
}

bool DocumentInfo::DocumentTypeHasBeenSet() const
{
    return m_documentTypeHasBeenSet;
}

uint64_t DocumentInfo::GetDocumentSize() const
{
    return m_documentSize;
}

void DocumentInfo::SetDocumentSize(const uint64_t& _documentSize)
{
    m_documentSize = _documentSize;
    m_documentSizeHasBeenSet = true;
}

bool DocumentInfo::DocumentSizeHasBeenSet() const
{
    return m_documentSizeHasBeenSet;
}

uint64_t DocumentInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void DocumentInfo::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DocumentInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t DocumentInfo::GetPages() const
{
    return m_pages;
}

void DocumentInfo::SetPages(const uint64_t& _pages)
{
    m_pages = _pages;
    m_pagesHasBeenSet = true;
}

bool DocumentInfo::PagesHasBeenSet() const
{
    return m_pagesHasBeenSet;
}

uint64_t DocumentInfo::GetWidth() const
{
    return m_width;
}

void DocumentInfo::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool DocumentInfo::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t DocumentInfo::GetHeight() const
{
    return m_height;
}

void DocumentInfo::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool DocumentInfo::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

string DocumentInfo::GetCover() const
{
    return m_cover;
}

void DocumentInfo::SetCover(const string& _cover)
{
    m_cover = _cover;
    m_coverHasBeenSet = true;
}

bool DocumentInfo::CoverHasBeenSet() const
{
    return m_coverHasBeenSet;
}

string DocumentInfo::GetPreview() const
{
    return m_preview;
}

void DocumentInfo::SetPreview(const string& _preview)
{
    m_preview = _preview;
    m_previewHasBeenSet = true;
}

bool DocumentInfo::PreviewHasBeenSet() const
{
    return m_previewHasBeenSet;
}

string DocumentInfo::GetResolution() const
{
    return m_resolution;
}

void DocumentInfo::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool DocumentInfo::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

string DocumentInfo::GetMinScaleResolution() const
{
    return m_minScaleResolution;
}

void DocumentInfo::SetMinScaleResolution(const string& _minScaleResolution)
{
    m_minScaleResolution = _minScaleResolution;
    m_minScaleResolutionHasBeenSet = true;
}

bool DocumentInfo::MinScaleResolutionHasBeenSet() const
{
    return m_minScaleResolutionHasBeenSet;
}

