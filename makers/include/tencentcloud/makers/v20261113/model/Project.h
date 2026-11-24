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

#ifndef TENCENTCLOUD_MAKERS_V20261113_MODEL_PROJECT_H_
#define TENCENTCLOUD_MAKERS_V20261113_MODEL_PROJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/makers/v20261113/model/Regions.h>
#include <tencentcloud/makers/v20261113/model/ProjectEnvVar.h>
#include <tencentcloud/makers/v20261113/model/CustomDomainItem.h>
#include <tencentcloud/makers/v20261113/model/ProjectDeployment.h>


namespace TencentCloud
{
    namespace Makers
    {
        namespace V20261113
        {
            namespace Model
            {
                /**
                * 项目。字段与 DescribeProjects 的实际返回一致
                */
                class Project : public AbstractModel
                {
                public:
                    Project();
                    ~Project() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>项目 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId <p>项目 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId <p>项目 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>项目名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>项目名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>项目名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>项目名称</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>项目状态。Normal、Ban、Unlink、Process、Pending、Offline</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>项目状态。Normal、Ban、Unlink、Process、Pending、Offline</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>项目状态。Normal、Ban、Unlink、Process、Pending、Offline</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>项目状态。Normal、Ban、Unlink、Process、Pending、Offline</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>站点 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneId <p>站点 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>站点 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zoneId <p>站点 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>加速区域。mainland、overseas、global</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Area <p>加速区域。mainland、overseas、global</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置<p>加速区域。mainland、overseas、global</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _area <p>加速区域。mainland、overseas、global</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>代码来源。Github、Gitee、Coding、Upload、Gitlab、Bitbucket、Cnb</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Provider <p>代码来源。Github、Gitee、Coding、Upload、Gitlab、Bitbucket、Cnb</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置<p>代码来源。Github、Gitee、Coding、Upload、Gitlab、Bitbucket、Cnb</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _provider <p>代码来源。Github、Gitee、Coding、Upload、Gitlab、Bitbucket、Cnb</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>创建来源。Template、Custom、CLI、Guest</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Channel <p>创建来源。Template、Custom、CLI、Guest</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置<p>创建来源。Template、Custom、CLI、Guest</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channel <p>创建来源。Template、Custom、CLI、Guest</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>预设域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PresetDomain <p>预设域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPresetDomain() const;

                    /**
                     * 设置<p>预设域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _presetDomain <p>预设域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPresetDomain(const std::string& _presetDomain);

                    /**
                     * 判断参数 PresetDomain 是否已赋值
                     * @return PresetDomain 是否已赋值
                     * 
                     */
                    bool PresetDomainHasBeenSet() const;

                    /**
                     * 获取<p>预设域名状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PresetDomainStatus <p>预设域名状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPresetDomainStatus() const;

                    /**
                     * 设置<p>预设域名状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _presetDomainStatus <p>预设域名状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPresetDomainStatus(const std::string& _presetDomainStatus);

                    /**
                     * 判断参数 PresetDomainStatus 是否已赋值
                     * @return PresetDomainStatus 是否已赋值
                     * 
                     */
                    bool PresetDomainStatusHasBeenSet() const;

                    /**
                     * 获取<p>项目根目录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RootDir <p>项目根目录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRootDir() const;

                    /**
                     * 设置<p>项目根目录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rootDir <p>项目根目录</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputDir <p>构建产物目录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutputDir() const;

                    /**
                     * 设置<p>构建产物目录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputDir <p>构建产物目录</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BuildCmd <p>构建命令</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBuildCmd() const;

                    /**
                     * 设置<p>构建命令</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _buildCmd <p>构建命令</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstallCmd <p>安装命令</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstallCmd() const;

                    /**
                     * 设置<p>安装命令</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _installCmd <p>安装命令</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Framework <p>框架</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFramework() const;

                    /**
                     * 设置<p>框架</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _framework <p>框架</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>Node.js 版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodejsVersion <p>Node.js 版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodejsVersion() const;

                    /**
                     * 设置<p>Node.js 版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodejsVersion <p>Node.js 版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodejsVersion(const std::string& _nodejsVersion);

                    /**
                     * 判断参数 NodejsVersion 是否已赋值
                     * @return NodejsVersion 是否已赋值
                     * 
                     */
                    bool NodejsVersionHasBeenSet() const;

                    /**
                     * 获取<p>仓库地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RepoUrl <p>仓库地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRepoUrl() const;

                    /**
                     * 设置<p>仓库地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _repoUrl <p>仓库地址</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RepoOwner <p>仓库所有者</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRepoOwner() const;

                    /**
                     * 设置<p>仓库所有者</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _repoOwner <p>仓库所有者</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RepoName <p>仓库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRepoName() const;

                    /**
                     * 设置<p>仓库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _repoName <p>仓库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RepoBranch <p>生产分支</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRepoBranch() const;

                    /**
                     * 设置<p>生产分支</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _repoBranch <p>生产分支</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>预览分支</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RepoPreBranches <p>预览分支</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetRepoPreBranches() const;

                    /**
                     * 设置<p>预览分支</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _repoPreBranches <p>预览分支</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRepoPreBranches(const std::vector<std::string>& _repoPreBranches);

                    /**
                     * 判断参数 RepoPreBranches 是否已赋值
                     * @return RepoPreBranches 是否已赋值
                     * 
                     */
                    bool RepoPreBranchesHasBeenSet() const;

                    /**
                     * 获取<p>部署地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Regions <p>部署地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Regions GetRegions() const;

                    /**
                     * 设置<p>部署地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regions <p>部署地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegions(const Regions& _regions);

                    /**
                     * 判断参数 Regions 是否已赋值
                     * @return Regions 是否已赋值
                     * 
                     */
                    bool RegionsHasBeenSet() const;

                    /**
                     * 获取<p>环境变量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnvVars <p>环境变量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ProjectEnvVar> GetEnvVars() const;

                    /**
                     * 设置<p>环境变量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _envVars <p>环境变量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnvVars(const std::vector<ProjectEnvVar>& _envVars);

                    /**
                     * 判断参数 EnvVars 是否已赋值
                     * @return EnvVars 是否已赋值
                     * 
                     */
                    bool EnvVarsHasBeenSet() const;

                    /**
                     * 获取<p>自定义域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomDomains <p>自定义域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CustomDomainItem> GetCustomDomains() const;

                    /**
                     * 设置<p>自定义域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customDomains <p>自定义域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomDomains(const std::vector<CustomDomainItem>& _customDomains);

                    /**
                     * 判断参数 CustomDomains 是否已赋值
                     * @return CustomDomains 是否已赋值
                     * 
                     */
                    bool CustomDomainsHasBeenSet() const;

                    /**
                     * 获取<p>最近一次部署</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Deployment <p>最近一次部署</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ProjectDeployment GetDeployment() const;

                    /**
                     * 设置<p>最近一次部署</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deployment <p>最近一次部署</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeployment(const ProjectDeployment& _deployment);

                    /**
                     * 判断参数 Deployment 是否已赋值
                     * @return Deployment 是否已赋值
                     * 
                     */
                    bool DeploymentHasBeenSet() const;

                    /**
                     * 获取<p>是否 Agent 项目。1 是，0 否</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsAgent <p>是否 Agent 项目。1 是，0 否</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsAgent() const;

                    /**
                     * 设置<p>是否 Agent 项目。1 是，0 否</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isAgent <p>是否 Agent 项目。1 是，0 否</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsAgent(const int64_t& _isAgent);

                    /**
                     * 判断参数 IsAgent 是否已赋值
                     * @return IsAgent 是否已赋值
                     * 
                     */
                    bool IsAgentHasBeenSet() const;

                    /**
                     * 获取<p>Agent 框架。非 Agent 项目为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentFramework <p>Agent 框架。非 Agent 项目为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAgentFramework() const;

                    /**
                     * 设置<p>Agent 框架。非 Agent 项目为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentFramework <p>Agent 框架。非 Agent 项目为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAgentFramework(const std::string& _agentFramework);

                    /**
                     * 判断参数 AgentFramework 是否已赋值
                     * @return AgentFramework 是否已赋值
                     * 
                     */
                    bool AgentFrameworkHasBeenSet() const;

                    /**
                     * 获取<p>是否命中用户级泛域名。1 是，0 否</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsTld <p>是否命中用户级泛域名。1 是，0 否</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsTld() const;

                    /**
                     * 设置<p>是否命中用户级泛域名。1 是，0 否</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isTld <p>是否命中用户级泛域名。1 是，0 否</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsTld(const int64_t& _isTld);

                    /**
                     * 判断参数 IsTld 是否已赋值
                     * @return IsTld 是否已赋值
                     * 
                     */
                    bool IsTldHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedOn <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdOn <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifiedOn <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifiedOn() const;

                    /**
                     * 设置<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifiedOn <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifiedOn(const std::string& _modifiedOn);

                    /**
                     * 判断参数 ModifiedOn 是否已赋值
                     * @return ModifiedOn 是否已赋值
                     * 
                     */
                    bool ModifiedOnHasBeenSet() const;

                    /**
                     * 获取<p>构建规格客户契约</p><p>枚举值：</p><ul><li>standard： 4C6G，默认档，所有套餐可用</li><li>enhanced： 8C14G，专业版及以上可用；低配套餐声明时按 standard 处理并提示升级</li></ul><p>默认值：standard</p>
                     * @return BuildMachine <p>构建规格客户契约</p><p>枚举值：</p><ul><li>standard： 4C6G，默认档，所有套餐可用</li><li>enhanced： 8C14G，专业版及以上可用；低配套餐声明时按 standard 处理并提示升级</li></ul><p>默认值：standard</p>
                     * 
                     */
                    std::string GetBuildMachine() const;

                    /**
                     * 设置<p>构建规格客户契约</p><p>枚举值：</p><ul><li>standard： 4C6G，默认档，所有套餐可用</li><li>enhanced： 8C14G，专业版及以上可用；低配套餐声明时按 standard 处理并提示升级</li></ul><p>默认值：standard</p>
                     * @param _buildMachine <p>构建规格客户契约</p><p>枚举值：</p><ul><li>standard： 4C6G，默认档，所有套餐可用</li><li>enhanced： 8C14G，专业版及以上可用；低配套餐声明时按 standard 处理并提示升级</li></ul><p>默认值：standard</p>
                     * 
                     */
                    void SetBuildMachine(const std::string& _buildMachine);

                    /**
                     * 判断参数 BuildMachine 是否已赋值
                     * @return BuildMachine 是否已赋值
                     * 
                     */
                    bool BuildMachineHasBeenSet() const;

                private:

                    /**
                     * <p>项目 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>项目名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>项目状态。Normal、Ban、Unlink、Process、Pending、Offline</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>站点 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>加速区域。mainland、overseas、global</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * <p>代码来源。Github、Gitee、Coding、Upload、Gitlab、Bitbucket、Cnb</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * <p>创建来源。Template、Custom、CLI、Guest</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * <p>预设域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_presetDomain;
                    bool m_presetDomainHasBeenSet;

                    /**
                     * <p>预设域名状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_presetDomainStatus;
                    bool m_presetDomainStatusHasBeenSet;

                    /**
                     * <p>项目根目录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rootDir;
                    bool m_rootDirHasBeenSet;

                    /**
                     * <p>构建产物目录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outputDir;
                    bool m_outputDirHasBeenSet;

                    /**
                     * <p>构建命令</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_buildCmd;
                    bool m_buildCmdHasBeenSet;

                    /**
                     * <p>安装命令</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_installCmd;
                    bool m_installCmdHasBeenSet;

                    /**
                     * <p>框架</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_framework;
                    bool m_frameworkHasBeenSet;

                    /**
                     * <p>Node.js 版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodejsVersion;
                    bool m_nodejsVersionHasBeenSet;

                    /**
                     * <p>仓库地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_repoUrl;
                    bool m_repoUrlHasBeenSet;

                    /**
                     * <p>仓库所有者</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_repoOwner;
                    bool m_repoOwnerHasBeenSet;

                    /**
                     * <p>仓库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_repoName;
                    bool m_repoNameHasBeenSet;

                    /**
                     * <p>生产分支</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_repoBranch;
                    bool m_repoBranchHasBeenSet;

                    /**
                     * <p>预览分支</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_repoPreBranches;
                    bool m_repoPreBranchesHasBeenSet;

                    /**
                     * <p>部署地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Regions m_regions;
                    bool m_regionsHasBeenSet;

                    /**
                     * <p>环境变量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ProjectEnvVar> m_envVars;
                    bool m_envVarsHasBeenSet;

                    /**
                     * <p>自定义域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CustomDomainItem> m_customDomains;
                    bool m_customDomainsHasBeenSet;

                    /**
                     * <p>最近一次部署</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ProjectDeployment m_deployment;
                    bool m_deploymentHasBeenSet;

                    /**
                     * <p>是否 Agent 项目。1 是，0 否</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isAgent;
                    bool m_isAgentHasBeenSet;

                    /**
                     * <p>Agent 框架。非 Agent 项目为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_agentFramework;
                    bool m_agentFrameworkHasBeenSet;

                    /**
                     * <p>是否命中用户级泛域名。1 是，0 否</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isTld;
                    bool m_isTldHasBeenSet;

                    /**
                     * <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifiedOn;
                    bool m_modifiedOnHasBeenSet;

                    /**
                     * <p>构建规格客户契约</p><p>枚举值：</p><ul><li>standard： 4C6G，默认档，所有套餐可用</li><li>enhanced： 8C14G，专业版及以上可用；低配套餐声明时按 standard 处理并提示升级</li></ul><p>默认值：standard</p>
                     */
                    std::string m_buildMachine;
                    bool m_buildMachineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MAKERS_V20261113_MODEL_PROJECT_H_
