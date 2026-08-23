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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEVULBASEINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEVULBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/VulAffectedComponent.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 镜像漏洞信息
                */
                class ImageVulBaseInfo : public AbstractModel
                {
                public:
                    ImageVulBaseInfo();
                    ~ImageVulBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>受影响的组件信息</p>
                     * @return AffectedComponents <p>受影响的组件信息</p>
                     * 
                     */
                    std::vector<VulAffectedComponent> GetAffectedComponents() const;

                    /**
                     * 设置<p>受影响的组件信息</p>
                     * @param _affectedComponents <p>受影响的组件信息</p>
                     * 
                     */
                    void SetAffectedComponents(const std::vector<VulAffectedComponent>& _affectedComponents);

                    /**
                     * 判断参数 AffectedComponents 是否已赋值
                     * @return AffectedComponents 是否已赋值
                     * 
                     */
                    bool AffectedComponentsHasBeenSet() const;

                    /**
                     * 获取<p>漏洞名</p>
                     * @return Name <p>漏洞名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>漏洞名</p>
                     * @param _name <p>漏洞名</p>
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
                     * 获取<p>漏洞CVEID</p>
                     * @return CVEID <p>漏洞CVEID</p>
                     * 
                     */
                    std::string GetCVEID() const;

                    /**
                     * 设置<p>漏洞CVEID</p>
                     * @param _cVEID <p>漏洞CVEID</p>
                     * 
                     */
                    void SetCVEID(const std::string& _cVEID);

                    /**
                     * 判断参数 CVEID 是否已赋值
                     * @return CVEID 是否已赋值
                     * 
                     */
                    bool CVEIDHasBeenSet() const;

                    /**
                     * 获取<p>漏洞类别</p>
                     * @return Category <p>漏洞类别</p>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置<p>漏洞类别</p>
                     * @param _category <p>漏洞类别</p>
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取<p>漏洞发布时间</p>
                     * @return PublishTime <p>漏洞发布时间</p>
                     * 
                     */
                    std::string GetPublishTime() const;

                    /**
                     * 设置<p>漏洞发布时间</p>
                     * @param _publishTime <p>漏洞发布时间</p>
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
                     * 获取<p>漏洞检测方式</p>
                     * @return CheckMethod <p>漏洞检测方式</p>
                     * 
                     */
                    std::string GetCheckMethod() const;

                    /**
                     * 设置<p>漏洞检测方式</p>
                     * @param _checkMethod <p>漏洞检测方式</p>
                     * 
                     */
                    void SetCheckMethod(const std::string& _checkMethod);

                    /**
                     * 判断参数 CheckMethod 是否已赋值
                     * @return CheckMethod 是否已赋值
                     * 
                     */
                    bool CheckMethodHasBeenSet() const;

                    /**
                     * 获取<p>是否支持防御</p><p>枚举值：</p><ul><li>ENABLED： 支持防御</li><li>NOT_ENABLED： 不支持防御</li></ul>
                     * @return DefendStatus <p>是否支持防御</p><p>枚举值：</p><ul><li>ENABLED： 支持防御</li><li>NOT_ENABLED： 不支持防御</li></ul>
                     * 
                     */
                    std::string GetDefendStatus() const;

                    /**
                     * 设置<p>是否支持防御</p><p>枚举值：</p><ul><li>ENABLED： 支持防御</li><li>NOT_ENABLED： 不支持防御</li></ul>
                     * @param _defendStatus <p>是否支持防御</p><p>枚举值：</p><ul><li>ENABLED： 支持防御</li><li>NOT_ENABLED： 不支持防御</li></ul>
                     * 
                     */
                    void SetDefendStatus(const std::string& _defendStatus);

                    /**
                     * 判断参数 DefendStatus 是否已赋值
                     * @return DefendStatus 是否已赋值
                     * 
                     */
                    bool DefendStatusHasBeenSet() const;

                    /**
                     * 获取<p>是否支持修复</p>
                     * @return SupportFix <p>是否支持修复</p>
                     * 
                     */
                    bool GetSupportFix() const;

                    /**
                     * 设置<p>是否支持修复</p>
                     * @param _supportFix <p>是否支持修复</p>
                     * 
                     */
                    void SetSupportFix(const bool& _supportFix);

                    /**
                     * 判断参数 SupportFix 是否已赋值
                     * @return SupportFix 是否已赋值
                     * 
                     */
                    bool SupportFixHasBeenSet() const;

                    /**
                     * 获取<p>CVSS分数</p>
                     * @return CvssScore <p>CVSS分数</p>
                     * 
                     */
                    std::string GetCvssScore() const;

                    /**
                     * 设置<p>CVSS分数</p>
                     * @param _cvssScore <p>CVSS分数</p>
                     * 
                     */
                    void SetCvssScore(const std::string& _cvssScore);

                    /**
                     * 判断参数 CvssScore 是否已赋值
                     * @return CvssScore 是否已赋值
                     * 
                     */
                    bool CvssScoreHasBeenSet() const;

                    /**
                     * 获取<p>漏洞危害描述</p>
                     * @return Remark <p>漏洞危害描述</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>漏洞危害描述</p>
                     * @param _remark <p>漏洞危害描述</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>漏洞描述</p>
                     * @return Summary <p>漏洞描述</p>
                     * 
                     */
                    std::string GetSummary() const;

                    /**
                     * 设置<p>漏洞描述</p>
                     * @param _summary <p>漏洞描述</p>
                     * 
                     */
                    void SetSummary(const std::string& _summary);

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                    /**
                     * 获取<p>危害等级</p>
                     * @return CVSSLevel <p>危害等级</p>
                     * 
                     */
                    std::string GetCVSSLevel() const;

                    /**
                     * 设置<p>危害等级</p>
                     * @param _cVSSLevel <p>危害等级</p>
                     * 
                     */
                    void SetCVSSLevel(const std::string& _cVSSLevel);

                    /**
                     * 判断参数 CVSSLevel 是否已赋值
                     * @return CVSSLevel 是否已赋值
                     * 
                     */
                    bool CVSSLevelHasBeenSet() const;

                    /**
                     * 获取<p>主要影响类型</p>
                     * @return VulAffect <p>主要影响类型</p>
                     * 
                     */
                    std::string GetVulAffect() const;

                    /**
                     * 设置<p>主要影响类型</p>
                     * @param _vulAffect <p>主要影响类型</p>
                     * 
                     */
                    void SetVulAffect(const std::string& _vulAffect);

                    /**
                     * 判断参数 VulAffect 是否已赋值
                     * @return VulAffect 是否已赋值
                     * 
                     */
                    bool VulAffectHasBeenSet() const;

                    /**
                     * 获取<p>是否存在在野利用</p>
                     * @return KVERecord <p>是否存在在野利用</p>
                     * 
                     */
                    bool GetKVERecord() const;

                    /**
                     * 设置<p>是否存在在野利用</p>
                     * @param _kVERecord <p>是否存在在野利用</p>
                     * 
                     */
                    void SetKVERecord(const bool& _kVERecord);

                    /**
                     * 判断参数 KVERecord 是否已赋值
                     * @return KVERecord 是否已赋值
                     * 
                     */
                    bool KVERecordHasBeenSet() const;

                    /**
                     * 获取<p>EPSS 概率分数</p>
                     * @return EPSSScore <p>EPSS 概率分数</p>
                     * 
                     */
                    double GetEPSSScore() const;

                    /**
                     * 设置<p>EPSS 概率分数</p>
                     * @param _ePSSScore <p>EPSS 概率分数</p>
                     * 
                     */
                    void SetEPSSScore(const double& _ePSSScore);

                    /**
                     * 判断参数 EPSSScore 是否已赋值
                     * @return EPSSScore 是否已赋值
                     * 
                     */
                    bool EPSSScoreHasBeenSet() const;

                    /**
                     * 获取<p>影响厂商</p>
                     * @return AffectVendor <p>影响厂商</p>
                     * 
                     */
                    std::string GetAffectVendor() const;

                    /**
                     * 设置<p>影响厂商</p>
                     * @param _affectVendor <p>影响厂商</p>
                     * 
                     */
                    void SetAffectVendor(const std::string& _affectVendor);

                    /**
                     * 判断参数 AffectVendor 是否已赋值
                     * @return AffectVendor 是否已赋值
                     * 
                     */
                    bool AffectVendorHasBeenSet() const;

                    /**
                     * 获取<p>影响目标产品</p>
                     * @return AffectProduct <p>影响目标产品</p>
                     * 
                     */
                    std::string GetAffectProduct() const;

                    /**
                     * 设置<p>影响目标产品</p>
                     * @param _affectProduct <p>影响目标产品</p>
                     * 
                     */
                    void SetAffectProduct(const std::string& _affectProduct);

                    /**
                     * 判断参数 AffectProduct 是否已赋值
                     * @return AffectProduct 是否已赋值
                     * 
                     */
                    bool AffectProductHasBeenSet() const;

                    /**
                     * 获取<p>漏洞原理</p>
                     * @return Mechanism <p>漏洞原理</p>
                     * 
                     */
                    std::string GetMechanism() const;

                    /**
                     * 设置<p>漏洞原理</p>
                     * @param _mechanism <p>漏洞原理</p>
                     * 
                     */
                    void SetMechanism(const std::string& _mechanism);

                    /**
                     * 判断参数 Mechanism 是否已赋值
                     * @return Mechanism 是否已赋值
                     * 
                     */
                    bool MechanismHasBeenSet() const;

                    /**
                     * 获取<p>攻击前提条件</p>
                     * @return Precondition <p>攻击前提条件</p>
                     * 
                     */
                    std::string GetPrecondition() const;

                    /**
                     * 设置<p>攻击前提条件</p>
                     * @param _precondition <p>攻击前提条件</p>
                     * 
                     */
                    void SetPrecondition(const std::string& _precondition);

                    /**
                     * 判断参数 Precondition 是否已赋值
                     * @return Precondition 是否已赋值
                     * 
                     */
                    bool PreconditionHasBeenSet() const;

                    /**
                     * 获取<p>漏洞修复建议</p>
                     * @return FixSolution <p>漏洞修复建议</p>
                     * 
                     */
                    std::string GetFixSolution() const;

                    /**
                     * 设置<p>漏洞修复建议</p>
                     * @param _fixSolution <p>漏洞修复建议</p>
                     * 
                     */
                    void SetFixSolution(const std::string& _fixSolution);

                    /**
                     * 判断参数 FixSolution 是否已赋值
                     * @return FixSolution 是否已赋值
                     * 
                     */
                    bool FixSolutionHasBeenSet() const;

                    /**
                     * 获取<p>漏洞相关链接</p>
                     * @return RefLink <p>漏洞相关链接</p>
                     * 
                     */
                    std::string GetRefLink() const;

                    /**
                     * 设置<p>漏洞相关链接</p>
                     * @param _refLink <p>漏洞相关链接</p>
                     * 
                     */
                    void SetRefLink(const std::string& _refLink);

                    /**
                     * 判断参数 RefLink 是否已赋值
                     * @return RefLink 是否已赋值
                     * 
                     */
                    bool RefLinkHasBeenSet() const;

                    /**
                     * 获取<p>漏洞标签</p>
                     * @return Label <p>漏洞标签</p>
                     * 
                     */
                    std::vector<std::string> GetLabel() const;

                    /**
                     * 设置<p>漏洞标签</p>
                     * @param _label <p>漏洞标签</p>
                     * 
                     */
                    void SetLabel(const std::vector<std::string>& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取<p>漏洞Id</p>
                     * @return PocId <p>漏洞Id</p>
                     * 
                     */
                    std::string GetPocId() const;

                    /**
                     * 设置<p>漏洞Id</p>
                     * @param _pocId <p>漏洞Id</p>
                     * 
                     */
                    void SetPocId(const std::string& _pocId);

                    /**
                     * 判断参数 PocId 是否已赋值
                     * @return PocId 是否已赋值
                     * 
                     */
                    bool PocIdHasBeenSet() const;

                private:

                    /**
                     * <p>受影响的组件信息</p>
                     */
                    std::vector<VulAffectedComponent> m_affectedComponents;
                    bool m_affectedComponentsHasBeenSet;

                    /**
                     * <p>漏洞名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>漏洞CVEID</p>
                     */
                    std::string m_cVEID;
                    bool m_cVEIDHasBeenSet;

                    /**
                     * <p>漏洞类别</p>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>漏洞发布时间</p>
                     */
                    std::string m_publishTime;
                    bool m_publishTimeHasBeenSet;

                    /**
                     * <p>漏洞检测方式</p>
                     */
                    std::string m_checkMethod;
                    bool m_checkMethodHasBeenSet;

                    /**
                     * <p>是否支持防御</p><p>枚举值：</p><ul><li>ENABLED： 支持防御</li><li>NOT_ENABLED： 不支持防御</li></ul>
                     */
                    std::string m_defendStatus;
                    bool m_defendStatusHasBeenSet;

                    /**
                     * <p>是否支持修复</p>
                     */
                    bool m_supportFix;
                    bool m_supportFixHasBeenSet;

                    /**
                     * <p>CVSS分数</p>
                     */
                    std::string m_cvssScore;
                    bool m_cvssScoreHasBeenSet;

                    /**
                     * <p>漏洞危害描述</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>漏洞描述</p>
                     */
                    std::string m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * <p>危害等级</p>
                     */
                    std::string m_cVSSLevel;
                    bool m_cVSSLevelHasBeenSet;

                    /**
                     * <p>主要影响类型</p>
                     */
                    std::string m_vulAffect;
                    bool m_vulAffectHasBeenSet;

                    /**
                     * <p>是否存在在野利用</p>
                     */
                    bool m_kVERecord;
                    bool m_kVERecordHasBeenSet;

                    /**
                     * <p>EPSS 概率分数</p>
                     */
                    double m_ePSSScore;
                    bool m_ePSSScoreHasBeenSet;

                    /**
                     * <p>影响厂商</p>
                     */
                    std::string m_affectVendor;
                    bool m_affectVendorHasBeenSet;

                    /**
                     * <p>影响目标产品</p>
                     */
                    std::string m_affectProduct;
                    bool m_affectProductHasBeenSet;

                    /**
                     * <p>漏洞原理</p>
                     */
                    std::string m_mechanism;
                    bool m_mechanismHasBeenSet;

                    /**
                     * <p>攻击前提条件</p>
                     */
                    std::string m_precondition;
                    bool m_preconditionHasBeenSet;

                    /**
                     * <p>漏洞修复建议</p>
                     */
                    std::string m_fixSolution;
                    bool m_fixSolutionHasBeenSet;

                    /**
                     * <p>漏洞相关链接</p>
                     */
                    std::string m_refLink;
                    bool m_refLinkHasBeenSet;

                    /**
                     * <p>漏洞标签</p>
                     */
                    std::vector<std::string> m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * <p>漏洞Id</p>
                     */
                    std::string m_pocId;
                    bool m_pocIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEVULBASEINFO_H_
