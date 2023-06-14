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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DELETEMICROSERVICEREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DELETEMICROSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DeleteMicroservice请求参数结构体
                */
                class DeleteMicroserviceRequest : public AbstractModel
                {
                public:
                    DeleteMicroserviceRequest();
                    ~DeleteMicroserviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取微服务ID
                     * @return MicroserviceId 微服务ID
                     * 
                     */
                    std::string GetMicroserviceId() const;

                    /**
                     * 设置微服务ID
                     * @param _microserviceId 微服务ID
                     * 
                     */
                    void SetMicroserviceId(const std::string& _microserviceId);

                    /**
                     * 判断参数 MicroserviceId 是否已赋值
                     * @return MicroserviceId 是否已赋值
                     * 
                     */
                    bool MicroserviceIdHasBeenSet() const;

                private:

                    /**
                     * 微服务ID
                     */
                    std::string m_microserviceId;
                    bool m_microserviceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DELETEMICROSERVICEREQUEST_H_
