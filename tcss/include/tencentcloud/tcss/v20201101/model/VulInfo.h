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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_VULINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_VULINFO_H_

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
                * 漏洞列表信息
                */
                class VulInfo : public AbstractModel
                {
                public:
                    VulInfo();
                    ~VulInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取风险等级
                     * @return Level 风险等级
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置风险等级
                     * @param _level 风险等级
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
                     * 获取首次发现时间
                     * @return FoundTime 首次发现时间
                     * 
                     */
                    std::string GetFoundTime() const;

                    /**
                     * 设置首次发现时间
                     * @param _foundTime 首次发现时间
                     * 
                     */
                    void SetFoundTime(const std::string& _foundTime);

                    /**
                     * 判断参数 FoundTime 是否已赋值
                     * @return FoundTime 是否已赋值
                     * 
                     */
                    bool FoundTimeHasBeenSet() const;

                    /**
                     * 获取最近发现时间
                     * @return LatestFoundTime 最近发现时间
                     * 
                     */
                    std::string GetLatestFoundTime() const;

                    /**
                     * 设置最近发现时间
                     * @param _latestFoundTime 最近发现时间
                     * 
                     */
                    void SetLatestFoundTime(const std::string& _latestFoundTime);

                    /**
                     * 判断参数 LatestFoundTime 是否已赋值
                     * @return LatestFoundTime 是否已赋值
                     * 
                     */
                    bool LatestFoundTimeHasBeenSet() const;

                    /**
                     * 获取漏洞ID
                     * @return ID 漏洞ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置漏洞ID
                     * @param _iD 漏洞ID
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

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

                private:

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
                     * CVSS V3分数
                     */
                    double m_cVSSV3Score;
                    bool m_cVSSV3ScoreHasBeenSet;

                    /**
                     * 风险等级
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * CVE编号
                     */
                    std::string m_cVEID;
                    bool m_cVEIDHasBeenSet;

                    /**
                     * 漏洞子类型
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 首次发现时间
                     */
                    std::string m_foundTime;
                    bool m_foundTimeHasBeenSet;

                    /**
                     * 最近发现时间
                     */
                    std::string m_latestFoundTime;
                    bool m_latestFoundTimeHasBeenSet;

                    /**
                     * 漏洞ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_VULINFO_H_
