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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULDETAILINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/VPRRatingInfo.h>
#include <tencentcloud/csip/v20221121/model/VPRLabel.h>
#include <tencentcloud/csip/v20221121/model/VulSpreadTrend.h>
#include <tencentcloud/csip/v20221121/model/VulVendorProduct.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 漏洞全部信息
                */
                class VulDetailInfo : public AbstractModel
                {
                public:
                    VulDetailInfo();
                    ~VulDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>漏洞ID</p>
                     * @return ID <p>漏洞ID</p>
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置<p>漏洞ID</p>
                     * @param _iD <p>漏洞ID</p>
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>漏洞名字</p>
                     * @return Name <p>漏洞名字</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>漏洞名字</p>
                     * @param _name <p>漏洞名字</p>
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
                     * 获取<p>CveID</p>
                     * @return CVEID <p>CveID</p>
                     * 
                     */
                    std::string GetCVEID() const;

                    /**
                     * 设置<p>CveID</p>
                     * @param _cVEID <p>CveID</p>
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
                     * 获取漏洞分类
枚举值：
LINUX：Linux 软件漏洞
WINDOWS：Windows 系统补丁
WEB_CMS：Web-CMS 漏洞
APPLICATION：应用漏洞
EMERGENCY：应急漏洞
                     * @return Category 漏洞分类
枚举值：
LINUX：Linux 软件漏洞
WINDOWS：Windows 系统补丁
WEB_CMS：Web-CMS 漏洞
APPLICATION：应用漏洞
EMERGENCY：应急漏洞
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置漏洞分类
枚举值：
LINUX：Linux 软件漏洞
WINDOWS：Windows 系统补丁
WEB_CMS：Web-CMS 漏洞
APPLICATION：应用漏洞
EMERGENCY：应急漏洞
                     * @param _category 漏洞分类
枚举值：
LINUX：Linux 软件漏洞
WINDOWS：Windows 系统补丁
WEB_CMS：Web-CMS 漏洞
APPLICATION：应用漏洞
EMERGENCY：应急漏洞
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
                     * 获取漏洞披露时间
参数格式：YYYY-MM-DD HH:mm:ss
                     * @return PublishTime 漏洞披露时间
参数格式：YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    std::string GetPublishTime() const;

                    /**
                     * 设置漏洞披露时间
参数格式：YYYY-MM-DD HH:mm:ss
                     * @param _publishTime 漏洞披露时间
参数格式：YYYY-MM-DD HH:mm:ss
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
                     * 获取<p>检测方式</p><p>枚举值：</p><ul><li>VersionCompare： 版本对比</li><li>POC： POC检测</li></ul>
                     * @return CheckMethod <p>检测方式</p><p>枚举值：</p><ul><li>VersionCompare： 版本对比</li><li>POC： POC检测</li></ul>
                     * 
                     */
                    std::string GetCheckMethod() const;

                    /**
                     * 设置<p>检测方式</p><p>枚举值：</p><ul><li>VersionCompare： 版本对比</li><li>POC： POC检测</li></ul>
                     * @param _checkMethod <p>检测方式</p><p>枚举值：</p><ul><li>VersionCompare： 版本对比</li><li>POC： POC检测</li></ul>
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
                     * 获取漏洞防御状态
枚举值：
ENABLED：已开启
NOT_SUPPORTED：不支持
NOT_ENABLED：未开启
                     * @return DefendStatus 漏洞防御状态
枚举值：
ENABLED：已开启
NOT_SUPPORTED：不支持
NOT_ENABLED：未开启
                     * 
                     */
                    std::string GetDefendStatus() const;

                    /**
                     * 设置漏洞防御状态
枚举值：
ENABLED：已开启
NOT_SUPPORTED：不支持
NOT_ENABLED：未开启
                     * @param _defendStatus 漏洞防御状态
枚举值：
ENABLED：已开启
NOT_SUPPORTED：不支持
NOT_ENABLED：未开启
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
                     * 获取是否支持一键修复
枚举值：
true：支持
false：不支持
                     * @return SupportFix 是否支持一键修复
枚举值：
true：支持
false：不支持
                     * 
                     */
                    bool GetSupportFix() const;

                    /**
                     * 设置是否支持一键修复
枚举值：
true：支持
false：不支持
                     * @param _supportFix 是否支持一键修复
枚举值：
true：支持
false：不支持
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
                     * 获取VPR 评级信息（包含评级结果、说明和分阶段评分）
                     * @return VRPRatingInfo VPR 评级信息（包含评级结果、说明和分阶段评分）
                     * 
                     */
                    VPRRatingInfo GetVRPRatingInfo() const;

                    /**
                     * 设置VPR 评级信息（包含评级结果、说明和分阶段评分）
                     * @param _vRPRatingInfo VPR 评级信息（包含评级结果、说明和分阶段评分）
                     * 
                     */
                    void SetVRPRatingInfo(const VPRRatingInfo& _vRPRatingInfo);

                    /**
                     * 判断参数 VRPRatingInfo 是否已赋值
                     * @return VRPRatingInfo 是否已赋值
                     * 
                     */
                    bool VRPRatingInfoHasBeenSet() const;

                    /**
                     * 获取CVSS 评分
取值范围：[0.0, 10.0]
                     * @return CvssScore CVSS 评分
取值范围：[0.0, 10.0]
                     * 
                     */
                    double GetCvssScore() const;

                    /**
                     * 设置CVSS 评分
取值范围：[0.0, 10.0]
                     * @param _cvssScore CVSS 评分
取值范围：[0.0, 10.0]
                     * 
                     */
                    void SetCvssScore(const double& _cvssScore);

                    /**
                     * 判断参数 CvssScore 是否已赋值
                     * @return CvssScore 是否已赋值
                     * 
                     */
                    bool CvssScoreHasBeenSet() const;

                    /**
                     * 获取VPR 风险标签列表（如在野利用、有 EXP、有 POC、外网暴露、无需重启等）
                     * @return Label VPR 风险标签列表（如在野利用、有 EXP、有 POC、外网暴露、无需重启等）
                     * 
                     */
                    std::vector<VPRLabel> GetLabel() const;

                    /**
                     * 设置VPR 风险标签列表（如在野利用、有 EXP、有 POC、外网暴露、无需重启等）
                     * @param _label VPR 风险标签列表（如在野利用、有 EXP、有 POC、外网暴露、无需重启等）
                     * 
                     */
                    void SetLabel(const std::vector<VPRLabel>& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取漏洞备注
                     * @return Remark 漏洞备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置漏洞备注
                     * @param _remark 漏洞备注
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
                     * 获取漏洞概述说明
                     * @return Summary 漏洞概述说明
                     * 
                     */
                    std::string GetSummary() const;

                    /**
                     * 设置漏洞概述说明
                     * @param _summary 漏洞概述说明
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
                     * 获取已开启漏洞防御的主机数
                     * @return DefendHostCount 已开启漏洞防御的主机数
                     * 
                     */
                    uint64_t GetDefendHostCount() const;

                    /**
                     * 设置已开启漏洞防御的主机数
                     * @param _defendHostCount 已开启漏洞防御的主机数
                     * 
                     */
                    void SetDefendHostCount(const uint64_t& _defendHostCount);

                    /**
                     * 判断参数 DefendHostCount 是否已赋值
                     * @return DefendHostCount 是否已赋值
                     * 
                     */
                    bool DefendHostCountHasBeenSet() const;

                    /**
                     * 获取未开启漏洞防御的主机数
                     * @return NotDefendHostCount 未开启漏洞防御的主机数
                     * 
                     */
                    uint64_t GetNotDefendHostCount() const;

                    /**
                     * 设置未开启漏洞防御的主机数
                     * @param _notDefendHostCount 未开启漏洞防御的主机数
                     * 
                     */
                    void SetNotDefendHostCount(const uint64_t& _notDefendHostCount);

                    /**
                     * 判断参数 NotDefendHostCount 是否已赋值
                     * @return NotDefendHostCount 是否已赋值
                     * 
                     */
                    bool NotDefendHostCountHasBeenSet() const;

                    /**
                     * 获取最近扫描时间
参数格式：YYYY-MM-DD HH:mm:ss
                     * @return LatestScanTime 最近扫描时间
参数格式：YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    std::string GetLatestScanTime() const;

                    /**
                     * 设置最近扫描时间
参数格式：YYYY-MM-DD HH:mm:ss
                     * @param _latestScanTime 最近扫描时间
参数格式：YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    void SetLatestScanTime(const std::string& _latestScanTime);

                    /**
                     * 判断参数 LatestScanTime 是否已赋值
                     * @return LatestScanTime 是否已赋值
                     * 
                     */
                    bool LatestScanTimeHasBeenSet() const;

                    /**
                     * 获取CVSS 危害等级
枚举值：
INVALID：无效
INFO：提示
LOW：低危
MEDIUM：中危
HIGH：高危
CRITICAL：严重
                     * @return CVSSLevel CVSS 危害等级
枚举值：
INVALID：无效
INFO：提示
LOW：低危
MEDIUM：中危
HIGH：高危
CRITICAL：严重
                     * 
                     */
                    std::string GetCVSSLevel() const;

                    /**
                     * 设置CVSS 危害等级
枚举值：
INVALID：无效
INFO：提示
LOW：低危
MEDIUM：中危
HIGH：高危
CRITICAL：严重
                     * @param _cVSSLevel CVSS 危害等级
枚举值：
INVALID：无效
INFO：提示
LOW：低危
MEDIUM：中危
HIGH：高危
CRITICAL：严重
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
                     * 获取受影响软件描述列表（每项形如 openssl < 1.1.1k）
                     * @return VulAffect 受影响软件描述列表（每项形如 openssl < 1.1.1k）
                     * 
                     */
                    std::vector<std::string> GetVulAffect() const;

                    /**
                     * 设置受影响软件描述列表（每项形如 openssl < 1.1.1k）
                     * @param _vulAffect 受影响软件描述列表（每项形如 openssl < 1.1.1k）
                     * 
                     */
                    void SetVulAffect(const std::vector<std::string>& _vulAffect);

                    /**
                     * 判断参数 VulAffect 是否已赋值
                     * @return VulAffect 是否已赋值
                     * 
                     */
                    bool VulAffectHasBeenSet() const;

                    /**
                     * 获取是否被 KVE（已知被利用漏洞）库收录
枚举值：
true：已收录
false：未收录
                     * @return KVERecord 是否被 KVE（已知被利用漏洞）库收录
枚举值：
true：已收录
false：未收录
                     * 
                     */
                    bool GetKVERecord() const;

                    /**
                     * 设置是否被 KVE（已知被利用漏洞）库收录
枚举值：
true：已收录
false：未收录
                     * @param _kVERecord 是否被 KVE（已知被利用漏洞）库收录
枚举值：
true：已收录
false：未收录
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
                     * 获取KVE 收录时间
参数格式：YYYY-MM-DD HH:mm:ss
                     * @return KVERecordTime KVE 收录时间
参数格式：YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    std::string GetKVERecordTime() const;

                    /**
                     * 设置KVE 收录时间
参数格式：YYYY-MM-DD HH:mm:ss
                     * @param _kVERecordTime KVE 收录时间
参数格式：YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    void SetKVERecordTime(const std::string& _kVERecordTime);

                    /**
                     * 判断参数 KVERecordTime 是否已赋值
                     * @return KVERecordTime 是否已赋值
                     * 
                     */
                    bool KVERecordTimeHasBeenSet() const;

                    /**
                     * 获取EPSS 评分（漏洞利用概率预测）
取值范围：[0.0, 1.0]
                     * @return EPSSScore EPSS 评分（漏洞利用概率预测）
取值范围：[0.0, 1.0]
                     * 
                     */
                    double GetEPSSScore() const;

                    /**
                     * 设置EPSS 评分（漏洞利用概率预测）
取值范围：[0.0, 1.0]
                     * @param _ePSSScore EPSS 评分（漏洞利用概率预测）
取值范围：[0.0, 1.0]
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
                     * 获取受影响厂商列表
                     * @return AffectVendor 受影响厂商列表
                     * 
                     */
                    std::vector<std::string> GetAffectVendor() const;

                    /**
                     * 设置受影响厂商列表
                     * @param _affectVendor 受影响厂商列表
                     * 
                     */
                    void SetAffectVendor(const std::vector<std::string>& _affectVendor);

                    /**
                     * 判断参数 AffectVendor 是否已赋值
                     * @return AffectVendor 是否已赋值
                     * 
                     */
                    bool AffectVendorHasBeenSet() const;

                    /**
                     * 获取受影响产品列表
                     * @return AffectProduct 受影响产品列表
                     * 
                     */
                    std::vector<std::string> GetAffectProduct() const;

                    /**
                     * 设置受影响产品列表
                     * @param _affectProduct 受影响产品列表
                     * 
                     */
                    void SetAffectProduct(const std::vector<std::string>& _affectProduct);

                    /**
                     * 判断参数 AffectProduct 是否已赋值
                     * @return AffectProduct 是否已赋值
                     * 
                     */
                    bool AffectProductHasBeenSet() const;

                    /**
                     * 获取漏洞利用机制说明
                     * @return Mechanism 漏洞利用机制说明
                     * 
                     */
                    std::string GetMechanism() const;

                    /**
                     * 设置漏洞利用机制说明
                     * @param _mechanism 漏洞利用机制说明
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
                     * 获取漏洞利用前置条件说明
                     * @return Precondition 漏洞利用前置条件说明
                     * 
                     */
                    std::string GetPrecondition() const;

                    /**
                     * 设置漏洞利用前置条件说明
                     * @param _precondition 漏洞利用前置条件说明
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
                     * 获取漏洞最新传播趋势数据列表（按日期）
                     * @return LatestTrend 漏洞最新传播趋势数据列表（按日期）
                     * 
                     */
                    std::vector<VulSpreadTrend> GetLatestTrend() const;

                    /**
                     * 设置漏洞最新传播趋势数据列表（按日期）
                     * @param _latestTrend 漏洞最新传播趋势数据列表（按日期）
                     * 
                     */
                    void SetLatestTrend(const std::vector<VulSpreadTrend>& _latestTrend);

                    /**
                     * 判断参数 LatestTrend 是否已赋值
                     * @return LatestTrend 是否已赋值
                     * 
                     */
                    bool LatestTrendHasBeenSet() const;

                    /**
                     * 获取<p>修复方案</p>
                     * @return FixSolution <p>修复方案</p>
                     * 
                     */
                    std::string GetFixSolution() const;

                    /**
                     * 设置<p>修复方案</p>
                     * @param _fixSolution <p>修复方案</p>
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
                     * 获取<p>参考链接</p>
                     * @return RefLink <p>参考链接</p>
                     * 
                     */
                    std::string GetRefLink() const;

                    /**
                     * 设置<p>参考链接</p>
                     * @param _refLink <p>参考链接</p>
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
                     * 获取<p>漏洞危害描述</p>
                     * @return HarmDescription <p>漏洞危害描述</p>
                     * 
                     */
                    std::string GetHarmDescription() const;

                    /**
                     * 设置<p>漏洞危害描述</p>
                     * @param _harmDescription <p>漏洞危害描述</p>
                     * 
                     */
                    void SetHarmDescription(const std::string& _harmDescription);

                    /**
                     * 判断参数 HarmDescription 是否已赋值
                     * @return HarmDescription 是否已赋值
                     * 
                     */
                    bool HarmDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>漏洞影响产品</p>
                     * @return AffectVendorProduct <p>漏洞影响产品</p>
                     * 
                     */
                    std::vector<VulVendorProduct> GetAffectVendorProduct() const;

                    /**
                     * 设置<p>漏洞影响产品</p>
                     * @param _affectVendorProduct <p>漏洞影响产品</p>
                     * 
                     */
                    void SetAffectVendorProduct(const std::vector<VulVendorProduct>& _affectVendorProduct);

                    /**
                     * 判断参数 AffectVendorProduct 是否已赋值
                     * @return AffectVendorProduct 是否已赋值
                     * 
                     */
                    bool AffectVendorProductHasBeenSet() const;

                private:

                    /**
                     * <p>漏洞ID</p>
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>漏洞名字</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>CveID</p>
                     */
                    std::string m_cVEID;
                    bool m_cVEIDHasBeenSet;

                    /**
                     * 漏洞分类
枚举值：
LINUX：Linux 软件漏洞
WINDOWS：Windows 系统补丁
WEB_CMS：Web-CMS 漏洞
APPLICATION：应用漏洞
EMERGENCY：应急漏洞
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 漏洞披露时间
参数格式：YYYY-MM-DD HH:mm:ss
                     */
                    std::string m_publishTime;
                    bool m_publishTimeHasBeenSet;

                    /**
                     * <p>检测方式</p><p>枚举值：</p><ul><li>VersionCompare： 版本对比</li><li>POC： POC检测</li></ul>
                     */
                    std::string m_checkMethod;
                    bool m_checkMethodHasBeenSet;

                    /**
                     * 漏洞防御状态
枚举值：
ENABLED：已开启
NOT_SUPPORTED：不支持
NOT_ENABLED：未开启
                     */
                    std::string m_defendStatus;
                    bool m_defendStatusHasBeenSet;

                    /**
                     * 是否支持一键修复
枚举值：
true：支持
false：不支持
                     */
                    bool m_supportFix;
                    bool m_supportFixHasBeenSet;

                    /**
                     * VPR 评级信息（包含评级结果、说明和分阶段评分）
                     */
                    VPRRatingInfo m_vRPRatingInfo;
                    bool m_vRPRatingInfoHasBeenSet;

                    /**
                     * CVSS 评分
取值范围：[0.0, 10.0]
                     */
                    double m_cvssScore;
                    bool m_cvssScoreHasBeenSet;

                    /**
                     * VPR 风险标签列表（如在野利用、有 EXP、有 POC、外网暴露、无需重启等）
                     */
                    std::vector<VPRLabel> m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 漏洞备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 漏洞概述说明
                     */
                    std::string m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * 已开启漏洞防御的主机数
                     */
                    uint64_t m_defendHostCount;
                    bool m_defendHostCountHasBeenSet;

                    /**
                     * 未开启漏洞防御的主机数
                     */
                    uint64_t m_notDefendHostCount;
                    bool m_notDefendHostCountHasBeenSet;

                    /**
                     * 最近扫描时间
参数格式：YYYY-MM-DD HH:mm:ss
                     */
                    std::string m_latestScanTime;
                    bool m_latestScanTimeHasBeenSet;

                    /**
                     * CVSS 危害等级
枚举值：
INVALID：无效
INFO：提示
LOW：低危
MEDIUM：中危
HIGH：高危
CRITICAL：严重
                     */
                    std::string m_cVSSLevel;
                    bool m_cVSSLevelHasBeenSet;

                    /**
                     * 受影响软件描述列表（每项形如 openssl < 1.1.1k）
                     */
                    std::vector<std::string> m_vulAffect;
                    bool m_vulAffectHasBeenSet;

                    /**
                     * 是否被 KVE（已知被利用漏洞）库收录
枚举值：
true：已收录
false：未收录
                     */
                    bool m_kVERecord;
                    bool m_kVERecordHasBeenSet;

                    /**
                     * KVE 收录时间
参数格式：YYYY-MM-DD HH:mm:ss
                     */
                    std::string m_kVERecordTime;
                    bool m_kVERecordTimeHasBeenSet;

                    /**
                     * EPSS 评分（漏洞利用概率预测）
取值范围：[0.0, 1.0]
                     */
                    double m_ePSSScore;
                    bool m_ePSSScoreHasBeenSet;

                    /**
                     * 受影响厂商列表
                     */
                    std::vector<std::string> m_affectVendor;
                    bool m_affectVendorHasBeenSet;

                    /**
                     * 受影响产品列表
                     */
                    std::vector<std::string> m_affectProduct;
                    bool m_affectProductHasBeenSet;

                    /**
                     * 漏洞利用机制说明
                     */
                    std::string m_mechanism;
                    bool m_mechanismHasBeenSet;

                    /**
                     * 漏洞利用前置条件说明
                     */
                    std::string m_precondition;
                    bool m_preconditionHasBeenSet;

                    /**
                     * 漏洞最新传播趋势数据列表（按日期）
                     */
                    std::vector<VulSpreadTrend> m_latestTrend;
                    bool m_latestTrendHasBeenSet;

                    /**
                     * <p>修复方案</p>
                     */
                    std::string m_fixSolution;
                    bool m_fixSolutionHasBeenSet;

                    /**
                     * <p>参考链接</p>
                     */
                    std::string m_refLink;
                    bool m_refLinkHasBeenSet;

                    /**
                     * <p>漏洞危害描述</p>
                     */
                    std::string m_harmDescription;
                    bool m_harmDescriptionHasBeenSet;

                    /**
                     * <p>漏洞影响产品</p>
                     */
                    std::vector<VulVendorProduct> m_affectVendorProduct;
                    bool m_affectVendorProductHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULDETAILINFO_H_
