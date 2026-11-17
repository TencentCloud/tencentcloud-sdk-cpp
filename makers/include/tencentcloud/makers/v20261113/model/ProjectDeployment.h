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

#ifndef TENCENTCLOUD_MAKERS_V20261113_MODEL_PROJECTDEPLOYMENT_H_
#define TENCENTCLOUD_MAKERS_V20261113_MODEL_PROJECTDEPLOYMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Makers
    {
        namespace V20261113
        {
            namespace Model
            {
                /**
                * 项目最近一次部署
                */
                class ProjectDeployment : public AbstractModel
                {
                public:
                    ProjectDeployment();
                    ~ProjectDeployment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>部署 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeploymentId <p>部署 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeploymentId() const;

                    /**
                     * 设置<p>部署 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deploymentId <p>部署 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeploymentId(const std::string& _deploymentId);

                    /**
                     * 判断参数 DeploymentId 是否已赋值
                     * @return DeploymentId 是否已赋值
                     * 
                     */
                    bool DeploymentIdHasBeenSet() const;

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
                     * 获取<p>部署状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>部署状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>部署状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>部署状态</p>
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
                     * 获取<p>构建耗时，单位毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BuildCost <p>构建耗时，单位毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBuildCost() const;

                    /**
                     * 设置<p>构建耗时，单位毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _buildCost <p>构建耗时，单位毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBuildCost(const std::string& _buildCost);

                    /**
                     * 判断参数 BuildCost 是否已赋值
                     * @return BuildCost 是否已赋值
                     * 
                     */
                    bool BuildCostHasBeenSet() const;

                    /**
                     * 获取<p>触发来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ViaMeta <p>触发来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetViaMeta() const;

                    /**
                     * 设置<p>触发来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _viaMeta <p>触发来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetViaMeta(const std::string& _viaMeta);

                    /**
                     * 判断参数 ViaMeta 是否已赋值
                     * @return ViaMeta 是否已赋值
                     * 
                     */
                    bool ViaMetaHasBeenSet() const;

                    /**
                     * 获取<p>环境 slug</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Env <p>环境 slug</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEnv() const;

                    /**
                     * 设置<p>环境 slug</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _env <p>环境 slug</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnv(const std::string& _env);

                    /**
                     * 判断参数 Env 是否已赋值
                     * @return Env 是否已赋值
                     * 
                     */
                    bool EnvHasBeenSet() const;

                    /**
                     * 获取<p>分支</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RepoBranch <p>分支</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRepoBranch() const;

                    /**
                     * 设置<p>分支</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _repoBranch <p>分支</p>
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
                     * 获取<p>提交哈希</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RepoCommitHash <p>提交哈希</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRepoCommitHash() const;

                    /**
                     * 设置<p>提交哈希</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _repoCommitHash <p>提交哈希</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRepoCommitHash(const std::string& _repoCommitHash);

                    /**
                     * 判断参数 RepoCommitHash 是否已赋值
                     * @return RepoCommitHash 是否已赋值
                     * 
                     */
                    bool RepoCommitHashHasBeenSet() const;

                    /**
                     * 获取<p>提交说明</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RepoCommitMsg <p>提交说明</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRepoCommitMsg() const;

                    /**
                     * 设置<p>提交说明</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _repoCommitMsg <p>提交说明</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRepoCommitMsg(const std::string& _repoCommitMsg);

                    /**
                     * 判断参数 RepoCommitMsg 是否已赋值
                     * @return RepoCommitMsg 是否已赋值
                     * 
                     */
                    bool RepoCommitMsgHasBeenSet() const;

                    /**
                     * 获取<p>预览地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PreviewUrl <p>预览地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPreviewUrl() const;

                    /**
                     * 设置<p>预览地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _previewUrl <p>预览地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPreviewUrl(const std::string& _previewUrl);

                    /**
                     * 判断参数 PreviewUrl 是否已赋值
                     * @return PreviewUrl 是否已赋值
                     * 
                     */
                    bool PreviewUrlHasBeenSet() const;

                    /**
                     * 获取<p>封面地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CoverUrl <p>封面地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCoverUrl() const;

                    /**
                     * 设置<p>封面地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _coverUrl <p>封面地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCoverUrl(const std::string& _coverUrl);

                    /**
                     * 判断参数 CoverUrl 是否已赋值
                     * @return CoverUrl 是否已赋值
                     * 
                     */
                    bool CoverUrlHasBeenSet() const;

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
                     * 获取<p>本次部署使用的仓库地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DplRepoUrl <p>本次部署使用的仓库地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDplRepoUrl() const;

                    /**
                     * 设置<p>本次部署使用的仓库地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dplRepoUrl <p>本次部署使用的仓库地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDplRepoUrl(const std::string& _dplRepoUrl);

                    /**
                     * 判断参数 DplRepoUrl 是否已赋值
                     * @return DplRepoUrl 是否已赋值
                     * 
                     */
                    bool DplRepoUrlHasBeenSet() const;

                private:

                    /**
                     * <p>部署 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deploymentId;
                    bool m_deploymentIdHasBeenSet;

                    /**
                     * <p>项目 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>部署状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>构建耗时，单位毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_buildCost;
                    bool m_buildCostHasBeenSet;

                    /**
                     * <p>触发来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_viaMeta;
                    bool m_viaMetaHasBeenSet;

                    /**
                     * <p>环境 slug</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_env;
                    bool m_envHasBeenSet;

                    /**
                     * <p>分支</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_repoBranch;
                    bool m_repoBranchHasBeenSet;

                    /**
                     * <p>提交哈希</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_repoCommitHash;
                    bool m_repoCommitHashHasBeenSet;

                    /**
                     * <p>提交说明</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_repoCommitMsg;
                    bool m_repoCommitMsgHasBeenSet;

                    /**
                     * <p>预览地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_previewUrl;
                    bool m_previewUrlHasBeenSet;

                    /**
                     * <p>封面地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_coverUrl;
                    bool m_coverUrlHasBeenSet;

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
                     * <p>本次部署使用的仓库地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dplRepoUrl;
                    bool m_dplRepoUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MAKERS_V20261113_MODEL_PROJECTDEPLOYMENT_H_
