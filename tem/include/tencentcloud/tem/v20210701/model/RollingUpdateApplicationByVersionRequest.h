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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_ROLLINGUPDATEAPPLICATIONBYVERSIONREQUEST_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_ROLLINGUPDATEAPPLICATIONBYVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * RollingUpdateApplicationByVersion请求参数结构体
                */
                class RollingUpdateApplicationByVersionRequest : public AbstractModel
                {
                public:
                    RollingUpdateApplicationByVersionRequest();
                    ~RollingUpdateApplicationByVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return ApplicationId 应用ID
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用ID
                     * @param ApplicationId 应用ID
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取环境ID
                     * @return EnvironmentId 环境ID
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置环境ID
                     * @param EnvironmentId 环境ID
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取更新版本，IMAGE 部署为 tag 值；JAR/WAR 部署 为 Version
                     * @return DeployVersion 更新版本，IMAGE 部署为 tag 值；JAR/WAR 部署 为 Version
                     */
                    std::string GetDeployVersion() const;

                    /**
                     * 设置更新版本，IMAGE 部署为 tag 值；JAR/WAR 部署 为 Version
                     * @param DeployVersion 更新版本，IMAGE 部署为 tag 值；JAR/WAR 部署 为 Version
                     */
                    void SetDeployVersion(const std::string& _deployVersion);

                    /**
                     * 判断参数 DeployVersion 是否已赋值
                     * @return DeployVersion 是否已赋值
                     */
                    bool DeployVersionHasBeenSet() const;

                    /**
                     * 获取JAR/WAR 包名，仅 JAR/WAR 部署时必填
                     * @return PackageName JAR/WAR 包名，仅 JAR/WAR 部署时必填
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置JAR/WAR 包名，仅 JAR/WAR 部署时必填
                     * @param PackageName JAR/WAR 包名，仅 JAR/WAR 部署时必填
                     */
                    void SetPackageName(const std::string& _packageName);

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     */
                    bool PackageNameHasBeenSet() const;

                    /**
                     * 获取请求来源平台，含 IntelliJ，Coding
                     * @return From 请求来源平台，含 IntelliJ，Coding
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置请求来源平台，含 IntelliJ，Coding
                     * @param From 请求来源平台，含 IntelliJ，Coding
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     */
                    bool FromHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 环境ID
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 更新版本，IMAGE 部署为 tag 值；JAR/WAR 部署 为 Version
                     */
                    std::string m_deployVersion;
                    bool m_deployVersionHasBeenSet;

                    /**
                     * JAR/WAR 包名，仅 JAR/WAR 部署时必填
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * 请求来源平台，含 IntelliJ，Coding
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_ROLLINGUPDATEAPPLICATIONBYVERSIONREQUEST_H_
