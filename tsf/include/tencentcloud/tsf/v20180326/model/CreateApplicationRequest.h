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
                     * 获取应用类型，V：虚拟机应用；C：容器应用；S：serverless应用
                     * @return ApplicationType 应用类型，V：虚拟机应用；C：容器应用；S：serverless应用
                     */
                    std::string GetApplicationType() const;

                    /**
                     * 设置应用类型，V：虚拟机应用；C：容器应用；S：serverless应用
                     * @param ApplicationType 应用类型，V：虚拟机应用；C：容器应用；S：serverless应用
                     */
                    void SetApplicationType(const std::string& _applicationType);

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     */
                    bool ApplicationTypeHasBeenSet() const;

                    /**
                     * 获取应用微服务类型，M：service mesh应用；N：普通应用；G：网关应用
                     * @return MicroserviceType 应用微服务类型，M：service mesh应用；N：普通应用；G：网关应用
                     */
                    std::string GetMicroserviceType() const;

                    /**
                     * 设置应用微服务类型，M：service mesh应用；N：普通应用；G：网关应用
                     * @param MicroserviceType 应用微服务类型，M：service mesh应用；N：普通应用；G：网关应用
                     */
                    void SetMicroserviceType(const std::string& _microserviceType);

                    /**
                     * 判断参数 MicroserviceType 是否已赋值
                     * @return MicroserviceType 是否已赋值
                     */
                    bool MicroserviceTypeHasBeenSet() const;

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
                     * 获取应用资源类型，废弃参数
                     * @return ApplicationResourceType 应用资源类型，废弃参数
                     */
                    std::string GetApplicationResourceType() const;

                    /**
                     * 设置应用资源类型，废弃参数
                     * @param ApplicationResourceType 应用资源类型，废弃参数
                     */
                    void SetApplicationResourceType(const std::string& _applicationResourceType);

                    /**
                     * 判断参数 ApplicationResourceType 是否已赋值
                     * @return ApplicationResourceType 是否已赋值
                     */
                    bool ApplicationResourceTypeHasBeenSet() const;

                    /**
                     * 获取应用runtime类型
                     * @return ApplicationRuntimeType 应用runtime类型
                     */
                    std::string GetApplicationRuntimeType() const;

                    /**
                     * 设置应用runtime类型
                     * @param ApplicationRuntimeType 应用runtime类型
                     */
                    void SetApplicationRuntimeType(const std::string& _applicationRuntimeType);

                    /**
                     * 判断参数 ApplicationRuntimeType 是否已赋值
                     * @return ApplicationRuntimeType 是否已赋值
                     */
                    bool ApplicationRuntimeTypeHasBeenSet() const;

                    /**
                     * 获取需要绑定的数据集ID
                     * @return ProgramId 需要绑定的数据集ID
                     */
                    std::string GetProgramId() const;

                    /**
                     * 设置需要绑定的数据集ID
                     * @param ProgramId 需要绑定的数据集ID
                     */
                    void SetProgramId(const std::string& _programId);

                    /**
                     * 判断参数 ProgramId 是否已赋值
                     * @return ProgramId 是否已赋值
                     */
                    bool ProgramIdHasBeenSet() const;

                    /**
                     * 获取服务配置信息列表
                     * @return ServiceConfigList 服务配置信息列表
                     */
                    std::vector<ServiceConfig> GetServiceConfigList() const;

                    /**
                     * 设置服务配置信息列表
                     * @param ServiceConfigList 服务配置信息列表
                     */
                    void SetServiceConfigList(const std::vector<ServiceConfig>& _serviceConfigList);

                    /**
                     * 判断参数 ServiceConfigList 是否已赋值
                     * @return ServiceConfigList 是否已赋值
                     */
                    bool ServiceConfigListHasBeenSet() const;

                    /**
                     * 获取忽略创建镜像仓库
                     * @return IgnoreCreateImageRepository 忽略创建镜像仓库
                     */
                    bool GetIgnoreCreateImageRepository() const;

                    /**
                     * 设置忽略创建镜像仓库
                     * @param IgnoreCreateImageRepository 忽略创建镜像仓库
                     */
                    void SetIgnoreCreateImageRepository(const bool& _ignoreCreateImageRepository);

                    /**
                     * 判断参数 IgnoreCreateImageRepository 是否已赋值
                     * @return IgnoreCreateImageRepository 是否已赋值
                     */
                    bool IgnoreCreateImageRepositoryHasBeenSet() const;

                    /**
                     * 获取无
                     * @return ProgramIdList 无
                     */
                    std::vector<std::string> GetProgramIdList() const;

                    /**
                     * 设置无
                     * @param ProgramIdList 无
                     */
                    void SetProgramIdList(const std::vector<std::string>& _programIdList);

                    /**
                     * 判断参数 ProgramIdList 是否已赋值
                     * @return ProgramIdList 是否已赋值
                     */
                    bool ProgramIdListHasBeenSet() const;

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
                     * 无
                     */
                    std::vector<std::string> m_programIdList;
                    bool m_programIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CREATEAPPLICATIONREQUEST_H_
