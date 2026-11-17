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

#ifndef TENCENTCLOUD_MAKERS_V20261113_MODEL_CREATEDEPLOYMENTREQUEST_H_
#define TENCENTCLOUD_MAKERS_V20261113_MODEL_CREATEDEPLOYMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateDeployment请求参数结构体
                */
                class CreateDeploymentRequest : public AbstractModel
                {
                public:
                    CreateDeploymentRequest();
                    ~CreateDeploymentRequest() = default;
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
                     * 获取<p>项目 ID</p>
                     * @return ProjectId <p>项目 ID</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目 ID</p>
                     * @param _projectId <p>项目 ID</p>
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
                     * 获取<p>触发来源。Github、ReDeploy、Api、Webhook、Upload、Coding、Gitee、Gitlab</p>
                     * @return ViaMeta <p>触发来源。Github、ReDeploy、Api、Webhook、Upload、Coding、Gitee、Gitlab</p>
                     * 
                     */
                    std::string GetViaMeta() const;

                    /**
                     * 设置<p>触发来源。Github、ReDeploy、Api、Webhook、Upload、Coding、Gitee、Gitlab</p>
                     * @param _viaMeta <p>触发来源。Github、ReDeploy、Api、Webhook、Upload、Coding、Gitee、Gitlab</p>
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
                     * 获取<p>环境 slug。Production、Preview 或自定义环境</p>
                     * @return Env <p>环境 slug。Production、Preview 或自定义环境</p>
                     * 
                     */
                    std::string GetEnv() const;

                    /**
                     * 设置<p>环境 slug。Production、Preview 或自定义环境</p>
                     * @param _env <p>环境 slug。Production、Preview 或自定义环境</p>
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
                     * 获取<p>代码来源。上传制品传 Upload</p>
                     * @return Provider <p>代码来源。上传制品传 Upload</p>
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置<p>代码来源。上传制品传 Upload</p>
                     * @param _provider <p>代码来源。上传制品传 Upload</p>
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
                     * 获取<p>制品类型。Zip 或 Folder</p>
                     * @return DistType <p>制品类型。Zip 或 Folder</p>
                     * 
                     */
                    std::string GetDistType() const;

                    /**
                     * 设置<p>制品类型。Zip 或 Folder</p>
                     * @param _distType <p>制品类型。Zip 或 Folder</p>
                     * 
                     */
                    void SetDistType(const std::string& _distType);

                    /**
                     * 判断参数 DistType 是否已赋值
                     * @return DistType 是否已赋值
                     * 
                     */
                    bool DistTypeHasBeenSet() const;

                    /**
                     * 获取<p>已上传制品在临时桶中的对象路径</p>
                     * @return TempBucketPath <p>已上传制品在临时桶中的对象路径</p>
                     * 
                     */
                    std::string GetTempBucketPath() const;

                    /**
                     * 设置<p>已上传制品在临时桶中的对象路径</p>
                     * @param _tempBucketPath <p>已上传制品在临时桶中的对象路径</p>
                     * 
                     */
                    void SetTempBucketPath(const std::string& _tempBucketPath);

                    /**
                     * 判断参数 TempBucketPath 是否已赋值
                     * @return TempBucketPath 是否已赋值
                     * 
                     */
                    bool TempBucketPathHasBeenSet() const;

                    /**
                     * 获取<p>构建分支</p>
                     * @return RepoBranch <p>构建分支</p>
                     * 
                     */
                    std::string GetRepoBranch() const;

                    /**
                     * 设置<p>构建分支</p>
                     * @param _repoBranch <p>构建分支</p>
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
                     * @return RepoCommitHash <p>提交哈希</p>
                     * 
                     */
                    std::string GetRepoCommitHash() const;

                    /**
                     * 设置<p>提交哈希</p>
                     * @param _repoCommitHash <p>提交哈希</p>
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
                     * @return RepoCommitMsg <p>提交说明</p>
                     * 
                     */
                    std::string GetRepoCommitMsg() const;

                    /**
                     * 设置<p>提交说明</p>
                     * @param _repoCommitMsg <p>提交说明</p>
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
                     * 获取<p>构建来源</p>
                     * @return BuildFrom <p>构建来源</p>
                     * 
                     */
                    std::string GetBuildFrom() const;

                    /**
                     * 设置<p>构建来源</p>
                     * @param _buildFrom <p>构建来源</p>
                     * 
                     */
                    void SetBuildFrom(const std::string& _buildFrom);

                    /**
                     * 判断参数 BuildFrom 是否已赋值
                     * @return BuildFrom 是否已赋值
                     * 
                     */
                    bool BuildFromHasBeenSet() const;

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
                     * 获取<p>构建规格。当前服务端仍从 edgeone.json 读取，此字段先保留</p>
                     * @return CiSpec <p>构建规格。当前服务端仍从 edgeone.json 读取，此字段先保留</p>
                     * 
                     */
                    std::string GetCiSpec() const;

                    /**
                     * 设置<p>构建规格。当前服务端仍从 edgeone.json 读取，此字段先保留</p>
                     * @param _ciSpec <p>构建规格。当前服务端仍从 edgeone.json 读取，此字段先保留</p>
                     * 
                     */
                    void SetCiSpec(const std::string& _ciSpec);

                    /**
                     * 判断参数 CiSpec 是否已赋值
                     * @return CiSpec 是否已赋值
                     * 
                     */
                    bool CiSpecHasBeenSet() const;

                private:

                    /**
                     * <p>Makers 站点 ID</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>项目 ID</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>触发来源。Github、ReDeploy、Api、Webhook、Upload、Coding、Gitee、Gitlab</p>
                     */
                    std::string m_viaMeta;
                    bool m_viaMetaHasBeenSet;

                    /**
                     * <p>环境 slug。Production、Preview 或自定义环境</p>
                     */
                    std::string m_env;
                    bool m_envHasBeenSet;

                    /**
                     * <p>代码来源。上传制品传 Upload</p>
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * <p>制品类型。Zip 或 Folder</p>
                     */
                    std::string m_distType;
                    bool m_distTypeHasBeenSet;

                    /**
                     * <p>已上传制品在临时桶中的对象路径</p>
                     */
                    std::string m_tempBucketPath;
                    bool m_tempBucketPathHasBeenSet;

                    /**
                     * <p>构建分支</p>
                     */
                    std::string m_repoBranch;
                    bool m_repoBranchHasBeenSet;

                    /**
                     * <p>提交哈希</p>
                     */
                    std::string m_repoCommitHash;
                    bool m_repoCommitHashHasBeenSet;

                    /**
                     * <p>提交说明</p>
                     */
                    std::string m_repoCommitMsg;
                    bool m_repoCommitMsgHasBeenSet;

                    /**
                     * <p>构建来源</p>
                     */
                    std::string m_buildFrom;
                    bool m_buildFromHasBeenSet;

                    /**
                     * <p>模板 ID</p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>构建规格。当前服务端仍从 edgeone.json 读取，此字段先保留</p>
                     */
                    std::string m_ciSpec;
                    bool m_ciSpecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MAKERS_V20261113_MODEL_CREATEDEPLOYMENTREQUEST_H_
