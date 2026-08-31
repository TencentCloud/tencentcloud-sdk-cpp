/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/vod/v20180717/model/VideoDubbingAsyncOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

VideoDubbingAsyncOutput::VideoDubbingAsyncOutput() :
    m_resultUrlHasBeenSet(false),
    m_fileIdHasBeenSet(false)
{
}

CoreInternalOutcome VideoDubbingAsyncOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResultUrl") && !value["ResultUrl"].IsNull())
    {
        if (!value["ResultUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoDubbingAsyncOutput.ResultUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultUrl = string(value["ResultUrl"].GetString());
        m_resultUrlHasBeenSet = true;
    }

    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoDubbingAsyncOutput.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoDubbingAsyncOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resultUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

}


string VideoDubbingAsyncOutput::GetResultUrl() const
{
    return m_resultUrl;
}

void VideoDubbingAsyncOutput::SetResultUrl(const string& _resultUrl)
{
    m_resultUrl = _resultUrl;
    m_resultUrlHasBeenSet = true;
}

bool VideoDubbingAsyncOutput::ResultUrlHasBeenSet() const
{
    return m_resultUrlHasBeenSet;
}

string VideoDubbingAsyncOutput::GetFileId() const
{
    return m_fileId;
}

void VideoDubbingAsyncOutput::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool VideoDubbingAsyncOutput::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

