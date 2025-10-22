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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYIMAGESHAREPERMISSIONREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYIMAGESHAREPERMISSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * ModifyImageSharePermission请求参数结构体
                */
                class ModifyImageSharePermissionRequest : public AbstractModel
                {
                public:
                    ModifyImageSharePermissionRequest();
                    ~ModifyImageSharePermissionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取镜像 ID。可通过[DescribeImages](https://cloud.tencent.com/document/api/213/15715)接口返回值中的ImageId获取。
                     * @return ImageId 镜像 ID。可通过[DescribeImages](https://cloud.tencent.com/document/api/213/15715)接口返回值中的ImageId获取。
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置镜像 ID。可通过[DescribeImages](https://cloud.tencent.com/document/api/213/15715)接口返回值中的ImageId获取。
                     * @param _imageId 镜像 ID。可通过[DescribeImages](https://cloud.tencent.com/document/api/213/15715)接口返回值中的ImageId获取。
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
                     * 获取共享属性，包括 SHARE，CANCEL。其中SHARE代表共享，CANCEL代表取消共享。
                     * @return Permission 共享属性，包括 SHARE，CANCEL。其中SHARE代表共享，CANCEL代表取消共享。
                     * 
                     */
                    std::string GetPermission() const;

                    /**
                     * 设置共享属性，包括 SHARE，CANCEL。其中SHARE代表共享，CANCEL代表取消共享。
                     * @param _permission 共享属性，包括 SHARE，CANCEL。其中SHARE代表共享，CANCEL代表取消共享。
                     * 
                     */
                    void SetPermission(const std::string& _permission);

                    /**
                     * 判断参数 Permission 是否已赋值
                     * @return Permission 是否已赋值
                     * 
                     */
                    bool PermissionHasBeenSet() const;

                private:

                    /**
                     * 镜像 ID。可通过[DescribeImages](https://cloud.tencent.com/document/api/213/15715)接口返回值中的ImageId获取。
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 共享属性，包括 SHARE，CANCEL。其中SHARE代表共享，CANCEL代表取消共享。
                     */
                    std::string m_permission;
                    bool m_permissionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYIMAGESHAREPERMISSIONREQUEST_H_
