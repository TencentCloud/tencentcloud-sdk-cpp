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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_TEMSERVICE_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_TEMSERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/ServiceVersionBrief.h>
#include <tencentcloud/tem/v20210701/model/Tag.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * 服务
                */
                class TemService : public AbstractModel
                {
                public:
                    TemService();
                    ~TemService() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主键
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationId 主键
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置主键
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationId 主键
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取服务名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationName 服务名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置服务名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationName 服务名
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 描述
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取命名空间id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnvironmentId 命名空间id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置命名空间id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _environmentId 命名空间id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateDate 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateDate() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createDate 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateDate(const std::string& _createDate);

                    /**
                     * 判断参数 CreateDate 是否已赋值
                     * @return CreateDate 是否已赋值
                     * 
                     */
                    bool CreateDateHasBeenSet() const;

                    /**
                     * 获取修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyDate 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifyDate() const;

                    /**
                     * 设置修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyDate 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifyDate(const std::string& _modifyDate);

                    /**
                     * 判断参数 ModifyDate 是否已赋值
                     * @return ModifyDate 是否已赋值
                     * 
                     */
                    bool ModifyDateHasBeenSet() const;

                    /**
                     * 获取修改人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Modifier 修改人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifier() const;

                    /**
                     * 设置修改人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifier 修改人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifier(const std::string& _modifier);

                    /**
                     * 判断参数 Modifier 是否已赋值
                     * @return Modifier 是否已赋值
                     * 
                     */
                    bool ModifierHasBeenSet() const;

                    /**
                     * 获取创建者
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Creator 创建者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置创建者
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creator 创建者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取tcr个人版or企业版
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RepoType tcr个人版or企业版
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRepoType() const;

                    /**
                     * 设置tcr个人版or企业版
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _repoType tcr个人版or企业版
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRepoType(const int64_t& _repoType);

                    /**
                     * 判断参数 RepoType 是否已赋值
                     * @return RepoType 是否已赋值
                     * 
                     */
                    bool RepoTypeHasBeenSet() const;

                    /**
                     * 获取企业版实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 企业版实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置企业版实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 企业版实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取镜像仓库名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RepoName 镜像仓库名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRepoName() const;

                    /**
                     * 设置镜像仓库名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _repoName 镜像仓库名
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
                     * 获取编程语言
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CodingLanguage 编程语言
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCodingLanguage() const;

                    /**
                     * 设置编程语言
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _codingLanguage 编程语言
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCodingLanguage(const std::string& _codingLanguage);

                    /**
                     * 判断参数 CodingLanguage 是否已赋值
                     * @return CodingLanguage 是否已赋值
                     * 
                     */
                    bool CodingLanguageHasBeenSet() const;

                    /**
                     * 获取部署方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeployMode 部署方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeployMode() const;

                    /**
                     * 设置部署方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deployMode 部署方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeployMode(const std::string& _deployMode);

                    /**
                     * 判断参数 DeployMode 是否已赋值
                     * @return DeployMode 是否已赋值
                     * 
                     */
                    bool DeployModeHasBeenSet() const;

                    /**
                     * 获取环境名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnvironmentName 环境名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置环境名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _environmentName 环境名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnvironmentName(const std::string& _environmentName);

                    /**
                     * 判断参数 EnvironmentName 是否已赋值
                     * @return EnvironmentName 是否已赋值
                     * 
                     */
                    bool EnvironmentNameHasBeenSet() const;

                    /**
                     * 获取服务当前运行环境的实例信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActiveVersions 服务当前运行环境的实例信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ServiceVersionBrief> GetActiveVersions() const;

                    /**
                     * 设置服务当前运行环境的实例信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activeVersions 服务当前运行环境的实例信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActiveVersions(const std::vector<ServiceVersionBrief>& _activeVersions);

                    /**
                     * 判断参数 ActiveVersions 是否已赋值
                     * @return ActiveVersions 是否已赋值
                     * 
                     */
                    bool ActiveVersionsHasBeenSet() const;

                    /**
                     * 获取是否启用链路追踪
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableTracing 是否启用链路追踪
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetEnableTracing() const;

                    /**
                     * 设置是否启用链路追踪
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableTracing 是否启用链路追踪
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableTracing(const uint64_t& _enableTracing);

                    /**
                     * 判断参数 EnableTracing 是否已赋值
                     * @return EnableTracing 是否已赋值
                     * 
                     */
                    bool EnableTracingHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取是否有资源权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HasAuthority 是否有资源权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetHasAuthority() const;

                    /**
                     * 设置是否有资源权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hasAuthority 是否有资源权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHasAuthority(const bool& _hasAuthority);

                    /**
                     * 判断参数 HasAuthority 是否已赋值
                     * @return HasAuthority 是否已赋值
                     * 
                     */
                    bool HasAuthorityHasBeenSet() const;

                private:

                    /**
                     * 主键
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 服务名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 命名空间id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createDate;
                    bool m_createDateHasBeenSet;

                    /**
                     * 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifyDate;
                    bool m_modifyDateHasBeenSet;

                    /**
                     * 修改人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifier;
                    bool m_modifierHasBeenSet;

                    /**
                     * 创建者
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * tcr个人版or企业版
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_repoType;
                    bool m_repoTypeHasBeenSet;

                    /**
                     * 企业版实例id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 镜像仓库名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_repoName;
                    bool m_repoNameHasBeenSet;

                    /**
                     * 编程语言
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_codingLanguage;
                    bool m_codingLanguageHasBeenSet;

                    /**
                     * 部署方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * 环境名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                    /**
                     * 服务当前运行环境的实例信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ServiceVersionBrief> m_activeVersions;
                    bool m_activeVersionsHasBeenSet;

                    /**
                     * 是否启用链路追踪
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_enableTracing;
                    bool m_enableTracingHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 是否有资源权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_hasAuthority;
                    bool m_hasAuthorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_TEMSERVICE_H_
