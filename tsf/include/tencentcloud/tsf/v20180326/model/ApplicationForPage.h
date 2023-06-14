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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationId 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationId 应用ID
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationName 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationName 应用名称
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationType 应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationType() const;

                    /**
                     * 设置应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationType 应用类型
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MicroserviceType 微服务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMicroserviceType() const;

                    /**
                     * 设置微服务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _microserviceType 微服务类型
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProgLang 编程语言
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProgLang() const;

                    /**
                     * 设置编程语言
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _progLang 编程语言
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationResourceType 应用资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationResourceType() const;

                    /**
                     * 设置应用资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationResourceType 应用资源类型
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationRuntimeType 应用runtime类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationRuntimeType() const;

                    /**
                     * 设置应用runtime类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationRuntimeType 应用runtime类型
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApigatewayServiceId Apigateway的serviceId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApigatewayServiceId() const;

                    /**
                     * 设置Apigateway的serviceId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apigatewayServiceId Apigateway的serviceId
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IgnoreCreateImageRepository IgnoreCreateImageRepository
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIgnoreCreateImageRepository() const;

                    /**
                     * 设置IgnoreCreateImageRepository
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ignoreCreateImageRepository IgnoreCreateImageRepository
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIgnoreCreateImageRepository(const bool& _ignoreCreateImageRepository);

                    /**
                     * 判断参数 IgnoreCreateImageRepository 是否已赋值
                     * @return IgnoreCreateImageRepository 是否已赋值
                     * 
                     */
                    bool IgnoreCreateImageRepositoryHasBeenSet() const;

                private:

                    /**
                     * 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 应用名称
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * 微服务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_microserviceType;
                    bool m_microserviceTypeHasBeenSet;

                    /**
                     * 编程语言
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_progLang;
                    bool m_progLangHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 应用资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationResourceType;
                    bool m_applicationResourceTypeHasBeenSet;

                    /**
                     * 应用runtime类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationRuntimeType;
                    bool m_applicationRuntimeTypeHasBeenSet;

                    /**
                     * Apigateway的serviceId
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_ignoreCreateImageRepository;
                    bool m_ignoreCreateImageRepositoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_APPLICATIONFORPAGE_H_
