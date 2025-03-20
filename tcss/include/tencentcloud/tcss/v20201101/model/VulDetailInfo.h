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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_VULDETAILINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_VULDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/VulAffectedComponentInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 漏洞详情信息
                */
                class VulDetailInfo : public AbstractModel
                {
                public:
                    VulDetailInfo();
                    ~VulDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CVE编号
                     * @return CVEID CVE编号
                     * 
                     */
                    std::string GetCVEID() const;

                    /**
                     * 设置CVE编号
                     * @param _cVEID CVE编号
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
                     * 获取漏洞名称
                     * @return Name 漏洞名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置漏洞名称
                     * @param _name 漏洞名称
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
                     * 获取漏洞标签
                     * @return Tags 漏洞标签
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置漏洞标签
                     * @param _tags 漏洞标签
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取漏洞类型
                     * @return CategoryType 漏洞类型
                     * 
                     */
                    std::string GetCategoryType() const;

                    /**
                     * 设置漏洞类型
                     * @param _categoryType 漏洞类型
                     * 
                     */
                    void SetCategoryType(const std::string& _categoryType);

                    /**
                     * 判断参数 CategoryType 是否已赋值
                     * @return CategoryType 是否已赋值
                     * 
                     */
                    bool CategoryTypeHasBeenSet() const;

                    /**
                     * 获取漏洞威胁等级
                     * @return Level 漏洞威胁等级
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置漏洞威胁等级
                     * @param _level 漏洞威胁等级
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
                     * 获取漏洞披露时间
                     * @return SubmitTime 漏洞披露时间
                     * 
                     */
                    std::string GetSubmitTime() const;

                    /**
                     * 设置漏洞披露时间
                     * @param _submitTime 漏洞披露时间
                     * 
                     */
                    void SetSubmitTime(const std::string& _submitTime);

                    /**
                     * 判断参数 SubmitTime 是否已赋值
                     * @return SubmitTime 是否已赋值
                     * 
                     */
                    bool SubmitTimeHasBeenSet() const;

                    /**
                     * 获取漏洞描述
                     * @return Description 漏洞描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置漏洞描述
                     * @param _description 漏洞描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取CVSS V3描述
                     * @return CVSSV3Desc CVSS V3描述
                     * 
                     */
                    std::string GetCVSSV3Desc() const;

                    /**
                     * 设置CVSS V3描述
                     * @param _cVSSV3Desc CVSS V3描述
                     * 
                     */
                    void SetCVSSV3Desc(const std::string& _cVSSV3Desc);

                    /**
                     * 判断参数 CVSSV3Desc 是否已赋值
                     * @return CVSSV3Desc 是否已赋值
                     * 
                     */
                    bool CVSSV3DescHasBeenSet() const;

                    /**
                     * 获取漏洞修复建议
                     * @return OfficialSolution 漏洞修复建议
                     * 
                     */
                    std::string GetOfficialSolution() const;

                    /**
                     * 设置漏洞修复建议
                     * @param _officialSolution 漏洞修复建议
                     * 
                     */
                    void SetOfficialSolution(const std::string& _officialSolution);

                    /**
                     * 判断参数 OfficialSolution 是否已赋值
                     * @return OfficialSolution 是否已赋值
                     * 
                     */
                    bool OfficialSolutionHasBeenSet() const;

                    /**
                     * 获取缓解措施
                     * @return DefenseSolution 缓解措施
                     * 
                     */
                    std::string GetDefenseSolution() const;

                    /**
                     * 设置缓解措施
                     * @param _defenseSolution 缓解措施
                     * 
                     */
                    void SetDefenseSolution(const std::string& _defenseSolution);

                    /**
                     * 判断参数 DefenseSolution 是否已赋值
                     * @return DefenseSolution 是否已赋值
                     * 
                     */
                    bool DefenseSolutionHasBeenSet() const;

                    /**
                     * 获取参考链接
                     * @return Reference 参考链接
                     * 
                     */
                    std::vector<std::string> GetReference() const;

                    /**
                     * 设置参考链接
                     * @param _reference 参考链接
                     * 
                     */
                    void SetReference(const std::vector<std::string>& _reference);

                    /**
                     * 判断参数 Reference 是否已赋值
                     * @return Reference 是否已赋值
                     * 
                     */
                    bool ReferenceHasBeenSet() const;

                    /**
                     * 获取CVSS V3分数
                     * @return CVSSV3Score CVSS V3分数
                     * 
                     */
                    double GetCVSSV3Score() const;

                    /**
                     * 设置CVSS V3分数
                     * @param _cVSSV3Score CVSS V3分数
                     * 
                     */
                    void SetCVSSV3Score(const double& _cVSSV3Score);

                    /**
                     * 判断参数 CVSSV3Score 是否已赋值
                     * @return CVSSV3Score 是否已赋值
                     * 
                     */
                    bool CVSSV3ScoreHasBeenSet() const;

                    /**
                     * 获取受漏洞影响的组件列表
                     * @return ComponentList 受漏洞影响的组件列表
                     * 
                     */
                    std::vector<VulAffectedComponentInfo> GetComponentList() const;

                    /**
                     * 设置受漏洞影响的组件列表
                     * @param _componentList 受漏洞影响的组件列表
                     * 
                     */
                    void SetComponentList(const std::vector<VulAffectedComponentInfo>& _componentList);

                    /**
                     * 判断参数 ComponentList 是否已赋值
                     * @return ComponentList 是否已赋值
                     * 
                     */
                    bool ComponentListHasBeenSet() const;

                    /**
                     * 获取影响本地镜像数
                     * @return LocalImageCount 影响本地镜像数
                     * 
                     */
                    int64_t GetLocalImageCount() const;

                    /**
                     * 设置影响本地镜像数
                     * @param _localImageCount 影响本地镜像数
                     * 
                     */
                    void SetLocalImageCount(const int64_t& _localImageCount);

                    /**
                     * 判断参数 LocalImageCount 是否已赋值
                     * @return LocalImageCount 是否已赋值
                     * 
                     */
                    bool LocalImageCountHasBeenSet() const;

                    /**
                     * 获取影响容器数
                     * @return ContainerCount 影响容器数
                     * 
                     */
                    int64_t GetContainerCount() const;

                    /**
                     * 设置影响容器数
                     * @param _containerCount 影响容器数
                     * 
                     */
                    void SetContainerCount(const int64_t& _containerCount);

                    /**
                     * 判断参数 ContainerCount 是否已赋值
                     * @return ContainerCount 是否已赋值
                     * 
                     */
                    bool ContainerCountHasBeenSet() const;

                    /**
                     * 获取影响仓库镜像数
                     * @return RegistryImageCount 影响仓库镜像数
                     * 
                     */
                    int64_t GetRegistryImageCount() const;

                    /**
                     * 设置影响仓库镜像数
                     * @param _registryImageCount 影响仓库镜像数
                     * 
                     */
                    void SetRegistryImageCount(const int64_t& _registryImageCount);

                    /**
                     * 判断参数 RegistryImageCount 是否已赋值
                     * @return RegistryImageCount 是否已赋值
                     * 
                     */
                    bool RegistryImageCountHasBeenSet() const;

                    /**
                     * 获取漏洞子类型
                     * @return Category 漏洞子类型
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置漏洞子类型
                     * @param _category 漏洞子类型
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
                     * 获取影响最新本地镜像数
                     * @return LocalNewestImageCount 影响最新本地镜像数
                     * 
                     */
                    int64_t GetLocalNewestImageCount() const;

                    /**
                     * 设置影响最新本地镜像数
                     * @param _localNewestImageCount 影响最新本地镜像数
                     * 
                     */
                    void SetLocalNewestImageCount(const int64_t& _localNewestImageCount);

                    /**
                     * 判断参数 LocalNewestImageCount 是否已赋值
                     * @return LocalNewestImageCount 是否已赋值
                     * 
                     */
                    bool LocalNewestImageCountHasBeenSet() const;

                    /**
                     * 获取影响最新仓库镜像数
                     * @return RegistryNewestImageCount 影响最新仓库镜像数
                     * 
                     */
                    int64_t GetRegistryNewestImageCount() const;

                    /**
                     * 设置影响最新仓库镜像数
                     * @param _registryNewestImageCount 影响最新仓库镜像数
                     * 
                     */
                    void SetRegistryNewestImageCount(const int64_t& _registryNewestImageCount);

                    /**
                     * 判断参数 RegistryNewestImageCount 是否已赋值
                     * @return RegistryNewestImageCount 是否已赋值
                     * 
                     */
                    bool RegistryNewestImageCountHasBeenSet() const;

                    /**
                     * 获取漏洞PocID
                     * @return PocID 漏洞PocID
                     * 
                     */
                    std::string GetPocID() const;

                    /**
                     * 设置漏洞PocID
                     * @param _pocID 漏洞PocID
                     * 
                     */
                    void SetPocID(const std::string& _pocID);

                    /**
                     * 判断参数 PocID 是否已赋值
                     * @return PocID 是否已赋值
                     * 
                     */
                    bool PocIDHasBeenSet() const;

                    /**
                     * 获取防御状态，NO_DEFENDED:未防御，DEFENDED:已防御
                     * @return DefenceStatus 防御状态，NO_DEFENDED:未防御，DEFENDED:已防御
                     * 
                     */
                    std::string GetDefenceStatus() const;

                    /**
                     * 设置防御状态，NO_DEFENDED:未防御，DEFENDED:已防御
                     * @param _defenceStatus 防御状态，NO_DEFENDED:未防御，DEFENDED:已防御
                     * 
                     */
                    void SetDefenceStatus(const std::string& _defenceStatus);

                    /**
                     * 判断参数 DefenceStatus 是否已赋值
                     * @return DefenceStatus 是否已赋值
                     * 
                     */
                    bool DefenceStatusHasBeenSet() const;

                    /**
                     * 获取漏洞防御主机范围: MANUAL:自选主机节点，ALL:全部
                     * @return DefenceScope 漏洞防御主机范围: MANUAL:自选主机节点，ALL:全部
                     * 
                     */
                    std::string GetDefenceScope() const;

                    /**
                     * 设置漏洞防御主机范围: MANUAL:自选主机节点，ALL:全部
                     * @param _defenceScope 漏洞防御主机范围: MANUAL:自选主机节点，ALL:全部
                     * 
                     */
                    void SetDefenceScope(const std::string& _defenceScope);

                    /**
                     * 判断参数 DefenceScope 是否已赋值
                     * @return DefenceScope 是否已赋值
                     * 
                     */
                    bool DefenceScopeHasBeenSet() const;

                    /**
                     * 获取漏洞防御主机数量
                     * @return DefenceHostCount 漏洞防御主机数量
                     * 
                     */
                    int64_t GetDefenceHostCount() const;

                    /**
                     * 设置漏洞防御主机数量
                     * @param _defenceHostCount 漏洞防御主机数量
                     * 
                     */
                    void SetDefenceHostCount(const int64_t& _defenceHostCount);

                    /**
                     * 判断参数 DefenceHostCount 是否已赋值
                     * @return DefenceHostCount 是否已赋值
                     * 
                     */
                    bool DefenceHostCountHasBeenSet() const;

                    /**
                     * 获取已防御攻击次数
                     * @return DefendedCount 已防御攻击次数
                     * 
                     */
                    int64_t GetDefendedCount() const;

                    /**
                     * 设置已防御攻击次数
                     * @param _defendedCount 已防御攻击次数
                     * 
                     */
                    void SetDefendedCount(const int64_t& _defendedCount);

                    /**
                     * 判断参数 DefendedCount 是否已赋值
                     * @return DefendedCount 是否已赋值
                     * 
                     */
                    bool DefendedCountHasBeenSet() const;

                    /**
                     * 获取是否已扫描，NOT_SCAN:未扫描,SCANNED:已扫描
                     * @return ScanStatus 是否已扫描，NOT_SCAN:未扫描,SCANNED:已扫描
                     * 
                     */
                    std::string GetScanStatus() const;

                    /**
                     * 设置是否已扫描，NOT_SCAN:未扫描,SCANNED:已扫描
                     * @param _scanStatus 是否已扫描，NOT_SCAN:未扫描,SCANNED:已扫描
                     * 
                     */
                    void SetScanStatus(const std::string& _scanStatus);

                    /**
                     * 判断参数 ScanStatus 是否已赋值
                     * @return ScanStatus 是否已赋值
                     * 
                     */
                    bool ScanStatusHasBeenSet() const;

                private:

                    /**
                     * CVE编号
                     */
                    std::string m_cVEID;
                    bool m_cVEIDHasBeenSet;

                    /**
                     * 漏洞名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 漏洞标签
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 漏洞类型
                     */
                    std::string m_categoryType;
                    bool m_categoryTypeHasBeenSet;

                    /**
                     * 漏洞威胁等级
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 漏洞披露时间
                     */
                    std::string m_submitTime;
                    bool m_submitTimeHasBeenSet;

                    /**
                     * 漏洞描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * CVSS V3描述
                     */
                    std::string m_cVSSV3Desc;
                    bool m_cVSSV3DescHasBeenSet;

                    /**
                     * 漏洞修复建议
                     */
                    std::string m_officialSolution;
                    bool m_officialSolutionHasBeenSet;

                    /**
                     * 缓解措施
                     */
                    std::string m_defenseSolution;
                    bool m_defenseSolutionHasBeenSet;

                    /**
                     * 参考链接
                     */
                    std::vector<std::string> m_reference;
                    bool m_referenceHasBeenSet;

                    /**
                     * CVSS V3分数
                     */
                    double m_cVSSV3Score;
                    bool m_cVSSV3ScoreHasBeenSet;

                    /**
                     * 受漏洞影响的组件列表
                     */
                    std::vector<VulAffectedComponentInfo> m_componentList;
                    bool m_componentListHasBeenSet;

                    /**
                     * 影响本地镜像数
                     */
                    int64_t m_localImageCount;
                    bool m_localImageCountHasBeenSet;

                    /**
                     * 影响容器数
                     */
                    int64_t m_containerCount;
                    bool m_containerCountHasBeenSet;

                    /**
                     * 影响仓库镜像数
                     */
                    int64_t m_registryImageCount;
                    bool m_registryImageCountHasBeenSet;

                    /**
                     * 漏洞子类型
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 影响最新本地镜像数
                     */
                    int64_t m_localNewestImageCount;
                    bool m_localNewestImageCountHasBeenSet;

                    /**
                     * 影响最新仓库镜像数
                     */
                    int64_t m_registryNewestImageCount;
                    bool m_registryNewestImageCountHasBeenSet;

                    /**
                     * 漏洞PocID
                     */
                    std::string m_pocID;
                    bool m_pocIDHasBeenSet;

                    /**
                     * 防御状态，NO_DEFENDED:未防御，DEFENDED:已防御
                     */
                    std::string m_defenceStatus;
                    bool m_defenceStatusHasBeenSet;

                    /**
                     * 漏洞防御主机范围: MANUAL:自选主机节点，ALL:全部
                     */
                    std::string m_defenceScope;
                    bool m_defenceScopeHasBeenSet;

                    /**
                     * 漏洞防御主机数量
                     */
                    int64_t m_defenceHostCount;
                    bool m_defenceHostCountHasBeenSet;

                    /**
                     * 已防御攻击次数
                     */
                    int64_t m_defendedCount;
                    bool m_defendedCountHasBeenSet;

                    /**
                     * 是否已扫描，NOT_SCAN:未扫描,SCANNED:已扫描
                     */
                    std::string m_scanStatus;
                    bool m_scanStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_VULDETAILINFO_H_
