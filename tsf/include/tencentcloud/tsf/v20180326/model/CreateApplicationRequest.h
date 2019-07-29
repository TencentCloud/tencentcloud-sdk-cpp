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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CREATEAPPLICATIONREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CREATEAPPLICATIONREQUEST_H_

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
                * CreateApplication请求参数结构体
                */
                class CreateApplicationRequest : public AbstractModel
                {
                public:
                    CreateApplicationRequest();
                    ~CreateApplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用名称
                     * @return ApplicationName 应用名称
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置应用名称
                     * @param ApplicationName 应用名称
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取应用类型
                     * @return ApplicationType 应用类型
                     */
                    std::string GetApplicationType() const;

                    /**
                     * 设置应用类型
                     * @param ApplicationType 应用类型
                     */
                    void SetApplicationType(const std::string& _applicationType);

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     */
                    bool ApplicationTypeHasBeenSet() const;

                    /**
                     * 获取应用描述
                     * @return ApplicationDesc 应用描述
                     */
                    std::string GetApplicationDesc() const;

                    /**
                     * 设置应用描述
                     * @param ApplicationDesc 应用描述
                     */
                    void SetApplicationDesc(const std::string& _applicationDesc);

                    /**
                     * 判断参数 ApplicationDesc 是否已赋值
                     * @return ApplicationDesc 是否已赋值
                     */
                    bool ApplicationDescHasBeenSet() const;

                    /**
                     * 获取应用日志配置项，废弃参数
                     * @return ApplicationLogConfig 应用日志配置项，废弃参数
                     */
                    std::string GetApplicationLogConfig() const;

                    /**
                     * 设置应用日志配置项，废弃参数
                     * @param ApplicationLogConfig 应用日志配置项，废弃参数
                     */
                    void SetApplicationLogConfig(const std::string& _applicationLogConfig);

                    /**
                     * 判断参数 ApplicationLogConfig 是否已赋值
                     * @return ApplicationLogConfig 是否已赋值
                     */
                    bool ApplicationLogConfigHasBeenSet() const;

                    /**
                     * 获取应用微服务类型
                     * @return MicroserviceType 应用微服务类型
                     */
                    std::string GetMicroserviceType() const;

                    /**
                     * 设置应用微服务类型
                     * @param MicroserviceType 应用微服务类型
                     */
                    void SetMicroserviceType(const std::string& _microserviceType);

                    /**
                     * 判断参数 MicroserviceType 是否已赋值
                     * @return MicroserviceType 是否已赋值
                     */
                    bool MicroserviceTypeHasBeenSet() const;

                private:

                    /**
                     * 应用名称
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * 应用类型
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * 应用描述
                     */
                    std::string m_applicationDesc;
                    bool m_applicationDescHasBeenSet;

                    /**
                     * 应用日志配置项，废弃参数
                     */
                    std::string m_applicationLogConfig;
                    bool m_applicationLogConfigHasBeenSet;

                    /**
                     * 应用微服务类型
                     */
                    std::string m_microserviceType;
                    bool m_microserviceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CREATEAPPLICATIONREQUEST_H_
