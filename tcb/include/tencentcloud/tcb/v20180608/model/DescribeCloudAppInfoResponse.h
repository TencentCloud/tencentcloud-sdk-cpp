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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDAPPINFORESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDAPPINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeCloudAppInfo返回参数结构体
                */
                class DescribeCloudAppInfoResponse : public AbstractModel
                {
                public:
                    DescribeCloudAppInfoResponse();
                    ~DescribeCloudAppInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>服务名称</p>
                     * @return ServiceName <p>服务名称</p>
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取<p>框架名称</p>
                     * @return Framework <p>框架名称</p>
                     * 
                     */
                    std::string GetFramework() const;

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
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>构建路径</p>
                     * @return AppPath <p>构建路径</p>
                     * 
                     */
                    std::string GetAppPath() const;

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
                     * 判断参数 DeployType 是否已赋值
                     * @return DeployType 是否已赋值
                     * 
                     */
                    bool DeployTypeHasBeenSet() const;

                private:

                    /**
                     * <p>服务名称</p>
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * <p>框架名称</p>
                     */
                    std::string m_framework;
                    bool m_frameworkHasBeenSet;

                    /**
                     * <p>域名</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>构建路径</p>
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDAPPINFORESPONSE_H_
