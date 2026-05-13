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
                     * 获取Skill 名称
                     * @return SkillName Skill 名称
                     * 
                     */
                    std::string GetSkillName() const;

                    /**
                     * 设置Skill 名称
                     * @param _skillName Skill 名称
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
                     * 获取Skill 描述，帮助理解 Skill 的主要用途
                     * @return SkillDescription Skill 描述，帮助理解 Skill 的主要用途
                     * 
                     */
                    std::string GetSkillDescription() const;

                    /**
                     * 设置Skill 描述，帮助理解 Skill 的主要用途
                     * @param _skillDescription Skill 描述，帮助理解 Skill 的主要用途
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
                     * 获取ZIP 文件的 SHA256 Hash
参数格式：sha256:<64位hex>
                     * @return ContentHash ZIP 文件的 SHA256 Hash
参数格式：sha256:<64位hex>
                     * 
                     */
                    std::string GetContentHash() const;

                    /**
                     * 设置ZIP 文件的 SHA256 Hash
参数格式：sha256:<64位hex>
                     * @param _contentHash ZIP 文件的 SHA256 Hash
参数格式：sha256:<64位hex>
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
                     * 获取原始上传 ZIP 文件解压后的实际文件数，也是计费的范围，扫描成功后1个文件计为1次额度
                     * @return UploadFileCount 原始上传 ZIP 文件解压后的实际文件数，也是计费的范围，扫描成功后1个文件计为1次额度
                     * 
                     */
                    int64_t GetUploadFileCount() const;

                    /**
                     * 设置原始上传 ZIP 文件解压后的实际文件数，也是计费的范围，扫描成功后1个文件计为1次额度
                     * @param _uploadFileCount 原始上传 ZIP 文件解压后的实际文件数，也是计费的范围，扫描成功后1个文件计为1次额度
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
                     * 获取综合风险等级
枚举值：
malicious：恶意
suspicious：可疑
benign：可信
                     * @return RiskLevel 综合风险等级
枚举值：
malicious：恶意
suspicious：可疑
benign：可信
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置综合风险等级
枚举值：
malicious：恶意
suspicious：可疑
benign：可信
                     * @param _riskLevel 综合风险等级
枚举值：
malicious：恶意
suspicious：可疑
benign：可信
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
                     * 获取风险主标签融合规则 ID（9xxxx），由服务端从命中的融合风险标签中生成；benign 且无规则命中时为空。展示名称可通过 RuleCatalog 获取
                     * @return PrimaryRuleID 风险主标签融合规则 ID（9xxxx），由服务端从命中的融合风险标签中生成；benign 且无规则命中时为空。展示名称可通过 RuleCatalog 获取
                     * 
                     */
                    std::string GetPrimaryRuleID() const;

                    /**
                     * 设置风险主标签融合规则 ID（9xxxx），由服务端从命中的融合风险标签中生成；benign 且无规则命中时为空。展示名称可通过 RuleCatalog 获取
                     * @param _primaryRuleID 风险主标签融合规则 ID（9xxxx），由服务端从命中的融合风险标签中生成；benign 且无规则命中时为空。展示名称可通过 RuleCatalog 获取
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
                     * 获取综合处置建议，用于指导调用方优先执行下线、隔离、修复、复检等动作。历史结果中可能为空。传 Language=en-US 时返回英文文案
                     * @return Mitigation 综合处置建议，用于指导调用方优先执行下线、隔离、修复、复检等动作。历史结果中可能为空。传 Language=en-US 时返回英文文案
                     * 
                     */
                    std::string GetMitigation() const;

                    /**
                     * 设置综合处置建议，用于指导调用方优先执行下线、隔离、修复、复检等动作。历史结果中可能为空。传 Language=en-US 时返回英文文案
                     * @param _mitigation 综合处置建议，用于指导调用方优先执行下线、隔离、修复、复检等动作。历史结果中可能为空。传 Language=en-US 时返回英文文案
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
                     * 获取风险综合描述，对本次检测发现的风险进行概括性说明。传 Language=en-US 时返回英文文案
                     * @return RiskDescription 风险综合描述，对本次检测发现的风险进行概括性说明。传 Language=en-US 时返回英文文案
                     * 
                     */
                    std::string GetRiskDescription() const;

                    /**
                     * 设置风险综合描述，对本次检测发现的风险进行概括性说明。传 Language=en-US 时返回英文文案
                     * @param _riskDescription 风险综合描述，对本次检测发现的风险进行概括性说明。传 Language=en-US 时返回英文文案
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
                     * 获取安全评分
取值范围：[0, 100]
补充说明：100 为最安全
                     * @return SecurityScore 安全评分
取值范围：[0, 100]
补充说明：100 为最安全
                     * 
                     */
                    int64_t GetSecurityScore() const;

                    /**
                     * 设置安全评分
取值范围：[0, 100]
补充说明：100 为最安全
                     * @param _securityScore 安全评分
取值范围：[0, 100]
补充说明：100 为最安全
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
                     * 获取本次扫描使用的引擎版本号
                     * @return EngineVersion 本次扫描使用的引擎版本号
                     * 
                     */
                    int64_t GetEngineVersion() const;

                    /**
                     * 设置本次扫描使用的引擎版本号
                     * @param _engineVersion 本次扫描使用的引擎版本号
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
                     * 获取Skill 能力标签列表，描述 Skill 具备的能力特征或适用场景。不等同于风险标签，也不参与风险等级判定。传 Language=en-US 时 Name 切换为英文，ID 保持不变
                     * @return CapabilityTags Skill 能力标签列表，描述 Skill 具备的能力特征或适用场景。不等同于风险标签，也不参与风险等级判定。传 Language=en-US 时 Name 切换为英文，ID 保持不变
                     * 
                     */
                    std::vector<SkillCapabilityTag> GetCapabilityTags() const;

                    /**
                     * 设置Skill 能力标签列表，描述 Skill 具备的能力特征或适用场景。不等同于风险标签，也不参与风险等级判定。传 Language=en-US 时 Name 切换为英文，ID 保持不变
                     * @param _capabilityTags Skill 能力标签列表，描述 Skill 具备的能力特征或适用场景。不等同于风险标签，也不参与风险等级判定。传 Language=en-US 时 Name 切换为英文，ID 保持不变
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
                     * 获取融合规则目录全集，包含所有融合规则类别（9xxxx），调用方可据此展示分类标签，无需本地维护映射表。传 Language=en-US 时返回英文名称
                     * @return RuleCatalog 融合规则目录全集，包含所有融合规则类别（9xxxx），调用方可据此展示分类标签，无需本地维护映射表。传 Language=en-US 时返回英文名称
                     * 
                     */
                    std::vector<SkillRuleCatalogItem> GetRuleCatalog() const;

                    /**
                     * 设置融合规则目录全集，包含所有融合规则类别（9xxxx），调用方可据此展示分类标签，无需本地维护映射表。传 Language=en-US 时返回英文名称
                     * @param _ruleCatalog 融合规则目录全集，包含所有融合规则类别（9xxxx），调用方可据此展示分类标签，无需本地维护映射表。传 Language=en-US 时返回英文名称
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
                     * 获取扫描结果详情，按子引擎分组。每个元素包含 ScanType（引擎类型）和 RuleList（命中规则列表）。规则中的 RuleID 使用融合编码（9xxxx），可与 RuleCatalog 交叉引用。传 Language=en-US 时 Description 返回英文文本
                     * @return ScanItems 扫描结果详情，按子引擎分组。每个元素包含 ScanType（引擎类型）和 RuleList（命中规则列表）。规则中的 RuleID 使用融合编码（9xxxx），可与 RuleCatalog 交叉引用。传 Language=en-US 时 Description 返回英文文本
                     * 
                     */
                    std::vector<SkillScanEngineResult> GetScanItems() const;

                    /**
                     * 设置扫描结果详情，按子引擎分组。每个元素包含 ScanType（引擎类型）和 RuleList（命中规则列表）。规则中的 RuleID 使用融合编码（9xxxx），可与 RuleCatalog 交叉引用。传 Language=en-US 时 Description 返回英文文本
                     * @param _scanItems 扫描结果详情，按子引擎分组。每个元素包含 ScanType（引擎类型）和 RuleList（命中规则列表）。规则中的 RuleID 使用融合编码（9xxxx），可与 RuleCatalog 交叉引用。传 Language=en-US 时 Description 返回英文文本
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
                     * 获取综合安全审计报告地址（签名 URL）。有效期由请求参数 ReportURLExpireHours 控制
                     * @return ReportURL 综合安全审计报告地址（签名 URL）。有效期由请求参数 ReportURLExpireHours 控制
                     * 
                     */
                    std::string GetReportURL() const;

                    /**
                     * 设置综合安全审计报告地址（签名 URL）。有效期由请求参数 ReportURLExpireHours 控制
                     * @param _reportURL 综合安全审计报告地址（签名 URL）。有效期由请求参数 ReportURLExpireHours 控制
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
                     * 获取扫描完成时间。仅 Status=SUCCESS 时有值
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * @return ScannedAt 扫描完成时间。仅 Status=SUCCESS 时有值
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * 
                     */
                    std::string GetScannedAt() const;

                    /**
                     * 设置扫描完成时间。仅 Status=SUCCESS 时有值
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * @param _scannedAt 扫描完成时间。仅 Status=SUCCESS 时有值
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
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
                     * 获取任务创建时间。仅 Status=SCANNING 时有值
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * @return CreatedAt 任务创建时间。仅 Status=SCANNING 时有值
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置任务创建时间。仅 Status=SCANNING 时有值
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * @param _createdAt 任务创建时间。仅 Status=SCANNING 时有值
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
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
                     * 获取失败时间。仅 Status=FAILED 时有值
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * @return FailedAt 失败时间。仅 Status=FAILED 时有值
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * 
                     */
                    std::string GetFailedAt() const;

                    /**
                     * 设置失败时间。仅 Status=FAILED 时有值
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * @param _failedAt 失败时间。仅 Status=FAILED 时有值
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
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
                     * 获取失败原因描述。仅 Status=FAILED 时有值
                     * @return Message 失败原因描述。仅 Status=FAILED 时有值
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置失败原因描述。仅 Status=FAILED 时有值
                     * @param _message 失败原因描述。仅 Status=FAILED 时有值
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
                     * Skill 名称
                     */
                    std::string m_skillName;
                    bool m_skillNameHasBeenSet;

                    /**
                     * Skill 描述，帮助理解 Skill 的主要用途
                     */
                    std::string m_skillDescription;
                    bool m_skillDescriptionHasBeenSet;

                    /**
                     * ZIP 文件的 SHA256 Hash
参数格式：sha256:<64位hex>
                     */
                    std::string m_contentHash;
                    bool m_contentHashHasBeenSet;

                    /**
                     * 原始上传 ZIP 文件解压后的实际文件数，也是计费的范围，扫描成功后1个文件计为1次额度
                     */
                    int64_t m_uploadFileCount;
                    bool m_uploadFileCountHasBeenSet;

                    /**
                     * 综合风险等级
枚举值：
malicious：恶意
suspicious：可疑
benign：可信
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 风险主标签融合规则 ID（9xxxx），由服务端从命中的融合风险标签中生成；benign 且无规则命中时为空。展示名称可通过 RuleCatalog 获取
                     */
                    std::string m_primaryRuleID;
                    bool m_primaryRuleIDHasBeenSet;

                    /**
                     * 综合处置建议，用于指导调用方优先执行下线、隔离、修复、复检等动作。历史结果中可能为空。传 Language=en-US 时返回英文文案
                     */
                    std::string m_mitigation;
                    bool m_mitigationHasBeenSet;

                    /**
                     * 风险综合描述，对本次检测发现的风险进行概括性说明。传 Language=en-US 时返回英文文案
                     */
                    std::string m_riskDescription;
                    bool m_riskDescriptionHasBeenSet;

                    /**
                     * 安全评分
取值范围：[0, 100]
补充说明：100 为最安全
                     */
                    int64_t m_securityScore;
                    bool m_securityScoreHasBeenSet;

                    /**
                     * 本次扫描使用的引擎版本号
                     */
                    int64_t m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * Skill 能力标签列表，描述 Skill 具备的能力特征或适用场景。不等同于风险标签，也不参与风险等级判定。传 Language=en-US 时 Name 切换为英文，ID 保持不变
                     */
                    std::vector<SkillCapabilityTag> m_capabilityTags;
                    bool m_capabilityTagsHasBeenSet;

                    /**
                     * 融合规则目录全集，包含所有融合规则类别（9xxxx），调用方可据此展示分类标签，无需本地维护映射表。传 Language=en-US 时返回英文名称
                     */
                    std::vector<SkillRuleCatalogItem> m_ruleCatalog;
                    bool m_ruleCatalogHasBeenSet;

                    /**
                     * 扫描结果详情，按子引擎分组。每个元素包含 ScanType（引擎类型）和 RuleList（命中规则列表）。规则中的 RuleID 使用融合编码（9xxxx），可与 RuleCatalog 交叉引用。传 Language=en-US 时 Description 返回英文文本
                     */
                    std::vector<SkillScanEngineResult> m_scanItems;
                    bool m_scanItemsHasBeenSet;

                    /**
                     * 综合安全审计报告地址（签名 URL）。有效期由请求参数 ReportURLExpireHours 控制
                     */
                    std::string m_reportURL;
                    bool m_reportURLHasBeenSet;

                    /**
                     * 扫描完成时间。仅 Status=SUCCESS 时有值
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     */
                    std::string m_scannedAt;
                    bool m_scannedAtHasBeenSet;

                    /**
                     * 任务创建时间。仅 Status=SCANNING 时有值
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 失败时间。仅 Status=FAILED 时有值
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     */
                    std::string m_failedAt;
                    bool m_failedAtHasBeenSet;

                    /**
                     * 失败原因描述。仅 Status=FAILED 时有值
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SKILLSCANITEM_H_
