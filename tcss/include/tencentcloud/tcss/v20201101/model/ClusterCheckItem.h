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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERCHECKITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERCHECKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 表示一条集群安全检测项的详细信息
                */
                class ClusterCheckItem : public AbstractModel
                {
                public:
                    ClusterCheckItem();
                    ~ClusterCheckItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取唯一的检测项的ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckItemId 唯一的检测项的ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCheckItemId() const;

                    /**
                     * 设置唯一的检测项的ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _checkItemId 唯一的检测项的ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCheckItemId(const int64_t& _checkItemId);

                    /**
                     * 判断参数 CheckItemId 是否已赋值
                     * @return CheckItemId 是否已赋值
                     * 
                     */
                    bool CheckItemIdHasBeenSet() const;

                    /**
                     * 获取风险项的名称
                     * @return Name 风险项的名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置风险项的名称
                     * @param _name 风险项的名称
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
                     * 获取检测项详细描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ItemDetail 检测项详细描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetItemDetail() const;

                    /**
                     * 设置检测项详细描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _itemDetail 检测项详细描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItemDetail(const std::string& _itemDetail);

                    /**
                     * 判断参数 ItemDetail 是否已赋值
                     * @return ItemDetail 是否已赋值
                     * 
                     */
                    bool ItemDetailHasBeenSet() const;

                    /**
                     * 获取威胁等级。严重Serious,高危High,中危Middle,提示Hint
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskLevel 威胁等级。严重Serious,高危High,中危Middle,提示Hint
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置威胁等级。严重Serious,高危High,中危Middle,提示Hint
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _riskLevel 威胁等级。严重Serious,高危High,中危Middle,提示Hint
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取检查对象、风险对象.Runc,Kubelet,Containerd,Pods
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskTarget 检查对象、风险对象.Runc,Kubelet,Containerd,Pods
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRiskTarget() const;

                    /**
                     * 设置检查对象、风险对象.Runc,Kubelet,Containerd,Pods
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _riskTarget 检查对象、风险对象.Runc,Kubelet,Containerd,Pods
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRiskTarget(const std::string& _riskTarget);

                    /**
                     * 判断参数 RiskTarget 是否已赋值
                     * @return RiskTarget 是否已赋值
                     * 
                     */
                    bool RiskTargetHasBeenSet() const;

                    /**
                     * 获取风险类别,漏洞风险CVERisk,配置风险ConfigRisk
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskType 风险类别,漏洞风险CVERisk,配置风险ConfigRisk
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRiskType() const;

                    /**
                     * 设置风险类别,漏洞风险CVERisk,配置风险ConfigRisk
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _riskType 风险类别,漏洞风险CVERisk,配置风险ConfigRisk
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRiskType(const std::string& _riskType);

                    /**
                     * 判断参数 RiskType 是否已赋值
                     * @return RiskType 是否已赋值
                     * 
                     */
                    bool RiskTypeHasBeenSet() const;

                    /**
                     * 获取检测项所属的风险类型,权限提升:PrivilegePromotion,拒绝服务:RefuseService,目录穿越:DirectoryEscape,未授权访问:UnauthorizedAccess,权限许可和访问控制问题:PrivilegeAndAccessControl,敏感信息泄露:SensitiveInfoLeak
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskAttribute 检测项所属的风险类型,权限提升:PrivilegePromotion,拒绝服务:RefuseService,目录穿越:DirectoryEscape,未授权访问:UnauthorizedAccess,权限许可和访问控制问题:PrivilegeAndAccessControl,敏感信息泄露:SensitiveInfoLeak
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRiskAttribute() const;

                    /**
                     * 设置检测项所属的风险类型,权限提升:PrivilegePromotion,拒绝服务:RefuseService,目录穿越:DirectoryEscape,未授权访问:UnauthorizedAccess,权限许可和访问控制问题:PrivilegeAndAccessControl,敏感信息泄露:SensitiveInfoLeak
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _riskAttribute 检测项所属的风险类型,权限提升:PrivilegePromotion,拒绝服务:RefuseService,目录穿越:DirectoryEscape,未授权访问:UnauthorizedAccess,权限许可和访问控制问题:PrivilegeAndAccessControl,敏感信息泄露:SensitiveInfoLeak
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRiskAttribute(const std::string& _riskAttribute);

                    /**
                     * 判断参数 RiskAttribute 是否已赋值
                     * @return RiskAttribute 是否已赋值
                     * 
                     */
                    bool RiskAttributeHasBeenSet() const;

                    /**
                     * 获取风险特征,Tag.存在EXP:ExistEXP,存在POD:ExistPOC,无需重启:NoNeedReboot, 服务重启:ServerRestart,远程信息泄露:RemoteInfoLeak,远程拒绝服务:RemoteRefuseService,远程利用:RemoteExploit,远程执行:RemoteExecute
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskProperty 风险特征,Tag.存在EXP:ExistEXP,存在POD:ExistPOC,无需重启:NoNeedReboot, 服务重启:ServerRestart,远程信息泄露:RemoteInfoLeak,远程拒绝服务:RemoteRefuseService,远程利用:RemoteExploit,远程执行:RemoteExecute
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRiskProperty() const;

                    /**
                     * 设置风险特征,Tag.存在EXP:ExistEXP,存在POD:ExistPOC,无需重启:NoNeedReboot, 服务重启:ServerRestart,远程信息泄露:RemoteInfoLeak,远程拒绝服务:RemoteRefuseService,远程利用:RemoteExploit,远程执行:RemoteExecute
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _riskProperty 风险特征,Tag.存在EXP:ExistEXP,存在POD:ExistPOC,无需重启:NoNeedReboot, 服务重启:ServerRestart,远程信息泄露:RemoteInfoLeak,远程拒绝服务:RemoteRefuseService,远程利用:RemoteExploit,远程执行:RemoteExecute
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRiskProperty(const std::string& _riskProperty);

                    /**
                     * 判断参数 RiskProperty 是否已赋值
                     * @return RiskProperty 是否已赋值
                     * 
                     */
                    bool RiskPropertyHasBeenSet() const;

                    /**
                     * 获取CVE编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CVENumber CVE编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCVENumber() const;

                    /**
                     * 设置CVE编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cVENumber CVE编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCVENumber(const std::string& _cVENumber);

                    /**
                     * 判断参数 CVENumber 是否已赋值
                     * @return CVENumber 是否已赋值
                     * 
                     */
                    bool CVENumberHasBeenSet() const;

                    /**
                     * 获取披露时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiscoverTime 披露时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDiscoverTime() const;

                    /**
                     * 设置披露时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _discoverTime 披露时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiscoverTime(const std::string& _discoverTime);

                    /**
                     * 判断参数 DiscoverTime 是否已赋值
                     * @return DiscoverTime 是否已赋值
                     * 
                     */
                    bool DiscoverTimeHasBeenSet() const;

                    /**
                     * 获取解决方案
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Solution 解决方案
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSolution() const;

                    /**
                     * 设置解决方案
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _solution 解决方案
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSolution(const std::string& _solution);

                    /**
                     * 判断参数 Solution 是否已赋值
                     * @return Solution 是否已赋值
                     * 
                     */
                    bool SolutionHasBeenSet() const;

                    /**
                     * 获取CVSS信息,用于画图
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CVSS CVSS信息,用于画图
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCVSS() const;

                    /**
                     * 设置CVSS信息,用于画图
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cVSS CVSS信息,用于画图
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCVSS(const std::string& _cVSS);

                    /**
                     * 判断参数 CVSS 是否已赋值
                     * @return CVSS 是否已赋值
                     * 
                     */
                    bool CVSSHasBeenSet() const;

                    /**
                     * 获取CVSS分数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CVSSScore CVSS分数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCVSSScore() const;

                    /**
                     * 设置CVSS分数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cVSSScore CVSS分数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCVSSScore(const std::string& _cVSSScore);

                    /**
                     * 判断参数 CVSSScore 是否已赋值
                     * @return CVSSScore 是否已赋值
                     * 
                     */
                    bool CVSSScoreHasBeenSet() const;

                    /**
                     * 获取参考连接
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelateLink 参考连接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRelateLink() const;

                    /**
                     * 设置参考连接
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _relateLink 参考连接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRelateLink(const std::string& _relateLink);

                    /**
                     * 判断参数 RelateLink 是否已赋值
                     * @return RelateLink 是否已赋值
                     * 
                     */
                    bool RelateLinkHasBeenSet() const;

                    /**
                     * 获取影响类型，为Node或者Workload
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AffectedType 影响类型，为Node或者Workload
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAffectedType() const;

                    /**
                     * 设置影响类型，为Node或者Workload
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _affectedType 影响类型，为Node或者Workload
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAffectedType(const std::string& _affectedType);

                    /**
                     * 判断参数 AffectedType 是否已赋值
                     * @return AffectedType 是否已赋值
                     * 
                     */
                    bool AffectedTypeHasBeenSet() const;

                    /**
                     * 获取受影响的版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AffectedVersion 受影响的版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAffectedVersion() const;

                    /**
                     * 设置受影响的版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _affectedVersion 受影响的版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAffectedVersion(const std::string& _affectedVersion);

                    /**
                     * 判断参数 AffectedVersion 是否已赋值
                     * @return AffectedVersion 是否已赋值
                     * 
                     */
                    bool AffectedVersionHasBeenSet() const;

                    /**
                     * 获取忽略的资产数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IgnoredAssetNum 忽略的资产数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIgnoredAssetNum() const;

                    /**
                     * 设置忽略的资产数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ignoredAssetNum 忽略的资产数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIgnoredAssetNum(const int64_t& _ignoredAssetNum);

                    /**
                     * 判断参数 IgnoredAssetNum 是否已赋值
                     * @return IgnoredAssetNum 是否已赋值
                     * 
                     */
                    bool IgnoredAssetNumHasBeenSet() const;

                    /**
                     * 获取是否忽略该检测项
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsIgnored 是否忽略该检测项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsIgnored() const;

                    /**
                     * 设置是否忽略该检测项
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isIgnored 是否忽略该检测项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsIgnored(const bool& _isIgnored);

                    /**
                     * 判断参数 IsIgnored 是否已赋值
                     * @return IsIgnored 是否已赋值
                     * 
                     */
                    bool IsIgnoredHasBeenSet() const;

                    /**
                     * 获取受影响评估
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskAssessment 受影响评估
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRiskAssessment() const;

                    /**
                     * 设置受影响评估
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _riskAssessment 受影响评估
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRiskAssessment(const std::string& _riskAssessment);

                    /**
                     * 判断参数 RiskAssessment 是否已赋值
                     * @return RiskAssessment 是否已赋值
                     * 
                     */
                    bool RiskAssessmentHasBeenSet() const;

                private:

                    /**
                     * 唯一的检测项的ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_checkItemId;
                    bool m_checkItemIdHasBeenSet;

                    /**
                     * 风险项的名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 检测项详细描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_itemDetail;
                    bool m_itemDetailHasBeenSet;

                    /**
                     * 威胁等级。严重Serious,高危High,中危Middle,提示Hint
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 检查对象、风险对象.Runc,Kubelet,Containerd,Pods
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_riskTarget;
                    bool m_riskTargetHasBeenSet;

                    /**
                     * 风险类别,漏洞风险CVERisk,配置风险ConfigRisk
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_riskType;
                    bool m_riskTypeHasBeenSet;

                    /**
                     * 检测项所属的风险类型,权限提升:PrivilegePromotion,拒绝服务:RefuseService,目录穿越:DirectoryEscape,未授权访问:UnauthorizedAccess,权限许可和访问控制问题:PrivilegeAndAccessControl,敏感信息泄露:SensitiveInfoLeak
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_riskAttribute;
                    bool m_riskAttributeHasBeenSet;

                    /**
                     * 风险特征,Tag.存在EXP:ExistEXP,存在POD:ExistPOC,无需重启:NoNeedReboot, 服务重启:ServerRestart,远程信息泄露:RemoteInfoLeak,远程拒绝服务:RemoteRefuseService,远程利用:RemoteExploit,远程执行:RemoteExecute
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_riskProperty;
                    bool m_riskPropertyHasBeenSet;

                    /**
                     * CVE编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cVENumber;
                    bool m_cVENumberHasBeenSet;

                    /**
                     * 披露时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_discoverTime;
                    bool m_discoverTimeHasBeenSet;

                    /**
                     * 解决方案
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * CVSS信息,用于画图
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cVSS;
                    bool m_cVSSHasBeenSet;

                    /**
                     * CVSS分数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cVSSScore;
                    bool m_cVSSScoreHasBeenSet;

                    /**
                     * 参考连接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_relateLink;
                    bool m_relateLinkHasBeenSet;

                    /**
                     * 影响类型，为Node或者Workload
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_affectedType;
                    bool m_affectedTypeHasBeenSet;

                    /**
                     * 受影响的版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_affectedVersion;
                    bool m_affectedVersionHasBeenSet;

                    /**
                     * 忽略的资产数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ignoredAssetNum;
                    bool m_ignoredAssetNumHasBeenSet;

                    /**
                     * 是否忽略该检测项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isIgnored;
                    bool m_isIgnoredHasBeenSet;

                    /**
                     * 受影响评估
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_riskAssessment;
                    bool m_riskAssessmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERCHECKITEM_H_
