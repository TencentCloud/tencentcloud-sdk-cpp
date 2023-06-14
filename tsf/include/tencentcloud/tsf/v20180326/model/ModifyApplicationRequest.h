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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYAPPLICATIONREQUEST_H_
