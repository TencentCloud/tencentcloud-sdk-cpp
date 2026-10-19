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
                     * 获取<p>应用名称，最长60字符</p>
                     * @return ApplicationName <p>应用名称，最长60字符</p>
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置<p>应用名称，最长60字符</p>
                     * @param _applicationName <p>应用名称，最长60字符</p>
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
                     * 获取<p>应用类型，V：虚拟机应用；C：容器应用；S：serverless应用</p>
                     * @return ApplicationType <p>应用类型，V：虚拟机应用；C：容器应用；S：serverless应用</p>
                     * 
                     */
                    std::string GetApplicationType() const;

                    /**
                     * 设置<p>应用类型，V：虚拟机应用；C：容器应用；S：serverless应用</p>
                     * @param _applicationType <p>应用类型，V：虚拟机应用；C：容器应用；S：serverless应用</p>
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
                     * 获取<p>应用微服务类型，M：service mesh应用；N：普通应用；G：网关应用</p>
                     * @return MicroserviceType <p>应用微服务类型，M：service mesh应用；N：普通应用；G：网关应用</p>
                     * 
                     */
                    std::string GetMicroserviceType() const;

                    /**
                     * 设置<p>应用微服务类型，M：service mesh应用；N：普通应用；G：网关应用</p>
                     * @param _microserviceType <p>应用微服务类型，M：service mesh应用；N：普通应用；G：网关应用</p>
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
                     * 获取<p>应用描述</p>
                     * @return ApplicationDesc <p>应用描述</p>
                     * 
                     */
                    std::string GetApplicationDesc() const;

                    /**
                     * 设置<p>应用描述</p>
                     * @param _applicationDesc <p>应用描述</p>
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
                     * 获取<p>应用日志配置项，废弃参数</p>
                     * @return ApplicationLogConfig <p>应用日志配置项，废弃参数</p>
                     * @deprecated
                     */
                    std::string GetApplicationLogConfig() const;

                    /**
                     * 设置<p>应用日志配置项，废弃参数</p>
                     * @param _applicationLogConfig <p>应用日志配置项，废弃参数</p>
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
                     * 获取<p>应用资源类型，废弃参数</p>
                     * @return ApplicationResourceType <p>应用资源类型，废弃参数</p>
                     * @deprecated
                     */
                    std::string GetApplicationResourceType() const;

                    /**
                     * 设置<p>应用资源类型，废弃参数</p>
                     * @param _applicationResourceType <p>应用资源类型，废弃参数</p>
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
                     * 获取<p>应用runtime类型</p>
                     * @return ApplicationRuntimeType <p>应用runtime类型</p>
                     * 
                     */
                    std::string GetApplicationRuntimeType() const;

                    /**
                     * 设置<p>应用runtime类型</p>
                     * @param _applicationRuntimeType <p>应用runtime类型</p>
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
                     * 获取<p>【数据集ID】。可通过调用<a href="https://cloud.tencent.com/document/product/649/73477">DescribePrograms</a>查询已创建的数据集列表或登录<a href="https://console.cloud.tencent.com/tsf/privilege?rid=1&amp;tab=program&amp;roleId=role-a26486wy">控制台</a>进行查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/108544">CreateProgram</a>创建新的数据集。</p>
                     * @return ProgramId <p>【数据集ID】。可通过调用<a href="https://cloud.tencent.com/document/product/649/73477">DescribePrograms</a>查询已创建的数据集列表或登录<a href="https://console.cloud.tencent.com/tsf/privilege?rid=1&amp;tab=program&amp;roleId=role-a26486wy">控制台</a>进行查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/108544">CreateProgram</a>创建新的数据集。</p>
                     * 
                     */
                    std::string GetProgramId() const;

                    /**
                     * 设置<p>【数据集ID】。可通过调用<a href="https://cloud.tencent.com/document/product/649/73477">DescribePrograms</a>查询已创建的数据集列表或登录<a href="https://console.cloud.tencent.com/tsf/privilege?rid=1&amp;tab=program&amp;roleId=role-a26486wy">控制台</a>进行查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/108544">CreateProgram</a>创建新的数据集。</p>
                     * @param _programId <p>【数据集ID】。可通过调用<a href="https://cloud.tencent.com/document/product/649/73477">DescribePrograms</a>查询已创建的数据集列表或登录<a href="https://console.cloud.tencent.com/tsf/privilege?rid=1&amp;tab=program&amp;roleId=role-a26486wy">控制台</a>进行查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/108544">CreateProgram</a>创建新的数据集。</p>
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
                     * 获取<p>服务配置信息列表</p>
                     * @return ServiceConfigList <p>服务配置信息列表</p>
                     * 
                     */
                    std::vector<ServiceConfig> GetServiceConfigList() const;

                    /**
                     * 设置<p>服务配置信息列表</p>
                     * @param _serviceConfigList <p>服务配置信息列表</p>
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
                     * 获取<p>忽略创建镜像仓库</p>
                     * @return IgnoreCreateImageRepository <p>忽略创建镜像仓库</p>
                     * 
                     */
                    bool GetIgnoreCreateImageRepository() const;

                    /**
                     * 设置<p>忽略创建镜像仓库</p>
                     * @param _ignoreCreateImageRepository <p>忽略创建镜像仓库</p>
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
                     * 获取<p>数据集id列表</p>
                     * @return ProgramIdList <p>数据集id列表</p>
                     * 
                     */
                    std::vector<std::string> GetProgramIdList() const;

                    /**
                     * 设置<p>数据集id列表</p>
                     * @param _programIdList <p>数据集id列表</p>
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
                     * 获取<p>apm业务系统id</p>
                     * @return ApmInstanceId <p>apm业务系统id</p>
                     * 
                     */
                    std::string GetApmInstanceId() const;

                    /**
                     * 设置<p>apm业务系统id</p>
                     * @param _apmInstanceId <p>apm业务系统id</p>
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
                     * 获取<p>编程语言:  Java；C/C++；Python；Go；Other</p>
                     * @return ProgramLanguage <p>编程语言:  Java；C/C++；Python；Go；Other</p>
                     * 
                     */
                    std::string GetProgramLanguage() const;

                    /**
                     * 设置<p>编程语言:  Java；C/C++；Python；Go；Other</p>
                     * @param _programLanguage <p>编程语言:  Java；C/C++；Python；Go；Other</p>
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
                     * 获取<p>开发框架-SpringCloud/Dubbo/Go-GRPC/Other</p>
                     * @return FrameworkType <p>开发框架-SpringCloud/Dubbo/Go-GRPC/Other</p>
                     * 
                     */
                    std::string GetFrameworkType() const;

                    /**
                     * 设置<p>开发框架-SpringCloud/Dubbo/Go-GRPC/Other</p>
                     * @param _frameworkType <p>开发框架-SpringCloud/Dubbo/Go-GRPC/Other</p>
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
                     * 获取<p>注册配置治理，关闭注册配置治理或者使用北极星注册中心时必须传值</p>
                     * @return ServiceGovernanceConfig <p>注册配置治理，关闭注册配置治理或者使用北极星注册中心时必须传值</p>
                     * 
                     */
                    ServiceGovernanceConfig GetServiceGovernanceConfig() const;

                    /**
                     * 设置<p>注册配置治理，关闭注册配置治理或者使用北极星注册中心时必须传值</p>
                     * @param _serviceGovernanceConfig <p>注册配置治理，关闭注册配置治理或者使用北极星注册中心时必须传值</p>
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
                     * 获取<p>是否创建并关联同名镜像仓库</p>
                     * @return CreateSameNameImageRepository <p>是否创建并关联同名镜像仓库</p>
                     * 
                     */
                    bool GetCreateSameNameImageRepository() const;

                    /**
                     * 设置<p>是否创建并关联同名镜像仓库</p>
                     * @param _createSameNameImageRepository <p>是否创建并关联同名镜像仓库</p>
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
                     * <p>应用名称，最长60字符</p>
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * <p>应用类型，V：虚拟机应用；C：容器应用；S：serverless应用</p>
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * <p>应用微服务类型，M：service mesh应用；N：普通应用；G：网关应用</p>
                     */
                    std::string m_microserviceType;
                    bool m_microserviceTypeHasBeenSet;

                    /**
                     * <p>应用描述</p>
                     */
                    std::string m_applicationDesc;
                    bool m_applicationDescHasBeenSet;

                    /**
                     * <p>应用日志配置项，废弃参数</p>
                     */
                    std::string m_applicationLogConfig;
                    bool m_applicationLogConfigHasBeenSet;

                    /**
                     * <p>应用资源类型，废弃参数</p>
                     */
                    std::string m_applicationResourceType;
                    bool m_applicationResourceTypeHasBeenSet;

                    /**
                     * <p>应用runtime类型</p>
                     */
                    std::string m_applicationRuntimeType;
                    bool m_applicationRuntimeTypeHasBeenSet;

                    /**
                     * <p>【数据集ID】。可通过调用<a href="https://cloud.tencent.com/document/product/649/73477">DescribePrograms</a>查询已创建的数据集列表或登录<a href="https://console.cloud.tencent.com/tsf/privilege?rid=1&amp;tab=program&amp;roleId=role-a26486wy">控制台</a>进行查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/108544">CreateProgram</a>创建新的数据集。</p>
                     */
                    std::string m_programId;
                    bool m_programIdHasBeenSet;

                    /**
                     * <p>服务配置信息列表</p>
                     */
                    std::vector<ServiceConfig> m_serviceConfigList;
                    bool m_serviceConfigListHasBeenSet;

                    /**
                     * <p>忽略创建镜像仓库</p>
                     */
                    bool m_ignoreCreateImageRepository;
                    bool m_ignoreCreateImageRepositoryHasBeenSet;

                    /**
                     * <p>数据集id列表</p>
                     */
                    std::vector<std::string> m_programIdList;
                    bool m_programIdListHasBeenSet;

                    /**
                     * <p>apm业务系统id</p>
                     */
                    std::string m_apmInstanceId;
                    bool m_apmInstanceIdHasBeenSet;

                    /**
                     * <p>编程语言:  Java；C/C++；Python；Go；Other</p>
                     */
                    std::string m_programLanguage;
                    bool m_programLanguageHasBeenSet;

                    /**
                     * <p>开发框架-SpringCloud/Dubbo/Go-GRPC/Other</p>
                     */
                    std::string m_frameworkType;
                    bool m_frameworkTypeHasBeenSet;

                    /**
                     * <p>注册配置治理，关闭注册配置治理或者使用北极星注册中心时必须传值</p>
                     */
                    ServiceGovernanceConfig m_serviceGovernanceConfig;
                    bool m_serviceGovernanceConfigHasBeenSet;

                    /**
                     * <p>是否创建并关联同名镜像仓库</p>
                     */
                    bool m_createSameNameImageRepository;
                    bool m_createSameNameImageRepositoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CREATEAPPLICATIONREQUEST_H_
