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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATETWESEESERVICEREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATETWESEESERVICEREQUEST_H_

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
                * CreateTWeSeeService请求参数结构体
                */
                class CreateTWeSeeServiceRequest : public AbstractModel
                {
                public:
                    CreateTWeSeeServiceRequest();
                    ~CreateTWeSeeServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务类型
1.VideoSummary
2.ImageSummary
                     * @return Service 服务类型
1.VideoSummary
2.ImageSummary
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置服务类型
1.VideoSummary
2.ImageSummary
                     * @param _service 服务类型
1.VideoSummary
2.ImageSummary
                     * 
                     */
                    void SetService(const std::string& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                private:

                    /**
                     * 服务类型
1.VideoSummary
2.ImageSummary
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATETWESEESERVICEREQUEST_H_
