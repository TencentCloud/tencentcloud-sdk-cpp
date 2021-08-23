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

#include <tencentcloud/vod/v20180717/model/TaskOutputMediaInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

TaskOutputMediaInfo::TaskOutputMediaInfo() :
    m_fileIdHasBeenSet(false),
    m_mediaBasicInfoHasBeenSet(false)
{
}

CoreInternalOutcome TaskOutputMediaInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOutputMediaInfo.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("MediaBasicInfo") && !value["MediaBasicInfo"].IsNull())
    {
        if (!value["MediaBasicInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOutputMediaInfo.MediaBasicInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mediaBasicInfo.Deserialize(value["MediaBasicInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mediaBasicInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskOutputMediaInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_mediaBasicInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaBasicInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mediaBasicInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string TaskOutputMediaInfo::GetFileId() const
{
    return m_fileId;
}

void TaskOutputMediaInfo::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool TaskOutputMediaInfo::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

MediaBasicInfo TaskOutputMediaInfo::GetMediaBasicInfo() const
{
    return m_mediaBasicInfo;
}

void TaskOutputMediaInfo::SetMediaBasicInfo(const MediaBasicInfo& _mediaBasicInfo)
{
    m_mediaBasicInfo = _mediaBasicInfo;
    m_mediaBasicInfoHasBeenSet = true;
}

bool TaskOutputMediaInfo::MediaBasicInfoHasBeenSet() const
{
    return m_mediaBasicInfoHasBeenSet;
}

