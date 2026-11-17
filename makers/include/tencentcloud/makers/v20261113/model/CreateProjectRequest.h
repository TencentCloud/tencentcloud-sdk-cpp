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

#ifndef TENCENTCLOUD_MAKERS_V20261113_MODEL_CREATEPROJECTREQUEST_H_
#define TENCENTCLOUD_MAKERS_V20261113_MODEL_CREATEPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/makers/v20261113/model/EnvVar.h>


namespace TencentCloud
{
    namespace Makers
    {
        namespace V20261113
        {
            namespace Model
            {
                /**
                * CreateProject请求参数结构体
                */
                class CreateProjectRequest : public AbstractModel
                {
                public:
                    CreateProjectRequest();
                    ~CreateProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Makers 站点 ID</p>
                     * @return ZoneId <p>Makers 站点 ID</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Makers 站点 ID</p>
                     * @param _zoneId <p>Makers 站点 ID</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>项目名称</p>
                     * @return Name <p>项目名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>项目名称</p>
                     * @param _name <p>项目名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>创建来源。Template、Custom、CLI、Guest</p>
                     * @return Channel <p>创建来源。Template、Custom、CLI、Guest</p>
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置<p>创建来源。Template、Custom、CLI、Guest</p>
                     * @param _channel <p>创建来源。Template、Custom、CLI、Guest</p>
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取<p>代码来源。Upload、Github、Gitee、Gitlab、Coding</p>
                     * @return Provider <p>代码来源。Upload、Github、Gitee、Gitlab、Coding</p>
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置<p>代码来源。Upload、Github、Gitee、Gitlab、Coding</p>
                     * @param _provider <p>代码来源。Upload、Github、Gitee、Gitlab、Coding</p>
                     * 
                     */
                    void SetProvider(const std::string& _provider);

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     * 
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取<p>接入方标识</p>
                     * @return Source <p>接入方标识</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>接入方标识</p>
                     * @param _source <p>接入方标识</p>
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>加速区域。mainland、overseas、global</p>
                     * @return Area <p>加速区域。mainland、overseas、global</p>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置<p>加速区域。mainland、overseas、global</p>
                     * @param _area <p>加速区域。mainland、overseas、global</p>
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取<p>Node.js 版本。14.21.3、16.20.2、18.20.4、20.18.0、22.11.0、22.17.1、22.21.1、24.5.0、24.11.0、24.18.0</p>
                     * @return NodeJsVersion <p>Node.js 版本。14.21.3、16.20.2、18.20.4、20.18.0、22.11.0、22.17.1、22.21.1、24.5.0、24.11.0、24.18.0</p>
                     * 
                     */
                    std::string GetNodeJsVersion() const;

                    /**
                     * 设置<p>Node.js 版本。14.21.3、16.20.2、18.20.4、20.18.0、22.11.0、22.17.1、22.21.1、24.5.0、24.11.0、24.18.0</p>
                     * @param _nodeJsVersion <p>Node.js 版本。14.21.3、16.20.2、18.20.4、20.18.0、22.11.0、22.17.1、22.21.1、24.5.0、24.11.0、24.18.0</p>
                     * 
                     */
                    void SetNodeJsVersion(const std::string& _nodeJsVersion);

                    /**
                     * 判断参数 NodeJsVersion 是否已赋值
                     * @return NodeJsVersion 是否已赋值
                     * 
                     */
                    bool NodeJsVersionHasBeenSet() const;

                    /**
                     * 获取<p>项目根目录</p>
                     * @return RootDir <p>项目根目录</p>
                     * 
                     */
                    std::string GetRootDir() const;

                    /**
                     * 设置<p>项目根目录</p>
                     * @param _rootDir <p>项目根目录</p>
                     * 
                     */
                    void SetRootDir(const std::string& _rootDir);

                    /**
                     * 判断参数 RootDir 是否已赋值
                     * @return RootDir 是否已赋值
                     * 
                     */
                    bool RootDirHasBeenSet() const;

                    /**
                     * 获取<p>构建产物目录</p>
                     * @return OutputDir <p>构建产物目录</p>
                     * 
                     */
                    std::string GetOutputDir() const;

                    /**
                     * 设置<p>构建产物目录</p>
                     * @param _outputDir <p>构建产物目录</p>
                     * 
                     */
                    void SetOutputDir(const std::string& _outputDir);

                    /**
                     * 判断参数 OutputDir 是否已赋值
                     * @return OutputDir 是否已赋值
                     * 
                     */
                    bool OutputDirHasBeenSet() const;

                    /**
                     * 获取<p>构建命令</p>
                     * @return BuildCmd <p>构建命令</p>
                     * 
                     */
                    std::string GetBuildCmd() const;

                    /**
                     * 设置<p>构建命令</p>
                     * @param _buildCmd <p>构建命令</p>
                     * 
                     */
                    void SetBuildCmd(const std::string& _buildCmd);

                    /**
                     * 判断参数 BuildCmd 是否已赋值
                     * @return BuildCmd 是否已赋值
                     * 
                     */
                    bool BuildCmdHasBeenSet() const;

                    /**
                     * 获取<p>安装命令</p>
                     * @return InstallCmd <p>安装命令</p>
                     * 
                     */
                    std::string GetInstallCmd() const;

                    /**
                     * 设置<p>安装命令</p>
                     * @param _installCmd <p>安装命令</p>
                     * 
                     */
                    void SetInstallCmd(const std::string& _installCmd);

                    /**
                     * 判断参数 InstallCmd 是否已赋值
                     * @return InstallCmd 是否已赋值
                     * 
                     */
                    bool InstallCmdHasBeenSet() const;

                    /**
                     * 获取<p>框架</p>
                     * @return Framework <p>框架</p>
                     * 
                     */
                    std::string GetFramework() const;

                    /**
                     * 设置<p>框架</p>
                     * @param _framework <p>框架</p>
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
                     * 获取<p>模板 ID</p>
                     * @return TemplateId <p>模板 ID</p>
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>模板 ID</p>
                     * @param _templateId <p>模板 ID</p>
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>仓库地址</p>
                     * @return RepoUrl <p>仓库地址</p>
                     * 
                     */
                    std::string GetRepoUrl() const;

                    /**
                     * 设置<p>仓库地址</p>
                     * @param _repoUrl <p>仓库地址</p>
                     * 
                     */
                    void SetRepoUrl(const std::string& _repoUrl);

                    /**
                     * 判断参数 RepoUrl 是否已赋值
                     * @return RepoUrl 是否已赋值
                     * 
                     */
                    bool RepoUrlHasBeenSet() const;

                    /**
                     * 获取<p>仓库所有者</p>
                     * @return RepoOwner <p>仓库所有者</p>
                     * 
                     */
                    std::string GetRepoOwner() const;

                    /**
                     * 设置<p>仓库所有者</p>
                     * @param _repoOwner <p>仓库所有者</p>
                     * 
                     */
                    void SetRepoOwner(const std::string& _repoOwner);

                    /**
                     * 判断参数 RepoOwner 是否已赋值
                     * @return RepoOwner 是否已赋值
                     * 
                     */
                    bool RepoOwnerHasBeenSet() const;

                    /**
                     * 获取<p>仓库名称</p>
                     * @return RepoName <p>仓库名称</p>
                     * 
                     */
                    std::string GetRepoName() const;

                    /**
                     * 设置<p>仓库名称</p>
                     * @param _repoName <p>仓库名称</p>
                     * 
                     */
                    void SetRepoName(const std::string& _repoName);

                    /**
                     * 判断参数 RepoName 是否已赋值
                     * @return RepoName 是否已赋值
                     * 
                     */
                    bool RepoNameHasBeenSet() const;

                    /**
                     * 获取<p>生产分支</p>
                     * @return RepoBranch <p>生产分支</p>
                     * 
                     */
                    std::string GetRepoBranch() const;

                    /**
                     * 设置<p>生产分支</p>
                     * @param _repoBranch <p>生产分支</p>
                     * 
                     */
                    void SetRepoBranch(const std::string& _repoBranch);

                    /**
                     * 判断参数 RepoBranch 是否已赋值
                     * @return RepoBranch 是否已赋值
                     * 
                     */
                    bool RepoBranchHasBeenSet() const;

                    /**
                     * 获取<p>初始环境变量</p>
                     * @return EnvVars <p>初始环境变量</p>
                     * 
                     */
                    std::vector<EnvVar> GetEnvVars() const;

                    /**
                     * 设置<p>初始环境变量</p>
                     * @param _envVars <p>初始环境变量</p>
                     * 
                     */
                    void SetEnvVars(const std::vector<EnvVar>& _envVars);

                    /**
                     * 判断参数 EnvVars 是否已赋值
                     * @return EnvVars 是否已赋值
                     * 
                     */
                    bool EnvVarsHasBeenSet() const;

                    /**
                     * 获取<p>Coding 命名空间。Provider 为 Coding 时使用</p>
                     * @return Namespace <p>Coding 命名空间。Provider 为 Coding 时使用</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>Coding 命名空间。Provider 为 Coding 时使用</p>
                     * @param _namespace <p>Coding 命名空间。Provider 为 Coding 时使用</p>
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取<p>Coding 项目 ID。Provider 为 Coding 时使用</p>
                     * @return CodingProjectId <p>Coding 项目 ID。Provider 为 Coding 时使用</p>
                     * 
                     */
                    int64_t GetCodingProjectId() const;

                    /**
                     * 设置<p>Coding 项目 ID。Provider 为 Coding 时使用</p>
                     * @param _codingProjectId <p>Coding 项目 ID。Provider 为 Coding 时使用</p>
                     * 
                     */
                    void SetCodingProjectId(const int64_t& _codingProjectId);

                    /**
                     * 判断参数 CodingProjectId 是否已赋值
                     * @return CodingProjectId 是否已赋值
                     * 
                     */
                    bool CodingProjectIdHasBeenSet() const;

                private:

                    /**
                     * <p>Makers 站点 ID</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>项目名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>创建来源。Template、Custom、CLI、Guest</p>
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * <p>代码来源。Upload、Github、Gitee、Gitlab、Coding</p>
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * <p>接入方标识</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>加速区域。mainland、overseas、global</p>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * <p>Node.js 版本。14.21.3、16.20.2、18.20.4、20.18.0、22.11.0、22.17.1、22.21.1、24.5.0、24.11.0、24.18.0</p>
                     */
                    std::string m_nodeJsVersion;
                    bool m_nodeJsVersionHasBeenSet;

                    /**
                     * <p>项目根目录</p>
                     */
                    std::string m_rootDir;
                    bool m_rootDirHasBeenSet;

                    /**
                     * <p>构建产物目录</p>
                     */
                    std::string m_outputDir;
                    bool m_outputDirHasBeenSet;

                    /**
                     * <p>构建命令</p>
                     */
                    std::string m_buildCmd;
                    bool m_buildCmdHasBeenSet;

                    /**
                     * <p>安装命令</p>
                     */
                    std::string m_installCmd;
                    bool m_installCmdHasBeenSet;

                    /**
                     * <p>框架</p>
                     */
                    std::string m_framework;
                    bool m_frameworkHasBeenSet;

                    /**
                     * <p>模板 ID</p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>仓库地址</p>
                     */
                    std::string m_repoUrl;
                    bool m_repoUrlHasBeenSet;

                    /**
                     * <p>仓库所有者</p>
                     */
                    std::string m_repoOwner;
                    bool m_repoOwnerHasBeenSet;

                    /**
                     * <p>仓库名称</p>
                     */
                    std::string m_repoName;
                    bool m_repoNameHasBeenSet;

                    /**
                     * <p>生产分支</p>
                     */
                    std::string m_repoBranch;
                    bool m_repoBranchHasBeenSet;

                    /**
                     * <p>初始环境变量</p>
                     */
                    std::vector<EnvVar> m_envVars;
                    bool m_envVarsHasBeenSet;

                    /**
                     * <p>Coding 命名空间。Provider 为 Coding 时使用</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>Coding 项目 ID。Provider 为 Coding 时使用</p>
                     */
                    int64_t m_codingProjectId;
                    bool m_codingProjectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MAKERS_V20261113_MODEL_CREATEPROJECTREQUEST_H_
