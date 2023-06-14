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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_GETMOSTSUITABLEIMAGECACHERESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_GETMOSTSUITABLEIMAGECACHERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ImageCache.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * GetMostSuitableImageCache返回参数结构体
                */
                class GetMostSuitableImageCacheResponse : public AbstractModel
                {
                public:
                    GetMostSuitableImageCacheResponse();
                    ~GetMostSuitableImageCacheResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取是否有匹配的镜像缓存
                     * @return Found 是否有匹配的镜像缓存
                     * 
                     */
                    bool GetFound() const;

                    /**
                     * 判断参数 Found 是否已赋值
                     * @return Found 是否已赋值
                     * 
                     */
                    bool FoundHasBeenSet() const;

                    /**
                     * 获取匹配的镜像缓存
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageCache 匹配的镜像缓存
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageCache GetImageCache() const;

                    /**
                     * 判断参数 ImageCache 是否已赋值
                     * @return ImageCache 是否已赋值
                     * 
                     */
                    bool ImageCacheHasBeenSet() const;

                private:

                    /**
                     * 是否有匹配的镜像缓存
                     */
                    bool m_found;
                    bool m_foundHasBeenSet;

                    /**
                     * 匹配的镜像缓存
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageCache m_imageCache;
                    bool m_imageCacheHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_GETMOSTSUITABLEIMAGECACHERESPONSE_H_
