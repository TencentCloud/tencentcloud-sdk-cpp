/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_BATCHGETVIDEOSNAPSHOTIMAGEURLDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_BATCHGETVIDEOSNAPSHOTIMAGEURLDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/ImageUrlInfo.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 批量获取截图图片URL列表信息
                */
                class BatchGetVideoSnapshotImageUrlData : public AbstractModel
                {
                public:
                    BatchGetVideoSnapshotImageUrlData();
                    ~BatchGetVideoSnapshotImageUrlData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>图片Url信息</p>
                     * @return Images <p>图片Url信息</p>
                     * 
                     */
                    std::vector<ImageUrlInfo> GetImages() const;

                    /**
                     * 设置<p>图片Url信息</p>
                     * @param _images <p>图片Url信息</p>
                     * 
                     */
                    void SetImages(const std::vector<ImageUrlInfo>& _images);

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     * 
                     */
                    bool ImagesHasBeenSet() const;

                    /**
                     * 获取<p>图片Url有效期</p><p>单位：秒</p><p>默认值：600</p>
                     * @return ImageUrlExpires <p>图片Url有效期</p><p>单位：秒</p><p>默认值：600</p>
                     * 
                     */
                    int64_t GetImageUrlExpires() const;

                    /**
                     * 设置<p>图片Url有效期</p><p>单位：秒</p><p>默认值：600</p>
                     * @param _imageUrlExpires <p>图片Url有效期</p><p>单位：秒</p><p>默认值：600</p>
                     * 
                     */
                    void SetImageUrlExpires(const int64_t& _imageUrlExpires);

                    /**
                     * 判断参数 ImageUrlExpires 是否已赋值
                     * @return ImageUrlExpires 是否已赋值
                     * 
                     */
                    bool ImageUrlExpiresHasBeenSet() const;

                private:

                    /**
                     * <p>图片Url信息</p>
                     */
                    std::vector<ImageUrlInfo> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * <p>图片Url有效期</p><p>单位：秒</p><p>默认值：600</p>
                     */
                    int64_t m_imageUrlExpires;
                    bool m_imageUrlExpiresHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_BATCHGETVIDEOSNAPSHOTIMAGEURLDATA_H_
