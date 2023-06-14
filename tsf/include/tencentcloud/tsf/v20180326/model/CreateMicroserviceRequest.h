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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CREATEMICROSERVICEREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CREATEMICROSERVICEREQUEST_H_

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
                * CreateMicroservice请求参数结构体
                */
                class CreateMicroserviceRequest : public AbstractModel
                {
                public:
                    CreateMicroserviceRequest();
                    ~CreateMicroserviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取命名空间ID
                     * @return NamespaceId 命名空间ID
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间ID
                     * @param _namespaceId 命名空间ID
                     * 
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取微服务名称
                     * @return MicroserviceName 微服务名称
                     * 
                     */
                    std::string GetMicroserviceName() const;

                    /**
                     * 设置微服务名称
                     * @param _microserviceName 微服务名称
                     * 
                     */
                    void SetMicroserviceName(const std::string& _microserviceName);

                    /**
                     * 判断参数 MicroserviceName 是否已赋值
                     * @return MicroserviceName 是否已赋值
                     * 
                     */
                    bool MicroserviceNameHasBeenSet() const;

                    /**
                     * 获取微服务描述信息
                     * @return MicroserviceDesc 微服务描述信息
                     * 
                     */
                    std::string GetMicroserviceDesc() const;

                    /**
                     * 设置微服务描述信息
                     * @param _microserviceDesc 微服务描述信息
                     * 
                     */
                    void SetMicroserviceDesc(const std::string& _microserviceDesc);

                    /**
                     * 判断参数 MicroserviceDesc 是否已赋值
                     * @return MicroserviceDesc 是否已赋值
                     * 
                     */
                    bool MicroserviceDescHasBeenSet() const;

                private:

                    /**
                     * 命名空间ID
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 微服务名称
                     */
                    std::string m_microserviceName;
                    bool m_microserviceNameHasBeenSet;

                    /**
                     * 微服务描述信息
                     */
                    std::string m_microserviceDesc;
                    bool m_microserviceDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CREATEMICROSERVICEREQUEST_H_
