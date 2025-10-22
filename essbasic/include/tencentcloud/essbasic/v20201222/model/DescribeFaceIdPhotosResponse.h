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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBEFACEIDPHOTOSRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBEFACEIDPHOTOSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20201222/model/FaceIdPhoto.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * DescribeFaceIdPhotos返回参数结构体
                */
                class DescribeFaceIdPhotosResponse : public AbstractModel
                {
                public:
                    DescribeFaceIdPhotosResponse();
                    ~DescribeFaceIdPhotosResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取照片信息列表
                     * @return Photos 照片信息列表
                     * 
                     */
                    std::vector<FaceIdPhoto> GetPhotos() const;

                    /**
                     * 判断参数 Photos 是否已赋值
                     * @return Photos 是否已赋值
                     * 
                     */
                    bool PhotosHasBeenSet() const;

                private:

                    /**
                     * 照片信息列表
                     */
                    std::vector<FaceIdPhoto> m_photos;
                    bool m_photosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBEFACEIDPHOTOSRESPONSE_H_
