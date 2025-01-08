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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASEPROJECTVERSION_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASEPROJECTVERSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/CodeSource.h>
#include <tencentcloud/tcb/v20180608/model/KVPair.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 云开发项目版本
                */
                class CloudBaseProjectVersion : public AbstractModel
                {
                public:
                    CloudBaseProjectVersion();
                    ~CloudBaseProjectVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目名
                     * @return Name 项目名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置项目名
                     * @param _name 项目名
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
                     * 获取SAM json
                     * @return Sam SAM json
                     * 
                     */
                    std::string GetSam() const;

                    /**
                     * 设置SAM json
                     * @param _sam SAM json
                     * 
                     */
                    void SetSam(const std::string& _sam);

                    /**
                     * 判断参数 Sam 是否已赋值
                     * @return Sam 是否已赋值
                     * 
                     */
                    bool SamHasBeenSet() const;

                    /**
                     * 获取来源类型
                     * @return Source 来源类型
                     * 
                     */
                    CodeSource GetSource() const;

                    /**
                     * 设置来源类型
                     * @param _source 来源类型
                     * 
                     */
                    void SetSource(const CodeSource& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取创建时间, unix时间戳
                     * @return CreateTime 创建时间, unix时间戳
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间, unix时间戳
                     * @param _createTime 创建时间, unix时间戳
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间 ,unix时间戳
                     * @return UpdateTime 更新时间 ,unix时间戳
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间 ,unix时间戳
                     * @param _updateTime 更新时间 ,unix时间戳
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取项目状态, 枚举值: 
        "creatingEnv"-创建环境中
	"createEnvFail"-创建环境失败
	"building"-构建中
	"buildFail"-构建失败
	"deploying"-部署中
	 "deployFail"-部署失败
	 "success"-部署成功
                     * @return Status 项目状态, 枚举值: 
        "creatingEnv"-创建环境中
	"createEnvFail"-创建环境失败
	"building"-构建中
	"buildFail"-构建失败
	"deploying"-部署中
	 "deployFail"-部署失败
	 "success"-部署成功
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置项目状态, 枚举值: 
        "creatingEnv"-创建环境中
	"createEnvFail"-创建环境失败
	"building"-构建中
	"buildFail"-构建失败
	"deploying"-部署中
	 "deployFail"-部署失败
	 "success"-部署成功
                     * @param _status 项目状态, 枚举值: 
        "creatingEnv"-创建环境中
	"createEnvFail"-创建环境失败
	"building"-构建中
	"buildFail"-构建失败
	"deploying"-部署中
	 "deployFail"-部署失败
	 "success"-部署成功
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
                     * 获取环境变量
                     * @return Parameters 环境变量
                     * 
                     */
                    std::vector<KVPair> GetParameters() const;

                    /**
                     * 设置环境变量
                     * @param _parameters 环境变量
                     * 
                     */
                    void SetParameters(const std::vector<KVPair>& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     * 
                     */
                    bool ParametersHasBeenSet() const;

                    /**
                     * 获取项目类型, 枚举值:
"framework-oneclick" 控制台一键部署
"framework-local-oneclick" cli本地一键部署
"qci-extension-cicd" 内网coding ci cd
                     * @return Type 项目类型, 枚举值:
"framework-oneclick" 控制台一键部署
"framework-local-oneclick" cli本地一键部署
"qci-extension-cicd" 内网coding ci cd
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置项目类型, 枚举值:
"framework-oneclick" 控制台一键部署
"framework-local-oneclick" cli本地一键部署
"qci-extension-cicd" 内网coding ci cd
                     * @param _type 项目类型, 枚举值:
"framework-oneclick" 控制台一键部署
"framework-local-oneclick" cli本地一键部署
"qci-extension-cicd" 内网coding ci cd
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取ci的id
                     * @return CIId ci的id
                     * 
                     */
                    std::string GetCIId() const;

                    /**
                     * 设置ci的id
                     * @param _cIId ci的id
                     * 
                     */
                    void SetCIId(const std::string& _cIId);

                    /**
                     * 判断参数 CIId 是否已赋值
                     * @return CIId 是否已赋值
                     * 
                     */
                    bool CIIdHasBeenSet() const;

                    /**
                     * 获取cd的id
                     * @return CDId cd的id
                     * 
                     */
                    std::string GetCDId() const;

                    /**
                     * 设置cd的id
                     * @param _cDId cd的id
                     * 
                     */
                    void SetCDId(const std::string& _cDId);

                    /**
                     * 判断参数 CDId 是否已赋值
                     * @return CDId 是否已赋值
                     * 
                     */
                    bool CDIdHasBeenSet() const;

                    /**
                     * 获取环境id
                     * @return EnvId 环境id
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境id
                     * @param _envId 环境id
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取版本号
                     * @return VersionNum 版本号
                     * 
                     */
                    int64_t GetVersionNum() const;

                    /**
                     * 设置版本号
                     * @param _versionNum 版本号
                     * 
                     */
                    void SetVersionNum(const int64_t& _versionNum);

                    /**
                     * 判断参数 VersionNum 是否已赋值
                     * @return VersionNum 是否已赋值
                     * 
                     */
                    bool VersionNumHasBeenSet() const;

                    /**
                     * 获取错误原因
                     * @return FailReason 错误原因
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置错误原因
                     * @param _failReason 错误原因
                     * 
                     */
                    void SetFailReason(const std::string& _failReason);

                    /**
                     * 判断参数 FailReason 是否已赋值
                     * @return FailReason 是否已赋值
                     * 
                     */
                    bool FailReasonHasBeenSet() const;

                    /**
                     * 获取rc.json内容
                     * @return RcJson rc.json内容
                     * 
                     */
                    std::string GetRcJson() const;

                    /**
                     * 设置rc.json内容
                     * @param _rcJson rc.json内容
                     * 
                     */
                    void SetRcJson(const std::string& _rcJson);

                    /**
                     * 判断参数 RcJson 是否已赋值
                     * @return RcJson 是否已赋值
                     * 
                     */
                    bool RcJsonHasBeenSet() const;

                    /**
                     * 获取插件配置内容
                     * @return AddonConfig 插件配置内容
                     * 
                     */
                    std::string GetAddonConfig() const;

                    /**
                     * 设置插件配置内容
                     * @param _addonConfig 插件配置内容
                     * 
                     */
                    void SetAddonConfig(const std::string& _addonConfig);

                    /**
                     * 判断参数 AddonConfig 是否已赋值
                     * @return AddonConfig 是否已赋值
                     * 
                     */
                    bool AddonConfigHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Tags 标签
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置标签
                     * @param _tags 标签
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取网络配置
                     * @return NetworkConfig 网络配置
                     * 
                     */
                    std::string GetNetworkConfig() const;

                    /**
                     * 设置网络配置
                     * @param _networkConfig 网络配置
                     * 
                     */
                    void SetNetworkConfig(const std::string& _networkConfig);

                    /**
                     * 判断参数 NetworkConfig 是否已赋值
                     * @return NetworkConfig 是否已赋值
                     * 
                     */
                    bool NetworkConfigHasBeenSet() const;

                    /**
                     * 获取扩展id
                     * @return ExtensionId 扩展id
                     * 
                     */
                    std::string GetExtensionId() const;

                    /**
                     * 设置扩展id
                     * @param _extensionId 扩展id
                     * 
                     */
                    void SetExtensionId(const std::string& _extensionId);

                    /**
                     * 判断参数 ExtensionId 是否已赋值
                     * @return ExtensionId 是否已赋值
                     * 
                     */
                    bool ExtensionIdHasBeenSet() const;

                    /**
                     * 获取错误类型
                     * @return FailType 错误类型
                     * 
                     */
                    std::string GetFailType() const;

                    /**
                     * 设置错误类型
                     * @param _failType 错误类型
                     * 
                     */
                    void SetFailType(const std::string& _failType);

                    /**
                     * 判断参数 FailType 是否已赋值
                     * @return FailType 是否已赋值
                     * 
                     */
                    bool FailTypeHasBeenSet() const;

                    /**
                     * 获取私有仓库地址
                     * @return RepoUrl 私有仓库地址
                     * 
                     */
                    std::string GetRepoUrl() const;

                    /**
                     * 设置私有仓库地址
                     * @param _repoUrl 私有仓库地址
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
                     * 获取是否私有仓库代码变更触发自动部署
                     * @return AutoDeployOnCodeChange 是否私有仓库代码变更触发自动部署
                     * 
                     */
                    bool GetAutoDeployOnCodeChange() const;

                    /**
                     * 设置是否私有仓库代码变更触发自动部署
                     * @param _autoDeployOnCodeChange 是否私有仓库代码变更触发自动部署
                     * 
                     */
                    void SetAutoDeployOnCodeChange(const bool& _autoDeployOnCodeChange);

                    /**
                     * 判断参数 AutoDeployOnCodeChange 是否已赋值
                     * @return AutoDeployOnCodeChange 是否已赋值
                     * 
                     */
                    bool AutoDeployOnCodeChangeHasBeenSet() const;

                    /**
                     * 获取ci部署进度（%）
                     * @return BuildPercent ci部署进度（%）
                     * 
                     */
                    int64_t GetBuildPercent() const;

                    /**
                     * 设置ci部署进度（%）
                     * @param _buildPercent ci部署进度（%）
                     * 
                     */
                    void SetBuildPercent(const int64_t& _buildPercent);

                    /**
                     * 判断参数 BuildPercent 是否已赋值
                     * @return BuildPercent 是否已赋值
                     * 
                     */
                    bool BuildPercentHasBeenSet() const;

                    /**
                     * 获取Uin
                     * @return Uin Uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置Uin
                     * @param _uin Uin
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取BuildFinishTime
                     * @return BuildFinishTime BuildFinishTime
                     * 
                     */
                    std::string GetBuildFinishTime() const;

                    /**
                     * 设置BuildFinishTime
                     * @param _buildFinishTime BuildFinishTime
                     * 
                     */
                    void SetBuildFinishTime(const std::string& _buildFinishTime);

                    /**
                     * 判断参数 BuildFinishTime 是否已赋值
                     * @return BuildFinishTime 是否已赋值
                     * 
                     */
                    bool BuildFinishTimeHasBeenSet() const;

                    /**
                     * 获取DeployFinishTime
                     * @return DeployFinishTime DeployFinishTime
                     * 
                     */
                    std::string GetDeployFinishTime() const;

                    /**
                     * 设置DeployFinishTime
                     * @param _deployFinishTime DeployFinishTime
                     * 
                     */
                    void SetDeployFinishTime(const std::string& _deployFinishTime);

                    /**
                     * 判断参数 DeployFinishTime 是否已赋值
                     * @return DeployFinishTime 是否已赋值
                     * 
                     */
                    bool DeployFinishTimeHasBeenSet() const;

                    /**
                     * 获取BuildId
                     * @return BuildId BuildId
                     * 
                     */
                    std::string GetBuildId() const;

                    /**
                     * 设置BuildId
                     * @param _buildId BuildId
                     * 
                     */
                    void SetBuildId(const std::string& _buildId);

                    /**
                     * 判断参数 BuildId 是否已赋值
                     * @return BuildId 是否已赋值
                     * 
                     */
                    bool BuildIdHasBeenSet() const;

                    /**
                     * 获取SourceUrl
                     * @return SourceUrl SourceUrl
                     * 
                     */
                    std::string GetSourceUrl() const;

                    /**
                     * 设置SourceUrl
                     * @param _sourceUrl SourceUrl
                     * 
                     */
                    void SetSourceUrl(const std::string& _sourceUrl);

                    /**
                     * 判断参数 SourceUrl 是否已赋值
                     * @return SourceUrl 是否已赋值
                     * 
                     */
                    bool SourceUrlHasBeenSet() const;

                    /**
                     * 获取FailReasonShort
                     * @return FailReasonShort FailReasonShort
                     * 
                     */
                    std::string GetFailReasonShort() const;

                    /**
                     * 设置FailReasonShort
                     * @param _failReasonShort FailReasonShort
                     * 
                     */
                    void SetFailReasonShort(const std::string& _failReasonShort);

                    /**
                     * 判断参数 FailReasonShort 是否已赋值
                     * @return FailReasonShort 是否已赋值
                     * 
                     */
                    bool FailReasonShortHasBeenSet() const;

                    /**
                     * 获取FirstInitRepo
                     * @return FirstInitRepo FirstInitRepo
                     * 
                     */
                    std::string GetFirstInitRepo() const;

                    /**
                     * 设置FirstInitRepo
                     * @param _firstInitRepo FirstInitRepo
                     * 
                     */
                    void SetFirstInitRepo(const std::string& _firstInitRepo);

                    /**
                     * 判断参数 FirstInitRepo 是否已赋值
                     * @return FirstInitRepo 是否已赋值
                     * 
                     */
                    bool FirstInitRepoHasBeenSet() const;

                private:

                    /**
                     * 项目名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * SAM json
                     */
                    std::string m_sam;
                    bool m_samHasBeenSet;

                    /**
                     * 来源类型
                     */
                    CodeSource m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 创建时间, unix时间戳
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间 ,unix时间戳
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 项目状态, 枚举值: 
        "creatingEnv"-创建环境中
	"createEnvFail"-创建环境失败
	"building"-构建中
	"buildFail"-构建失败
	"deploying"-部署中
	 "deployFail"-部署失败
	 "success"-部署成功
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 环境变量
                     */
                    std::vector<KVPair> m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * 项目类型, 枚举值:
"framework-oneclick" 控制台一键部署
"framework-local-oneclick" cli本地一键部署
"qci-extension-cicd" 内网coding ci cd
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * ci的id
                     */
                    std::string m_cIId;
                    bool m_cIIdHasBeenSet;

                    /**
                     * cd的id
                     */
                    std::string m_cDId;
                    bool m_cDIdHasBeenSet;

                    /**
                     * 环境id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 版本号
                     */
                    int64_t m_versionNum;
                    bool m_versionNumHasBeenSet;

                    /**
                     * 错误原因
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                    /**
                     * rc.json内容
                     */
                    std::string m_rcJson;
                    bool m_rcJsonHasBeenSet;

                    /**
                     * 插件配置内容
                     */
                    std::string m_addonConfig;
                    bool m_addonConfigHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 网络配置
                     */
                    std::string m_networkConfig;
                    bool m_networkConfigHasBeenSet;

                    /**
                     * 扩展id
                     */
                    std::string m_extensionId;
                    bool m_extensionIdHasBeenSet;

                    /**
                     * 错误类型
                     */
                    std::string m_failType;
                    bool m_failTypeHasBeenSet;

                    /**
                     * 私有仓库地址
                     */
                    std::string m_repoUrl;
                    bool m_repoUrlHasBeenSet;

                    /**
                     * 是否私有仓库代码变更触发自动部署
                     */
                    bool m_autoDeployOnCodeChange;
                    bool m_autoDeployOnCodeChangeHasBeenSet;

                    /**
                     * ci部署进度（%）
                     */
                    int64_t m_buildPercent;
                    bool m_buildPercentHasBeenSet;

                    /**
                     * Uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * BuildFinishTime
                     */
                    std::string m_buildFinishTime;
                    bool m_buildFinishTimeHasBeenSet;

                    /**
                     * DeployFinishTime
                     */
                    std::string m_deployFinishTime;
                    bool m_deployFinishTimeHasBeenSet;

                    /**
                     * BuildId
                     */
                    std::string m_buildId;
                    bool m_buildIdHasBeenSet;

                    /**
                     * SourceUrl
                     */
                    std::string m_sourceUrl;
                    bool m_sourceUrlHasBeenSet;

                    /**
                     * FailReasonShort
                     */
                    std::string m_failReasonShort;
                    bool m_failReasonShortHasBeenSet;

                    /**
                     * FirstInitRepo
                     */
                    std::string m_firstInitRepo;
                    bool m_firstInitRepoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASEPROJECTVERSION_H_
