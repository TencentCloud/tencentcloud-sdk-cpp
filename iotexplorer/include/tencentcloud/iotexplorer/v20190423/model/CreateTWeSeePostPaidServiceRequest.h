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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATETWESEEPOSTPAIDSERVICEREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATETWESEEPOSTPAIDSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * CreateTWeSeePostPaidService请求参数结构体
                */
                class CreateTWeSeePostPaidServiceRequest : public AbstractModel
                {
                public:
                    CreateTWeSeePostPaidServiceRequest();
                    ~CreateTWeSeePostPaidServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取算法类型。可选值：

- `VID_COMP`：视频理解
- `IMG_COMP`：图片理解
                     * @return ServiceType 算法类型。可选值：

- `VID_COMP`：视频理解
- `IMG_COMP`：图片理解
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置算法类型。可选值：

- `VID_COMP`：视频理解
- `IMG_COMP`：图片理解
                     * @param _serviceType 算法类型。可选值：

- `VID_COMP`：视频理解
- `IMG_COMP`：图片理解
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                private:

                    /**
                     * 算法类型。可选值：

- `VID_COMP`：视频理解
- `IMG_COMP`：图片理解
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATETWESEEPOSTPAIDSERVICEREQUEST_H_
