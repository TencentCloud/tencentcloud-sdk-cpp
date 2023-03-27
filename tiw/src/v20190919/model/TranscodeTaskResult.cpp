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

#include <tencentcloud/tiw/v20190919/model/TranscodeTaskResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

TranscodeTaskResult::TranscodeTaskResult() :
    m_resultUrlHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_pagesHasBeenSet(false),
    m_thumbnailUrlHasBeenSet(false),
    m_thumbnailResolutionHasBeenSet(false),
    m_compressFileUrlHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMsgHasBeenSet(false)
{
}

CoreInternalOutcome TranscodeTaskResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResultUrl") && !value["ResultUrl"].IsNull())
    {
        if (!value["ResultUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTaskResult.ResultUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultUrl = string(value["ResultUrl"].GetString());
        m_resultUrlHasBeenSet = true;
    }

    if (value.HasMember("Resolution") && !value["Resolution"].IsNull())
    {
        if (!value["Resolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTaskResult.Resolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolution = string(value["Resolution"].GetString());
        m_resolutionHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTaskResult.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Pages") && !value["Pages"].IsNull())
    {
        if (!value["Pages"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTaskResult.Pages` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pages = value["Pages"].GetInt64();
        m_pagesHasBeenSet = true;
    }

    if (value.HasMember("ThumbnailUrl") && !value["ThumbnailUrl"].IsNull())
    {
        if (!value["ThumbnailUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTaskResult.ThumbnailUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thumbnailUrl = string(value["ThumbnailUrl"].GetString());
        m_thumbnailUrlHasBeenSet = true;
    }

    if (value.HasMember("ThumbnailResolution") && !value["ThumbnailResolution"].IsNull())
    {
        if (!value["ThumbnailResolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTaskResult.ThumbnailResolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thumbnailResolution = string(value["ThumbnailResolution"].GetString());
        m_thumbnailResolutionHasBeenSet = true;
    }

    if (value.HasMember("CompressFileUrl") && !value["CompressFileUrl"].IsNull())
    {
        if (!value["CompressFileUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTaskResult.CompressFileUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compressFileUrl = string(value["CompressFileUrl"].GetString());
        m_compressFileUrlHasBeenSet = true;
    }

    if (value.HasMember("ErrorCode") && !value["ErrorCode"].IsNull())
    {
        if (!value["ErrorCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTaskResult.ErrorCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = value["ErrorCode"].GetInt64();
        m_errorCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrorMsg") && !value["ErrorMsg"].IsNull())
    {
        if (!value["ErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTaskResult.ErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMsg = string(value["ErrorMsg"].GetString());
        m_errorMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TranscodeTaskResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resultUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resolution.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_pagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pages, allocator);
    }

    if (m_thumbnailUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThumbnailUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_thumbnailUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_thumbnailResolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThumbnailResolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_thumbnailResolution.c_str(), allocator).Move(), allocator);
    }

    if (m_compressFileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompressFileUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compressFileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_errorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errorCode, allocator);
    }

    if (m_errorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMsg.c_str(), allocator).Move(), allocator);
    }

}


string TranscodeTaskResult::GetResultUrl() const
{
    return m_resultUrl;
}

void TranscodeTaskResult::SetResultUrl(const string& _resultUrl)
{
    m_resultUrl = _resultUrl;
    m_resultUrlHasBeenSet = true;
}

bool TranscodeTaskResult::ResultUrlHasBeenSet() const
{
    return m_resultUrlHasBeenSet;
}

string TranscodeTaskResult::GetResolution() const
{
    return m_resolution;
}

void TranscodeTaskResult::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool TranscodeTaskResult::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

string TranscodeTaskResult::GetTitle() const
{
    return m_title;
}

void TranscodeTaskResult::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool TranscodeTaskResult::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

int64_t TranscodeTaskResult::GetPages() const
{
    return m_pages;
}

void TranscodeTaskResult::SetPages(const int64_t& _pages)
{
    m_pages = _pages;
    m_pagesHasBeenSet = true;
}

bool TranscodeTaskResult::PagesHasBeenSet() const
{
    return m_pagesHasBeenSet;
}

string TranscodeTaskResult::GetThumbnailUrl() const
{
    return m_thumbnailUrl;
}

void TranscodeTaskResult::SetThumbnailUrl(const string& _thumbnailUrl)
{
    m_thumbnailUrl = _thumbnailUrl;
    m_thumbnailUrlHasBeenSet = true;
}

bool TranscodeTaskResult::ThumbnailUrlHasBeenSet() const
{
    return m_thumbnailUrlHasBeenSet;
}

string TranscodeTaskResult::GetThumbnailResolution() const
{
    return m_thumbnailResolution;
}

void TranscodeTaskResult::SetThumbnailResolution(const string& _thumbnailResolution)
{
    m_thumbnailResolution = _thumbnailResolution;
    m_thumbnailResolutionHasBeenSet = true;
}

bool TranscodeTaskResult::ThumbnailResolutionHasBeenSet() const
{
    return m_thumbnailResolutionHasBeenSet;
}

string TranscodeTaskResult::GetCompressFileUrl() const
{
    return m_compressFileUrl;
}

void TranscodeTaskResult::SetCompressFileUrl(const string& _compressFileUrl)
{
    m_compressFileUrl = _compressFileUrl;
    m_compressFileUrlHasBeenSet = true;
}

bool TranscodeTaskResult::CompressFileUrlHasBeenSet() const
{
    return m_compressFileUrlHasBeenSet;
}

int64_t TranscodeTaskResult::GetErrorCode() const
{
    return m_errorCode;
}

void TranscodeTaskResult::SetErrorCode(const int64_t& _errorCode)
{
    m_errorCode = _errorCode;
    m_errorCodeHasBeenSet = true;
}

bool TranscodeTaskResult::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string TranscodeTaskResult::GetErrorMsg() const
{
    return m_errorMsg;
}

void TranscodeTaskResult::SetErrorMsg(const string& _errorMsg)
{
    m_errorMsg = _errorMsg;
    m_errorMsgHasBeenSet = true;
}

bool TranscodeTaskResult::ErrorMsgHasBeenSet() const
{
    return m_errorMsgHasBeenSet;
}

