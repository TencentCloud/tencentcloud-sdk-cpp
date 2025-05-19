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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_APPLICATIONINFO_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_APPLICATIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * 应用信息
                */
                class ApplicationInfo : public AbstractModel
                {
                public:
                    ApplicationInfo();
                    ~ApplicationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用id

                     * @return ApplicationId 应用id

                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用id

                     * @param _applicationId 应用id

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

                     * @return Description 应用描述

                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置应用描述

                     * @param _description 应用描述

                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取应用的环境配置
                     * @return ConfigEnvironment 应用的环境配置
                     * 
                     */
                    std::string GetConfigEnvironment() const;

                    /**
                     * 设置应用的环境配置
                     * @param _configEnvironment 应用的环境配置
                     * 
                     */
                    void SetConfigEnvironment(const std::string& _configEnvironment);

                    /**
                     * 判断参数 ConfigEnvironment 是否已赋值
                     * @return ConfigEnvironment 是否已赋值
                     * 
                     */
                    bool ConfigEnvironmentHasBeenSet() const;

                    /**
                     * 获取系统盘大小下限，单位GB
                     * @return MinSystemDiskSize 系统盘大小下限，单位GB
                     * 
                     */
                    int64_t GetMinSystemDiskSize() const;

                    /**
                     * 设置系统盘大小下限，单位GB
                     * @param _minSystemDiskSize 系统盘大小下限，单位GB
                     * 
                     */
                    void SetMinSystemDiskSize(const int64_t& _minSystemDiskSize);

                    /**
                     * 判断参数 MinSystemDiskSize 是否已赋值
                     * @return MinSystemDiskSize 是否已赋值
                     * 
                     */
                    bool MinSystemDiskSizeHasBeenSet() const;

                    /**
                     * 获取应用类型，目前该项取值可以为PUBLIC_APPLICATION（公共应用）；PRIVATE_APPLICATION（自定义应用）；COMMUNITY_APPLICATION（社区应用）
                     * @return ApplicationType 应用类型，目前该项取值可以为PUBLIC_APPLICATION（公共应用）；PRIVATE_APPLICATION（自定义应用）；COMMUNITY_APPLICATION（社区应用）
                     * 
                     */
                    std::string GetApplicationType() const;

                    /**
                     * 设置应用类型，目前该项取值可以为PUBLIC_APPLICATION（公共应用）；PRIVATE_APPLICATION（自定义应用）；COMMUNITY_APPLICATION（社区应用）
                     * @param _applicationType 应用类型，目前该项取值可以为PUBLIC_APPLICATION（公共应用）；PRIVATE_APPLICATION（自定义应用）；COMMUNITY_APPLICATION（社区应用）
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
                     * 获取应用状态：CREATING-创建中；ONLINE -正常在线；DELETING -删除中；ARREARS - 欠费隔离
示例值：ONLINE
                     * @return ApplicationState 应用状态：CREATING-创建中；ONLINE -正常在线；DELETING -删除中；ARREARS - 欠费隔离
示例值：ONLINE
                     * 
                     */
                    std::string GetApplicationState() const;

                    /**
                     * 设置应用状态：CREATING-创建中；ONLINE -正常在线；DELETING -删除中；ARREARS - 欠费隔离
示例值：ONLINE
                     * @param _applicationState 应用状态：CREATING-创建中；ONLINE -正常在线；DELETING -删除中；ARREARS - 欠费隔离
示例值：ONLINE
                     * 
                     */
                    void SetApplicationState(const std::string& _applicationState);

                    /**
                     * 判断参数 ApplicationState 是否已赋值
                     * @return ApplicationState 是否已赋值
                     * 
                     */
                    bool ApplicationStateHasBeenSet() const;

                    /**
                     * 获取应用创建时间，格式：%Y-%m-%d %H:%M:%S
                     * @return CreateTime 应用创建时间，格式：%Y-%m-%d %H:%M:%S
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置应用创建时间，格式：%Y-%m-%d %H:%M:%S
                     * @param _createTime 应用创建时间，格式：%Y-%m-%d %H:%M:%S
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
                     * 获取应用大小，单位GB
                     * @return ApplicationSize 应用大小，单位GB
                     * 
                     */
                    int64_t GetApplicationSize() const;

                    /**
                     * 设置应用大小，单位GB
                     * @param _applicationSize 应用大小，单位GB
                     * 
                     */
                    void SetApplicationSize(const int64_t& _applicationSize);

                    /**
                     * 判断参数 ApplicationSize 是否已赋值
                     * @return ApplicationSize 是否已赋值
                     * 
                     */
                    bool ApplicationSizeHasBeenSet() const;

                private:

                    /**
                     * 应用id

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

                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 应用的环境配置
                     */
                    std::string m_configEnvironment;
                    bool m_configEnvironmentHasBeenSet;

                    /**
                     * 系统盘大小下限，单位GB
                     */
                    int64_t m_minSystemDiskSize;
                    bool m_minSystemDiskSizeHasBeenSet;

                    /**
                     * 应用类型，目前该项取值可以为PUBLIC_APPLICATION（公共应用）；PRIVATE_APPLICATION（自定义应用）；COMMUNITY_APPLICATION（社区应用）
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * 应用状态：CREATING-创建中；ONLINE -正常在线；DELETING -删除中；ARREARS - 欠费隔离
示例值：ONLINE
                     */
                    std::string m_applicationState;
                    bool m_applicationStateHasBeenSet;

                    /**
                     * 应用创建时间，格式：%Y-%m-%d %H:%M:%S
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 应用大小，单位GB
                     */
                    int64_t m_applicationSize;
                    bool m_applicationSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_APPLICATIONINFO_H_
