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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_CREATEIMAGEREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_CREATEIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * CreateImage请求参数结构体
                */
                class CreateImageRequest : public AbstractModel
                {
                public:
                    CreateImageRequest();
                    ~CreateImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取镜像名称。
                     * @return ImageName 镜像名称。
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置镜像名称。
                     * @param _imageName 镜像名称。
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
                     * 获取需要制作镜像的实例ID。
                     * @return InstanceId 需要制作镜像的实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置需要制作镜像的实例ID。
                     * @param _instanceId 需要制作镜像的实例ID。
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
                     * 获取镜像描述。
                     * @return ImageDescription 镜像描述。
                     * 
                     */
                    std::string GetImageDescription() const;

                    /**
                     * 设置镜像描述。
                     * @param _imageDescription 镜像描述。
                     * 
                     */
                    void SetImageDescription(const std::string& _imageDescription);

                    /**
                     * 判断参数 ImageDescription 是否已赋值
                     * @return ImageDescription 是否已赋值
                     * 
                     */
                    bool ImageDescriptionHasBeenSet() const;

                    /**
                     * 获取是否执行强制关机以制作镜像。取值范围：
TRUE：表示自动关机后制作镜像
FALSE：表示开机状态制作，目前不支持，需要先手动关机
默认取值：FALSE。
                     * @return ForcePoweroff 是否执行强制关机以制作镜像。取值范围：
TRUE：表示自动关机后制作镜像
FALSE：表示开机状态制作，目前不支持，需要先手动关机
默认取值：FALSE。
                     * 
                     */
                    std::string GetForcePoweroff() const;

                    /**
                     * 设置是否执行强制关机以制作镜像。取值范围：
TRUE：表示自动关机后制作镜像
FALSE：表示开机状态制作，目前不支持，需要先手动关机
默认取值：FALSE。
                     * @param _forcePoweroff 是否执行强制关机以制作镜像。取值范围：
TRUE：表示自动关机后制作镜像
FALSE：表示开机状态制作，目前不支持，需要先手动关机
默认取值：FALSE。
                     * 
                     */
                    void SetForcePoweroff(const std::string& _forcePoweroff);

                    /**
                     * 判断参数 ForcePoweroff 是否已赋值
                     * @return ForcePoweroff 是否已赋值
                     * 
                     */
                    bool ForcePoweroffHasBeenSet() const;

                private:

                    /**
                     * 镜像名称。
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 需要制作镜像的实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 镜像描述。
                     */
                    std::string m_imageDescription;
                    bool m_imageDescriptionHasBeenSet;

                    /**
                     * 是否执行强制关机以制作镜像。取值范围：
TRUE：表示自动关机后制作镜像
FALSE：表示开机状态制作，目前不支持，需要先手动关机
默认取值：FALSE。
                     */
                    std::string m_forcePoweroff;
                    bool m_forcePoweroffHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_CREATEIMAGEREQUEST_H_
