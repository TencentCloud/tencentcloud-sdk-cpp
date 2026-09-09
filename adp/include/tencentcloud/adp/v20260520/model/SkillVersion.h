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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SKILLVERSION_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SKILLVERSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/SkillAnalysisInfo.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * SkillVersion Skill 版本信息。
                */
                class SkillVersion : public AbstractModel
                {
                public:
                    SkillVersion();
                    ~SkillVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>检测信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AnalysisInfo <p>检测信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SkillAnalysisInfo GetAnalysisInfo() const;

                    /**
                     * 设置<p>检测信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _analysisInfo <p>检测信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAnalysisInfo(const SkillAnalysisInfo& _analysisInfo);

                    /**
                     * 判断参数 AnalysisInfo 是否已赋值
                     * @return AnalysisInfo 是否已赋值
                     * 
                     */
                    bool AnalysisInfoHasBeenSet() const;

                    /**
                     * 获取<p>当前生效版本号</p>
                     * @return Version <p>当前生效版本号</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>当前生效版本号</p>
                     * @param _version <p>当前生效版本号</p>
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取<p>当前生效版本ID</p>
                     * @return VersionId <p>当前生效版本ID</p>
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置<p>当前生效版本ID</p>
                     * @param _versionId <p>当前生效版本ID</p>
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取<p>Skill 版本发布流程状态：</p><pre><code>  - 0 INITIALIZED      初始化（版本初始态）  - 1 AUDITING         审核中（f_analysis_status ∈ {PENDING, RUNNING}）  - 2 PENDING_RELEASE  待发布（低/中风险，等用户确认上架）  - 3 RELEASED         已发布  - 4 UNRELEASED       未发布（HIGH / UNAVAILABLE / FAILED / 用户放弃，含历史&quot;不通过&quot;语义）与 SkillAnalysisStatus 解耦：前者是用户视角发布生命周期，后者是安全检测阶段。</code></pre>
                     * @return VersionStatus <p>Skill 版本发布流程状态：</p><pre><code>  - 0 INITIALIZED      初始化（版本初始态）  - 1 AUDITING         审核中（f_analysis_status ∈ {PENDING, RUNNING}）  - 2 PENDING_RELEASE  待发布（低/中风险，等用户确认上架）  - 3 RELEASED         已发布  - 4 UNRELEASED       未发布（HIGH / UNAVAILABLE / FAILED / 用户放弃，含历史&quot;不通过&quot;语义）与 SkillAnalysisStatus 解耦：前者是用户视角发布生命周期，后者是安全检测阶段。</code></pre>
                     * 
                     */
                    int64_t GetVersionStatus() const;

                    /**
                     * 设置<p>Skill 版本发布流程状态：</p><pre><code>  - 0 INITIALIZED      初始化（版本初始态）  - 1 AUDITING         审核中（f_analysis_status ∈ {PENDING, RUNNING}）  - 2 PENDING_RELEASE  待发布（低/中风险，等用户确认上架）  - 3 RELEASED         已发布  - 4 UNRELEASED       未发布（HIGH / UNAVAILABLE / FAILED / 用户放弃，含历史&quot;不通过&quot;语义）与 SkillAnalysisStatus 解耦：前者是用户视角发布生命周期，后者是安全检测阶段。</code></pre>
                     * @param _versionStatus <p>Skill 版本发布流程状态：</p><pre><code>  - 0 INITIALIZED      初始化（版本初始态）  - 1 AUDITING         审核中（f_analysis_status ∈ {PENDING, RUNNING}）  - 2 PENDING_RELEASE  待发布（低/中风险，等用户确认上架）  - 3 RELEASED         已发布  - 4 UNRELEASED       未发布（HIGH / UNAVAILABLE / FAILED / 用户放弃，含历史&quot;不通过&quot;语义）与 SkillAnalysisStatus 解耦：前者是用户视角发布生命周期，后者是安全检测阶段。</code></pre>
                     * 
                     */
                    void SetVersionStatus(const int64_t& _versionStatus);

                    /**
                     * 判断参数 VersionStatus 是否已赋值
                     * @return VersionStatus 是否已赋值
                     * 
                     */
                    bool VersionStatusHasBeenSet() const;

                    /**
                     * 获取<p>Skill包的md5信息</p>
                     * @return SkillMd5 <p>Skill包的md5信息</p>
                     * 
                     */
                    std::string GetSkillMd5() const;

                    /**
                     * 设置<p>Skill包的md5信息</p>
                     * @param _skillMd5 <p>Skill包的md5信息</p>
                     * 
                     */
                    void SetSkillMd5(const std::string& _skillMd5);

                    /**
                     * 判断参数 SkillMd5 是否已赋值
                     * @return SkillMd5 是否已赋值
                     * 
                     */
                    bool SkillMd5HasBeenSet() const;

                    /**
                     * 获取<p>版本包地址</p>
                     * @return SkillUrl <p>版本包地址</p>
                     * 
                     */
                    std::string GetSkillUrl() const;

                    /**
                     * 设置<p>版本包地址</p>
                     * @param _skillUrl <p>版本包地址</p>
                     * 
                     */
                    void SetSkillUrl(const std::string& _skillUrl);

                    /**
                     * 判断参数 SkillUrl 是否已赋值
                     * @return SkillUrl 是否已赋值
                     * 
                     */
                    bool SkillUrlHasBeenSet() const;

                    /**
                     * 获取<p>版本创建时间（Unix秒）</p>
                     * @return CreateTime <p>版本创建时间（Unix秒）</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>版本创建时间（Unix秒）</p>
                     * @param _createTime <p>版本创建时间（Unix秒）</p>
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
                     * 获取<p>skill md文档</p>
                     * @return SkillMarkdownUrl <p>skill md文档</p>
                     * 
                     */
                    std::string GetSkillMarkdownUrl() const;

                    /**
                     * 设置<p>skill md文档</p>
                     * @param _skillMarkdownUrl <p>skill md文档</p>
                     * 
                     */
                    void SetSkillMarkdownUrl(const std::string& _skillMarkdownUrl);

                    /**
                     * 判断参数 SkillMarkdownUrl 是否已赋值
                     * @return SkillMarkdownUrl 是否已赋值
                     * 
                     */
                    bool SkillMarkdownUrlHasBeenSet() const;

                    /**
                     * 获取<p>版本变更说明</p>
                     * @return UpdateDesc <p>版本变更说明</p>
                     * 
                     */
                    std::string GetUpdateDesc() const;

                    /**
                     * 设置<p>版本变更说明</p>
                     * @param _updateDesc <p>版本变更说明</p>
                     * 
                     */
                    void SetUpdateDesc(const std::string& _updateDesc);

                    /**
                     * 判断参数 UpdateDesc 是否已赋值
                     * @return UpdateDesc 是否已赋值
                     * 
                     */
                    bool UpdateDescHasBeenSet() const;

                    /**
                     * 获取<p>变更用户</p>
                     * @return Updater <p>变更用户</p>
                     * 
                     */
                    std::string GetUpdater() const;

                    /**
                     * 设置<p>变更用户</p>
                     * @param _updater <p>变更用户</p>
                     * 
                     */
                    void SetUpdater(const std::string& _updater);

                    /**
                     * 判断参数 Updater 是否已赋值
                     * @return Updater 是否已赋值
                     * 
                     */
                    bool UpdaterHasBeenSet() const;

                private:

                    /**
                     * <p>检测信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SkillAnalysisInfo m_analysisInfo;
                    bool m_analysisInfoHasBeenSet;

                    /**
                     * <p>当前生效版本号</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>当前生效版本ID</p>
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * <p>Skill 版本发布流程状态：</p><pre><code>  - 0 INITIALIZED      初始化（版本初始态）  - 1 AUDITING         审核中（f_analysis_status ∈ {PENDING, RUNNING}）  - 2 PENDING_RELEASE  待发布（低/中风险，等用户确认上架）  - 3 RELEASED         已发布  - 4 UNRELEASED       未发布（HIGH / UNAVAILABLE / FAILED / 用户放弃，含历史&quot;不通过&quot;语义）与 SkillAnalysisStatus 解耦：前者是用户视角发布生命周期，后者是安全检测阶段。</code></pre>
                     */
                    int64_t m_versionStatus;
                    bool m_versionStatusHasBeenSet;

                    /**
                     * <p>Skill包的md5信息</p>
                     */
                    std::string m_skillMd5;
                    bool m_skillMd5HasBeenSet;

                    /**
                     * <p>版本包地址</p>
                     */
                    std::string m_skillUrl;
                    bool m_skillUrlHasBeenSet;

                    /**
                     * <p>版本创建时间（Unix秒）</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>skill md文档</p>
                     */
                    std::string m_skillMarkdownUrl;
                    bool m_skillMarkdownUrlHasBeenSet;

                    /**
                     * <p>版本变更说明</p>
                     */
                    std::string m_updateDesc;
                    bool m_updateDescHasBeenSet;

                    /**
                     * <p>变更用户</p>
                     */
                    std::string m_updater;
                    bool m_updaterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SKILLVERSION_H_
