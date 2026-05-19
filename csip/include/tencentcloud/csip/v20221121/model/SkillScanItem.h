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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SKILLSCANITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SKILLSCANITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/SkillCapabilityTag.h>
#include <tencentcloud/csip/v20221121/model/SkillRuleCatalogItem.h>
#include <tencentcloud/csip/v20221121/model/SkillScanEngineResult.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Skill 安全检测结果详情
                */
                class SkillScanItem : public AbstractModel
                {
                public:
                    SkillScanItem();
                    ~SkillScanItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Skill 名称</p>
                     * @return SkillName <p>Skill 名称</p>
                     * 
                     */
                    std::string GetSkillName() const;

                    /**
                     * 设置<p>Skill 名称</p>
                     * @param _skillName <p>Skill 名称</p>
                     * 
                     */
                    void SetSkillName(const std::string& _skillName);

                    /**
                     * 判断参数 SkillName 是否已赋值
                     * @return SkillName 是否已赋值
                     * 
                     */
                    bool SkillNameHasBeenSet() const;

                    /**
                     * 获取<p>Skill 描述，帮助理解 Skill 的主要用途</p>
                     * @return SkillDescription <p>Skill 描述，帮助理解 Skill 的主要用途</p>
                     * 
                     */
                    std::string GetSkillDescription() const;

                    /**
                     * 设置<p>Skill 描述，帮助理解 Skill 的主要用途</p>
                     * @param _skillDescription <p>Skill 描述，帮助理解 Skill 的主要用途</p>
                     * 
                     */
                    void SetSkillDescription(const std::string& _skillDescription);

                    /**
                     * 判断参数 SkillDescription 是否已赋值
                     * @return SkillDescription 是否已赋值
                     * 
                     */
                    bool SkillDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>ZIP 文件的 SHA256 Hash<br>参数格式：sha256:&lt;64位hex&gt;</p>
                     * @return ContentHash <p>ZIP 文件的 SHA256 Hash<br>参数格式：sha256:&lt;64位hex&gt;</p>
                     * 
                     */
                    std::string GetContentHash() const;

                    /**
                     * 设置<p>ZIP 文件的 SHA256 Hash<br>参数格式：sha256:&lt;64位hex&gt;</p>
                     * @param _contentHash <p>ZIP 文件的 SHA256 Hash<br>参数格式：sha256:&lt;64位hex&gt;</p>
                     * 
                     */
                    void SetContentHash(const std::string& _contentHash);

                    /**
                     * 判断参数 ContentHash 是否已赋值
                     * @return ContentHash 是否已赋值
                     * 
                     */
                    bool ContentHashHasBeenSet() const;

                    /**
                     * 获取<p>原始上传 ZIP 文件解压后的实际文件数，也是计费的范围，扫描成功后1个文件计为1次额度</p>
                     * @return UploadFileCount <p>原始上传 ZIP 文件解压后的实际文件数，也是计费的范围，扫描成功后1个文件计为1次额度</p>
                     * 
                     */
                    int64_t GetUploadFileCount() const;

                    /**
                     * 设置<p>原始上传 ZIP 文件解压后的实际文件数，也是计费的范围，扫描成功后1个文件计为1次额度</p>
                     * @param _uploadFileCount <p>原始上传 ZIP 文件解压后的实际文件数，也是计费的范围，扫描成功后1个文件计为1次额度</p>
                     * 
                     */
                    void SetUploadFileCount(const int64_t& _uploadFileCount);

                    /**
                     * 判断参数 UploadFileCount 是否已赋值
                     * @return UploadFileCount 是否已赋值
                     * 
                     */
                    bool UploadFileCountHasBeenSet() const;

                    /**
                     * 获取<p>综合风险等级<br>枚举值：<br>malicious：恶意<br>suspicious：可疑<br>benign：可信</p>
                     * @return RiskLevel <p>综合风险等级<br>枚举值：<br>malicious：恶意<br>suspicious：可疑<br>benign：可信</p>
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置<p>综合风险等级<br>枚举值：<br>malicious：恶意<br>suspicious：可疑<br>benign：可信</p>
                     * @param _riskLevel <p>综合风险等级<br>枚举值：<br>malicious：恶意<br>suspicious：可疑<br>benign：可信</p>
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取<p>风险主标签融合规则 ID（9xxxx），由服务端从命中的融合风险标签中生成；benign 且无规则命中时为空。展示名称可通过 RuleCatalog 获取</p>
                     * @return PrimaryRuleID <p>风险主标签融合规则 ID（9xxxx），由服务端从命中的融合风险标签中生成；benign 且无规则命中时为空。展示名称可通过 RuleCatalog 获取</p>
                     * 
                     */
                    std::string GetPrimaryRuleID() const;

                    /**
                     * 设置<p>风险主标签融合规则 ID（9xxxx），由服务端从命中的融合风险标签中生成；benign 且无规则命中时为空。展示名称可通过 RuleCatalog 获取</p>
                     * @param _primaryRuleID <p>风险主标签融合规则 ID（9xxxx），由服务端从命中的融合风险标签中生成；benign 且无规则命中时为空。展示名称可通过 RuleCatalog 获取</p>
                     * 
                     */
                    void SetPrimaryRuleID(const std::string& _primaryRuleID);

                    /**
                     * 判断参数 PrimaryRuleID 是否已赋值
                     * @return PrimaryRuleID 是否已赋值
                     * 
                     */
                    bool PrimaryRuleIDHasBeenSet() const;

                    /**
                     * 获取<p>综合处置建议，用于指导调用方优先执行下线、隔离、修复、复检等动作。历史结果中可能为空。传 Language=en-US 时返回英文文案</p>
                     * @return Mitigation <p>综合处置建议，用于指导调用方优先执行下线、隔离、修复、复检等动作。历史结果中可能为空。传 Language=en-US 时返回英文文案</p>
                     * 
                     */
                    std::string GetMitigation() const;

                    /**
                     * 设置<p>综合处置建议，用于指导调用方优先执行下线、隔离、修复、复检等动作。历史结果中可能为空。传 Language=en-US 时返回英文文案</p>
                     * @param _mitigation <p>综合处置建议，用于指导调用方优先执行下线、隔离、修复、复检等动作。历史结果中可能为空。传 Language=en-US 时返回英文文案</p>
                     * 
                     */
                    void SetMitigation(const std::string& _mitigation);

                    /**
                     * 判断参数 Mitigation 是否已赋值
                     * @return Mitigation 是否已赋值
                     * 
                     */
                    bool MitigationHasBeenSet() const;

                    /**
                     * 获取<p>风险综合描述，对本次检测发现的风险进行概括性说明。传 Language=en-US 时返回英文文案</p>
                     * @return RiskDescription <p>风险综合描述，对本次检测发现的风险进行概括性说明。传 Language=en-US 时返回英文文案</p>
                     * 
                     */
                    std::string GetRiskDescription() const;

                    /**
                     * 设置<p>风险综合描述，对本次检测发现的风险进行概括性说明。传 Language=en-US 时返回英文文案</p>
                     * @param _riskDescription <p>风险综合描述，对本次检测发现的风险进行概括性说明。传 Language=en-US 时返回英文文案</p>
                     * 
                     */
                    void SetRiskDescription(const std::string& _riskDescription);

                    /**
                     * 判断参数 RiskDescription 是否已赋值
                     * @return RiskDescription 是否已赋值
                     * 
                     */
                    bool RiskDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>安全评分取值范围：[0, 100]补充说明：分数越高越安全</p>
                     * @return SecurityScore <p>安全评分取值范围：[0, 100]补充说明：分数越高越安全</p>
                     * 
                     */
                    int64_t GetSecurityScore() const;

                    /**
                     * 设置<p>安全评分取值范围：[0, 100]补充说明：分数越高越安全</p>
                     * @param _securityScore <p>安全评分取值范围：[0, 100]补充说明：分数越高越安全</p>
                     * 
                     */
                    void SetSecurityScore(const int64_t& _securityScore);

                    /**
                     * 判断参数 SecurityScore 是否已赋值
                     * @return SecurityScore 是否已赋值
                     * 
                     */
                    bool SecurityScoreHasBeenSet() const;

                    /**
                     * 获取<p>本次扫描使用的引擎版本号</p>
                     * @return EngineVersion <p>本次扫描使用的引擎版本号</p>
                     * 
                     */
                    int64_t GetEngineVersion() const;

                    /**
                     * 设置<p>本次扫描使用的引擎版本号</p>
                     * @param _engineVersion <p>本次扫描使用的引擎版本号</p>
                     * 
                     */
                    void SetEngineVersion(const int64_t& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取<p>Skill 能力标签列表，描述 Skill 具备的能力特征或适用场景。不等同于风险标签，也不参与风险等级判定。传 Language=en-US 时 Name 切换为英文，ID 保持不变</p>
                     * @return CapabilityTags <p>Skill 能力标签列表，描述 Skill 具备的能力特征或适用场景。不等同于风险标签，也不参与风险等级判定。传 Language=en-US 时 Name 切换为英文，ID 保持不变</p>
                     * 
                     */
                    std::vector<SkillCapabilityTag> GetCapabilityTags() const;

                    /**
                     * 设置<p>Skill 能力标签列表，描述 Skill 具备的能力特征或适用场景。不等同于风险标签，也不参与风险等级判定。传 Language=en-US 时 Name 切换为英文，ID 保持不变</p>
                     * @param _capabilityTags <p>Skill 能力标签列表，描述 Skill 具备的能力特征或适用场景。不等同于风险标签，也不参与风险等级判定。传 Language=en-US 时 Name 切换为英文，ID 保持不变</p>
                     * 
                     */
                    void SetCapabilityTags(const std::vector<SkillCapabilityTag>& _capabilityTags);

                    /**
                     * 判断参数 CapabilityTags 是否已赋值
                     * @return CapabilityTags 是否已赋值
                     * 
                     */
                    bool CapabilityTagsHasBeenSet() const;

                    /**
                     * 获取<p>融合规则目录全集，包含所有融合规则类别（9xxxx），调用方可据此展示分类标签，无需本地维护映射表。传 Language=en-US 时返回英文名称</p>
                     * @return RuleCatalog <p>融合规则目录全集，包含所有融合规则类别（9xxxx），调用方可据此展示分类标签，无需本地维护映射表。传 Language=en-US 时返回英文名称</p>
                     * 
                     */
                    std::vector<SkillRuleCatalogItem> GetRuleCatalog() const;

                    /**
                     * 设置<p>融合规则目录全集，包含所有融合规则类别（9xxxx），调用方可据此展示分类标签，无需本地维护映射表。传 Language=en-US 时返回英文名称</p>
                     * @param _ruleCatalog <p>融合规则目录全集，包含所有融合规则类别（9xxxx），调用方可据此展示分类标签，无需本地维护映射表。传 Language=en-US 时返回英文名称</p>
                     * 
                     */
                    void SetRuleCatalog(const std::vector<SkillRuleCatalogItem>& _ruleCatalog);

                    /**
                     * 判断参数 RuleCatalog 是否已赋值
                     * @return RuleCatalog 是否已赋值
                     * 
                     */
                    bool RuleCatalogHasBeenSet() const;

                    /**
                     * 获取<p>扫描结果详情，按子引擎分组。每个元素包含 ScanType（引擎类型）和 RuleList（命中规则列表）。规则中的 RuleID 使用融合编码（9xxxx），可与 RuleCatalog 交叉引用。传 Language=en-US 时 Description 返回英文文本</p>
                     * @return ScanItems <p>扫描结果详情，按子引擎分组。每个元素包含 ScanType（引擎类型）和 RuleList（命中规则列表）。规则中的 RuleID 使用融合编码（9xxxx），可与 RuleCatalog 交叉引用。传 Language=en-US 时 Description 返回英文文本</p>
                     * 
                     */
                    std::vector<SkillScanEngineResult> GetScanItems() const;

                    /**
                     * 设置<p>扫描结果详情，按子引擎分组。每个元素包含 ScanType（引擎类型）和 RuleList（命中规则列表）。规则中的 RuleID 使用融合编码（9xxxx），可与 RuleCatalog 交叉引用。传 Language=en-US 时 Description 返回英文文本</p>
                     * @param _scanItems <p>扫描结果详情，按子引擎分组。每个元素包含 ScanType（引擎类型）和 RuleList（命中规则列表）。规则中的 RuleID 使用融合编码（9xxxx），可与 RuleCatalog 交叉引用。传 Language=en-US 时 Description 返回英文文本</p>
                     * 
                     */
                    void SetScanItems(const std::vector<SkillScanEngineResult>& _scanItems);

                    /**
                     * 判断参数 ScanItems 是否已赋值
                     * @return ScanItems 是否已赋值
                     * 
                     */
                    bool ScanItemsHasBeenSet() const;

                    /**
                     * 获取<p>综合安全审计报告地址（签名 URL）。有效期由请求参数 ReportURLExpireHours 控制</p>
                     * @return ReportURL <p>综合安全审计报告地址（签名 URL）。有效期由请求参数 ReportURLExpireHours 控制</p>
                     * 
                     */
                    std::string GetReportURL() const;

                    /**
                     * 设置<p>综合安全审计报告地址（签名 URL）。有效期由请求参数 ReportURLExpireHours 控制</p>
                     * @param _reportURL <p>综合安全审计报告地址（签名 URL）。有效期由请求参数 ReportURLExpireHours 控制</p>
                     * 
                     */
                    void SetReportURL(const std::string& _reportURL);

                    /**
                     * 判断参数 ReportURL 是否已赋值
                     * @return ReportURL 是否已赋值
                     * 
                     */
                    bool ReportURLHasBeenSet() const;

                    /**
                     * 获取<p>扫描完成时间。仅 Status=SUCCESS 时有值<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * @return ScannedAt <p>扫描完成时间。仅 Status=SUCCESS 时有值<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * 
                     */
                    std::string GetScannedAt() const;

                    /**
                     * 设置<p>扫描完成时间。仅 Status=SUCCESS 时有值<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * @param _scannedAt <p>扫描完成时间。仅 Status=SUCCESS 时有值<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * 
                     */
                    void SetScannedAt(const std::string& _scannedAt);

                    /**
                     * 判断参数 ScannedAt 是否已赋值
                     * @return ScannedAt 是否已赋值
                     * 
                     */
                    bool ScannedAtHasBeenSet() const;

                    /**
                     * 获取<p>任务创建时间。仅 Status=SCANNING 时有值<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * @return CreatedAt <p>任务创建时间。仅 Status=SCANNING 时有值<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置<p>任务创建时间。仅 Status=SCANNING 时有值<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * @param _createdAt <p>任务创建时间。仅 Status=SCANNING 时有值<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取<p>失败时间。仅 Status=FAILED 时有值<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * @return FailedAt <p>失败时间。仅 Status=FAILED 时有值<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * 
                     */
                    std::string GetFailedAt() const;

                    /**
                     * 设置<p>失败时间。仅 Status=FAILED 时有值<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * @param _failedAt <p>失败时间。仅 Status=FAILED 时有值<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * 
                     */
                    void SetFailedAt(const std::string& _failedAt);

                    /**
                     * 判断参数 FailedAt 是否已赋值
                     * @return FailedAt 是否已赋值
                     * 
                     */
                    bool FailedAtHasBeenSet() const;

                    /**
                     * 获取<p>失败原因描述。仅 Status=FAILED 时有值</p>
                     * @return Message <p>失败原因描述。仅 Status=FAILED 时有值</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>失败原因描述。仅 Status=FAILED 时有值</p>
                     * @param _message <p>失败原因描述。仅 Status=FAILED 时有值</p>
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * <p>Skill 名称</p>
                     */
                    std::string m_skillName;
                    bool m_skillNameHasBeenSet;

                    /**
                     * <p>Skill 描述，帮助理解 Skill 的主要用途</p>
                     */
                    std::string m_skillDescription;
                    bool m_skillDescriptionHasBeenSet;

                    /**
                     * <p>ZIP 文件的 SHA256 Hash<br>参数格式：sha256:&lt;64位hex&gt;</p>
                     */
                    std::string m_contentHash;
                    bool m_contentHashHasBeenSet;

                    /**
                     * <p>原始上传 ZIP 文件解压后的实际文件数，也是计费的范围，扫描成功后1个文件计为1次额度</p>
                     */
                    int64_t m_uploadFileCount;
                    bool m_uploadFileCountHasBeenSet;

                    /**
                     * <p>综合风险等级<br>枚举值：<br>malicious：恶意<br>suspicious：可疑<br>benign：可信</p>
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>风险主标签融合规则 ID（9xxxx），由服务端从命中的融合风险标签中生成；benign 且无规则命中时为空。展示名称可通过 RuleCatalog 获取</p>
                     */
                    std::string m_primaryRuleID;
                    bool m_primaryRuleIDHasBeenSet;

                    /**
                     * <p>综合处置建议，用于指导调用方优先执行下线、隔离、修复、复检等动作。历史结果中可能为空。传 Language=en-US 时返回英文文案</p>
                     */
                    std::string m_mitigation;
                    bool m_mitigationHasBeenSet;

                    /**
                     * <p>风险综合描述，对本次检测发现的风险进行概括性说明。传 Language=en-US 时返回英文文案</p>
                     */
                    std::string m_riskDescription;
                    bool m_riskDescriptionHasBeenSet;

                    /**
                     * <p>安全评分取值范围：[0, 100]补充说明：分数越高越安全</p>
                     */
                    int64_t m_securityScore;
                    bool m_securityScoreHasBeenSet;

                    /**
                     * <p>本次扫描使用的引擎版本号</p>
                     */
                    int64_t m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * <p>Skill 能力标签列表，描述 Skill 具备的能力特征或适用场景。不等同于风险标签，也不参与风险等级判定。传 Language=en-US 时 Name 切换为英文，ID 保持不变</p>
                     */
                    std::vector<SkillCapabilityTag> m_capabilityTags;
                    bool m_capabilityTagsHasBeenSet;

                    /**
                     * <p>融合规则目录全集，包含所有融合规则类别（9xxxx），调用方可据此展示分类标签，无需本地维护映射表。传 Language=en-US 时返回英文名称</p>
                     */
                    std::vector<SkillRuleCatalogItem> m_ruleCatalog;
                    bool m_ruleCatalogHasBeenSet;

                    /**
                     * <p>扫描结果详情，按子引擎分组。每个元素包含 ScanType（引擎类型）和 RuleList（命中规则列表）。规则中的 RuleID 使用融合编码（9xxxx），可与 RuleCatalog 交叉引用。传 Language=en-US 时 Description 返回英文文本</p>
                     */
                    std::vector<SkillScanEngineResult> m_scanItems;
                    bool m_scanItemsHasBeenSet;

                    /**
                     * <p>综合安全审计报告地址（签名 URL）。有效期由请求参数 ReportURLExpireHours 控制</p>
                     */
                    std::string m_reportURL;
                    bool m_reportURLHasBeenSet;

                    /**
                     * <p>扫描完成时间。仅 Status=SUCCESS 时有值<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     */
                    std::string m_scannedAt;
                    bool m_scannedAtHasBeenSet;

                    /**
                     * <p>任务创建时间。仅 Status=SCANNING 时有值<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>失败时间。仅 Status=FAILED 时有值<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     */
                    std::string m_failedAt;
                    bool m_failedAtHasBeenSet;

                    /**
                     * <p>失败原因描述。仅 Status=FAILED 时有值</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SKILLSCANITEM_H_
