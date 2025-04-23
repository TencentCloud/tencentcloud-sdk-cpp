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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_DELETEDEDICATEDCLUSTERIMAGECACHEREQUEST_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_DELETEDEDICATEDCLUSTERIMAGECACHEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * DeleteDedicatedClusterImageCache请求参数结构体
                */
                class DeleteDedicatedClusterImageCacheRequest : public AbstractModel
                {
                public:
                    DeleteDedicatedClusterImageCacheRequest();
                    ~DeleteDedicatedClusterImageCacheRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群id
                     * @return DedicatedClusterId 集群id
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置集群id
                     * @param _dedicatedClusterId 集群id
                     * 
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

                    /**
                     * 获取镜像id
                     * @return ImageId 镜像id
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置镜像id
                     * @param _imageId 镜像id
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                    /**
                     * 镜像id
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_DELETEDEDICATEDCLUSTERIMAGECACHEREQUEST_H_
