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

#include <tencentcloud/tiw/v20190919/model/DescribeTranscodeResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

DescribeTranscodeResponse::DescribeTranscodeResponse() :
    m_pagesHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_resultUrlHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_thumbnailUrlHasBeenSet(false),
    m_thumbnailResolutionHasBeenSet(false),
    m_compressFileUrlHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTranscodeResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Pages") && !rsp["Pages"].IsNull())
    {
        if (!rsp["Pages"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Pages` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pages = rsp["Pages"].GetInt64();
        m_pagesHasBeenSet = true;
    }

    if (rsp.HasMember("Progress") && !rsp["Progress"].IsNull())
    {
        if (!rsp["Progress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Progress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = rsp["Progress"].GetInt64();
        m_progressHasBeenSet = true;
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

    if (rsp.HasMember("ResultUrl") && !rsp["ResultUrl"].IsNull())
    {
        if (!rsp["ResultUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultUrl = string(rsp["ResultUrl"].GetString());
        m_resultUrlHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("TaskId") && !rsp["TaskId"].IsNull())
    {
        if (!rsp["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(rsp["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (rsp.HasMember("Title") && !rsp["Title"].IsNull())
    {
        if (!rsp["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(rsp["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (rsp.HasMember("ThumbnailUrl") && !rsp["ThumbnailUrl"].IsNull())
    {
        if (!rsp["ThumbnailUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ThumbnailUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thumbnailUrl = string(rsp["ThumbnailUrl"].GetString());
        m_thumbnailUrlHasBeenSet = true;
    }

    if (rsp.HasMember("ThumbnailResolution") && !rsp["ThumbnailResolution"].IsNull())
    {
        if (!rsp["ThumbnailResolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ThumbnailResolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thumbnailResolution = string(rsp["ThumbnailResolution"].GetString());
        m_thumbnailResolutionHasBeenSet = true;
    }

    if (rsp.HasMember("CompressFileUrl") && !rsp["CompressFileUrl"].IsNull())
    {
        if (!rsp["CompressFileUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompressFileUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compressFileUrl = string(rsp["CompressFileUrl"].GetString());
        m_compressFileUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTranscodeResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_pagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pages, allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resolution.c_str(), allocator).Move(), allocator);
    }

    if (m_resultUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
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

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeTranscodeResponse::GetPages() const
{
    return m_pages;
}

bool DescribeTranscodeResponse::PagesHasBeenSet() const
{
    return m_pagesHasBeenSet;
}

int64_t DescribeTranscodeResponse::GetProgress() const
{
    return m_progress;
}

bool DescribeTranscodeResponse::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

string DescribeTranscodeResponse::GetResolution() const
{
    return m_resolution;
}

bool DescribeTranscodeResponse::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

string DescribeTranscodeResponse::GetResultUrl() const
{
    return m_resultUrl;
}

bool DescribeTranscodeResponse::ResultUrlHasBeenSet() const
{
    return m_resultUrlHasBeenSet;
}

string DescribeTranscodeResponse::GetStatus() const
{
    return m_status;
}

bool DescribeTranscodeResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeTranscodeResponse::GetTaskId() const
{
    return m_taskId;
}

bool DescribeTranscodeResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribeTranscodeResponse::GetTitle() const
{
    return m_title;
}

bool DescribeTranscodeResponse::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string DescribeTranscodeResponse::GetThumbnailUrl() const
{
    return m_thumbnailUrl;
}

bool DescribeTranscodeResponse::ThumbnailUrlHasBeenSet() const
{
    return m_thumbnailUrlHasBeenSet;
}

string DescribeTranscodeResponse::GetThumbnailResolution() const
{
    return m_thumbnailResolution;
}

bool DescribeTranscodeResponse::ThumbnailResolutionHasBeenSet() const
{
    return m_thumbnailResolutionHasBeenSet;
}

string DescribeTranscodeResponse::GetCompressFileUrl() const
{
    return m_compressFileUrl;
}

bool DescribeTranscodeResponse::CompressFileUrlHasBeenSet() const
{
    return m_compressFileUrlHasBeenSet;
}


