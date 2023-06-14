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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CREATEANDDEPLOYCLOUDBASEPROJECTREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CREATEANDDEPLOYCLOUDBASEPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateAndDeployCloudBaseProject请求参数结构体
                */
                class CreateAndDeployCloudBaseProjectRequest : public AbstractModel
                {
                public:
                    CreateAndDeployCloudBaseProjectRequest();
                    ~CreateAndDeployCloudBaseProjectRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取来源
                     * @return Source 来源
                     * 
                     */
                    CodeSource GetSource() const;

                    /**
                     * 设置来源
                     * @param _source 来源
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
                     * 获取项目类型, 枚举值为: framework-oneclick,qci-extension-cicd
                     * @return Type 项目类型, 枚举值为: framework-oneclick,qci-extension-cicd
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置项目类型, 枚举值为: framework-oneclick,qci-extension-cicd
                     * @param _type 项目类型, 枚举值为: framework-oneclick,qci-extension-cicd
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
                     * 获取环境别名。要以a-z开头，不能包含a-zA-z0-9-以外的字符
                     * @return EnvAlias 环境别名。要以a-z开头，不能包含a-zA-z0-9-以外的字符
                     * 
                     */
                    std::string GetEnvAlias() const;

                    /**
                     * 设置环境别名。要以a-z开头，不能包含a-zA-z0-9-以外的字符
                     * @param _envAlias 环境别名。要以a-z开头，不能包含a-zA-z0-9-以外的字符
                     * 
                     */
                    void SetEnvAlias(const std::string& _envAlias);

                    /**
                     * 判断参数 EnvAlias 是否已赋值
                     * @return EnvAlias 是否已赋值
                     * 
                     */
                    bool EnvAliasHasBeenSet() const;

                    /**
                     * 获取rc.json的内容
                     * @return RcJson rc.json的内容
                     * 
                     */
                    std::string GetRcJson() const;

                    /**
                     * 设置rc.json的内容
                     * @param _rcJson rc.json的内容
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
                     * 获取用户享有的免费额度级别，目前只能为“basic”，不传该字段或该字段为空，标识不享受免费额度。
                     * @return FreeQuota 用户享有的免费额度级别，目前只能为“basic”，不传该字段或该字段为空，标识不享受免费额度。
                     * 
                     */
                    std::string GetFreeQuota() const;

                    /**
                     * 设置用户享有的免费额度级别，目前只能为“basic”，不传该字段或该字段为空，标识不享受免费额度。
                     * @param _freeQuota 用户享有的免费额度级别，目前只能为“basic”，不传该字段或该字段为空，标识不享受免费额度。
                     * 
                     */
                    void SetFreeQuota(const std::string& _freeQuota);

                    /**
                     * 判断参数 FreeQuota 是否已赋值
                     * @return FreeQuota 是否已赋值
                     * 
                     */
                    bool FreeQuotaHasBeenSet() const;

                    /**
                     * 获取是否代码变更触发自动部署
                     * @return AutoDeployOnCodeChange 是否代码变更触发自动部署
                     * 
                     */
                    bool GetAutoDeployOnCodeChange() const;

                    /**
                     * 设置是否代码变更触发自动部署
                     * @param _autoDeployOnCodeChange 是否代码变更触发自动部署
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

                private:

                    /**
                     * 项目名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 来源
                     */
                    CodeSource m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 环境id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 项目类型, 枚举值为: framework-oneclick,qci-extension-cicd
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 环境变量
                     */
                    std::vector<KVPair> m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * 环境别名。要以a-z开头，不能包含a-zA-z0-9-以外的字符
                     */
                    std::string m_envAlias;
                    bool m_envAliasHasBeenSet;

                    /**
                     * rc.json的内容
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
                     * 用户享有的免费额度级别，目前只能为“basic”，不传该字段或该字段为空，标识不享受免费额度。
                     */
                    std::string m_freeQuota;
                    bool m_freeQuotaHasBeenSet;

                    /**
                     * 是否代码变更触发自动部署
                     */
                    bool m_autoDeployOnCodeChange;
                    bool m_autoDeployOnCodeChangeHasBeenSet;

                    /**
                     * 私有仓库地址
                     */
                    std::string m_repoUrl;
                    bool m_repoUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CREATEANDDEPLOYCLOUDBASEPROJECTREQUEST_H_
