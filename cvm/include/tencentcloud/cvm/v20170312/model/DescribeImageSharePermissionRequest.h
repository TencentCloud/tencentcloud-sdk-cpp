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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEIMAGESHAREPERMISSIONREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEIMAGESHAREPERMISSIONREQUEST_H_

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
                * DescribeImageSharePermission请求参数结构体
                */
                class DescribeImageSharePermissionRequest : public AbstractModel
                {
                public:
                    DescribeImageSharePermissionRequest();
                    ~DescribeImageSharePermissionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要共享的镜像 ID，可通过 [DescribeImages](https://cloud.tencent.com/document/api/213/15715) 接口返回的`ImageId`获取。
                     * @return ImageId 需要共享的镜像 ID，可通过 [DescribeImages](https://cloud.tencent.com/document/api/213/15715) 接口返回的`ImageId`获取。
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置需要共享的镜像 ID，可通过 [DescribeImages](https://cloud.tencent.com/document/api/213/15715) 接口返回的`ImageId`获取。
                     * @param _imageId 需要共享的镜像 ID，可通过 [DescribeImages](https://cloud.tencent.com/document/api/213/15715) 接口返回的`ImageId`获取。
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
                     * 需要共享的镜像 ID，可通过 [DescribeImages](https://cloud.tencent.com/document/api/213/15715) 接口返回的`ImageId`获取。
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEIMAGESHAREPERMISSIONREQUEST_H_
