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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGESVUL_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGESVUL_H_

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
                * 容器安全镜像漏洞
                */
                class ImagesVul : public AbstractModel
                {
                public:
                    ImagesVul();
                    ~ImagesVul() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取漏洞id
                     * @return CVEID 漏洞id
                     * 
                     */
                    std::string GetCVEID() const;

                    /**
                     * 设置漏洞id
                     * @param _cVEID 漏洞id
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
                     * 获取版本
                     * @return Version 版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置版本
                     * @param _version 版本
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取分类
                     * @return Category 分类
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置分类
                     * @param _category 分类
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
                     * 获取分类2
                     * @return CategoryType 分类2
                     * 
                     */
                    std::string GetCategoryType() const;

                    /**
                     * 设置分类2
                     * @param _categoryType 分类2
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
                     * 获取风险等级
                     * @return Level 风险等级
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置风险等级
                     * @param _level 风险等级
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Des 描述
                     * 
                     */
                    std::string GetDes() const;

                    /**
                     * 设置描述
                     * @param _des 描述
                     * 
                     */
                    void SetDes(const std::string& _des);

                    /**
                     * 判断参数 Des 是否已赋值
                     * @return Des 是否已赋值
                     * 
                     */
                    bool DesHasBeenSet() const;

                    /**
                     * 获取解决方案
                     * @return OfficialSolution 解决方案
                     * 
                     */
                    std::string GetOfficialSolution() const;

                    /**
                     * 设置解决方案
                     * @param _officialSolution 解决方案
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
                     * 获取引用
                     * @return Reference 引用
                     * 
                     */
                    std::string GetReference() const;

                    /**
                     * 设置引用
                     * @param _reference 引用
                     * 
                     */
                    void SetReference(const std::string& _reference);

                    /**
                     * 判断参数 Reference 是否已赋值
                     * @return Reference 是否已赋值
                     * 
                     */
                    bool ReferenceHasBeenSet() const;

                    /**
                     * 获取防御方案
                     * @return DefenseSolution 防御方案
                     * 
                     */
                    std::string GetDefenseSolution() const;

                    /**
                     * 设置防御方案
                     * @param _defenseSolution 防御方案
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
                     * 获取提交时间
                     * @return SubmitTime 提交时间
                     * 
                     */
                    std::string GetSubmitTime() const;

                    /**
                     * 设置提交时间
                     * @param _submitTime 提交时间
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
                     * 获取是否是重点关注：true：是，false：不是
                     * @return IsSuggest 是否是重点关注：true：是，false：不是
                     * 
                     */
                    bool GetIsSuggest() const;

                    /**
                     * 设置是否是重点关注：true：是，false：不是
                     * @param _isSuggest 是否是重点关注：true：是，false：不是
                     * 
                     */
                    void SetIsSuggest(const bool& _isSuggest);

                    /**
                     * 判断参数 IsSuggest 是否已赋值
                     * @return IsSuggest 是否已赋值
                     * 
                     */
                    bool IsSuggestHasBeenSet() const;

                    /**
                     * 获取修复版本号
                     * @return FixedVersions 修复版本号
                     * 
                     */
                    std::string GetFixedVersions() const;

                    /**
                     * 设置修复版本号
                     * @param _fixedVersions 修复版本号
                     * 
                     */
                    void SetFixedVersions(const std::string& _fixedVersions);

                    /**
                     * 判断参数 FixedVersions 是否已赋值
                     * @return FixedVersions 是否已赋值
                     * 
                     */
                    bool FixedVersionsHasBeenSet() const;

                    /**
                     * 获取漏洞标签:"CanBeFixed","DynamicLevelPoc","DynamicLevelExp"
                     * @return Tag 漏洞标签:"CanBeFixed","DynamicLevelPoc","DynamicLevelExp"
                     * 
                     */
                    std::vector<std::string> GetTag() const;

                    /**
                     * 设置漏洞标签:"CanBeFixed","DynamicLevelPoc","DynamicLevelExp"
                     * @param _tag 漏洞标签:"CanBeFixed","DynamicLevelPoc","DynamicLevelExp"
                     * 
                     */
                    void SetTag(const std::vector<std::string>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取攻击热度
                     * @return AttackLevel 攻击热度
                     * 
                     */
                    int64_t GetAttackLevel() const;

                    /**
                     * 设置攻击热度
                     * @param _attackLevel 攻击热度
                     * 
                     */
                    void SetAttackLevel(const int64_t& _attackLevel);

                    /**
                     * 判断参数 AttackLevel 是否已赋值
                     * @return AttackLevel 是否已赋值
                     * 
                     */
                    bool AttackLevelHasBeenSet() const;

                private:

                    /**
                     * 漏洞id
                     */
                    std::string m_cVEID;
                    bool m_cVEIDHasBeenSet;

                    /**
                     * 漏洞名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 组件
                     */
                    std::string m_component;
                    bool m_componentHasBeenSet;

                    /**
                     * 版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 分类
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 分类2
                     */
                    std::string m_categoryType;
                    bool m_categoryTypeHasBeenSet;

                    /**
                     * 风险等级
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_des;
                    bool m_desHasBeenSet;

                    /**
                     * 解决方案
                     */
                    std::string m_officialSolution;
                    bool m_officialSolutionHasBeenSet;

                    /**
                     * 引用
                     */
                    std::string m_reference;
                    bool m_referenceHasBeenSet;

                    /**
                     * 防御方案
                     */
                    std::string m_defenseSolution;
                    bool m_defenseSolutionHasBeenSet;

                    /**
                     * 提交时间
                     */
                    std::string m_submitTime;
                    bool m_submitTimeHasBeenSet;

                    /**
                     * CVSS V3分数
                     */
                    double m_cVSSV3Score;
                    bool m_cVSSV3ScoreHasBeenSet;

                    /**
                     * CVSS V3描述
                     */
                    std::string m_cVSSV3Desc;
                    bool m_cVSSV3DescHasBeenSet;

                    /**
                     * 是否是重点关注：true：是，false：不是
                     */
                    bool m_isSuggest;
                    bool m_isSuggestHasBeenSet;

                    /**
                     * 修复版本号
                     */
                    std::string m_fixedVersions;
                    bool m_fixedVersionsHasBeenSet;

                    /**
                     * 漏洞标签:"CanBeFixed","DynamicLevelPoc","DynamicLevelExp"
                     */
                    std::vector<std::string> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 攻击热度
                     */
                    int64_t m_attackLevel;
                    bool m_attackLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGESVUL_H_
