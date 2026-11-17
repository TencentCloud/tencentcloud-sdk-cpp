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

#ifndef TENCENTCLOUD_MAKERS_V20261113_MODEL_ENVIRONMENT_H_
#define TENCENTCLOUD_MAKERS_V20261113_MODEL_ENVIRONMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/makers/v20261113/model/EnvironmentEnvVar.h>


namespace TencentCloud
{
    namespace Makers
    {
        namespace V20261113
        {
            namespace Model
            {
                /**
                * 环境
                */
                class Environment : public AbstractModel
                {
                public:
                    Environment();
                    ~Environment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>环境标识，创建后不可改</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Slug <p>环境标识，创建后不可改</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSlug() const;

                    /**
                     * 设置<p>环境标识，创建后不可改</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _slug <p>环境标识，创建后不可改</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSlug(const std::string& _slug);

                    /**
                     * 判断参数 Slug 是否已赋值
                     * @return Slug 是否已赋值
                     * 
                     */
                    bool SlugHasBeenSet() const;

                    /**
                     * 获取<p>环境名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>环境名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>环境名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>环境名称</p>
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
                     * 获取<p>Production、Preview、Custom</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type <p>Production、Preview、Custom</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Production、Preview、Custom</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type <p>Production、Preview、Custom</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>关联分支，支持通配</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Branches <p>关联分支，支持通配</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetBranches() const;

                    /**
                     * 设置<p>关联分支，支持通配</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _branches <p>关联分支，支持通配</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBranches(const std::vector<std::string>& _branches);

                    /**
                     * 判断参数 Branches 是否已赋值
                     * @return Branches 是否已赋值
                     * 
                     */
                    bool BranchesHasBeenSet() const;

                    /**
                     * 获取<p>是否自动部署。Production 恒为 true</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoDeploy <p>是否自动部署。Production 恒为 true</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAutoDeploy() const;

                    /**
                     * 设置<p>是否自动部署。Production 恒为 true</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoDeploy <p>是否自动部署。Production 恒为 true</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoDeploy(const bool& _autoDeploy);

                    /**
                     * 判断参数 AutoDeploy 是否已赋值
                     * @return AutoDeploy 是否已赋值
                     * 
                     */
                    bool AutoDeployHasBeenSet() const;

                    /**
                     * 获取<p>绑定的自定义域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomDomains <p>绑定的自定义域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetCustomDomains() const;

                    /**
                     * 设置<p>绑定的自定义域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customDomains <p>绑定的自定义域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomDomains(const std::vector<std::string>& _customDomains);

                    /**
                     * 判断参数 CustomDomains 是否已赋值
                     * @return CustomDomains 是否已赋值
                     * 
                     */
                    bool CustomDomainsHasBeenSet() const;

                    /**
                     * 获取<p>环境变量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnvVars <p>环境变量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EnvironmentEnvVar> GetEnvVars() const;

                    /**
                     * 设置<p>环境变量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _envVars <p>环境变量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnvVars(const std::vector<EnvironmentEnvVar>& _envVars);

                    /**
                     * 判断参数 EnvVars 是否已赋值
                     * @return EnvVars 是否已赋值
                     * 
                     */
                    bool EnvVarsHasBeenSet() const;

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

                private:

                    /**
                     * <p>环境标识，创建后不可改</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_slug;
                    bool m_slugHasBeenSet;

                    /**
                     * <p>环境名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Production、Preview、Custom</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>关联分支，支持通配</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_branches;
                    bool m_branchesHasBeenSet;

                    /**
                     * <p>是否自动部署。Production 恒为 true</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_autoDeploy;
                    bool m_autoDeployHasBeenSet;

                    /**
                     * <p>绑定的自定义域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_customDomains;
                    bool m_customDomainsHasBeenSet;

                    /**
                     * <p>环境变量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EnvironmentEnvVar> m_envVars;
                    bool m_envVarsHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MAKERS_V20261113_MODEL_ENVIRONMENT_H_
