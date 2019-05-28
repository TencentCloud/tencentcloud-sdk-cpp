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

#include <tencentcloud/vod/v20180717/model/CommitUploadResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

CommitUploadResponse::CommitUploadResponse() :
    m_fileIdHasBeenSet(false),
    m_mediaUrlHasBeenSet(false),
    m_coverUrlHasBeenSet(false)
{
}

CoreInternalOutcome CommitUploadResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("FileId") && !rsp["FileId"].IsNull())
    {
        if (!rsp["FileId"].IsString())
        {
            return CoreInternalOutcome(Error("response `FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(rsp["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (rsp.HasMember("MediaUrl") && !rsp["MediaUrl"].IsNull())
    {
        if (!rsp["MediaUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mediaUrl = string(rsp["MediaUrl"].GetString());
        m_mediaUrlHasBeenSet = true;
    }

    if (rsp.HasMember("CoverUrl") && !rsp["CoverUrl"].IsNull())
    {
        if (!rsp["CoverUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `CoverUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coverUrl = string(rsp["CoverUrl"].GetString());
        m_coverUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string CommitUploadResponse::GetFileId() const
{
    return m_fileId;
}

bool CommitUploadResponse::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

string CommitUploadResponse::GetMediaUrl() const
{
    return m_mediaUrl;
}

bool CommitUploadResponse::MediaUrlHasBeenSet() const
{
    return m_mediaUrlHasBeenSet;
}

string CommitUploadResponse::GetCoverUrl() const
{
    return m_coverUrl;
}

bool CommitUploadResponse::CoverUrlHasBeenSet() const
{
    return m_coverUrlHasBeenSet;
}


