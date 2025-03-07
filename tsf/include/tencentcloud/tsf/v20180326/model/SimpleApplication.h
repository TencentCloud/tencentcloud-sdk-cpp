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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_SIMPLEAPPLICATION_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_SIMPLEAPPLICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 简单应用
                */
                class SimpleApplication : public AbstractModel
                {
                public:
                    SimpleApplication();
                    ~SimpleApplication() = default;
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
                     * 获取应用微服务类型
                     * @return MicroserviceType 应用微服务类型
                     * 
                     */
                    std::string GetMicroserviceType() const;

                    /**
                     * 设置应用微服务类型
                     * @param _microserviceType 应用微服务类型
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
                     * 获取ApplicationDesc
                     * @return ApplicationDesc ApplicationDesc
                     * 
                     */
                    std::string GetApplicationDesc() const;

                    /**
                     * 设置ApplicationDesc
                     * @param _applicationDesc ApplicationDesc
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
                     * 获取ProgLang
                     * @return ProgLang ProgLang
                     * 
                     */
                    std::string GetProgLang() const;

                    /**
                     * 设置ProgLang
                     * @param _progLang ProgLang
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
                     * 获取ApplicationResourceType
                     * @return ApplicationResourceType ApplicationResourceType
                     * 
                     */
                    std::string GetApplicationResourceType() const;

                    /**
                     * 设置ApplicationResourceType
                     * @param _applicationResourceType ApplicationResourceType
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
                     * 获取CreateTime
                     * @return CreateTime CreateTime
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置CreateTime
                     * @param _createTime CreateTime
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
                     * 获取UpdateTime
                     * @return UpdateTime UpdateTime
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置UpdateTime
                     * @param _updateTime UpdateTime
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
                     * 获取ApigatewayServiceId
                     * @return ApigatewayServiceId ApigatewayServiceId
                     * 
                     */
                    std::string GetApigatewayServiceId() const;

                    /**
                     * 设置ApigatewayServiceId
                     * @param _apigatewayServiceId ApigatewayServiceId
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
                     * 获取ApplicationRuntimeType
                     * @return ApplicationRuntimeType ApplicationRuntimeType
                     * 
                     */
                    std::string GetApplicationRuntimeType() const;

                    /**
                     * 设置ApplicationRuntimeType
                     * @param _applicationRuntimeType ApplicationRuntimeType
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
                     * 获取Apm业务系统id
                     * @return AmpInstanceId Apm业务系统id
                     * 
                     */
                    std::string GetAmpInstanceId() const;

                    /**
                     * 设置Apm业务系统id
                     * @param _ampInstanceId Apm业务系统id
                     * 
                     */
                    void SetAmpInstanceId(const std::string& _ampInstanceId);

                    /**
                     * 判断参数 AmpInstanceId 是否已赋值
                     * @return AmpInstanceId 是否已赋值
                     * 
                     */
                    bool AmpInstanceIdHasBeenSet() const;

                    /**
                     * 获取Apm业务系统Name
                     * @return ApmInstanceName Apm业务系统Name
                     * 
                     */
                    std::string GetApmInstanceName() const;

                    /**
                     * 设置Apm业务系统Name
                     * @param _apmInstanceName Apm业务系统Name
                     * 
                     */
                    void SetApmInstanceName(const std::string& _apmInstanceName);

                    /**
                     * 判断参数 ApmInstanceName 是否已赋值
                     * @return ApmInstanceName 是否已赋值
                     * 
                     */
                    bool ApmInstanceNameHasBeenSet() const;

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
                     * 应用类型
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * 应用微服务类型
                     */
                    std::string m_microserviceType;
                    bool m_microserviceTypeHasBeenSet;

                    /**
                     * ApplicationDesc
                     */
                    std::string m_applicationDesc;
                    bool m_applicationDescHasBeenSet;

                    /**
                     * ProgLang
                     */
                    std::string m_progLang;
                    bool m_progLangHasBeenSet;

                    /**
                     * ApplicationResourceType
                     */
                    std::string m_applicationResourceType;
                    bool m_applicationResourceTypeHasBeenSet;

                    /**
                     * CreateTime
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * UpdateTime
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * ApigatewayServiceId
                     */
                    std::string m_apigatewayServiceId;
                    bool m_apigatewayServiceIdHasBeenSet;

                    /**
                     * ApplicationRuntimeType
                     */
                    std::string m_applicationRuntimeType;
                    bool m_applicationRuntimeTypeHasBeenSet;

                    /**
                     * Apm业务系统id
                     */
                    std::string m_ampInstanceId;
                    bool m_ampInstanceIdHasBeenSet;

                    /**
                     * Apm业务系统Name
                     */
                    std::string m_apmInstanceName;
                    bool m_apmInstanceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_SIMPLEAPPLICATION_H_
