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

#include <tencentcloud/vod/v20180717/model/FileReviewInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

FileReviewInfo::FileReviewInfo() :
    m_mediaReviewInfoHasBeenSet(false),
    m_coverReviewInfoHasBeenSet(false)
{
}

CoreInternalOutcome FileReviewInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MediaReviewInfo") && !value["MediaReviewInfo"].IsNull())
    {
        if (!value["MediaReviewInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FileReviewInfo.MediaReviewInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mediaReviewInfo.Deserialize(value["MediaReviewInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mediaReviewInfoHasBeenSet = true;
    }

    if (value.HasMember("CoverReviewInfo") && !value["CoverReviewInfo"].IsNull())
    {
        if (!value["CoverReviewInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FileReviewInfo.CoverReviewInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_coverReviewInfo.Deserialize(value["CoverReviewInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_coverReviewInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileReviewInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mediaReviewInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaReviewInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mediaReviewInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_coverReviewInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoverReviewInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_coverReviewInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


ReviewInfo FileReviewInfo::GetMediaReviewInfo() const
{
    return m_mediaReviewInfo;
}

void FileReviewInfo::SetMediaReviewInfo(const ReviewInfo& _mediaReviewInfo)
{
    m_mediaReviewInfo = _mediaReviewInfo;
    m_mediaReviewInfoHasBeenSet = true;
}

bool FileReviewInfo::MediaReviewInfoHasBeenSet() const
{
    return m_mediaReviewInfoHasBeenSet;
}

ReviewInfo FileReviewInfo::GetCoverReviewInfo() const
{
    return m_coverReviewInfo;
}

void FileReviewInfo::SetCoverReviewInfo(const ReviewInfo& _coverReviewInfo)
{
    m_coverReviewInfo = _coverReviewInfo;
    m_coverReviewInfoHasBeenSet = true;
}

bool FileReviewInfo::CoverReviewInfoHasBeenSet() const
{
    return m_coverReviewInfoHasBeenSet;
}

