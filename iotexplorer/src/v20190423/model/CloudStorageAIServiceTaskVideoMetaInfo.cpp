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

#include <tencentcloud/iotexplorer/v20190423/model/CloudStorageAIServiceTaskVideoMetaInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

CloudStorageAIServiceTaskVideoMetaInfo::CloudStorageAIServiceTaskVideoMetaInfo() :
    m_thumbnailFileNameHasBeenSet(false),
    m_durationMilliSecondsHasBeenSet(false)
{
}

CoreInternalOutcome CloudStorageAIServiceTaskVideoMetaInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ThumbnailFileName") && !value["ThumbnailFileName"].IsNull())
    {
        if (!value["ThumbnailFileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorageAIServiceTaskVideoMetaInfo.ThumbnailFileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thumbnailFileName = string(value["ThumbnailFileName"].GetString());
        m_thumbnailFileNameHasBeenSet = true;
    }

    if (value.HasMember("DurationMilliSeconds") && !value["DurationMilliSeconds"].IsNull())
    {
        if (!value["DurationMilliSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorageAIServiceTaskVideoMetaInfo.DurationMilliSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_durationMilliSeconds = value["DurationMilliSeconds"].GetInt64();
        m_durationMilliSecondsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudStorageAIServiceTaskVideoMetaInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_thumbnailFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThumbnailFileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_thumbnailFileName.c_str(), allocator).Move(), allocator);
    }

    if (m_durationMilliSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DurationMilliSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_durationMilliSeconds, allocator);
    }

}


string CloudStorageAIServiceTaskVideoMetaInfo::GetThumbnailFileName() const
{
    return m_thumbnailFileName;
}

void CloudStorageAIServiceTaskVideoMetaInfo::SetThumbnailFileName(const string& _thumbnailFileName)
{
    m_thumbnailFileName = _thumbnailFileName;
    m_thumbnailFileNameHasBeenSet = true;
}

bool CloudStorageAIServiceTaskVideoMetaInfo::ThumbnailFileNameHasBeenSet() const
{
    return m_thumbnailFileNameHasBeenSet;
}

int64_t CloudStorageAIServiceTaskVideoMetaInfo::GetDurationMilliSeconds() const
{
    return m_durationMilliSeconds;
}

void CloudStorageAIServiceTaskVideoMetaInfo::SetDurationMilliSeconds(const int64_t& _durationMilliSeconds)
{
    m_durationMilliSeconds = _durationMilliSeconds;
    m_durationMilliSecondsHasBeenSet = true;
}

bool CloudStorageAIServiceTaskVideoMetaInfo::DurationMilliSecondsHasBeenSet() const
{
    return m_durationMilliSecondsHasBeenSet;
}

