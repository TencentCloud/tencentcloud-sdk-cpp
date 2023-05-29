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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYIMAGEATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYIMAGEATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyImageAttribute请求参数结构体
                */
                class ModifyImageAttributeRequest : public AbstractModel
                {
                public:
                    ModifyImageAttributeRequest();
                    ~ModifyImageAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取镜像ID，形如`img-gvbnzy6f`。镜像ID可以通过如下方式获取：<br><li>通过[DescribeImages](https://cloud.tencent.com/document/api/213/15715)接口返回的`ImageId`获取。<br><li>通过[镜像控制台](https://console.cloud.tencent.com/cvm/image)获取。
                     * @return ImageId 镜像ID，形如`img-gvbnzy6f`。镜像ID可以通过如下方式获取：<br><li>通过[DescribeImages](https://cloud.tencent.com/document/api/213/15715)接口返回的`ImageId`获取。<br><li>通过[镜像控制台](https://console.cloud.tencent.com/cvm/image)获取。
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置镜像ID，形如`img-gvbnzy6f`。镜像ID可以通过如下方式获取：<br><li>通过[DescribeImages](https://cloud.tencent.com/document/api/213/15715)接口返回的`ImageId`获取。<br><li>通过[镜像控制台](https://console.cloud.tencent.com/cvm/image)获取。
                     * @param ImageId 镜像ID，形如`img-gvbnzy6f`。镜像ID可以通过如下方式获取：<br><li>通过[DescribeImages](https://cloud.tencent.com/document/api/213/15715)接口返回的`ImageId`获取。<br><li>通过[镜像控制台](https://console.cloud.tencent.com/cvm/image)获取。
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取设置新的镜像名称；必须满足下列限制：<br> <li> 不得超过60个字符。<br> <li> 镜像名称不能与已有镜像重复。
                     * @return ImageName 设置新的镜像名称；必须满足下列限制：<br> <li> 不得超过60个字符。<br> <li> 镜像名称不能与已有镜像重复。
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置设置新的镜像名称；必须满足下列限制：<br> <li> 不得超过60个字符。<br> <li> 镜像名称不能与已有镜像重复。
                     * @param ImageName 设置新的镜像名称；必须满足下列限制：<br> <li> 不得超过60个字符。<br> <li> 镜像名称不能与已有镜像重复。
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取设置新的镜像描述；必须满足下列限制：<br> <li> 不得超过60个字符。
                     * @return ImageDescription 设置新的镜像描述；必须满足下列限制：<br> <li> 不得超过60个字符。
                     */
                    std::string GetImageDescription() const;

                    /**
                     * 设置设置新的镜像描述；必须满足下列限制：<br> <li> 不得超过60个字符。
                     * @param ImageDescription 设置新的镜像描述；必须满足下列限制：<br> <li> 不得超过60个字符。
                     */
                    void SetImageDescription(const std::string& _imageDescription);

                    /**
                     * 判断参数 ImageDescription 是否已赋值
                     * @return ImageDescription 是否已赋值
                     */
                    bool ImageDescriptionHasBeenSet() const;

                private:

                    /**
                     * 镜像ID，形如`img-gvbnzy6f`。镜像ID可以通过如下方式获取：<br><li>通过[DescribeImages](https://cloud.tencent.com/document/api/213/15715)接口返回的`ImageId`获取。<br><li>通过[镜像控制台](https://console.cloud.tencent.com/cvm/image)获取。
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 设置新的镜像名称；必须满足下列限制：<br> <li> 不得超过60个字符。<br> <li> 镜像名称不能与已有镜像重复。
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 设置新的镜像描述；必须满足下列限制：<br> <li> 不得超过60个字符。
                     */
                    std::string m_imageDescription;
                    bool m_imageDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYIMAGEATTRIBUTEREQUEST_H_
