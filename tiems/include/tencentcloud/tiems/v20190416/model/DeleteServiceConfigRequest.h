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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_DELETESERVICECONFIGREQUEST_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_DELETESERVICECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiems
    {
        namespace V20190416
        {
            namespace Model
            {
                /**
                * DeleteServiceConfig请求参数结构体
                */
                class DeleteServiceConfigRequest : public AbstractModel
                {
                public:
                    DeleteServiceConfigRequest();
                    ~DeleteServiceConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务配置Id
                     * @return ServiceConfigId 服务配置Id
                     * 
                     */
                    std::string GetServiceConfigId() const;

                    /**
                     * 设置服务配置Id
                     * @param _serviceConfigId 服务配置Id
                     * 
                     */
                    void SetServiceConfigId(const std::string& _serviceConfigId);

                    /**
                     * 判断参数 ServiceConfigId 是否已赋值
                     * @return ServiceConfigId 是否已赋值
                     * 
                     */
                    bool ServiceConfigIdHasBeenSet() const;

                    /**
                     * 获取服务配置名称
                     * @return ServiceConfigName 服务配置名称
                     * 
                     */
                    std::string GetServiceConfigName() const;

                    /**
                     * 设置服务配置名称
                     * @param _serviceConfigName 服务配置名称
                     * 
                     */
                    void SetServiceConfigName(const std::string& _serviceConfigName);

                    /**
                     * 判断参数 ServiceConfigName 是否已赋值
                     * @return ServiceConfigName 是否已赋值
                     * 
                     */
                    bool ServiceConfigNameHasBeenSet() const;

                private:

                    /**
                     * 服务配置Id
                     */
                    std::string m_serviceConfigId;
                    bool m_serviceConfigIdHasBeenSet;

                    /**
                     * 服务配置名称
                     */
                    std::string m_serviceConfigName;
                    bool m_serviceConfigNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_DELETESERVICECONFIGREQUEST_H_
