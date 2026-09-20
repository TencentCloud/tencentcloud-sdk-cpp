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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATEAUDITIMAGESREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATEAUDITIMAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/AuditImage.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * CreateAuditImages请求参数结构体
                */
                class CreateAuditImagesRequest : public AbstractModel
                {
                public:
                    CreateAuditImagesRequest();
                    ~CreateAuditImagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>样本图片列表。</p>
                     * @return Images <p>样本图片列表。</p>
                     * 
                     */
                    std::vector<AuditImage> GetImages() const;

                    /**
                     * 设置<p>样本图片列表。</p>
                     * @param _images <p>样本图片列表。</p>
                     * 
                     */
                    void SetImages(const std::vector<AuditImage>& _images);

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     * 
                     */
                    bool ImagesHasBeenSet() const;

                private:

                    /**
                     * <p>样本图片列表。</p>
                     */
                    std::vector<AuditImage> m_images;
                    bool m_imagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATEAUDITIMAGESREQUEST_H_
