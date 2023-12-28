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

#include <tencentcloud/tiw/v20190919/model/CreateTranscodeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

CreateTranscodeRequest::CreateTranscodeRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_isStaticPPTHasBeenSet(false),
    m_minResolutionHasBeenSet(false),
    m_thumbnailResolutionHasBeenSet(false),
    m_compressFileTypeHasBeenSet(false),
    m_extraDataHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_minScaleResolutionHasBeenSet(false),
    m_autoHandleUnsupportedElementHasBeenSet(false),
    m_autoHandleUnsupportedElementTypesHasBeenSet(false),
    m_excelParamHasBeenSet(false)
{
}

string CreateTranscodeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_isStaticPPTHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsStaticPPT";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isStaticPPT, allocator);
    }

    if (m_minResolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinResolution";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_minResolution.c_str(), allocator).Move(), allocator);
    }

    if (m_thumbnailResolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThumbnailResolution";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_thumbnailResolution.c_str(), allocator).Move(), allocator);
    }

    if (m_compressFileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompressFileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_compressFileType.c_str(), allocator).Move(), allocator);
    }

    if (m_extraDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extraData.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_priority.c_str(), allocator).Move(), allocator);
    }

    if (m_minScaleResolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinScaleResolution";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_minScaleResolution.c_str(), allocator).Move(), allocator);
    }

    if (m_autoHandleUnsupportedElementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoHandleUnsupportedElement";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoHandleUnsupportedElement, allocator);
    }

    if (m_autoHandleUnsupportedElementTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoHandleUnsupportedElementTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_autoHandleUnsupportedElementTypes.begin(); itr != m_autoHandleUnsupportedElementTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_excelParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcelParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_excelParam.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateTranscodeRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void CreateTranscodeRequest::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool CreateTranscodeRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string CreateTranscodeRequest::GetUrl() const
{
    return m_url;
}

void CreateTranscodeRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool CreateTranscodeRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

bool CreateTranscodeRequest::GetIsStaticPPT() const
{
    return m_isStaticPPT;
}

void CreateTranscodeRequest::SetIsStaticPPT(const bool& _isStaticPPT)
{
    m_isStaticPPT = _isStaticPPT;
    m_isStaticPPTHasBeenSet = true;
}

bool CreateTranscodeRequest::IsStaticPPTHasBeenSet() const
{
    return m_isStaticPPTHasBeenSet;
}

string CreateTranscodeRequest::GetMinResolution() const
{
    return m_minResolution;
}

void CreateTranscodeRequest::SetMinResolution(const string& _minResolution)
{
    m_minResolution = _minResolution;
    m_minResolutionHasBeenSet = true;
}

bool CreateTranscodeRequest::MinResolutionHasBeenSet() const
{
    return m_minResolutionHasBeenSet;
}

string CreateTranscodeRequest::GetThumbnailResolution() const
{
    return m_thumbnailResolution;
}

void CreateTranscodeRequest::SetThumbnailResolution(const string& _thumbnailResolution)
{
    m_thumbnailResolution = _thumbnailResolution;
    m_thumbnailResolutionHasBeenSet = true;
}

bool CreateTranscodeRequest::ThumbnailResolutionHasBeenSet() const
{
    return m_thumbnailResolutionHasBeenSet;
}

string CreateTranscodeRequest::GetCompressFileType() const
{
    return m_compressFileType;
}

void CreateTranscodeRequest::SetCompressFileType(const string& _compressFileType)
{
    m_compressFileType = _compressFileType;
    m_compressFileTypeHasBeenSet = true;
}

bool CreateTranscodeRequest::CompressFileTypeHasBeenSet() const
{
    return m_compressFileTypeHasBeenSet;
}

string CreateTranscodeRequest::GetExtraData() const
{
    return m_extraData;
}

void CreateTranscodeRequest::SetExtraData(const string& _extraData)
{
    m_extraData = _extraData;
    m_extraDataHasBeenSet = true;
}

bool CreateTranscodeRequest::ExtraDataHasBeenSet() const
{
    return m_extraDataHasBeenSet;
}

string CreateTranscodeRequest::GetPriority() const
{
    return m_priority;
}

void CreateTranscodeRequest::SetPriority(const string& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool CreateTranscodeRequest::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

string CreateTranscodeRequest::GetMinScaleResolution() const
{
    return m_minScaleResolution;
}

void CreateTranscodeRequest::SetMinScaleResolution(const string& _minScaleResolution)
{
    m_minScaleResolution = _minScaleResolution;
    m_minScaleResolutionHasBeenSet = true;
}

bool CreateTranscodeRequest::MinScaleResolutionHasBeenSet() const
{
    return m_minScaleResolutionHasBeenSet;
}

bool CreateTranscodeRequest::GetAutoHandleUnsupportedElement() const
{
    return m_autoHandleUnsupportedElement;
}

void CreateTranscodeRequest::SetAutoHandleUnsupportedElement(const bool& _autoHandleUnsupportedElement)
{
    m_autoHandleUnsupportedElement = _autoHandleUnsupportedElement;
    m_autoHandleUnsupportedElementHasBeenSet = true;
}

bool CreateTranscodeRequest::AutoHandleUnsupportedElementHasBeenSet() const
{
    return m_autoHandleUnsupportedElementHasBeenSet;
}

vector<int64_t> CreateTranscodeRequest::GetAutoHandleUnsupportedElementTypes() const
{
    return m_autoHandleUnsupportedElementTypes;
}

void CreateTranscodeRequest::SetAutoHandleUnsupportedElementTypes(const vector<int64_t>& _autoHandleUnsupportedElementTypes)
{
    m_autoHandleUnsupportedElementTypes = _autoHandleUnsupportedElementTypes;
    m_autoHandleUnsupportedElementTypesHasBeenSet = true;
}

bool CreateTranscodeRequest::AutoHandleUnsupportedElementTypesHasBeenSet() const
{
    return m_autoHandleUnsupportedElementTypesHasBeenSet;
}

ExcelParam CreateTranscodeRequest::GetExcelParam() const
{
    return m_excelParam;
}

void CreateTranscodeRequest::SetExcelParam(const ExcelParam& _excelParam)
{
    m_excelParam = _excelParam;
    m_excelParamHasBeenSet = true;
}

bool CreateTranscodeRequest::ExcelParamHasBeenSet() const
{
    return m_excelParamHasBeenSet;
}


