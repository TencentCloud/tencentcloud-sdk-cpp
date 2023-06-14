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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_UPLOADIMAGEREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_UPLOADIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * UploadImage请求参数结构体
                */
                class UploadImageRequest : public AbstractModel
                {
                public:
                    UploadImageRequest();
                    ~UploadImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资质照片，照片的base64编码。
                     * @return ImageFile 资质照片，照片的base64编码。
                     * 
                     */
                    std::string GetImageFile() const;

                    /**
                     * 设置资质照片，照片的base64编码。
                     * @param _imageFile 资质照片，照片的base64编码。
                     * 
                     */
                    void SetImageFile(const std::string& _imageFile);

                    /**
                     * 判断参数 ImageFile 是否已赋值
                     * @return ImageFile 是否已赋值
                     * 
                     */
                    bool ImageFileHasBeenSet() const;

                private:

                    /**
                     * 资质照片，照片的base64编码。
                     */
                    std::string m_imageFile;
                    bool m_imageFileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_UPLOADIMAGEREQUEST_H_
