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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DELETEIMAGECACHESREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DELETEIMAGECACHESREQUEST_H_

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
                * DeleteImageCaches请求参数结构体
                */
                class DeleteImageCachesRequest : public AbstractModel
                {
                public:
                    DeleteImageCachesRequest();
                    ~DeleteImageCachesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取镜像缓存Id数组
                     * @return ImageCacheIds 镜像缓存Id数组
                     */
                    std::vector<std::string> GetImageCacheIds() const;

                    /**
                     * 设置镜像缓存Id数组
                     * @param ImageCacheIds 镜像缓存Id数组
                     */
                    void SetImageCacheIds(const std::vector<std::string>& _imageCacheIds);

                    /**
                     * 判断参数 ImageCacheIds 是否已赋值
                     * @return ImageCacheIds 是否已赋值
                     */
                    bool ImageCacheIdsHasBeenSet() const;

                private:

                    /**
                     * 镜像缓存Id数组
                     */
                    std::vector<std::string> m_imageCacheIds;
                    bool m_imageCacheIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DELETEIMAGECACHESREQUEST_H_
