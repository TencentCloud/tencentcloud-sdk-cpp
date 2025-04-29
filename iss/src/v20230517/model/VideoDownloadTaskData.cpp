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

#include <tencentcloud/iss/v20230517/model/VideoDownloadTaskData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

VideoDownloadTaskData::VideoDownloadTaskData() :
    m_downloadTaskIdHasBeenSet(false)
{
}

CoreInternalOutcome VideoDownloadTaskData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DownloadTaskId") && !value["DownloadTaskId"].IsNull())
    {
        if (!value["DownloadTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoDownloadTaskData.DownloadTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downloadTaskId = string(value["DownloadTaskId"].GetString());
        m_downloadTaskIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoDownloadTaskData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_downloadTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downloadTaskId.c_str(), allocator).Move(), allocator);
    }

}


string VideoDownloadTaskData::GetDownloadTaskId() const
{
    return m_downloadTaskId;
}

void VideoDownloadTaskData::SetDownloadTaskId(const string& _downloadTaskId)
{
    m_downloadTaskId = _downloadTaskId;
    m_downloadTaskIdHasBeenSet = true;
}

bool VideoDownloadTaskData::DownloadTaskIdHasBeenSet() const
{
    return m_downloadTaskIdHasBeenSet;
}

