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

#include <tencentcloud/iotvideo/v20211125/model/ThumbnailURLInfoList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20211125::Model;
using namespace std;

ThumbnailURLInfoList::ThumbnailURLInfoList() :
    m_thumbnailURLHasBeenSet(false),
    m_expireTimeHasBeenSet(false)
{
}

CoreInternalOutcome ThumbnailURLInfoList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ThumbnailURL") && !value["ThumbnailURL"].IsNull())
    {
        if (!value["ThumbnailURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ThumbnailURLInfoList.ThumbnailURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thumbnailURL = string(value["ThumbnailURL"].GetString());
        m_thumbnailURLHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ThumbnailURLInfoList.ExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetInt64();
        m_expireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ThumbnailURLInfoList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_thumbnailURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThumbnailURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_thumbnailURL.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

}


string ThumbnailURLInfoList::GetThumbnailURL() const
{
    return m_thumbnailURL;
}

void ThumbnailURLInfoList::SetThumbnailURL(const string& _thumbnailURL)
{
    m_thumbnailURL = _thumbnailURL;
    m_thumbnailURLHasBeenSet = true;
}

bool ThumbnailURLInfoList::ThumbnailURLHasBeenSet() const
{
    return m_thumbnailURLHasBeenSet;
}

int64_t ThumbnailURLInfoList::GetExpireTime() const
{
    return m_expireTime;
}

void ThumbnailURLInfoList::SetExpireTime(const int64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool ThumbnailURLInfoList::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

