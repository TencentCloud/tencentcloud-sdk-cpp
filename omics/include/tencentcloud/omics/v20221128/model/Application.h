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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_APPLICATION_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_APPLICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/omics/v20221128/model/ApplicationVersion.h>
#include <tencentcloud/omics/v20221128/model/GitInfo.h>
#include <tencentcloud/omics/v20221128/model/RunConstraints.h>
#include <tencentcloud/omics/v20221128/model/CosFileInfo.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * 应用详情
                */
                class Application : public AbstractModel
                {
                public:
                    Application();
                    ~Application() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>应用ID</p>
                     * @return ApplicationId <p>应用ID</p>
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置<p>应用ID</p>
                     * @param _applicationId <p>应用ID</p>
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
                     * 获取<p>项目ID</p>
                     * @return ProjectId <p>项目ID</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目ID</p>
                     * @param _projectId <p>项目ID</p>
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
                     * 获取<p>名称</p>
                     * @return Name <p>名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名称</p>
                     * @param _name <p>名称</p>
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
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _description <p>描述</p>
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
                     * 获取<p>类型</p><p>枚举值：</p><ul><li>WDL： WDL</li><li>NEXTFLOW： NEXTFLOW</li></ul>
                     * @return Type <p>类型</p><p>枚举值：</p><ul><li>WDL： WDL</li><li>NEXTFLOW： NEXTFLOW</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>类型</p><p>枚举值：</p><ul><li>WDL： WDL</li><li>NEXTFLOW： NEXTFLOW</li></ul>
                     * @param _type <p>类型</p><p>枚举值：</p><ul><li>WDL： WDL</li><li>NEXTFLOW： NEXTFLOW</li></ul>
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
                     * 获取<p>代码入口</p>
                     * @return Entrypoint <p>代码入口</p>
                     * 
                     */
                    std::string GetEntrypoint() const;

                    /**
                     * 设置<p>代码入口</p>
                     * @param _entrypoint <p>代码入口</p>
                     * 
                     */
                    void SetEntrypoint(const std::string& _entrypoint);

                    /**
                     * 判断参数 Entrypoint 是否已赋值
                     * @return Entrypoint 是否已赋值
                     * 
                     */
                    bool EntrypointHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateTime <p>更新时间</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>创建人</p>
                     * @return Creator <p>创建人</p>
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置<p>创建人</p>
                     * @param _creator <p>创建人</p>
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
                     * 获取<p>创建人ID</p>
                     * @return CreatorId <p>创建人ID</p>
                     * 
                     */
                    std::string GetCreatorId() const;

                    /**
                     * 设置<p>创建人ID</p>
                     * @param _creatorId <p>创建人ID</p>
                     * 
                     */
                    void SetCreatorId(const std::string& _creatorId);

                    /**
                     * 判断参数 CreatorId 是否已赋值
                     * @return CreatorId 是否已赋值
                     * 
                     */
                    bool CreatorIdHasBeenSet() const;

                    /**
                     * 获取<p>版本数量</p>
                     * @return VersionCount <p>版本数量</p>
                     * 
                     */
                    int64_t GetVersionCount() const;

                    /**
                     * 设置<p>版本数量</p>
                     * @param _versionCount <p>版本数量</p>
                     * 
                     */
                    void SetVersionCount(const int64_t& _versionCount);

                    /**
                     * 判断参数 VersionCount 是否已赋值
                     * @return VersionCount 是否已赋值
                     * 
                     */
                    bool VersionCountHasBeenSet() const;

                    /**
                     * 获取<p>版本列表</p>
                     * @return Versions <p>版本列表</p>
                     * 
                     */
                    std::vector<ApplicationVersion> GetVersions() const;

                    /**
                     * 设置<p>版本列表</p>
                     * @param _versions <p>版本列表</p>
                     * 
                     */
                    void SetVersions(const std::vector<ApplicationVersion>& _versions);

                    /**
                     * 判断参数 Versions 是否已赋值
                     * @return Versions 是否已赋值
                     * 
                     */
                    bool VersionsHasBeenSet() const;

                    /**
                     * 获取<p>GIT信息</p>
                     * @return GitSource <p>GIT信息</p>
                     * 
                     */
                    GitInfo GetGitSource() const;

                    /**
                     * 设置<p>GIT信息</p>
                     * @param _gitSource <p>GIT信息</p>
                     * 
                     */
                    void SetGitSource(const GitInfo& _gitSource);

                    /**
                     * 判断参数 GitSource 是否已赋值
                     * @return GitSource 是否已赋值
                     * 
                     */
                    bool GitSourceHasBeenSet() const;

                    /**
                     * 获取<p>运行限制</p>
                     * @return RunConstraints <p>运行限制</p>
                     * 
                     */
                    RunConstraints GetRunConstraints() const;

                    /**
                     * 设置<p>运行限制</p>
                     * @param _runConstraints <p>运行限制</p>
                     * 
                     */
                    void SetRunConstraints(const RunConstraints& _runConstraints);

                    /**
                     * 判断参数 RunConstraints 是否已赋值
                     * @return RunConstraints 是否已赋值
                     * 
                     */
                    bool RunConstraintsHasBeenSet() const;

                    /**
                     * 获取<p>应用COS文件信息</p>
                     * @return CosSource <p>应用COS文件信息</p>
                     * 
                     */
                    CosFileInfo GetCosSource() const;

                    /**
                     * 设置<p>应用COS文件信息</p>
                     * @param _cosSource <p>应用COS文件信息</p>
                     * 
                     */
                    void SetCosSource(const CosFileInfo& _cosSource);

                    /**
                     * 判断参数 CosSource 是否已赋值
                     * @return CosSource 是否已赋值
                     * 
                     */
                    bool CosSourceHasBeenSet() const;

                    /**
                     * 获取<p>排序顺序</p>
                     * @return SortOrder <p>排序顺序</p>
                     * 
                     */
                    int64_t GetSortOrder() const;

                    /**
                     * 设置<p>排序顺序</p>
                     * @param _sortOrder <p>排序顺序</p>
                     * 
                     */
                    void SetSortOrder(const int64_t& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                private:

                    /**
                     * <p>应用ID</p>
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * <p>项目ID</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>类型</p><p>枚举值：</p><ul><li>WDL： WDL</li><li>NEXTFLOW： NEXTFLOW</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>代码入口</p>
                     */
                    std::string m_entrypoint;
                    bool m_entrypointHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>创建人</p>
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * <p>创建人ID</p>
                     */
                    std::string m_creatorId;
                    bool m_creatorIdHasBeenSet;

                    /**
                     * <p>版本数量</p>
                     */
                    int64_t m_versionCount;
                    bool m_versionCountHasBeenSet;

                    /**
                     * <p>版本列表</p>
                     */
                    std::vector<ApplicationVersion> m_versions;
                    bool m_versionsHasBeenSet;

                    /**
                     * <p>GIT信息</p>
                     */
                    GitInfo m_gitSource;
                    bool m_gitSourceHasBeenSet;

                    /**
                     * <p>运行限制</p>
                     */
                    RunConstraints m_runConstraints;
                    bool m_runConstraintsHasBeenSet;

                    /**
                     * <p>应用COS文件信息</p>
                     */
                    CosFileInfo m_cosSource;
                    bool m_cosSourceHasBeenSet;

                    /**
                     * <p>排序顺序</p>
                     */
                    int64_t m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_APPLICATION_H_
