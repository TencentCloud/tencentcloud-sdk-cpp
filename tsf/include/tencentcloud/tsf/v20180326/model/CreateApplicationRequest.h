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
                     * 获取应用类型，V：虚拟机应用；C：容器应用；S：serverless应用
                     * @return ApplicationType 应用类型，V：虚拟机应用；C：容器应用；S：serverless应用
                     * 
                     */
                    std::string GetApplicationType() const;

                    /**
                     * 设置应用类型，V：虚拟机应用；C：容器应用；S：serverless应用
                     * @param _applicationType 应用类型，V：虚拟机应用；C：容器应用；S：serverless应用
                     * 
                     */
                    void SetApplicationType(const std::string& _applicationType);

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     * 
                     */
                    bool ApplicationTypeHasBeenSet() const;

                    /**
                     * 获取应用微服务类型，M：service mesh应用；N：普通应用；G：网关应用
                     * @return MicroserviceType 应用微服务类型，M：service mesh应用；N：普通应用；G：网关应用
                     * 
                     */
                    std::string GetMicroserviceType() const;

                    /**
                     * 设置应用微服务类型，M：service mesh应用；N：普通应用；G：网关应用
                     * @param _microserviceType 应用微服务类型，M：service mesh应用；N：普通应用；G：网关应用
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
                     * 获取应用描述
                     * @return ApplicationDesc 应用描述
                     * 
                     */
                    std::string GetApplicationDesc() const;

                    /**
                     * 设置应用描述
                     * @param _applicationDesc 应用描述
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
                     * 获取应用日志配置项，废弃参数
                     * @return ApplicationLogConfig 应用日志配置项，废弃参数
                     * @deprecated
                     */
                    std::string GetApplicationLogConfig() const;

                    /**
                     * 设置应用日志配置项，废弃参数
                     * @param _applicationLogConfig 应用日志配置项，废弃参数
                     * @deprecated
                     */
                    void SetApplicationLogConfig(const std::string& _applicationLogConfig);

                    /**
                     * 判断参数 ApplicationLogConfig 是否已赋值
                     * @return ApplicationLogConfig 是否已赋值
                     * @deprecated
                     */
                    bool ApplicationLogConfigHasBeenSet() const;

                    /**
                     * 获取应用资源类型，废弃参数
                     * @return ApplicationResourceType 应用资源类型，废弃参数
                     * @deprecated
                     */
                    std::string GetApplicationResourceType() const;

                    /**
                     * 设置应用资源类型，废弃参数
                     * @param _applicationResourceType 应用资源类型，废弃参数
                     * @deprecated
                     */
                    void SetApplicationResourceType(const std::string& _applicationResourceType);

                    /**
                     * 判断参数 ApplicationResourceType 是否已赋值
                     * @return ApplicationResourceType 是否已赋值
                     * @deprecated
                     */
                    bool ApplicationResourceTypeHasBeenSet() const;

                    /**
                     * 获取应用runtime类型
                     * @return ApplicationRuntimeType 应用runtime类型
                     * 
                     */
                    std::string GetApplicationRuntimeType() const;

                    /**
                     * 设置应用runtime类型
                     * @param _applicationRuntimeType 应用runtime类型
                     * 
                     */
                    void SetApplicationRuntimeType(const std::string& _applicationRuntimeType);

                    /**
                     * 判断参数 ApplicationRuntimeType 是否已赋值
                     * @return ApplicationRuntimeType 是否已赋值
                     * 
                     */
                    bool ApplicationRuntimeTypeHasBeenSet() const;

                    /**
                     * 获取需要绑定的数据集ID
                     * @return ProgramId 需要绑定的数据集ID
                     * 
                     */
                    std::string GetProgramId() const;

                    /**
                     * 设置需要绑定的数据集ID
                     * @param _programId 需要绑定的数据集ID
                     * 
                     */
                    void SetProgramId(const std::string& _programId);

                    /**
                     * 判断参数 ProgramId 是否已赋值
                     * @return ProgramId 是否已赋值
                     * 
                     */
                    bool ProgramIdHasBeenSet() const;

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
                     * 获取忽略创建镜像仓库
                     * @return IgnoreCreateImageRepository 忽略创建镜像仓库
                     * 
                     */
                    bool GetIgnoreCreateImageRepository() const;

                    /**
                     * 设置忽略创建镜像仓库
                     * @param _ignoreCreateImageRepository 忽略创建镜像仓库
                     * 
                     */
                    void SetIgnoreCreateImageRepository(const bool& _ignoreCreateImageRepository);

                    /**
                     * 判断参数 IgnoreCreateImageRepository 是否已赋值
                     * @return IgnoreCreateImageRepository 是否已赋值
                     * 
                     */
                    bool IgnoreCreateImageRepositoryHasBeenSet() const;

                    /**
                     * 获取数据集id列表
                     * @return ProgramIdList 数据集id列表
                     * 
                     */
                    std::vector<std::string> GetProgramIdList() const;

                    /**
                     * 设置数据集id列表
                     * @param _programIdList 数据集id列表
                     * 
                     */
                    void SetProgramIdList(const std::vector<std::string>& _programIdList);

                    /**
                     * 判断参数 ProgramIdList 是否已赋值
                     * @return ProgramIdList 是否已赋值
                     * 
                     */
                    bool ProgramIdListHasBeenSet() const;

                    /**
                     * 获取apm业务系统id
                     * @return ApmInstanceId apm业务系统id
                     * 
                     */
                    std::string GetApmInstanceId() const;

                    /**
                     * 设置apm业务系统id
                     * @param _apmInstanceId apm业务系统id
                     * 
                     */
                    void SetApmInstanceId(const std::string& _apmInstanceId);

                    /**
                     * 判断参数 ApmInstanceId 是否已赋值
                     * @return ApmInstanceId 是否已赋值
                     * 
                     */
                    bool ApmInstanceIdHasBeenSet() const;

                    /**
                     * 获取编程语言:  Java；C/C++；Python；Go；Other
                     * @return ProgramLanguage 编程语言:  Java；C/C++；Python；Go；Other
                     * 
                     */
                    std::string GetProgramLanguage() const;

                    /**
                     * 设置编程语言:  Java；C/C++；Python；Go；Other
                     * @param _programLanguage 编程语言:  Java；C/C++；Python；Go；Other
                     * 
                     */
                    void SetProgramLanguage(const std::string& _programLanguage);

                    /**
                     * 判断参数 ProgramLanguage 是否已赋值
                     * @return ProgramLanguage 是否已赋值
                     * 
                     */
                    bool ProgramLanguageHasBeenSet() const;

                    /**
                     * 获取开发框架-SpringCloud/Dubbo/Go-GRPC/Other
                     * @return FrameworkType 开发框架-SpringCloud/Dubbo/Go-GRPC/Other
                     * 
                     */
                    std::string GetFrameworkType() const;

                    /**
                     * 设置开发框架-SpringCloud/Dubbo/Go-GRPC/Other
                     * @param _frameworkType 开发框架-SpringCloud/Dubbo/Go-GRPC/Other
                     * 
                     */
                    void SetFrameworkType(const std::string& _frameworkType);

                    /**
                     * 判断参数 FrameworkType 是否已赋值
                     * @return FrameworkType 是否已赋值
                     * 
                     */
                    bool FrameworkTypeHasBeenSet() const;

                    /**
                     * 获取注册配置治理
                     * @return ServiceGovernanceConfig 注册配置治理
                     * 
                     */
                    ServiceGovernanceConfig GetServiceGovernanceConfig() const;

                    /**
                     * 设置注册配置治理
                     * @param _serviceGovernanceConfig 注册配置治理
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
                     * 获取是否创建并关联同名镜像仓库
                     * @return CreateSameNameImageRepository 是否创建并关联同名镜像仓库
                     * 
                     */
                    bool GetCreateSameNameImageRepository() const;

                    /**
                     * 设置是否创建并关联同名镜像仓库
                     * @param _createSameNameImageRepository 是否创建并关联同名镜像仓库
                     * 
                     */
                    void SetCreateSameNameImageRepository(const bool& _createSameNameImageRepository);

                    /**
                     * 判断参数 CreateSameNameImageRepository 是否已赋值
                     * @return CreateSameNameImageRepository 是否已赋值
                     * 
                     */
                    bool CreateSameNameImageRepositoryHasBeenSet() const;

                private:

                    /**
                     * 应用名称
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * 应用类型，V：虚拟机应用；C：容器应用；S：serverless应用
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * 应用微服务类型，M：service mesh应用；N：普通应用；G：网关应用
                     */
                    std::string m_microserviceType;
                    bool m_microserviceTypeHasBeenSet;

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
                     * 应用资源类型，废弃参数
                     */
                    std::string m_applicationResourceType;
                    bool m_applicationResourceTypeHasBeenSet;

                    /**
                     * 应用runtime类型
                     */
                    std::string m_applicationRuntimeType;
                    bool m_applicationRuntimeTypeHasBeenSet;

                    /**
                     * 需要绑定的数据集ID
                     */
                    std::string m_programId;
                    bool m_programIdHasBeenSet;

                    /**
                     * 服务配置信息列表
                     */
                    std::vector<ServiceConfig> m_serviceConfigList;
                    bool m_serviceConfigListHasBeenSet;

                    /**
                     * 忽略创建镜像仓库
                     */
                    bool m_ignoreCreateImageRepository;
                    bool m_ignoreCreateImageRepositoryHasBeenSet;

                    /**
                     * 数据集id列表
                     */
                    std::vector<std::string> m_programIdList;
                    bool m_programIdListHasBeenSet;

                    /**
                     * apm业务系统id
                     */
                    std::string m_apmInstanceId;
                    bool m_apmInstanceIdHasBeenSet;

                    /**
                     * 编程语言:  Java；C/C++；Python；Go；Other
                     */
                    std::string m_programLanguage;
                    bool m_programLanguageHasBeenSet;

                    /**
                     * 开发框架-SpringCloud/Dubbo/Go-GRPC/Other
                     */
                    std::string m_frameworkType;
                    bool m_frameworkTypeHasBeenSet;

                    /**
                     * 注册配置治理
                     */
                    ServiceGovernanceConfig m_serviceGovernanceConfig;
                    bool m_serviceGovernanceConfigHasBeenSet;

                    /**
                     * 是否创建并关联同名镜像仓库
                     */
                    bool m_createSameNameImageRepository;
                    bool m_createSameNameImageRepositoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CREATEAPPLICATIONREQUEST_H_
