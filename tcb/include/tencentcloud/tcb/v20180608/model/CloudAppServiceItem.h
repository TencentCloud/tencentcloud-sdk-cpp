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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDAPPSERVICEITEM_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDAPPSERVICEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 部署服务信息
                */
                class CloudAppServiceItem : public AbstractModel
                {
                public:
                    CloudAppServiceItem();
                    ~CloudAppServiceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务名
                     * @return ServiceName 服务名
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置服务名
                     * @param _serviceName 服务名
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取框架名
                     * @return Framework 框架名
                     * 
                     */
                    std::string GetFramework() const;

                    /**
                     * 设置框架名
                     * @param _framework 框架名
                     * 
                     */
                    void SetFramework(const std::string& _framework);

                    /**
                     * 判断参数 Framework 是否已赋值
                     * @return Framework 是否已赋值
                     * 
                     */
                    bool FrameworkHasBeenSet() const;

                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取应用路径
                     * @return AppPath 应用路径
                     * 
                     */
                    std::string GetAppPath() const;

                    /**
                     * 设置应用路径
                     * @param _appPath 应用路径
                     * 
                     */
                    void SetAppPath(const std::string& _appPath);

                    /**
                     * 判断参数 AppPath 是否已赋值
                     * @return AppPath 是否已赋值
                     * 
                     */
                    bool AppPathHasBeenSet() const;

                    /**
                     * 获取服务创建时间
                     * @return CreateTime 服务创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置服务创建时间
                     * @param _createTime 服务创建时间
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
                     * 获取最新版本名
                     * @return LatestVersionName 最新版本名
                     * 
                     */
                    std::string GetLatestVersionName() const;

                    /**
                     * 设置最新版本名
                     * @param _latestVersionName 最新版本名
                     * 
                     */
                    void SetLatestVersionName(const std::string& _latestVersionName);

                    /**
                     * 判断参数 LatestVersionName 是否已赋值
                     * @return LatestVersionName 是否已赋值
                     * 
                     */
                    bool LatestVersionNameHasBeenSet() const;

                    /**
                     * 获取最新版本状态
                     * @return LatestStatus 最新版本状态
                     * 
                     */
                    std::string GetLatestStatus() const;

                    /**
                     * 设置最新版本状态
                     * @param _latestStatus 最新版本状态
                     * 
                     */
                    void SetLatestStatus(const std::string& _latestStatus);

                    /**
                     * 判断参数 LatestStatus 是否已赋值
                     * @return LatestStatus 是否已赋值
                     * 
                     */
                    bool LatestStatusHasBeenSet() const;

                    /**
                     * 获取最新版本构建时间
                     * @return LatestBuildTime 最新版本构建时间
                     * 
                     */
                    std::string GetLatestBuildTime() const;

                    /**
                     * 设置最新版本构建时间
                     * @param _latestBuildTime 最新版本构建时间
                     * 
                     */
                    void SetLatestBuildTime(const std::string& _latestBuildTime);

                    /**
                     * 判断参数 LatestBuildTime 是否已赋值
                     * @return LatestBuildTime 是否已赋值
                     * 
                     */
                    bool LatestBuildTimeHasBeenSet() const;

                    /**
                     * 获取部署类型
                     * @return DeployType 部署类型
                     * 
                     */
                    std::string GetDeployType() const;

                    /**
                     * 设置部署类型
                     * @param _deployType 部署类型
                     * 
                     */
                    void SetDeployType(const std::string& _deployType);

                    /**
                     * 判断参数 DeployType 是否已赋值
                     * @return DeployType 是否已赋值
                     * 
                     */
                    bool DeployTypeHasBeenSet() const;

                private:

                    /**
                     * 服务名
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 框架名
                     */
                    std::string m_framework;
                    bool m_frameworkHasBeenSet;

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 应用路径
                     */
                    std::string m_appPath;
                    bool m_appPathHasBeenSet;

                    /**
                     * 服务创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最新版本名
                     */
                    std::string m_latestVersionName;
                    bool m_latestVersionNameHasBeenSet;

                    /**
                     * 最新版本状态
                     */
                    std::string m_latestStatus;
                    bool m_latestStatusHasBeenSet;

                    /**
                     * 最新版本构建时间
                     */
                    std::string m_latestBuildTime;
                    bool m_latestBuildTimeHasBeenSet;

                    /**
                     * 部署类型
                     */
                    std::string m_deployType;
                    bool m_deployTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDAPPSERVICEITEM_H_
