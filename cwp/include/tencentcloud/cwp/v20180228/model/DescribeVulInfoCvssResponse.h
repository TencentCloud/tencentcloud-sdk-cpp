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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULINFOCVSSRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULINFOCVSSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeVulInfoCvss返回参数结构体
                */
                class DescribeVulInfoCvssResponse : public AbstractModel
                {
                public:
                    DescribeVulInfoCvssResponse();
                    ~DescribeVulInfoCvssResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取漏洞id
                     * @return VulId 漏洞id
                     * 
                     */
                    uint64_t GetVulId() const;

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取漏洞名称
                     * @return VulName 漏洞名称
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     * 
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取危害等级：1-低危；2-中危；3-高危；4-严重
                     * @return VulLevel 危害等级：1-低危；2-中危；3-高危；4-严重
                     * 
                     */
                    uint64_t GetVulLevel() const;

                    /**
                     * 判断参数 VulLevel 是否已赋值
                     * @return VulLevel 是否已赋值
                     * 
                     */
                    bool VulLevelHasBeenSet() const;

                    /**
                     * 获取漏洞分类 1: web-cms漏洞 2:应用漏洞  4: Linux软件漏洞 5: Windows系统漏洞
                     * @return VulType 漏洞分类 1: web-cms漏洞 2:应用漏洞  4: Linux软件漏洞 5: Windows系统漏洞
                     * 
                     */
                    uint64_t GetVulType() const;

                    /**
                     * 判断参数 VulType 是否已赋值
                     * @return VulType 是否已赋值
                     * 
                     */
                    bool VulTypeHasBeenSet() const;

                    /**
                     * 获取漏洞描述信息
                     * @return Description 漏洞描述信息
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取修复方案
                     * @return RepairPlan 修复方案
                     * 
                     */
                    std::string GetRepairPlan() const;

                    /**
                     * 判断参数 RepairPlan 是否已赋值
                     * @return RepairPlan 是否已赋值
                     * 
                     */
                    bool RepairPlanHasBeenSet() const;

                    /**
                     * 获取漏洞CVEID
                     * @return CveId 漏洞CVEID
                     * 
                     */
                    std::string GetCveId() const;

                    /**
                     * 判断参数 CveId 是否已赋值
                     * @return CveId 是否已赋值
                     * 
                     */
                    bool CveIdHasBeenSet() const;

                    /**
                     * 获取参考链接
                     * @return Reference 参考链接
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
                     * 获取CVSS信息
                     * @return CVSS CVSS信息
                     * 
                     */
                    std::string GetCVSS() const;

                    /**
                     * 判断参数 CVSS 是否已赋值
                     * @return CVSS 是否已赋值
                     * 
                     */
                    bool CVSSHasBeenSet() const;

                    /**
                     * 获取发布时间
                     * @return PublicDate 发布时间
                     * 
                     */
                    std::string GetPublicDate() const;

                    /**
                     * 判断参数 PublicDate 是否已赋值
                     * @return PublicDate 是否已赋值
                     * 
                     */
                    bool PublicDateHasBeenSet() const;

                    /**
                     * 获取Cvss分数
                     * @return CvssScore Cvss分数
                     * 
                     */
                    uint64_t GetCvssScore() const;

                    /**
                     * 判断参数 CvssScore 是否已赋值
                     * @return CvssScore 是否已赋值
                     * 
                     */
                    bool CvssScoreHasBeenSet() const;

                    /**
                     * 获取cvss详情
                     * @return CveInfo cvss详情
                     * 
                     */
                    std::string GetCveInfo() const;

                    /**
                     * 判断参数 CveInfo 是否已赋值
                     * @return CveInfo 是否已赋值
                     * 
                     */
                    bool CveInfoHasBeenSet() const;

                    /**
                     * 获取cvss 分数 浮点型
                     * @return CvssScoreFloat cvss 分数 浮点型
                     * 
                     */
                    double GetCvssScoreFloat() const;

                    /**
                     * 判断参数 CvssScoreFloat 是否已赋值
                     * @return CvssScoreFloat 是否已赋值
                     * 
                     */
                    bool CvssScoreFloatHasBeenSet() const;

                    /**
                     * 获取漏洞标签 多个逗号分割
                     * @return Labels 漏洞标签 多个逗号分割
                     * 
                     */
                    std::string GetLabels() const;

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取已防御的攻击次数
                     * @return DefenseAttackCount 已防御的攻击次数
                     * 
                     */
                    uint64_t GetDefenseAttackCount() const;

                    /**
                     * 判断参数 DefenseAttackCount 是否已赋值
                     * @return DefenseAttackCount 是否已赋值
                     * 
                     */
                    bool DefenseAttackCountHasBeenSet() const;

                    /**
                     * 获取全网修复成功次数, 不支持自动修复的漏洞默认返回0
                     * @return SuccessFixCount 全网修复成功次数, 不支持自动修复的漏洞默认返回0
                     * 
                     */
                    uint64_t GetSuccessFixCount() const;

                    /**
                     * 判断参数 SuccessFixCount 是否已赋值
                     * @return SuccessFixCount 是否已赋值
                     * 
                     */
                    bool SuccessFixCountHasBeenSet() const;

                    /**
                     * 获取修复是否支持：0-windows/linux均不支持修复 ;1-windows/linux 均支持修复 ;2-仅linux支持修复;3-仅windows支持修复
                     * @return FixSwitch 修复是否支持：0-windows/linux均不支持修复 ;1-windows/linux 均支持修复 ;2-仅linux支持修复;3-仅windows支持修复
                     * 
                     */
                    int64_t GetFixSwitch() const;

                    /**
                     * 判断参数 FixSwitch 是否已赋值
                     * @return FixSwitch 是否已赋值
                     * 
                     */
                    bool FixSwitchHasBeenSet() const;

                private:

                    /**
                     * 漏洞id
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * 漏洞名称
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * 危害等级：1-低危；2-中危；3-高危；4-严重
                     */
                    uint64_t m_vulLevel;
                    bool m_vulLevelHasBeenSet;

                    /**
                     * 漏洞分类 1: web-cms漏洞 2:应用漏洞  4: Linux软件漏洞 5: Windows系统漏洞
                     */
                    uint64_t m_vulType;
                    bool m_vulTypeHasBeenSet;

                    /**
                     * 漏洞描述信息
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 修复方案
                     */
                    std::string m_repairPlan;
                    bool m_repairPlanHasBeenSet;

                    /**
                     * 漏洞CVEID
                     */
                    std::string m_cveId;
                    bool m_cveIdHasBeenSet;

                    /**
                     * 参考链接
                     */
                    std::string m_reference;
                    bool m_referenceHasBeenSet;

                    /**
                     * CVSS信息
                     */
                    std::string m_cVSS;
                    bool m_cVSSHasBeenSet;

                    /**
                     * 发布时间
                     */
                    std::string m_publicDate;
                    bool m_publicDateHasBeenSet;

                    /**
                     * Cvss分数
                     */
                    uint64_t m_cvssScore;
                    bool m_cvssScoreHasBeenSet;

                    /**
                     * cvss详情
                     */
                    std::string m_cveInfo;
                    bool m_cveInfoHasBeenSet;

                    /**
                     * cvss 分数 浮点型
                     */
                    double m_cvssScoreFloat;
                    bool m_cvssScoreFloatHasBeenSet;

                    /**
                     * 漏洞标签 多个逗号分割
                     */
                    std::string m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * 已防御的攻击次数
                     */
                    uint64_t m_defenseAttackCount;
                    bool m_defenseAttackCountHasBeenSet;

                    /**
                     * 全网修复成功次数, 不支持自动修复的漏洞默认返回0
                     */
                    uint64_t m_successFixCount;
                    bool m_successFixCountHasBeenSet;

                    /**
                     * 修复是否支持：0-windows/linux均不支持修复 ;1-windows/linux 均支持修复 ;2-仅linux支持修复;3-仅windows支持修复
                     */
                    int64_t m_fixSwitch;
                    bool m_fixSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULINFOCVSSRESPONSE_H_
