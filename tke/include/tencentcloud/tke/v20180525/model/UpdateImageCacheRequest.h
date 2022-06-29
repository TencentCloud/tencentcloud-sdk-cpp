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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_UPDATEIMAGECACHEREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_UPDATEIMAGECACHEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * UpdateImageCache请求参数结构体
                */
                class UpdateImageCacheRequest : public AbstractModel
                {
                public:
                    UpdateImageCacheRequest();
                    ~UpdateImageCacheRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取镜像缓存Id
                     * @return ImageCacheId 镜像缓存Id
                     */
                    std::string GetImageCacheId() const;

                    /**
                     * 设置镜像缓存Id
                     * @param ImageCacheId 镜像缓存Id
                     */
                    void SetImageCacheId(const std::string& _imageCacheId);

                    /**
                     * 判断参数 ImageCacheId 是否已赋值
                     * @return ImageCacheId 是否已赋值
                     */
                    bool ImageCacheIdHasBeenSet() const;

                    /**
                     * 获取镜像缓存名称
                     * @return ImageCacheName 镜像缓存名称
                     */
                    std::string GetImageCacheName() const;

                    /**
                     * 设置镜像缓存名称
                     * @param ImageCacheName 镜像缓存名称
                     */
                    void SetImageCacheName(const std::string& _imageCacheName);

                    /**
                     * 判断参数 ImageCacheName 是否已赋值
                     * @return ImageCacheName 是否已赋值
                     */
                    bool ImageCacheNameHasBeenSet() const;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_UPDATEIMAGECACHEREQUEST_H_
