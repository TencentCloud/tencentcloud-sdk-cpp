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
                     * 获取检测信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AnalysisInfo 检测信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SkillAnalysisInfo GetAnalysisInfo() const;

                    /**
                     * 设置检测信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _analysisInfo 检测信息
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
                     * 获取当前生效版本号
                     * @return Version 当前生效版本号
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置当前生效版本号
                     * @param _version 当前生效版本号
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
                     * 获取当前生效版本ID
                     * @return VersionId 当前生效版本ID
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置当前生效版本ID
                     * @param _versionId 当前生效版本ID
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
                     * 获取    Skill 版本发布流程状态：
      - 0 INITIALIZED      初始化（版本初始态）
      - 1 AUDITING         审核中（f_analysis_status ∈ {PENDING, RUNNING}）
      - 2 PENDING_RELEASE  待发布（低/中风险，等用户确认上架）
      - 3 RELEASED         已发布
      - 4 UNRELEASED       未发布（HIGH / UNAVAILABLE / FAILED / 用户放弃，含历史"不通过"语义）
    与 SkillAnalysisStatus 解耦：前者是用户视角发布生命周期，后者是安全检测阶段。
                     * @return VersionStatus     Skill 版本发布流程状态：
      - 0 INITIALIZED      初始化（版本初始态）
      - 1 AUDITING         审核中（f_analysis_status ∈ {PENDING, RUNNING}）
      - 2 PENDING_RELEASE  待发布（低/中风险，等用户确认上架）
      - 3 RELEASED         已发布
      - 4 UNRELEASED       未发布（HIGH / UNAVAILABLE / FAILED / 用户放弃，含历史"不通过"语义）
    与 SkillAnalysisStatus 解耦：前者是用户视角发布生命周期，后者是安全检测阶段。
                     * 
                     */
                    int64_t GetVersionStatus() const;

                    /**
                     * 设置    Skill 版本发布流程状态：
      - 0 INITIALIZED      初始化（版本初始态）
      - 1 AUDITING         审核中（f_analysis_status ∈ {PENDING, RUNNING}）
      - 2 PENDING_RELEASE  待发布（低/中风险，等用户确认上架）
      - 3 RELEASED         已发布
      - 4 UNRELEASED       未发布（HIGH / UNAVAILABLE / FAILED / 用户放弃，含历史"不通过"语义）
    与 SkillAnalysisStatus 解耦：前者是用户视角发布生命周期，后者是安全检测阶段。
                     * @param _versionStatus     Skill 版本发布流程状态：
      - 0 INITIALIZED      初始化（版本初始态）
      - 1 AUDITING         审核中（f_analysis_status ∈ {PENDING, RUNNING}）
      - 2 PENDING_RELEASE  待发布（低/中风险，等用户确认上架）
      - 3 RELEASED         已发布
      - 4 UNRELEASED       未发布（HIGH / UNAVAILABLE / FAILED / 用户放弃，含历史"不通过"语义）
    与 SkillAnalysisStatus 解耦：前者是用户视角发布生命周期，后者是安全检测阶段。
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
                     * 获取Skill包的md5信息
                     * @return SkillMd5 Skill包的md5信息
                     * 
                     */
                    std::string GetSkillMd5() const;

                    /**
                     * 设置Skill包的md5信息
                     * @param _skillMd5 Skill包的md5信息
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
                     * 获取版本包地址
                     * @return SkillUrl 版本包地址
                     * 
                     */
                    std::string GetSkillUrl() const;

                    /**
                     * 设置版本包地址
                     * @param _skillUrl 版本包地址
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
                     * 获取版本创建时间（Unix秒）
                     * @return CreateTime 版本创建时间（Unix秒）
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置版本创建时间（Unix秒）
                     * @param _createTime 版本创建时间（Unix秒）
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
                     * 获取skill md文档
                     * @return SkillMarkdownUrl skill md文档
                     * 
                     */
                    std::string GetSkillMarkdownUrl() const;

                    /**
                     * 设置skill md文档
                     * @param _skillMarkdownUrl skill md文档
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
                     * 获取版本变更说明
                     * @return UpdateDesc 版本变更说明
                     * 
                     */
                    std::string GetUpdateDesc() const;

                    /**
                     * 设置版本变更说明
                     * @param _updateDesc 版本变更说明
                     * 
                     */
                    void SetUpdateDesc(const std::string& _updateDesc);

                    /**
                     * 判断参数 UpdateDesc 是否已赋值
                     * @return UpdateDesc 是否已赋值
                     * 
                     */
                    bool UpdateDescHasBeenSet() const;

                private:

                    /**
                     * 检测信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SkillAnalysisInfo m_analysisInfo;
                    bool m_analysisInfoHasBeenSet;

                    /**
                     * 当前生效版本号
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 当前生效版本ID
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     *     Skill 版本发布流程状态：
      - 0 INITIALIZED      初始化（版本初始态）
      - 1 AUDITING         审核中（f_analysis_status ∈ {PENDING, RUNNING}）
      - 2 PENDING_RELEASE  待发布（低/中风险，等用户确认上架）
      - 3 RELEASED         已发布
      - 4 UNRELEASED       未发布（HIGH / UNAVAILABLE / FAILED / 用户放弃，含历史"不通过"语义）
    与 SkillAnalysisStatus 解耦：前者是用户视角发布生命周期，后者是安全检测阶段。
                     */
                    int64_t m_versionStatus;
                    bool m_versionStatusHasBeenSet;

                    /**
                     * Skill包的md5信息
                     */
                    std::string m_skillMd5;
                    bool m_skillMd5HasBeenSet;

                    /**
                     * 版本包地址
                     */
                    std::string m_skillUrl;
                    bool m_skillUrlHasBeenSet;

                    /**
                     * 版本创建时间（Unix秒）
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * skill md文档
                     */
                    std::string m_skillMarkdownUrl;
                    bool m_skillMarkdownUrlHasBeenSet;

                    /**
                     * 版本变更说明
                     */
                    std::string m_updateDesc;
                    bool m_updateDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SKILLVERSION_H_
