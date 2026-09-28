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
                     * 获取<p>服务名</p>
                     * @return ServiceName <p>服务名</p>
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置<p>服务名</p>
                     * @param _serviceName <p>服务名</p>
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
                     * 获取<p>框架名</p>
                     * @return Framework <p>框架名</p>
                     * 
                     */
                    std::string GetFramework() const;

                    /**
                     * 设置<p>框架名</p>
                     * @param _framework <p>框架名</p>
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
                     * 获取<p>域名</p>
                     * @return Domain <p>域名</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>域名</p>
                     * @param _domain <p>域名</p>
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
                     * 获取<p>应用路径</p>
                     * @return AppPath <p>应用路径</p>
                     * 
                     */
                    std::string GetAppPath() const;

                    /**
                     * 设置<p>应用路径</p>
                     * @param _appPath <p>应用路径</p>
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
                     * 获取<p>服务创建时间</p>
                     * @return CreateTime <p>服务创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>服务创建时间</p>
                     * @param _createTime <p>服务创建时间</p>
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
                     * 获取<p>最新版本名</p>
                     * @return LatestVersionName <p>最新版本名</p>
                     * 
                     */
                    std::string GetLatestVersionName() const;

                    /**
                     * 设置<p>最新版本名</p>
                     * @param _latestVersionName <p>最新版本名</p>
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
                     * 获取<p>最新版本状态</p>
                     * @return LatestStatus <p>最新版本状态</p>
                     * 
                     */
                    std::string GetLatestStatus() const;

                    /**
                     * 设置<p>最新版本状态</p>
                     * @param _latestStatus <p>最新版本状态</p>
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
                     * 获取<p>最新版本构建时间</p>
                     * @return LatestBuildTime <p>最新版本构建时间</p>
                     * 
                     */
                    std::string GetLatestBuildTime() const;

                    /**
                     * 设置<p>最新版本构建时间</p>
                     * @param _latestBuildTime <p>最新版本构建时间</p>
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
                     * 获取<p>部署类型</p>
                     * @return DeployType <p>部署类型</p>
                     * 
                     */
                    std::string GetDeployType() const;

                    /**
                     * 设置<p>部署类型</p>
                     * @param _deployType <p>部署类型</p>
                     * 
                     */
                    void SetDeployType(const std::string& _deployType);

                    /**
                     * 判断参数 DeployType 是否已赋值
                     * @return DeployType 是否已赋值
                     * 
                     */
                    bool DeployTypeHasBeenSet() const;

                    /**
                     * 获取<p>构建配置</p>
                     * @return BuildConfig <p>构建配置</p>
                     * 
                     */
                    std::string GetBuildConfig() const;

                    /**
                     * 设置<p>构建配置</p>
                     * @param _buildConfig <p>构建配置</p>
                     * 
                     */
                    void SetBuildConfig(const std::string& _buildConfig);

                    /**
                     * 判断参数 BuildConfig 是否已赋值
                     * @return BuildConfig 是否已赋值
                     * 
                     */
                    bool BuildConfigHasBeenSet() const;

                    /**
                     * 获取<p>当前流量版本</p>
                     * @return CurrentVersion <p>当前流量版本</p>
                     * 
                     */
                    std::string GetCurrentVersion() const;

                    /**
                     * 设置<p>当前流量版本</p>
                     * @param _currentVersion <p>当前流量版本</p>
                     * 
                     */
                    void SetCurrentVersion(const std::string& _currentVersion);

                    /**
                     * 判断参数 CurrentVersion 是否已赋值
                     * @return CurrentVersion 是否已赋值
                     * 
                     */
                    bool CurrentVersionHasBeenSet() const;

                private:

                    /**
                     * <p>服务名</p>
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * <p>框架名</p>
                     */
                    std::string m_framework;
                    bool m_frameworkHasBeenSet;

                    /**
                     * <p>域名</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>应用路径</p>
                     */
                    std::string m_appPath;
                    bool m_appPathHasBeenSet;

                    /**
                     * <p>服务创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>最新版本名</p>
                     */
                    std::string m_latestVersionName;
                    bool m_latestVersionNameHasBeenSet;

                    /**
                     * <p>最新版本状态</p>
                     */
                    std::string m_latestStatus;
                    bool m_latestStatusHasBeenSet;

                    /**
                     * <p>最新版本构建时间</p>
                     */
                    std::string m_latestBuildTime;
                    bool m_latestBuildTimeHasBeenSet;

                    /**
                     * <p>部署类型</p>
                     */
                    std::string m_deployType;
                    bool m_deployTypeHasBeenSet;

                    /**
                     * <p>构建配置</p>
                     */
                    std::string m_buildConfig;
                    bool m_buildConfigHasBeenSet;

                    /**
                     * <p>当前流量版本</p>
                     */
                    std::string m_currentVersion;
                    bool m_currentVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDAPPSERVICEITEM_H_
