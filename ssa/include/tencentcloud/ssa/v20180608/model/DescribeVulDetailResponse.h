/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBEVULDETAILRESPONSE_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBEVULDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeVulDetail返回参数结构体
                */
                class DescribeVulDetailResponse : public AbstractModel
                {
                public:
                    DescribeVulDetailResponse();
                    ~DescribeVulDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取漏洞类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VulType 漏洞类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetVulType() const;

                    /**
                     * 判断参数 VulType 是否已赋值
                     * @return VulType 是否已赋值
                     * 
                     */
                    bool VulTypeHasBeenSet() const;

                    /**
                     * 获取漏洞子类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubVulType 漏洞子类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubVulType() const;

                    /**
                     * 判断参数 SubVulType 是否已赋值
                     * @return SubVulType 是否已赋值
                     * 
                     */
                    bool SubVulTypeHasBeenSet() const;

                    /**
                     * 获取cvss分数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CvssScore cvss分数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCvssScore() const;

                    /**
                     * 判断参数 CvssScore 是否已赋值
                     * @return CvssScore 是否已赋值
                     * 
                     */
                    bool CvssScoreHasBeenSet() const;

                    /**
                     * 获取cvss值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cvss cvss值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCvss() const;

                    /**
                     * 判断参数 Cvss 是否已赋值
                     * @return Cvss 是否已赋值
                     * 
                     */
                    bool CvssHasBeenSet() const;

                    /**
                     * 获取cve编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cve cve编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCve() const;

                    /**
                     * 判断参数 Cve 是否已赋值
                     * @return Cve 是否已赋值
                     * 
                     */
                    bool CveHasBeenSet() const;

                    /**
                     * 获取cnvd编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cnvd cnvd编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCnvd() const;

                    /**
                     * 判断参数 Cnvd 是否已赋值
                     * @return Cnvd 是否已赋值
                     * 
                     */
                    bool CnvdHasBeenSet() const;

                    /**
                     * 获取cnnvd编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cnnvd cnnvd编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCnnvd() const;

                    /**
                     * 判断参数 Cnnvd 是否已赋值
                     * @return Cnnvd 是否已赋值
                     * 
                     */
                    bool CnnvdHasBeenSet() const;

                    /**
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Desc 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取参考
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Reference 参考
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReference() const;

                    /**
                     * 判断参数 Reference 是否已赋值
                     * @return Reference 是否已赋值
                     * 
                     */
                    bool ReferenceHasBeenSet() const;

                    /**
                     * 获取修复意见
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Repair 修复意见
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRepair() const;

                    /**
                     * 判断参数 Repair 是否已赋值
                     * @return Repair 是否已赋值
                     * 
                     */
                    bool RepairHasBeenSet() const;

                    /**
                     * 获取披露时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReleaseTime 披露时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReleaseTime() const;

                    /**
                     * 判断参数 ReleaseTime 是否已赋值
                     * @return ReleaseTime 是否已赋值
                     * 
                     */
                    bool ReleaseTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取漏洞名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 漏洞名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Level 等级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取受影响资产唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImpactAsset 受影响资产唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImpactAsset() const;

                    /**
                     * 判断参数 ImpactAsset 是否已赋值
                     * @return ImpactAsset 是否已赋值
                     * 
                     */
                    bool ImpactAssetHasBeenSet() const;

                    /**
                     * 获取受影响资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImpactAssetName 受影响资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImpactAssetName() const;

                    /**
                     * 判断参数 ImpactAssetName 是否已赋值
                     * @return ImpactAssetName 是否已赋值
                     * 
                     */
                    bool ImpactAssetNameHasBeenSet() const;

                    /**
                     * 获取受影响资产是否已删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsAssetDeleted 受影响资产是否已删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsAssetDeleted() const;

                    /**
                     * 判断参数 IsAssetDeleted 是否已赋值
                     * @return IsAssetDeleted 是否已赋值
                     * 
                     */
                    bool IsAssetDeletedHasBeenSet() const;

                    /**
                     * 获取漏洞来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Source 漏洞来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取漏洞URL
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VulUrl 漏洞URL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVulUrl() const;

                    /**
                     * 判断参数 VulUrl 是否已赋值
                     * @return VulUrl 是否已赋值
                     * 
                     */
                    bool VulUrlHasBeenSet() const;

                    /**
                     * 获取资产归属
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SsaAssetCategory 资产归属
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSsaAssetCategory() const;

                    /**
                     * 判断参数 SsaAssetCategory 是否已赋值
                     * @return SsaAssetCategory 是否已赋值
                     * 
                     */
                    bool SsaAssetCategoryHasBeenSet() const;

                    /**
                     * 获取资产文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VulPath 资产文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVulPath() const;

                    /**
                     * 判断参数 VulPath 是否已赋值
                     * @return VulPath 是否已赋值
                     * 
                     */
                    bool VulPathHasBeenSet() const;

                private:

                    /**
                     * 漏洞类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_vulType;
                    bool m_vulTypeHasBeenSet;

                    /**
                     * 漏洞子类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subVulType;
                    bool m_subVulTypeHasBeenSet;

                    /**
                     * cvss分数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cvssScore;
                    bool m_cvssScoreHasBeenSet;

                    /**
                     * cvss值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cvss;
                    bool m_cvssHasBeenSet;

                    /**
                     * cve编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cve;
                    bool m_cveHasBeenSet;

                    /**
                     * cnvd编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cnvd;
                    bool m_cnvdHasBeenSet;

                    /**
                     * cnnvd编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cnnvd;
                    bool m_cnnvdHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 参考
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reference;
                    bool m_referenceHasBeenSet;

                    /**
                     * 修复意见
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_repair;
                    bool m_repairHasBeenSet;

                    /**
                     * 披露时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_releaseTime;
                    bool m_releaseTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 漏洞名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 受影响资产唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_impactAsset;
                    bool m_impactAssetHasBeenSet;

                    /**
                     * 受影响资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_impactAssetName;
                    bool m_impactAssetNameHasBeenSet;

                    /**
                     * 受影响资产是否已删除
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isAssetDeleted;
                    bool m_isAssetDeletedHasBeenSet;

                    /**
                     * 漏洞来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 漏洞URL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vulUrl;
                    bool m_vulUrlHasBeenSet;

                    /**
                     * 资产归属
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ssaAssetCategory;
                    bool m_ssaAssetCategoryHasBeenSet;

                    /**
                     * 资产文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vulPath;
                    bool m_vulPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBEVULDETAILRESPONSE_H_
