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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_MODIFYCUSTOMIMAGEATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_MODIFYCUSTOMIMAGEATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * ModifyCustomImageAttribute请求参数结构体
                */
                class ModifyCustomImageAttributeRequest : public AbstractModel
                {
                public:
                    ModifyCustomImageAttributeRequest();
                    ~ModifyCustomImageAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取镜像ID
                     * @return ImageId 镜像ID
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置镜像ID
                     * @param _imageId 镜像ID
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取设置新的镜像名
                     * @return ImageName 设置新的镜像名
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置设置新的镜像名
                     * @param _imageName 设置新的镜像名
                     * 
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     * 
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取设置新的镜像描述
                     * @return ImageDescription 设置新的镜像描述
                     * 
                     */
                    std::string GetImageDescription() const;

                    /**
                     * 设置设置新的镜像描述
                     * @param _imageDescription 设置新的镜像描述
                     * 
                     */
                    void SetImageDescription(const std::string& _imageDescription);

                    /**
                     * 判断参数 ImageDescription 是否已赋值
                     * @return ImageDescription 是否已赋值
                     * 
                     */
                    bool ImageDescriptionHasBeenSet() const;

                private:

                    /**
                     * 镜像ID
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 设置新的镜像名
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 设置新的镜像描述
                     */
                    std::string m_imageDescription;
                    bool m_imageDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_MODIFYCUSTOMIMAGEATTRIBUTEREQUEST_H_
