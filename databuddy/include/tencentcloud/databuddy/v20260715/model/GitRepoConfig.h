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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GITREPOCONFIG_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GITREPOCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/SparseCheckoutConfig.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * git配置
                */
                class GitRepoConfig : public AbstractModel
                {
                public:
                    GitRepoConfig();
                    ~GitRepoConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>检出规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SparseCheckout <p>检出规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SparseCheckoutConfig GetSparseCheckout() const;

                    /**
                     * 设置<p>检出规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sparseCheckout <p>检出规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSparseCheckout(const SparseCheckoutConfig& _sparseCheckout);

                    /**
                     * 判断参数 SparseCheckout 是否已赋值
                     * @return SparseCheckout 是否已赋值
                     * 
                     */
                    bool SparseCheckoutHasBeenSet() const;

                    /**
                     * 获取<p>Git 仓库地址</p>
                     * @return RepoUrl <p>Git 仓库地址</p>
                     * 
                     */
                    std::string GetRepoUrl() const;

                    /**
                     * 设置<p>Git 仓库地址</p>
                     * @param _repoUrl <p>Git 仓库地址</p>
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
                     * 获取<p>分支名</p>
                     * @return Branch <p>分支名</p>
                     * 
                     */
                    std::string GetBranch() const;

                    /**
                     * 设置<p>分支名</p>
                     * @param _branch <p>分支名</p>
                     * 
                     */
                    void SetBranch(const std::string& _branch);

                    /**
                     * 判断参数 Branch 是否已赋值
                     * @return Branch 是否已赋值
                     * 
                     */
                    bool BranchHasBeenSet() const;

                    /**
                     * 获取<p>关联的 gitAuth 配置名称</p>
                     * @return AuthConfigName <p>关联的 gitAuth 配置名称</p>
                     * 
                     */
                    std::string GetAuthConfigName() const;

                    /**
                     * 设置<p>关联的 gitAuth 配置名称</p>
                     * @param _authConfigName <p>关联的 gitAuth 配置名称</p>
                     * 
                     */
                    void SetAuthConfigName(const std::string& _authConfigName);

                    /**
                     * 判断参数 AuthConfigName 是否已赋值
                     * @return AuthConfigName 是否已赋值
                     * 
                     */
                    bool AuthConfigNameHasBeenSet() const;

                private:

                    /**
                     * <p>检出规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SparseCheckoutConfig m_sparseCheckout;
                    bool m_sparseCheckoutHasBeenSet;

                    /**
                     * <p>Git 仓库地址</p>
                     */
                    std::string m_repoUrl;
                    bool m_repoUrlHasBeenSet;

                    /**
                     * <p>分支名</p>
                     */
                    std::string m_branch;
                    bool m_branchHasBeenSet;

                    /**
                     * <p>关联的 gitAuth 配置名称</p>
                     */
                    std::string m_authConfigName;
                    bool m_authConfigNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GITREPOCONFIG_H_
