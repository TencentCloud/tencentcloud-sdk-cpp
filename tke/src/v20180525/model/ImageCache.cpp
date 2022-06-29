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

#include <tencentcloud/tke/v20180525/model/ImageCache.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ImageCache::ImageCache() :
    m_imageCacheIdHasBeenSet(false),
    m_imageCacheNameHasBeenSet(false),
    m_imageCacheSizeHasBeenSet(false),
    m_imagesHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_expireDateTimeHasBeenSet(false),
    m_eventsHasBeenSet(false),
    m_lastMatchedTimeHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome ImageCache::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageCacheId") && !value["ImageCacheId"].IsNull())
    {
        if (!value["ImageCacheId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageCache.ImageCacheId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageCacheId = string(value["ImageCacheId"].GetString());
        m_imageCacheIdHasBeenSet = true;
    }

    if (value.HasMember("ImageCacheName") && !value["ImageCacheName"].IsNull())
    {
        if (!value["ImageCacheName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageCache.ImageCacheName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageCacheName = string(value["ImageCacheName"].GetString());
        m_imageCacheNameHasBeenSet = true;
    }

    if (value.HasMember("ImageCacheSize") && !value["ImageCacheSize"].IsNull())
    {
        if (!value["ImageCacheSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageCache.ImageCacheSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageCacheSize = value["ImageCacheSize"].GetUint64();
        m_imageCacheSizeHasBeenSet = true;
    }

    if (value.HasMember("Images") && !value["Images"].IsNull())
    {
        if (!value["Images"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageCache.Images` is not array type"));

        const rapidjson::Value &tmpValue = value["Images"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_images.push_back((*itr).GetString());
        }
        m_imagesHasBeenSet = true;
    }

    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageCache.CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(value["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireDateTime") && !value["ExpireDateTime"].IsNull())
    {
        if (!value["ExpireDateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageCache.ExpireDateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireDateTime = string(value["ExpireDateTime"].GetString());
        m_expireDateTimeHasBeenSet = true;
    }

    if (value.HasMember("Events") && !value["Events"].IsNull())
    {
        if (!value["Events"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageCache.Events` is not array type"));

        const rapidjson::Value &tmpValue = value["Events"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ImageCacheEvent item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_events.push_back(item);
        }
        m_eventsHasBeenSet = true;
    }

    if (value.HasMember("LastMatchedTime") && !value["LastMatchedTime"].IsNull())
    {
        if (!value["LastMatchedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageCache.LastMatchedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastMatchedTime = string(value["LastMatchedTime"].GetString());
        m_lastMatchedTimeHasBeenSet = true;
    }

    if (value.HasMember("SnapshotId") && !value["SnapshotId"].IsNull())
    {
        if (!value["SnapshotId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageCache.SnapshotId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotId = string(value["SnapshotId"].GetString());
        m_snapshotIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageCache.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageCache::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageCacheIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageCacheId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageCacheId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageCacheNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageCacheName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageCacheName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageCacheSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageCacheSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageCacheSize, allocator);
    }

    if (m_imagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Images";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_images.begin(); itr != m_images.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireDateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireDateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireDateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_eventsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Events";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_events.begin(); itr != m_events.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_lastMatchedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastMatchedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastMatchedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string ImageCache::GetImageCacheId() const
{
    return m_imageCacheId;
}

void ImageCache::SetImageCacheId(const string& _imageCacheId)
{
    m_imageCacheId = _imageCacheId;
    m_imageCacheIdHasBeenSet = true;
}

bool ImageCache::ImageCacheIdHasBeenSet() const
{
    return m_imageCacheIdHasBeenSet;
}

string ImageCache::GetImageCacheName() const
{
    return m_imageCacheName;
}

void ImageCache::SetImageCacheName(const string& _imageCacheName)
{
    m_imageCacheName = _imageCacheName;
    m_imageCacheNameHasBeenSet = true;
}

bool ImageCache::ImageCacheNameHasBeenSet() const
{
    return m_imageCacheNameHasBeenSet;
}

uint64_t ImageCache::GetImageCacheSize() const
{
    return m_imageCacheSize;
}

void ImageCache::SetImageCacheSize(const uint64_t& _imageCacheSize)
{
    m_imageCacheSize = _imageCacheSize;
    m_imageCacheSizeHasBeenSet = true;
}

bool ImageCache::ImageCacheSizeHasBeenSet() const
{
    return m_imageCacheSizeHasBeenSet;
}

vector<string> ImageCache::GetImages() const
{
    return m_images;
}

void ImageCache::SetImages(const vector<string>& _images)
{
    m_images = _images;
    m_imagesHasBeenSet = true;
}

bool ImageCache::ImagesHasBeenSet() const
{
    return m_imagesHasBeenSet;
}

string ImageCache::GetCreationTime() const
{
    return m_creationTime;
}

void ImageCache::SetCreationTime(const string& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool ImageCache::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

string ImageCache::GetExpireDateTime() const
{
    return m_expireDateTime;
}

void ImageCache::SetExpireDateTime(const string& _expireDateTime)
{
    m_expireDateTime = _expireDateTime;
    m_expireDateTimeHasBeenSet = true;
}

bool ImageCache::ExpireDateTimeHasBeenSet() const
{
    return m_expireDateTimeHasBeenSet;
}

vector<ImageCacheEvent> ImageCache::GetEvents() const
{
    return m_events;
}

void ImageCache::SetEvents(const vector<ImageCacheEvent>& _events)
{
    m_events = _events;
    m_eventsHasBeenSet = true;
}

bool ImageCache::EventsHasBeenSet() const
{
    return m_eventsHasBeenSet;
}

string ImageCache::GetLastMatchedTime() const
{
    return m_lastMatchedTime;
}

void ImageCache::SetLastMatchedTime(const string& _lastMatchedTime)
{
    m_lastMatchedTime = _lastMatchedTime;
    m_lastMatchedTimeHasBeenSet = true;
}

bool ImageCache::LastMatchedTimeHasBeenSet() const
{
    return m_lastMatchedTimeHasBeenSet;
}

string ImageCache::GetSnapshotId() const
{
    return m_snapshotId;
}

void ImageCache::SetSnapshotId(const string& _snapshotId)
{
    m_snapshotId = _snapshotId;
    m_snapshotIdHasBeenSet = true;
}

bool ImageCache::SnapshotIdHasBeenSet() const
{
    return m_snapshotIdHasBeenSet;
}

string ImageCache::GetStatus() const
{
    return m_status;
}

void ImageCache::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ImageCache::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

