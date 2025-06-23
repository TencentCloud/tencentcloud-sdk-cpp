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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULBASEINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 应急漏洞基本数据
                */
                class VULBaseInfo : public AbstractModel
                {
                public:
                    VULBaseInfo();
                    ~VULBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取风险等级
high 高危/ middle 中危 / low 低危 /info 提示
                     * @return Level 风险等级
high 高危/ middle 中危 / low 低危 /info 提示
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置风险等级
high 高危/ middle 中危 / low 低危 /info 提示
                     * @param _level 风险等级
high 高危/ middle 中危 / low 低危 /info 提示
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取组件
                     * @return Component 组件
                     * 
                     */
                    std::string GetComponent() const;

                    /**
                     * 设置组件
                     * @param _component 组件
                     * 
                     */
                    void SetComponent(const std::string& _component);

                    /**
                     * 判断参数 Component 是否已赋值
                     * @return Component 是否已赋值
                     * 
                     */
                    bool ComponentHasBeenSet() const;

                    /**
                     * 获取漏洞发布时间
                     * @return PublishTime 漏洞发布时间
                     * 
                     */
                    std::string GetPublishTime() const;

                    /**
                     * 设置漏洞发布时间
                     * @param _publishTime 漏洞发布时间
                     * 
                     */
                    void SetPublishTime(const std::string& _publishTime);

                    /**
                     * 判断参数 PublishTime 是否已赋值
                     * @return PublishTime 是否已赋值
                     * 
                     */
                    bool PublishTimeHasBeenSet() const;

                    /**
                     * 获取最近扫描时间
                     * @return LastScanTime 最近扫描时间
                     * 
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置最近扫描时间
                     * @param _lastScanTime 最近扫描时间
                     * 
                     */
                    void SetLastScanTime(const std::string& _lastScanTime);

                    /**
                     * 判断参数 LastScanTime 是否已赋值
                     * @return LastScanTime 是否已赋值
                     * 
                     */
                    bool LastScanTimeHasBeenSet() const;

                    /**
                     * 获取影响资产数量
                     * @return AffectAssetCount 影响资产数量
                     * 
                     */
                    uint64_t GetAffectAssetCount() const;

                    /**
                     * 设置影响资产数量
                     * @param _affectAssetCount 影响资产数量
                     * 
                     */
                    void SetAffectAssetCount(const uint64_t& _affectAssetCount);

                    /**
                     * 判断参数 AffectAssetCount 是否已赋值
                     * @return AffectAssetCount 是否已赋值
                     * 
                     */
                    bool AffectAssetCountHasBeenSet() const;

                    /**
                     * 获取风险ID
                     * @return RiskId 风险ID
                     * 
                     */
                    std::string GetRiskId() const;

                    /**
                     * 设置风险ID
                     * @param _riskId 风险ID
                     * 
                     */
                    void SetRiskId(const std::string& _riskId);

                    /**
                     * 判断参数 RiskId 是否已赋值
                     * @return RiskId 是否已赋值
                     * 
                     */
                    bool RiskIdHasBeenSet() const;

                    /**
                     * 获取漏洞类型
                     * @return VULType 漏洞类型
                     * 
                     */
                    std::string GetVULType() const;

                    /**
                     * 设置漏洞类型
                     * @param _vULType 漏洞类型
                     * 
                     */
                    void SetVULType(const std::string& _vULType);

                    /**
                     * 判断参数 VULType 是否已赋值
                     * @return VULType 是否已赋值
                     * 
                     */
                    bool VULTypeHasBeenSet() const;

                    /**
                     * 获取漏洞名
                     * @return VULName 漏洞名
                     * 
                     */
                    std::string GetVULName() const;

                    /**
                     * 设置漏洞名
                     * @param _vULName 漏洞名
                     * 
                     */
                    void SetVULName(const std::string& _vULName);

                    /**
                     * 判断参数 VULName 是否已赋值
                     * @return VULName 是否已赋值
                     * 
                     */
                    bool VULNameHasBeenSet() const;

                    /**
                     * 获取cve
                     * @return CVE cve
                     * 
                     */
                    std::string GetCVE() const;

                    /**
                     * 设置cve
                     * @param _cVE cve
                     * 
                     */
                    void SetCVE(const std::string& _cVE);

                    /**
                     * 判断参数 CVE 是否已赋值
                     * @return CVE 是否已赋值
                     * 
                     */
                    bool CVEHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Describe 描述
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置描述
                     * @param _describe 描述
                     * 
                     */
                    void SetDescribe(const std::string& _describe);

                    /**
                     * 判断参数 Describe 是否已赋值
                     * @return Describe 是否已赋值
                     * 
                     */
                    bool DescribeHasBeenSet() const;

                    /**
                     * 获取漏洞payload
                     * @return Payload 漏洞payload
                     * 
                     */
                    std::string GetPayload() const;

                    /**
                     * 设置漏洞payload
                     * @param _payload 漏洞payload
                     * 
                     */
                    void SetPayload(const std::string& _payload);

                    /**
                     * 判断参数 Payload 是否已赋值
                     * @return Payload 是否已赋值
                     * 
                     */
                    bool PayloadHasBeenSet() const;

                    /**
                     * 获取漏洞影响组件
                     * @return AppName 漏洞影响组件
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置漏洞影响组件
                     * @param _appName 漏洞影响组件
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取技术参考
                     * @return References 技术参考
                     * 
                     */
                    std::string GetReferences() const;

                    /**
                     * 设置技术参考
                     * @param _references 技术参考
                     * 
                     */
                    void SetReferences(const std::string& _references);

                    /**
                     * 判断参数 References 是否已赋值
                     * @return References 是否已赋值
                     * 
                     */
                    bool ReferencesHasBeenSet() const;

                    /**
                     * 获取漏洞影响版本
                     * @return AppVersion 漏洞影响版本
                     * 
                     */
                    std::string GetAppVersion() const;

                    /**
                     * 设置漏洞影响版本
                     * @param _appVersion 漏洞影响版本
                     * 
                     */
                    void SetAppVersion(const std::string& _appVersion);

                    /**
                     * 判断参数 AppVersion 是否已赋值
                     * @return AppVersion 是否已赋值
                     * 
                     */
                    bool AppVersionHasBeenSet() const;

                    /**
                     * 获取风险点
                     * @return VULURL 风险点
                     * 
                     */
                    std::string GetVULURL() const;

                    /**
                     * 设置风险点
                     * @param _vULURL 风险点
                     * 
                     */
                    void SetVULURL(const std::string& _vULURL);

                    /**
                     * 判断参数 VULURL 是否已赋值
                     * @return VULURL 是否已赋值
                     * 
                     */
                    bool VULURLHasBeenSet() const;

                    /**
                     * 获取用户昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Nick 用户昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNick() const;

                    /**
                     * 设置用户昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nick 用户昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNick(const std::string& _nick);

                    /**
                     * 判断参数 Nick 是否已赋值
                     * @return Nick 是否已赋值
                     * 
                     */
                    bool NickHasBeenSet() const;

                    /**
                     * 获取用户appid
                     * @return AppId 用户appid
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置用户appid
                     * @param _appId 用户appid
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uin 用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uin 用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取修复建议
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Fix 修复建议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFix() const;

                    /**
                     * 设置修复建议
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fix 修复建议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFix(const std::string& _fix);

                    /**
                     * 判断参数 Fix 是否已赋值
                     * @return Fix 是否已赋值
                     * 
                     */
                    bool FixHasBeenSet() const;

                    /**
                     * 获取应急漏洞类型，1-应急漏洞，0-非应急漏洞
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EMGCVulType 应急漏洞类型，1-应急漏洞，0-非应急漏洞
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEMGCVulType() const;

                    /**
                     * 设置应急漏洞类型，1-应急漏洞，0-非应急漏洞
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eMGCVulType 应急漏洞类型，1-应急漏洞，0-非应急漏洞
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEMGCVulType(const int64_t& _eMGCVulType);

                    /**
                     * 判断参数 EMGCVulType 是否已赋值
                     * @return EMGCVulType 是否已赋值
                     * 
                     */
                    bool EMGCVulTypeHasBeenSet() const;

                    /**
                     * 获取CVSS评分
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CVSS CVSS评分
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetCVSS() const;

                    /**
                     * 设置CVSS评分
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cVSS CVSS评分
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCVSS(const double& _cVSS);

                    /**
                     * 判断参数 CVSS 是否已赋值
                     * @return CVSS 是否已赋值
                     * 
                     */
                    bool CVSSHasBeenSet() const;

                    /**
                     * 获取攻击热度
0/1/2/3 
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttackHeat 攻击热度
0/1/2/3 
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAttackHeat() const;

                    /**
                     * 设置攻击热度
0/1/2/3 
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attackHeat 攻击热度
0/1/2/3 
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttackHeat(const int64_t& _attackHeat);

                    /**
                     * 判断参数 AttackHeat 是否已赋值
                     * @return AttackHeat 是否已赋值
                     * 
                     */
                    bool AttackHeatHasBeenSet() const;

                    /**
                     * 获取检测状态 0 未扫描 1扫描中 2 扫描完成
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScanStatus 检测状态 0 未扫描 1扫描中 2 扫描完成
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScanStatus() const;

                    /**
                     * 设置检测状态 0 未扫描 1扫描中 2 扫描完成
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scanStatus 检测状态 0 未扫描 1扫描中 2 扫描完成
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScanStatus(const int64_t& _scanStatus);

                    /**
                     * 判断参数 ScanStatus 是否已赋值
                     * @return ScanStatus 是否已赋值
                     * 
                     */
                    bool ScanStatusHasBeenSet() const;

                    /**
                     * 获取1/0是否必修
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsSuggest 1/0是否必修
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsSuggest() const;

                    /**
                     * 设置1/0是否必修
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isSuggest 1/0是否必修
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsSuggest(const int64_t& _isSuggest);

                    /**
                     * 判断参数 IsSuggest 是否已赋值
                     * @return IsSuggest 是否已赋值
                     * 
                     */
                    bool IsSuggestHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VulTag 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetVulTag() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vulTag 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVulTag(const std::vector<std::string>& _vulTag);

                    /**
                     * 判断参数 VulTag 是否已赋值
                     * @return VulTag 是否已赋值
                     * 
                     */
                    bool VulTagHasBeenSet() const;

                    /**
                     * 获取支持产品 逗号分隔  "cfw_waf_virtual", "cwp_detect", "cwp_defense", "cwp_fix"
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SupportProduct 支持产品 逗号分隔  "cfw_waf_virtual", "cwp_detect", "cwp_defense", "cwp_fix"
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSupportProduct() const;

                    /**
                     * 设置支持产品 逗号分隔  "cfw_waf_virtual", "cwp_detect", "cwp_defense", "cwp_fix"
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _supportProduct 支持产品 逗号分隔  "cfw_waf_virtual", "cwp_detect", "cwp_defense", "cwp_fix"
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSupportProduct(const std::string& _supportProduct);

                    /**
                     * 判断参数 SupportProduct 是否已赋值
                     * @return SupportProduct 是否已赋值
                     * 
                     */
                    bool SupportProductHasBeenSet() const;

                    /**
                     * 获取漏洞检测任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 漏洞检测任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置漏洞检测任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 漏洞检测任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取主键
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Index 主键
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置主键
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _index 主键
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndex(const std::string& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取漏洞id 旧版
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PcmgrID 漏洞id 旧版
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPcmgrID() const;

                    /**
                     * 设置漏洞id 旧版
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pcmgrID 漏洞id 旧版
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPcmgrID(const std::string& _pcmgrID);

                    /**
                     * 判断参数 PcmgrID 是否已赋值
                     * @return PcmgrID 是否已赋值
                     * 
                     */
                    bool PcmgrIDHasBeenSet() const;

                    /**
                     * 获取漏洞id  新版
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TvdID 漏洞id  新版
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTvdID() const;

                    /**
                     * 设置漏洞id  新版
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tvdID 漏洞id  新版
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTvdID(const std::string& _tvdID);

                    /**
                     * 判断参数 TvdID 是否已赋值
                     * @return TvdID 是否已赋值
                     * 
                     */
                    bool TvdIDHasBeenSet() const;

                private:

                    /**
                     * 风险等级
high 高危/ middle 中危 / low 低危 /info 提示
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 组件
                     */
                    std::string m_component;
                    bool m_componentHasBeenSet;

                    /**
                     * 漏洞发布时间
                     */
                    std::string m_publishTime;
                    bool m_publishTimeHasBeenSet;

                    /**
                     * 最近扫描时间
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * 影响资产数量
                     */
                    uint64_t m_affectAssetCount;
                    bool m_affectAssetCountHasBeenSet;

                    /**
                     * 风险ID
                     */
                    std::string m_riskId;
                    bool m_riskIdHasBeenSet;

                    /**
                     * 漏洞类型
                     */
                    std::string m_vULType;
                    bool m_vULTypeHasBeenSet;

                    /**
                     * 漏洞名
                     */
                    std::string m_vULName;
                    bool m_vULNameHasBeenSet;

                    /**
                     * cve
                     */
                    std::string m_cVE;
                    bool m_cVEHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * 漏洞payload
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

                    /**
                     * 漏洞影响组件
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 技术参考
                     */
                    std::string m_references;
                    bool m_referencesHasBeenSet;

                    /**
                     * 漏洞影响版本
                     */
                    std::string m_appVersion;
                    bool m_appVersionHasBeenSet;

                    /**
                     * 风险点
                     */
                    std::string m_vULURL;
                    bool m_vULURLHasBeenSet;

                    /**
                     * 用户昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

                    /**
                     * 用户appid
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 修复建议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fix;
                    bool m_fixHasBeenSet;

                    /**
                     * 应急漏洞类型，1-应急漏洞，0-非应急漏洞
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_eMGCVulType;
                    bool m_eMGCVulTypeHasBeenSet;

                    /**
                     * CVSS评分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_cVSS;
                    bool m_cVSSHasBeenSet;

                    /**
                     * 攻击热度
0/1/2/3 
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_attackHeat;
                    bool m_attackHeatHasBeenSet;

                    /**
                     * 检测状态 0 未扫描 1扫描中 2 扫描完成
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_scanStatus;
                    bool m_scanStatusHasBeenSet;

                    /**
                     * 1/0是否必修
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isSuggest;
                    bool m_isSuggestHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_vulTag;
                    bool m_vulTagHasBeenSet;

                    /**
                     * 支持产品 逗号分隔  "cfw_waf_virtual", "cwp_detect", "cwp_defense", "cwp_fix"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_supportProduct;
                    bool m_supportProductHasBeenSet;

                    /**
                     * 漏洞检测任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 主键
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 漏洞id 旧版
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pcmgrID;
                    bool m_pcmgrIDHasBeenSet;

                    /**
                     * 漏洞id  新版
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tvdID;
                    bool m_tvdIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULBASEINFO_H_
