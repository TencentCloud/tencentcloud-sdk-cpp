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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_SKILLSCANQUERYDATA_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_SKILLSCANQUERYDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/SkillScanCapabilityTag.h>
#include <tencentcloud/waf/v20180125/model/SkillRuleCatalogItem.h>
#include <tencentcloud/waf/v20180125/model/SkillScanItem.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * skills检测结果列表
                */
                class SkillScanQueryData : public AbstractModel
                {
                public:
                    SkillScanQueryData();
                    ~SkillScanQueryData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>检测状态：success（检测完成，有结果）、scanning（检测进行中）、not_found（无记录）、failed（检测失败）</p><p>枚举值：</p><ul><li>success： 检测完成，有结果</li><li>scanning： 检测进行中</li><li>not_found： 无记录</li><li>failed： 检测失败</li></ul>
                     * @return Status <p>检测状态：success（检测完成，有结果）、scanning（检测进行中）、not_found（无记录）、failed（检测失败）</p><p>枚举值：</p><ul><li>success： 检测完成，有结果</li><li>scanning： 检测进行中</li><li>not_found： 无记录</li><li>failed： 检测失败</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>检测状态：success（检测完成，有结果）、scanning（检测进行中）、not_found（无记录）、failed（检测失败）</p><p>枚举值：</p><ul><li>success： 检测完成，有结果</li><li>scanning： 检测进行中</li><li>not_found： 无记录</li><li>failed： 检测失败</li></ul>
                     * @param _status <p>检测状态：success（检测完成，有结果）、scanning（检测进行中）、not_found（无记录）、failed（检测失败）</p><p>枚举值：</p><ul><li>success： 检测完成，有结果</li><li>scanning： 检测进行中</li><li>not_found： 无记录</li><li>failed： 检测失败</li></ul>
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
                     * 获取<p>Skill 名称，用于页面展示、结果列表呈现和人工研判</p>
                     * @return SkillName <p>Skill 名称，用于页面展示、结果列表呈现和人工研判</p>
                     * 
                     */
                    std::string GetSkillName() const;

                    /**
                     * 设置<p>Skill 名称，用于页面展示、结果列表呈现和人工研判</p>
                     * @param _skillName <p>Skill 名称，用于页面展示、结果列表呈现和人工研判</p>
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
                     * 获取<p>Skill 描述，通常来自 Skill 元数据或说明信息，用于帮助调用方理解 Skill 的用途</p>
                     * @return SkillDescription <p>Skill 描述，通常来自 Skill 元数据或说明信息，用于帮助调用方理解 Skill 的用途</p>
                     * 
                     */
                    std::string GetSkillDescription() const;

                    /**
                     * 设置<p>Skill 描述，通常来自 Skill 元数据或说明信息，用于帮助调用方理解 Skill 的用途</p>
                     * @param _skillDescription <p>Skill 描述，通常来自 Skill 元数据或说明信息，用于帮助调用方理解 Skill 的用途</p>
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
                     * 获取<p>ZIP 文件的 SHA256 哈希值，格式为 sha256:hex_digest</p>
                     * @return ContentHash <p>ZIP 文件的 SHA256 哈希值，格式为 sha256:hex_digest</p>
                     * 
                     */
                    std::string GetContentHash() const;

                    /**
                     * 设置<p>ZIP 文件的 SHA256 哈希值，格式为 sha256:hex_digest</p>
                     * @param _contentHash <p>ZIP 文件的 SHA256 哈希值，格式为 sha256:hex_digest</p>
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
                     * 获取<p>风险等级：malicious（恶意）、suspicious（可疑）、benign（可信）</p>
                     * @return RiskLevel <p>风险等级：malicious（恶意）、suspicious（可疑）、benign（可信）</p>
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置<p>风险等级：malicious（恶意）、suspicious（可疑）、benign（可信）</p>
                     * @param _riskLevel <p>风险等级：malicious（恶意）、suspicious（可疑）、benign（可信）</p>
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
                     * 获取<p>综合处置建议字段，位于 data 顶层，用于给出本次检测结果的总体修复、缓解或人工处置建议</p>
                     * @return Mitigation <p>综合处置建议字段，位于 data 顶层，用于给出本次检测结果的总体修复、缓解或人工处置建议</p>
                     * 
                     */
                    std::string GetMitigation() const;

                    /**
                     * 设置<p>综合处置建议字段，位于 data 顶层，用于给出本次检测结果的总体修复、缓解或人工处置建议</p>
                     * @param _mitigation <p>综合处置建议字段，位于 data 顶层，用于给出本次检测结果的总体修复、缓解或人工处置建议</p>
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
                     * 获取<p>安全评分（0-100，100 为最安全）</p><p>取值范围：[0, 100]</p>
                     * @return SecurityScore <p>安全评分（0-100，100 为最安全）</p><p>取值范围：[0, 100]</p>
                     * 
                     */
                    uint64_t GetSecurityScore() const;

                    /**
                     * 设置<p>安全评分（0-100，100 为最安全）</p><p>取值范围：[0, 100]</p>
                     * @param _securityScore <p>安全评分（0-100，100 为最安全）</p><p>取值范围：[0, 100]</p>
                     * 
                     */
                    void SetSecurityScore(const uint64_t& _securityScore);

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
                    uint64_t GetEngineVersion() const;

                    /**
                     * 设置<p>本次扫描使用的引擎版本号</p>
                     * @param _engineVersion <p>本次扫描使用的引擎版本号</p>
                     * 
                     */
                    void SetEngineVersion(const uint64_t& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取<p>Skill 的能力标签列表，对外固定返回格式为 [{id,name}]。该字段用于描述 Skill 具备的能力特征或适用场景，便于调用方做检索、展示或分类；不等同于风险标签，也不表示风险高低或命中规则结果。当 lang=en 时，仅 name 会切换为英文，id 保持不变</p>
                     * @return CapabilityTags <p>Skill 的能力标签列表，对外固定返回格式为 [{id,name}]。该字段用于描述 Skill 具备的能力特征或适用场景，便于调用方做检索、展示或分类；不等同于风险标签，也不表示风险高低或命中规则结果。当 lang=en 时，仅 name 会切换为英文，id 保持不变</p>
                     * 
                     */
                    std::vector<SkillScanCapabilityTag> GetCapabilityTags() const;

                    /**
                     * 设置<p>Skill 的能力标签列表，对外固定返回格式为 [{id,name}]。该字段用于描述 Skill 具备的能力特征或适用场景，便于调用方做检索、展示或分类；不等同于风险标签，也不表示风险高低或命中规则结果。当 lang=en 时，仅 name 会切换为英文，id 保持不变</p>
                     * @param _capabilityTags <p>Skill 的能力标签列表，对外固定返回格式为 [{id,name}]。该字段用于描述 Skill 具备的能力特征或适用场景，便于调用方做检索、展示或分类；不等同于风险标签，也不表示风险高低或命中规则结果。当 lang=en 时，仅 name 会切换为英文，id 保持不变</p>
                     * 
                     */
                    void SetCapabilityTags(const std::vector<SkillScanCapabilityTag>& _capabilityTags);

                    /**
                     * 判断参数 CapabilityTags 是否已赋值
                     * @return CapabilityTags 是否已赋值
                     * 
                     */
                    bool CapabilityTagsHasBeenSet() const;

                    /**
                     * 获取<p>融合规则目录全集，key 为融合 rule_id（9xxxx），value 为风险类别名称；包含所有融合规则类别，调用方可据此展示分类标签，无需本地维护映射表。传 lang=en 时返回英文名称。该对象是名称映射表，不表达主标签优先级</p>
                     * @return RuleCatalog <p>融合规则目录全集，key 为融合 rule_id（9xxxx），value 为风险类别名称；包含所有融合规则类别，调用方可据此展示分类标签，无需本地维护映射表。传 lang=en 时返回英文名称。该对象是名称映射表，不表达主标签优先级</p>
                     * 
                     */
                    std::vector<SkillRuleCatalogItem> GetRuleCatalog() const;

                    /**
                     * 设置<p>融合规则目录全集，key 为融合 rule_id（9xxxx），value 为风险类别名称；包含所有融合规则类别，调用方可据此展示分类标签，无需本地维护映射表。传 lang=en 时返回英文名称。该对象是名称映射表，不表达主标签优先级</p>
                     * @param _ruleCatalog <p>融合规则目录全集，key 为融合 rule_id（9xxxx），value 为风险类别名称；包含所有融合规则类别，调用方可据此展示分类标签，无需本地维护映射表。传 lang=en 时返回英文名称。该对象是名称映射表，不表达主标签优先级</p>
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
                     * 获取<p>扫描结果详情，按子引擎分组，每个元素包含 scan_type（引擎类型）和 rule_list（命中的规则列表）；规则中的 rule_id 使用融合编码（9xxxx），可与 rule_catalog 交叉引用。传 lang=en 时，description 返回英文文本</p>
                     * @return ScanItems <p>扫描结果详情，按子引擎分组，每个元素包含 scan_type（引擎类型）和 rule_list（命中的规则列表）；规则中的 rule_id 使用融合编码（9xxxx），可与 rule_catalog 交叉引用。传 lang=en 时，description 返回英文文本</p>
                     * 
                     */
                    std::vector<SkillScanItem> GetScanItems() const;

                    /**
                     * 设置<p>扫描结果详情，按子引擎分组，每个元素包含 scan_type（引擎类型）和 rule_list（命中的规则列表）；规则中的 rule_id 使用融合编码（9xxxx），可与 rule_catalog 交叉引用。传 lang=en 时，description 返回英文文本</p>
                     * @param _scanItems <p>扫描结果详情，按子引擎分组，每个元素包含 scan_type（引擎类型）和 rule_list（命中的规则列表）；规则中的 rule_id 使用融合编码（9xxxx），可与 rule_catalog 交叉引用。传 lang=en 时，description 返回英文文本</p>
                     * 
                     */
                    void SetScanItems(const std::vector<SkillScanItem>& _scanItems);

                    /**
                     * 判断参数 ScanItems 是否已赋值
                     * @return ScanItems 是否已赋值
                     * 
                     */
                    bool ScanItemsHasBeenSet() const;

                    /**
                     * 获取<p>综合安全审计报告地址。调用方可通过 report_url_expire_hours 指定有效期，不传时默认返回 1 年有效期地址</p>
                     * @return ReportUrl <p>综合安全审计报告地址。调用方可通过 report_url_expire_hours 指定有效期，不传时默认返回 1 年有效期地址</p>
                     * 
                     */
                    std::string GetReportUrl() const;

                    /**
                     * 设置<p>综合安全审计报告地址。调用方可通过 report_url_expire_hours 指定有效期，不传时默认返回 1 年有效期地址</p>
                     * @param _reportUrl <p>综合安全审计报告地址。调用方可通过 report_url_expire_hours 指定有效期，不传时默认返回 1 年有效期地址</p>
                     * 
                     */
                    void SetReportUrl(const std::string& _reportUrl);

                    /**
                     * 判断参数 ReportUrl 是否已赋值
                     * @return ReportUrl 是否已赋值
                     * 
                     */
                    bool ReportUrlHasBeenSet() const;

                    /**
                     * 获取<p>扫描完成时间</p>
                     * @return ScannedAt <p>扫描完成时间</p>
                     * 
                     */
                    std::string GetScannedAt() const;

                    /**
                     * 设置<p>扫描完成时间</p>
                     * @param _scannedAt <p>扫描完成时间</p>
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
                     * 获取<p>任务创建时间</p>
                     * @return CreatedAt <p>任务创建时间</p>
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置<p>任务创建时间</p>
                     * @param _createdAt <p>任务创建时间</p>
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
                     * 获取<p>失败时间</p>
                     * @return FailedAt <p>失败时间</p>
                     * 
                     */
                    std::string GetFailedAt() const;

                    /**
                     * 设置<p>失败时间</p>
                     * @param _failedAt <p>失败时间</p>
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
                     * 获取<p>失败原因描述</p>
                     * @return Message <p>失败原因描述</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>失败原因描述</p>
                     * @param _message <p>失败原因描述</p>
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
                     * <p>检测状态：success（检测完成，有结果）、scanning（检测进行中）、not_found（无记录）、failed（检测失败）</p><p>枚举值：</p><ul><li>success： 检测完成，有结果</li><li>scanning： 检测进行中</li><li>not_found： 无记录</li><li>failed： 检测失败</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Skill 名称，用于页面展示、结果列表呈现和人工研判</p>
                     */
                    std::string m_skillName;
                    bool m_skillNameHasBeenSet;

                    /**
                     * <p>Skill 描述，通常来自 Skill 元数据或说明信息，用于帮助调用方理解 Skill 的用途</p>
                     */
                    std::string m_skillDescription;
                    bool m_skillDescriptionHasBeenSet;

                    /**
                     * <p>ZIP 文件的 SHA256 哈希值，格式为 sha256:hex_digest</p>
                     */
                    std::string m_contentHash;
                    bool m_contentHashHasBeenSet;

                    /**
                     * <p>风险等级：malicious（恶意）、suspicious（可疑）、benign（可信）</p>
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>综合处置建议字段，位于 data 顶层，用于给出本次检测结果的总体修复、缓解或人工处置建议</p>
                     */
                    std::string m_mitigation;
                    bool m_mitigationHasBeenSet;

                    /**
                     * <p>安全评分（0-100，100 为最安全）</p><p>取值范围：[0, 100]</p>
                     */
                    uint64_t m_securityScore;
                    bool m_securityScoreHasBeenSet;

                    /**
                     * <p>本次扫描使用的引擎版本号</p>
                     */
                    uint64_t m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * <p>Skill 的能力标签列表，对外固定返回格式为 [{id,name}]。该字段用于描述 Skill 具备的能力特征或适用场景，便于调用方做检索、展示或分类；不等同于风险标签，也不表示风险高低或命中规则结果。当 lang=en 时，仅 name 会切换为英文，id 保持不变</p>
                     */
                    std::vector<SkillScanCapabilityTag> m_capabilityTags;
                    bool m_capabilityTagsHasBeenSet;

                    /**
                     * <p>融合规则目录全集，key 为融合 rule_id（9xxxx），value 为风险类别名称；包含所有融合规则类别，调用方可据此展示分类标签，无需本地维护映射表。传 lang=en 时返回英文名称。该对象是名称映射表，不表达主标签优先级</p>
                     */
                    std::vector<SkillRuleCatalogItem> m_ruleCatalog;
                    bool m_ruleCatalogHasBeenSet;

                    /**
                     * <p>扫描结果详情，按子引擎分组，每个元素包含 scan_type（引擎类型）和 rule_list（命中的规则列表）；规则中的 rule_id 使用融合编码（9xxxx），可与 rule_catalog 交叉引用。传 lang=en 时，description 返回英文文本</p>
                     */
                    std::vector<SkillScanItem> m_scanItems;
                    bool m_scanItemsHasBeenSet;

                    /**
                     * <p>综合安全审计报告地址。调用方可通过 report_url_expire_hours 指定有效期，不传时默认返回 1 年有效期地址</p>
                     */
                    std::string m_reportUrl;
                    bool m_reportUrlHasBeenSet;

                    /**
                     * <p>扫描完成时间</p>
                     */
                    std::string m_scannedAt;
                    bool m_scannedAtHasBeenSet;

                    /**
                     * <p>任务创建时间</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>失败时间</p>
                     */
                    std::string m_failedAt;
                    bool m_failedAtHasBeenSet;

                    /**
                     * <p>失败原因描述</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_SKILLSCANQUERYDATA_H_
