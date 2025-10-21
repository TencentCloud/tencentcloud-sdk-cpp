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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_DISTRIBUTEANDROIDINSTANCEIMAGETOHOSTSREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_DISTRIBUTEANDROIDINSTANCEIMAGETOHOSTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * DistributeAndroidInstanceImageToHosts请求参数结构体
                */
                class DistributeAndroidInstanceImageToHostsRequest : public AbstractModel
                {
                public:
                    DistributeAndroidInstanceImageToHostsRequest();
                    ~DistributeAndroidInstanceImageToHostsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取宿主机序列号数组
                     * @return HostSerialNumbers 宿主机序列号数组
                     * 
                     */
                    std::vector<std::string> GetHostSerialNumbers() const;

                    /**
                     * 设置宿主机序列号数组
                     * @param _hostSerialNumbers 宿主机序列号数组
                     * 
                     */
                    void SetHostSerialNumbers(const std::vector<std::string>& _hostSerialNumbers);

                    /**
                     * 判断参数 HostSerialNumbers 是否已赋值
                     * @return HostSerialNumbers 是否已赋值
                     * 
                     */
                    bool HostSerialNumbersHasBeenSet() const;

                    /**
                     * 获取实例镜像 ID
                     * @return ImageId 实例镜像 ID
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置实例镜像 ID
                     * @param _imageId 实例镜像 ID
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
                     * 宿主机序列号数组
                     */
                    std::vector<std::string> m_hostSerialNumbers;
                    bool m_hostSerialNumbersHasBeenSet;

                    /**
                     * 实例镜像 ID
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_DISTRIBUTEANDROIDINSTANCEIMAGETOHOSTSREQUEST_H_
