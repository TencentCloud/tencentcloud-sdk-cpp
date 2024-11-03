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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULRISKADVANCECFGLIST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULRISKADVANCECFGLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ServiceSupport.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 漏洞风险高级配置列表
                */
                class VULRiskAdvanceCFGList : public AbstractModel
                {
                public:
                    VULRiskAdvanceCFGList();
                    ~VULRiskAdvanceCFGList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取漏洞名称
                     * @return VULName 漏洞名称
                     * 
                     */
                    std::string GetVULName() const;

                    /**
                     * 设置漏洞名称
                     * @param _vULName 漏洞名称
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
                     * 获取风险等级，low-低危，high-高危，middle-中危，info-提示，extreme-严重。
                     * @return RiskLevel 风险等级，low-低危，high-高危，middle-中危，info-提示，extreme-严重。
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置风险等级，low-低危，high-高危，middle-中危，info-提示，extreme-严重。
                     * @param _riskLevel 风险等级，low-低危，high-高危，middle-中危，info-提示，extreme-严重。
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
                     * 获取识别来源
                     * @return CheckFrom 识别来源
                     * 
                     */
                    std::string GetCheckFrom() const;

                    /**
                     * 设置识别来源
                     * @param _checkFrom 识别来源
                     * 
                     */
                    void SetCheckFrom(const std::string& _checkFrom);

                    /**
                     * 判断参数 CheckFrom 是否已赋值
                     * @return CheckFrom 是否已赋值
                     * 
                     */
                    bool CheckFromHasBeenSet() const;

                    /**
                     * 获取是否启用，1-启用，0-禁用
                     * @return Enable 是否启用，1-启用，0-禁用
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置是否启用，1-启用，0-禁用
                     * @param _enable 是否启用，1-启用，0-禁用
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取风险类型
                     * @return VULType 风险类型
                     * 
                     */
                    std::string GetVULType() const;

                    /**
                     * 设置风险类型
                     * @param _vULType 风险类型
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
                     * 获取影响版本
                     * @return ImpactVersion 影响版本
                     * 
                     */
                    std::string GetImpactVersion() const;

                    /**
                     * 设置影响版本
                     * @param _impactVersion 影响版本
                     * 
                     */
                    void SetImpactVersion(const std::string& _impactVersion);

                    /**
                     * 判断参数 ImpactVersion 是否已赋值
                     * @return ImpactVersion 是否已赋值
                     * 
                     */
                    bool ImpactVersionHasBeenSet() const;

                    /**
                     * 获取CVE
                     * @return CVE CVE
                     * 
                     */
                    std::string GetCVE() const;

                    /**
                     * 设置CVE
                     * @param _cVE CVE
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
                     * 获取漏洞标签
                     * @return VULTag 漏洞标签
                     * 
                     */
                    std::vector<std::string> GetVULTag() const;

                    /**
                     * 设置漏洞标签
                     * @param _vULTag 漏洞标签
                     * 
                     */
                    void SetVULTag(const std::vector<std::string>& _vULTag);

                    /**
                     * 判断参数 VULTag 是否已赋值
                     * @return VULTag 是否已赋值
                     * 
                     */
                    bool VULTagHasBeenSet() const;

                    /**
                     * 获取修复方式
                     * @return FixMethod 修复方式
                     * 
                     */
                    std::vector<std::string> GetFixMethod() const;

                    /**
                     * 设置修复方式
                     * @param _fixMethod 修复方式
                     * 
                     */
                    void SetFixMethod(const std::vector<std::string>& _fixMethod);

                    /**
                     * 判断参数 FixMethod 是否已赋值
                     * @return FixMethod 是否已赋值
                     * 
                     */
                    bool FixMethodHasBeenSet() const;

                    /**
                     * 获取披露时间
                     * @return ReleaseTime 披露时间
                     * 
                     */
                    std::string GetReleaseTime() const;

                    /**
                     * 设置披露时间
                     * @param _releaseTime 披露时间
                     * 
                     */
                    void SetReleaseTime(const std::string& _releaseTime);

                    /**
                     * 判断参数 ReleaseTime 是否已赋值
                     * @return ReleaseTime 是否已赋值
                     * 
                     */
                    bool ReleaseTimeHasBeenSet() const;

                    /**
                     * 获取应急漏洞类型，1-应急漏洞，0-非应急漏洞
                     * @return EMGCVulType 应急漏洞类型，1-应急漏洞，0-非应急漏洞
                     * 
                     */
                    int64_t GetEMGCVulType() const;

                    /**
                     * 设置应急漏洞类型，1-应急漏洞，0-非应急漏洞
                     * @param _eMGCVulType 应急漏洞类型，1-应急漏洞，0-非应急漏洞
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
                     * 获取漏洞描述
                     * @return VULDescribe 漏洞描述
                     * 
                     */
                    std::string GetVULDescribe() const;

                    /**
                     * 设置漏洞描述
                     * @param _vULDescribe 漏洞描述
                     * 
                     */
                    void SetVULDescribe(const std::string& _vULDescribe);

                    /**
                     * 判断参数 VULDescribe 是否已赋值
                     * @return VULDescribe 是否已赋值
                     * 
                     */
                    bool VULDescribeHasBeenSet() const;

                    /**
                     * 获取影响组件
                     * @return ImpactComponent 影响组件
                     * 
                     */
                    std::string GetImpactComponent() const;

                    /**
                     * 设置影响组件
                     * @param _impactComponent 影响组件
                     * 
                     */
                    void SetImpactComponent(const std::string& _impactComponent);

                    /**
                     * 判断参数 ImpactComponent 是否已赋值
                     * @return ImpactComponent 是否已赋值
                     * 
                     */
                    bool ImpactComponentHasBeenSet() const;

                    /**
                     * 获取漏洞Payload
                     * @return Payload 漏洞Payload
                     * 
                     */
                    std::string GetPayload() const;

                    /**
                     * 设置漏洞Payload
                     * @param _payload 漏洞Payload
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
                     * 获取cvss评分
                     * @return CVSS cvss评分
                     * 
                     */
                    std::string GetCVSS() const;

                    /**
                     * 设置cvss评分
                     * @param _cVSS cvss评分
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
                     * 获取攻击热度
                     * @return AttackHeat 攻击热度
                     * 
                     */
                    std::string GetAttackHeat() const;

                    /**
                     * 设置攻击热度
                     * @param _attackHeat 攻击热度
                     * 
                     */
                    void SetAttackHeat(const std::string& _attackHeat);

                    /**
                     * 判断参数 AttackHeat 是否已赋值
                     * @return AttackHeat 是否已赋值
                     * 
                     */
                    bool AttackHeatHasBeenSet() const;

                    /**
                     * 获取安全产品支持情况
                     * @return ServiceSupport 安全产品支持情况
                     * 
                     */
                    std::vector<ServiceSupport> GetServiceSupport() const;

                    /**
                     * 设置安全产品支持情况
                     * @param _serviceSupport 安全产品支持情况
                     * 
                     */
                    void SetServiceSupport(const std::vector<ServiceSupport>& _serviceSupport);

                    /**
                     * 判断参数 ServiceSupport 是否已赋值
                     * @return ServiceSupport 是否已赋值
                     * 
                     */
                    bool ServiceSupportHasBeenSet() const;

                    /**
                     * 获取最新检测时间
                     * @return RecentScanTime 最新检测时间
                     * 
                     */
                    std::string GetRecentScanTime() const;

                    /**
                     * 设置最新检测时间
                     * @param _recentScanTime 最新检测时间
                     * 
                     */
                    void SetRecentScanTime(const std::string& _recentScanTime);

                    /**
                     * 判断参数 RecentScanTime 是否已赋值
                     * @return RecentScanTime 是否已赋值
                     * 
                     */
                    bool RecentScanTimeHasBeenSet() const;

                private:

                    /**
                     * 风险ID
                     */
                    std::string m_riskId;
                    bool m_riskIdHasBeenSet;

                    /**
                     * 漏洞名称
                     */
                    std::string m_vULName;
                    bool m_vULNameHasBeenSet;

                    /**
                     * 风险等级，low-低危，high-高危，middle-中危，info-提示，extreme-严重。
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 识别来源
                     */
                    std::string m_checkFrom;
                    bool m_checkFromHasBeenSet;

                    /**
                     * 是否启用，1-启用，0-禁用
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 风险类型
                     */
                    std::string m_vULType;
                    bool m_vULTypeHasBeenSet;

                    /**
                     * 影响版本
                     */
                    std::string m_impactVersion;
                    bool m_impactVersionHasBeenSet;

                    /**
                     * CVE
                     */
                    std::string m_cVE;
                    bool m_cVEHasBeenSet;

                    /**
                     * 漏洞标签
                     */
                    std::vector<std::string> m_vULTag;
                    bool m_vULTagHasBeenSet;

                    /**
                     * 修复方式
                     */
                    std::vector<std::string> m_fixMethod;
                    bool m_fixMethodHasBeenSet;

                    /**
                     * 披露时间
                     */
                    std::string m_releaseTime;
                    bool m_releaseTimeHasBeenSet;

                    /**
                     * 应急漏洞类型，1-应急漏洞，0-非应急漏洞
                     */
                    int64_t m_eMGCVulType;
                    bool m_eMGCVulTypeHasBeenSet;

                    /**
                     * 漏洞描述
                     */
                    std::string m_vULDescribe;
                    bool m_vULDescribeHasBeenSet;

                    /**
                     * 影响组件
                     */
                    std::string m_impactComponent;
                    bool m_impactComponentHasBeenSet;

                    /**
                     * 漏洞Payload
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

                    /**
                     * 技术参考
                     */
                    std::string m_references;
                    bool m_referencesHasBeenSet;

                    /**
                     * cvss评分
                     */
                    std::string m_cVSS;
                    bool m_cVSSHasBeenSet;

                    /**
                     * 攻击热度
                     */
                    std::string m_attackHeat;
                    bool m_attackHeatHasBeenSet;

                    /**
                     * 安全产品支持情况
                     */
                    std::vector<ServiceSupport> m_serviceSupport;
                    bool m_serviceSupportHasBeenSet;

                    /**
                     * 最新检测时间
                     */
                    std::string m_recentScanTime;
                    bool m_recentScanTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULRISKADVANCECFGLIST_H_
