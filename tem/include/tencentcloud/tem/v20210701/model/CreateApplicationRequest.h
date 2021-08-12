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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_CREATEAPPLICATIONREQUEST_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_CREATEAPPLICATIONREQUEST_H_

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
                * CreateApplication请求参数结构体
                */
                class CreateApplicationRequest : public AbstractModel
                {
                public:
                    CreateApplicationRequest();
                    ~CreateApplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用名
                     * @return ApplicationName 应用名
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置应用名
                     * @param ApplicationName 应用名
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Description 描述
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param Description 描述
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取是否使用默认镜像服务 1-是，0-否
                     * @return UseDefaultImageService 是否使用默认镜像服务 1-是，0-否
                     */
                    int64_t GetUseDefaultImageService() const;

                    /**
                     * 设置是否使用默认镜像服务 1-是，0-否
                     * @param UseDefaultImageService 是否使用默认镜像服务 1-是，0-否
                     */
                    void SetUseDefaultImageService(const int64_t& _useDefaultImageService);

                    /**
                     * 判断参数 UseDefaultImageService 是否已赋值
                     * @return UseDefaultImageService 是否已赋值
                     */
                    bool UseDefaultImageServiceHasBeenSet() const;

                    /**
                     * 获取如果是绑定仓库，绑定的仓库类型，0-个人版，1-企业版
                     * @return RepoType 如果是绑定仓库，绑定的仓库类型，0-个人版，1-企业版
                     */
                    int64_t GetRepoType() const;

                    /**
                     * 设置如果是绑定仓库，绑定的仓库类型，0-个人版，1-企业版
                     * @param RepoType 如果是绑定仓库，绑定的仓库类型，0-个人版，1-企业版
                     */
                    void SetRepoType(const int64_t& _repoType);

                    /**
                     * 判断参数 RepoType 是否已赋值
                     * @return RepoType 是否已赋值
                     */
                    bool RepoTypeHasBeenSet() const;

                    /**
                     * 获取企业版镜像服务的实例id
                     * @return InstanceId 企业版镜像服务的实例id
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置企业版镜像服务的实例id
                     * @param InstanceId 企业版镜像服务的实例id
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取绑定镜像服务器地址
                     * @return RepoServer 绑定镜像服务器地址
                     */
                    std::string GetRepoServer() const;

                    /**
                     * 设置绑定镜像服务器地址
                     * @param RepoServer 绑定镜像服务器地址
                     */
                    void SetRepoServer(const std::string& _repoServer);

                    /**
                     * 判断参数 RepoServer 是否已赋值
                     * @return RepoServer 是否已赋值
                     */
                    bool RepoServerHasBeenSet() const;

                    /**
                     * 获取绑定镜像仓库名
                     * @return RepoName 绑定镜像仓库名
                     */
                    std::string GetRepoName() const;

                    /**
                     * 设置绑定镜像仓库名
                     * @param RepoName 绑定镜像仓库名
                     */
                    void SetRepoName(const std::string& _repoName);

                    /**
                     * 判断参数 RepoName 是否已赋值
                     * @return RepoName 是否已赋值
                     */
                    bool RepoNameHasBeenSet() const;

                    /**
                     * 获取来源渠道
                     * @return SourceChannel 来源渠道
                     */
                    int64_t GetSourceChannel() const;

                    /**
                     * 设置来源渠道
                     * @param SourceChannel 来源渠道
                     */
                    void SetSourceChannel(const int64_t& _sourceChannel);

                    /**
                     * 判断参数 SourceChannel 是否已赋值
                     * @return SourceChannel 是否已赋值
                     */
                    bool SourceChannelHasBeenSet() const;

                    /**
                     * 获取应用所在子网
                     * @return SubnetList 应用所在子网
                     */
                    std::vector<std::string> GetSubnetList() const;

                    /**
                     * 设置应用所在子网
                     * @param SubnetList 应用所在子网
                     */
                    void SetSubnetList(const std::vector<std::string>& _subnetList);

                    /**
                     * 判断参数 SubnetList 是否已赋值
                     * @return SubnetList 是否已赋值
                     */
                    bool SubnetListHasBeenSet() const;

                    /**
                     * 获取编程语言 
- JAVA
- OTHER
                     * @return CodingLanguage 编程语言 
- JAVA
- OTHER
                     */
                    std::string GetCodingLanguage() const;

                    /**
                     * 设置编程语言 
- JAVA
- OTHER
                     * @param CodingLanguage 编程语言 
- JAVA
- OTHER
                     */
                    void SetCodingLanguage(const std::string& _codingLanguage);

                    /**
                     * 判断参数 CodingLanguage 是否已赋值
                     * @return CodingLanguage 是否已赋值
                     */
                    bool CodingLanguageHasBeenSet() const;

                    /**
                     * 获取部署方式 
- IMAGE
- JAR
- WAR
                     * @return DeployMode 部署方式 
- IMAGE
- JAR
- WAR
                     */
                    std::string GetDeployMode() const;

                    /**
                     * 设置部署方式 
- IMAGE
- JAR
- WAR
                     * @param DeployMode 部署方式 
- IMAGE
- JAR
- WAR
                     */
                    void SetDeployMode(const std::string& _deployMode);

                    /**
                     * 判断参数 DeployMode 是否已赋值
                     * @return DeployMode 是否已赋值
                     */
                    bool DeployModeHasBeenSet() const;

                    /**
                     * 获取是否启用调用链功能
                     * @return EnableTracing 是否启用调用链功能
                     */
                    int64_t GetEnableTracing() const;

                    /**
                     * 设置是否启用调用链功能
                     * @param EnableTracing 是否启用调用链功能
                     */
                    void SetEnableTracing(const int64_t& _enableTracing);

                    /**
                     * 判断参数 EnableTracing 是否已赋值
                     * @return EnableTracing 是否已赋值
                     */
                    bool EnableTracingHasBeenSet() const;

                private:

                    /**
                     * 应用名
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 是否使用默认镜像服务 1-是，0-否
                     */
                    int64_t m_useDefaultImageService;
                    bool m_useDefaultImageServiceHasBeenSet;

                    /**
                     * 如果是绑定仓库，绑定的仓库类型，0-个人版，1-企业版
                     */
                    int64_t m_repoType;
                    bool m_repoTypeHasBeenSet;

                    /**
                     * 企业版镜像服务的实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 绑定镜像服务器地址
                     */
                    std::string m_repoServer;
                    bool m_repoServerHasBeenSet;

                    /**
                     * 绑定镜像仓库名
                     */
                    std::string m_repoName;
                    bool m_repoNameHasBeenSet;

                    /**
                     * 来源渠道
                     */
                    int64_t m_sourceChannel;
                    bool m_sourceChannelHasBeenSet;

                    /**
                     * 应用所在子网
                     */
                    std::vector<std::string> m_subnetList;
                    bool m_subnetListHasBeenSet;

                    /**
                     * 编程语言 
- JAVA
- OTHER
                     */
                    std::string m_codingLanguage;
                    bool m_codingLanguageHasBeenSet;

                    /**
                     * 部署方式 
- IMAGE
- JAR
- WAR
                     */
                    std::string m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * 是否启用调用链功能
                     */
                    int64_t m_enableTracing;
                    bool m_enableTracingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_CREATEAPPLICATIONREQUEST_H_
