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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_CREATECUSTOMIMAGEREQUEST_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_CREATECUSTOMIMAGEREQUEST_H_

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
                * CreateCustomImage请求参数结构体
                */
                class CreateCustomImageRequest : public AbstractModel
                {
                public:
                    CreateCustomImageRequest();
                    ~CreateCustomImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用于制作镜像的物理机ID
                     * @return InstanceId 用于制作镜像的物理机ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置用于制作镜像的物理机ID
                     * @param _instanceId 用于制作镜像的物理机ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取镜像别名
                     * @return ImageName 镜像别名
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置镜像别名
                     * @param _imageName 镜像别名
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
                     * 获取镜像描述
                     * @return ImageDescription 镜像描述
                     * 
                     */
                    std::string GetImageDescription() const;

                    /**
                     * 设置镜像描述
                     * @param _imageDescription 镜像描述
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
                     * 用于制作镜像的物理机ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 镜像别名
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 镜像描述
                     */
                    std::string m_imageDescription;
                    bool m_imageDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_CREATECUSTOMIMAGEREQUEST_H_
