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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYAPPLICATIONREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYAPPLICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/ServiceConfig.h>
#include <tencentcloud/tsf/v20180326/model/ServiceGovernanceConfig.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * ModifyApplication请求参数结构体
                */
                class ModifyApplicationRequest : public AbstractModel
                {
                public:
                    ModifyApplicationRequest();
                    ~ModifyApplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return ApplicationId 应用ID
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用ID
                     * @param _applicationId 应用ID
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取应用名称
                     * @return ApplicationName 应用名称
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置应用名称
                     * @param _applicationName 应用名称
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取应用备注
                     * @return ApplicationDesc 应用备注
                     * 
                     */
                    std::string GetApplicationDesc() const;

                    /**
                     * 设置应用备注
                     * @param _applicationDesc 应用备注
                     * 
                     */
                    void SetApplicationDesc(const std::string& _applicationDesc);

                    /**
                     * 判断参数 ApplicationDesc 是否已赋值
                     * @return ApplicationDesc 是否已赋值
                     * 
                     */
                    bool ApplicationDescHasBeenSet() const;

                    /**
                     * 获取应用备注名
                     * @return ApplicationRemarkName 应用备注名
                     * 
                     */
                    std::string GetApplicationRemarkName() const;

                    /**
                     * 设置应用备注名
                     * @param _applicationRemarkName 应用备注名
                     * 
                     */
                    void SetApplicationRemarkName(const std::string& _applicationRemarkName);

                    /**
                     * 判断参数 ApplicationRemarkName 是否已赋值
                     * @return ApplicationRemarkName 是否已赋值
                     * 
                     */
                    bool ApplicationRemarkNameHasBeenSet() const;

                    /**
                     * 获取服务配置信息列表
                     * @return ServiceConfigList 服务配置信息列表
                     * 
                     */
                    std::vector<ServiceConfig> GetServiceConfigList() const;

                    /**
                     * 设置服务配置信息列表
                     * @param _serviceConfigList 服务配置信息列表
                     * 
                     */
                    void SetServiceConfigList(const std::vector<ServiceConfig>& _serviceConfigList);

                    /**
                     * 判断参数 ServiceConfigList 是否已赋值
                     * @return ServiceConfigList 是否已赋值
                     * 
                     */
                    bool ServiceConfigListHasBeenSet() const;

                    /**
                     * 获取应用的微服务类型
                     * @return MicroserviceType 应用的微服务类型
                     * 
                     */
                    std::string GetMicroserviceType() const;

                    /**
                     * 设置应用的微服务类型
                     * @param _microserviceType 应用的微服务类型
                     * 
                     */
                    void SetMicroserviceType(const std::string& _microserviceType);

                    /**
                     * 判断参数 MicroserviceType 是否已赋值
                     * @return MicroserviceType 是否已赋值
                     * 
                     */
                    bool MicroserviceTypeHasBeenSet() const;

                    /**
                     * 获取注册配置治理信息
                     * @return ServiceGovernanceConfig 注册配置治理信息
                     * 
                     */
                    ServiceGovernanceConfig GetServiceGovernanceConfig() const;

                    /**
                     * 设置注册配置治理信息
                     * @param _serviceGovernanceConfig 注册配置治理信息
                     * 
                     */
                    void SetServiceGovernanceConfig(const ServiceGovernanceConfig& _serviceGovernanceConfig);

                    /**
                     * 判断参数 ServiceGovernanceConfig 是否已赋值
                     * @return ServiceGovernanceConfig 是否已赋值
                     * 
                     */
                    bool ServiceGovernanceConfigHasBeenSet() const;

                    /**
                     * 获取应用开发框架
                     * @return FrameworkType 应用开发框架
                     * 
                     */
                    std::string GetFrameworkType() const;

                    /**
                     * 设置应用开发框架
                     * @param _frameworkType 应用开发框架
                     * 
                     */
                    void SetFrameworkType(const std::string& _frameworkType);

                    /**
                     * 判断参数 FrameworkType 是否已赋值
                     * @return FrameworkType 是否已赋值
                     * 
                     */
                    bool FrameworkTypeHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 应用名称
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * 应用备注
                     */
                    std::string m_applicationDesc;
                    bool m_applicationDescHasBeenSet;

                    /**
                     * 应用备注名
                     */
                    std::string m_applicationRemarkName;
                    bool m_applicationRemarkNameHasBeenSet;

                    /**
                     * 服务配置信息列表
                     */
                    std::vector<ServiceConfig> m_serviceConfigList;
                    bool m_serviceConfigListHasBeenSet;

                    /**
                     * 应用的微服务类型
                     */
                    std::string m_microserviceType;
                    bool m_microserviceTypeHasBeenSet;

                    /**
                     * 注册配置治理信息
                     */
                    ServiceGovernanceConfig m_serviceGovernanceConfig;
                    bool m_serviceGovernanceConfigHasBeenSet;

                    /**
                     * 应用开发框架
                     */
                    std::string m_frameworkType;
                    bool m_frameworkTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYAPPLICATIONREQUEST_H_
