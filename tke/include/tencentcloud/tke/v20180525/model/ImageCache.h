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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_IMAGECACHE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_IMAGECACHE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ImageCacheEvent.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 镜像缓存的信息
                */
                class ImageCache : public AbstractModel
                {
                public:
                    ImageCache();
                    ~ImageCache() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取镜像缓存Id
                     * @return ImageCacheId 镜像缓存Id
                     * 
                     */
                    std::string GetImageCacheId() const;

                    /**
                     * 设置镜像缓存Id
                     * @param _imageCacheId 镜像缓存Id
                     * 
                     */
                    void SetImageCacheId(const std::string& _imageCacheId);

                    /**
                     * 判断参数 ImageCacheId 是否已赋值
                     * @return ImageCacheId 是否已赋值
                     * 
                     */
                    bool ImageCacheIdHasBeenSet() const;

                    /**
                     * 获取镜像缓存名称
                     * @return ImageCacheName 镜像缓存名称
                     * 
                     */
                    std::string GetImageCacheName() const;

                    /**
                     * 设置镜像缓存名称
                     * @param _imageCacheName 镜像缓存名称
                     * 
                     */
                    void SetImageCacheName(const std::string& _imageCacheName);

                    /**
                     * 判断参数 ImageCacheName 是否已赋值
                     * @return ImageCacheName 是否已赋值
                     * 
                     */
                    bool ImageCacheNameHasBeenSet() const;

                    /**
                     * 获取镜像缓存大小。单位：GiB
                     * @return ImageCacheSize 镜像缓存大小。单位：GiB
                     * 
                     */
                    uint64_t GetImageCacheSize() const;

                    /**
                     * 设置镜像缓存大小。单位：GiB
                     * @param _imageCacheSize 镜像缓存大小。单位：GiB
                     * 
                     */
                    void SetImageCacheSize(const uint64_t& _imageCacheSize);

                    /**
                     * 判断参数 ImageCacheSize 是否已赋值
                     * @return ImageCacheSize 是否已赋值
                     * 
                     */
                    bool ImageCacheSizeHasBeenSet() const;

                    /**
                     * 获取镜像缓存包含的镜像列表
                     * @return Images 镜像缓存包含的镜像列表
                     * 
                     */
                    std::vector<std::string> GetImages() const;

                    /**
                     * 设置镜像缓存包含的镜像列表
                     * @param _images 镜像缓存包含的镜像列表
                     * 
                     */
                    void SetImages(const std::vector<std::string>& _images);

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     * 
                     */
                    bool ImagesHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreationTime 创建时间
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置创建时间
                     * @param _creationTime 创建时间
                     * 
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取到期时间
                     * @return ExpireDateTime 到期时间
                     * 
                     */
                    std::string GetExpireDateTime() const;

                    /**
                     * 设置到期时间
                     * @param _expireDateTime 到期时间
                     * 
                     */
                    void SetExpireDateTime(const std::string& _expireDateTime);

                    /**
                     * 判断参数 ExpireDateTime 是否已赋值
                     * @return ExpireDateTime 是否已赋值
                     * 
                     */
                    bool ExpireDateTimeHasBeenSet() const;

                    /**
                     * 获取镜像缓存事件信息
                     * @return Events 镜像缓存事件信息
                     * 
                     */
                    std::vector<ImageCacheEvent> GetEvents() const;

                    /**
                     * 设置镜像缓存事件信息
                     * @param _events 镜像缓存事件信息
                     * 
                     */
                    void SetEvents(const std::vector<ImageCacheEvent>& _events);

                    /**
                     * 判断参数 Events 是否已赋值
                     * @return Events 是否已赋值
                     * 
                     */
                    bool EventsHasBeenSet() const;

                    /**
                     * 获取最新一次匹配到镜像缓存的时间
                     * @return LastMatchedTime 最新一次匹配到镜像缓存的时间
                     * 
                     */
                    std::string GetLastMatchedTime() const;

                    /**
                     * 设置最新一次匹配到镜像缓存的时间
                     * @param _lastMatchedTime 最新一次匹配到镜像缓存的时间
                     * 
                     */
                    void SetLastMatchedTime(const std::string& _lastMatchedTime);

                    /**
                     * 判断参数 LastMatchedTime 是否已赋值
                     * @return LastMatchedTime 是否已赋值
                     * 
                     */
                    bool LastMatchedTimeHasBeenSet() const;

                    /**
                     * 获取镜像缓存对应的快照Id
                     * @return SnapshotId 镜像缓存对应的快照Id
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置镜像缓存对应的快照Id
                     * @param _snapshotId 镜像缓存对应的快照Id
                     * 
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     * 
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取镜像缓存状态，可能取值：
Pending：创建中
Ready：创建完成
Failed：创建失败
Updating：更新中
UpdateFailed：更新失败
只有状态为Ready时，才能正常使用镜像缓存
                     * @return Status 镜像缓存状态，可能取值：
Pending：创建中
Ready：创建完成
Failed：创建失败
Updating：更新中
UpdateFailed：更新失败
只有状态为Ready时，才能正常使用镜像缓存
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置镜像缓存状态，可能取值：
Pending：创建中
Ready：创建完成
Failed：创建失败
Updating：更新中
UpdateFailed：更新失败
只有状态为Ready时，才能正常使用镜像缓存
                     * @param _status 镜像缓存状态，可能取值：
Pending：创建中
Ready：创建完成
Failed：创建失败
Updating：更新中
UpdateFailed：更新失败
只有状态为Ready时，才能正常使用镜像缓存
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 镜像缓存Id
                     */
                    std::string m_imageCacheId;
                    bool m_imageCacheIdHasBeenSet;

                    /**
                     * 镜像缓存名称
                     */
                    std::string m_imageCacheName;
                    bool m_imageCacheNameHasBeenSet;

                    /**
                     * 镜像缓存大小。单位：GiB
                     */
                    uint64_t m_imageCacheSize;
                    bool m_imageCacheSizeHasBeenSet;

                    /**
                     * 镜像缓存包含的镜像列表
                     */
                    std::vector<std::string> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 到期时间
                     */
                    std::string m_expireDateTime;
                    bool m_expireDateTimeHasBeenSet;

                    /**
                     * 镜像缓存事件信息
                     */
                    std::vector<ImageCacheEvent> m_events;
                    bool m_eventsHasBeenSet;

                    /**
                     * 最新一次匹配到镜像缓存的时间
                     */
                    std::string m_lastMatchedTime;
                    bool m_lastMatchedTimeHasBeenSet;

                    /**
                     * 镜像缓存对应的快照Id
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * 镜像缓存状态，可能取值：
Pending：创建中
Ready：创建完成
Failed：创建失败
Updating：更新中
UpdateFailed：更新失败
只有状态为Ready时，才能正常使用镜像缓存
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_IMAGECACHE_H_
