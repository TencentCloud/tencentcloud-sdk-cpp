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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_APPLICATIONFORPAGE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_APPLICATIONFORPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 分页的应用描述信息字段
                */
                class ApplicationForPage : public AbstractModel
                {
                public:
                    ApplicationForPage();
                    ~ApplicationForPage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取应用描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationDesc 应用描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationDesc() const;

                    /**
                     * 设置应用描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationDesc 应用描述
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取应用类型
                     * @return ApplicationType 应用类型
                     * 
                     */
                    std::string GetApplicationType() const;

                    /**
                     * 设置应用类型
                     * @param _applicationType 应用类型
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
                     * 获取微服务类型
                     * @return MicroserviceType 微服务类型
                     * 
                     */
                    std::string GetMicroserviceType() const;

                    /**
                     * 设置微服务类型
                     * @param _microserviceType 微服务类型
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
                     * 获取编程语言
                     * @return ProgLang 编程语言
                     * 
                     */
                    std::string GetProgLang() const;

                    /**
                     * 设置编程语言
                     * @param _progLang 编程语言
                     * 
                     */
                    void SetProgLang(const std::string& _progLang);

                    /**
                     * 判断参数 ProgLang 是否已赋值
                     * @return ProgLang 是否已赋值
                     * 
                     */
                    bool ProgLangHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取应用资源类型
                     * @return ApplicationResourceType 应用资源类型
                     * 
                     */
                    std::string GetApplicationResourceType() const;

                    /**
                     * 设置应用资源类型
                     * @param _applicationResourceType 应用资源类型
                     * 
                     */
                    void SetApplicationResourceType(const std::string& _applicationResourceType);

                    /**
                     * 判断参数 ApplicationResourceType 是否已赋值
                     * @return ApplicationResourceType 是否已赋值
                     * 
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
                     * 获取Apigateway的serviceId
                     * @return ApigatewayServiceId Apigateway的serviceId
                     * 
                     */
                    std::string GetApigatewayServiceId() const;

                    /**
                     * 设置Apigateway的serviceId
                     * @param _apigatewayServiceId Apigateway的serviceId
                     * 
                     */
                    void SetApigatewayServiceId(const std::string& _apigatewayServiceId);

                    /**
                     * 判断参数 ApigatewayServiceId 是否已赋值
                     * @return ApigatewayServiceId 是否已赋值
                     * 
                     */
                    bool ApigatewayServiceIdHasBeenSet() const;

                    /**
                     * 获取应用备注名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationRemarkName 应用备注名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationRemarkName() const;

                    /**
                     * 设置应用备注名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationRemarkName 应用备注名
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceConfigList 服务配置信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ServiceConfig> GetServiceConfigList() const;

                    /**
                     * 设置服务配置信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceConfigList 服务配置信息列表
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取IgnoreCreateImageRepository
                     * @return IgnoreCreateImageRepository IgnoreCreateImageRepository
                     * 
                     */
                    bool GetIgnoreCreateImageRepository() const;

                    /**
                     * 设置IgnoreCreateImageRepository
                     * @param _ignoreCreateImageRepository IgnoreCreateImageRepository
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
                     * 获取Apm业务系统id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApmInstanceId Apm业务系统id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApmInstanceId() const;

                    /**
                     * 设置Apm业务系统id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apmInstanceId Apm业务系统id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取Apm业务系统Name
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApmInstanceName Apm业务系统Name
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApmInstanceName() const;

                    /**
                     * 设置Apm业务系统Name
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apmInstanceName Apm业务系统Name
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApmInstanceName(const std::string& _apmInstanceName);

                    /**
                     * 判断参数 ApmInstanceName 是否已赋值
                     * @return ApmInstanceName 是否已赋值
                     * 
                     */
                    bool ApmInstanceNameHasBeenSet() const;

                    /**
                     * 获取同步删除镜像仓库
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SyncDeleteImageRepository 同步删除镜像仓库
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSyncDeleteImageRepository() const;

                    /**
                     * 设置同步删除镜像仓库
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _syncDeleteImageRepository 同步删除镜像仓库
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSyncDeleteImageRepository(const bool& _syncDeleteImageRepository);

                    /**
                     * 判断参数 SyncDeleteImageRepository 是否已赋值
                     * @return SyncDeleteImageRepository 是否已赋值
                     * 
                     */
                    bool SyncDeleteImageRepositoryHasBeenSet() const;

                    /**
                     * 获取应用微服务子类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MicroserviceSubType 应用微服务子类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMicroserviceSubType() const;

                    /**
                     * 设置应用微服务子类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _microserviceSubType 应用微服务子类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMicroserviceSubType(const std::string& _microserviceSubType);

                    /**
                     * 判断参数 MicroserviceSubType 是否已赋值
                     * @return MicroserviceSubType 是否已赋值
                     * 
                     */
                    bool MicroserviceSubTypeHasBeenSet() const;

                    /**
                     * 获取应用编程语言类型
                     * @return ProgramLanguage 应用编程语言类型
                     * 
                     */
                    std::string GetProgramLanguage() const;

                    /**
                     * 设置应用编程语言类型
                     * @param _programLanguage 应用编程语言类型
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
                     * 获取开发框架类型[SpringCloud，Dubbo，Go-GRPC，Other]
                     * @return FrameworkType 开发框架类型[SpringCloud，Dubbo，Go-GRPC，Other]
                     * 
                     */
                    std::string GetFrameworkType() const;

                    /**
                     * 设置开发框架类型[SpringCloud，Dubbo，Go-GRPC，Other]
                     * @param _frameworkType 开发框架类型[SpringCloud，Dubbo，Go-GRPC，Other]
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
                     * 获取微服务类型列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MicroserviceTypeList 微服务类型列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetMicroserviceTypeList() const;

                    /**
                     * 设置微服务类型列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _microserviceTypeList 微服务类型列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMicroserviceTypeList(const std::vector<std::string>& _microserviceTypeList);

                    /**
                     * 判断参数 MicroserviceTypeList 是否已赋值
                     * @return MicroserviceTypeList 是否已赋值
                     * 
                     */
                    bool MicroserviceTypeListHasBeenSet() const;

                    /**
                     * 获取是否同时创建镜像仓库
                     * @return CreateSameNameImageRepository 是否同时创建镜像仓库
                     * 
                     */
                    bool GetCreateSameNameImageRepository() const;

                    /**
                     * 设置是否同时创建镜像仓库
                     * @param _createSameNameImageRepository 是否同时创建镜像仓库
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
                     * 应用描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationDesc;
                    bool m_applicationDescHasBeenSet;

                    /**
                     * 应用类型
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * 微服务类型
                     */
                    std::string m_microserviceType;
                    bool m_microserviceTypeHasBeenSet;

                    /**
                     * 编程语言
                     */
                    std::string m_progLang;
                    bool m_progLangHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 应用资源类型
                     */
                    std::string m_applicationResourceType;
                    bool m_applicationResourceTypeHasBeenSet;

                    /**
                     * 应用runtime类型
                     */
                    std::string m_applicationRuntimeType;
                    bool m_applicationRuntimeTypeHasBeenSet;

                    /**
                     * Apigateway的serviceId
                     */
                    std::string m_apigatewayServiceId;
                    bool m_apigatewayServiceIdHasBeenSet;

                    /**
                     * 应用备注名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationRemarkName;
                    bool m_applicationRemarkNameHasBeenSet;

                    /**
                     * 服务配置信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ServiceConfig> m_serviceConfigList;
                    bool m_serviceConfigListHasBeenSet;

                    /**
                     * IgnoreCreateImageRepository
                     */
                    bool m_ignoreCreateImageRepository;
                    bool m_ignoreCreateImageRepositoryHasBeenSet;

                    /**
                     * Apm业务系统id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apmInstanceId;
                    bool m_apmInstanceIdHasBeenSet;

                    /**
                     * Apm业务系统Name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apmInstanceName;
                    bool m_apmInstanceNameHasBeenSet;

                    /**
                     * 同步删除镜像仓库
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_syncDeleteImageRepository;
                    bool m_syncDeleteImageRepositoryHasBeenSet;

                    /**
                     * 应用微服务子类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_microserviceSubType;
                    bool m_microserviceSubTypeHasBeenSet;

                    /**
                     * 应用编程语言类型
                     */
                    std::string m_programLanguage;
                    bool m_programLanguageHasBeenSet;

                    /**
                     * 开发框架类型[SpringCloud，Dubbo，Go-GRPC，Other]
                     */
                    std::string m_frameworkType;
                    bool m_frameworkTypeHasBeenSet;

                    /**
                     * 注册配置治理信息
                     */
                    ServiceGovernanceConfig m_serviceGovernanceConfig;
                    bool m_serviceGovernanceConfigHasBeenSet;

                    /**
                     * 微服务类型列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_microserviceTypeList;
                    bool m_microserviceTypeListHasBeenSet;

                    /**
                     * 是否同时创建镜像仓库
                     */
                    bool m_createSameNameImageRepository;
                    bool m_createSameNameImageRepositoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_APPLICATIONFORPAGE_H_
