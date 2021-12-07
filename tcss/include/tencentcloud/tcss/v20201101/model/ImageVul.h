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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEVUL_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEVUL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ComponentsInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 容器安全镜像漏洞信息
                */
                class ImageVul : public AbstractModel
                {
                public:
                    ImageVul();
                    ~ImageVul() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取漏洞id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CVEID 漏洞id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCVEID() const;

                    /**
                     * 设置漏洞id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CVEID 漏洞id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCVEID(const std::string& _cVEID);

                    /**
                     * 判断参数 CVEID 是否已赋值
                     * @return CVEID 是否已赋值
                     */
                    bool CVEIDHasBeenSet() const;

                    /**
                     * 获取观点验证程序id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return POCID 观点验证程序id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPOCID() const;

                    /**
                     * 设置观点验证程序id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param POCID 观点验证程序id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPOCID(const std::string& _pOCID);

                    /**
                     * 判断参数 POCID 是否已赋值
                     * @return POCID 是否已赋值
                     */
                    bool POCIDHasBeenSet() const;

                    /**
                     * 获取漏洞名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 漏洞名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置漏洞名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 漏洞名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取涉及组件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Components 涉及组件信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ComponentsInfo> GetComponents() const;

                    /**
                     * 设置涉及组件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Components 涉及组件信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetComponents(const std::vector<ComponentsInfo>& _components);

                    /**
                     * 判断参数 Components 是否已赋值
                     * @return Components 是否已赋值
                     */
                    bool ComponentsHasBeenSet() const;

                    /**
                     * 获取分类
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Category 分类
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置分类
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Category 分类
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取分类2
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CategoryType 分类2
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCategoryType() const;

                    /**
                     * 设置分类2
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CategoryType 分类2
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCategoryType(const std::string& _categoryType);

                    /**
                     * 判断参数 CategoryType 是否已赋值
                     * @return CategoryType 是否已赋值
                     */
                    bool CategoryTypeHasBeenSet() const;

                    /**
                     * 获取风险等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Level 风险等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置风险等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Level 风险等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Des 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDes() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Des 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDes(const std::string& _des);

                    /**
                     * 判断参数 Des 是否已赋值
                     * @return Des 是否已赋值
                     */
                    bool DesHasBeenSet() const;

                    /**
                     * 获取解决方案
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OfficialSolution 解决方案
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOfficialSolution() const;

                    /**
                     * 设置解决方案
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OfficialSolution 解决方案
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOfficialSolution(const std::string& _officialSolution);

                    /**
                     * 判断参数 OfficialSolution 是否已赋值
                     * @return OfficialSolution 是否已赋值
                     */
                    bool OfficialSolutionHasBeenSet() const;

                    /**
                     * 获取引用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Reference 引用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetReference() const;

                    /**
                     * 设置引用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Reference 引用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetReference(const std::string& _reference);

                    /**
                     * 判断参数 Reference 是否已赋值
                     * @return Reference 是否已赋值
                     */
                    bool ReferenceHasBeenSet() const;

                    /**
                     * 获取防御方案
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefenseSolution 防御方案
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDefenseSolution() const;

                    /**
                     * 设置防御方案
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DefenseSolution 防御方案
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDefenseSolution(const std::string& _defenseSolution);

                    /**
                     * 判断参数 DefenseSolution 是否已赋值
                     * @return DefenseSolution 是否已赋值
                     */
                    bool DefenseSolutionHasBeenSet() const;

                    /**
                     * 获取提交时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubmitTime 提交时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSubmitTime() const;

                    /**
                     * 设置提交时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SubmitTime 提交时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSubmitTime(const std::string& _submitTime);

                    /**
                     * 判断参数 SubmitTime 是否已赋值
                     * @return SubmitTime 是否已赋值
                     */
                    bool SubmitTimeHasBeenSet() const;

                    /**
                     * 获取Cvss分数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CvssScore Cvss分数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCvssScore() const;

                    /**
                     * 设置Cvss分数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CvssScore Cvss分数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCvssScore(const std::string& _cvssScore);

                    /**
                     * 判断参数 CvssScore 是否已赋值
                     * @return CvssScore 是否已赋值
                     */
                    bool CvssScoreHasBeenSet() const;

                    /**
                     * 获取Cvss信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CvssVector Cvss信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCvssVector() const;

                    /**
                     * 设置Cvss信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CvssVector Cvss信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCvssVector(const std::string& _cvssVector);

                    /**
                     * 判断参数 CvssVector 是否已赋值
                     * @return CvssVector 是否已赋值
                     */
                    bool CvssVectorHasBeenSet() const;

                    /**
                     * 获取是否建议修复
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsSuggest 是否建议修复
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIsSuggest() const;

                    /**
                     * 设置是否建议修复
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsSuggest 是否建议修复
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsSuggest(const std::string& _isSuggest);

                    /**
                     * 判断参数 IsSuggest 是否已赋值
                     * @return IsSuggest 是否已赋值
                     */
                    bool IsSuggestHasBeenSet() const;

                    /**
                     * 获取修复版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FixedVersions 修复版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFixedVersions() const;

                    /**
                     * 设置修复版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FixedVersions 修复版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFixedVersions(const std::string& _fixedVersions);

                    /**
                     * 判断参数 FixedVersions 是否已赋值
                     * @return FixedVersions 是否已赋值
                     */
                    bool FixedVersionsHasBeenSet() const;

                    /**
                     * 获取漏洞标签:"CanBeFixed","DynamicLevelPoc","DynamicLevelExp"
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tag 漏洞标签:"CanBeFixed","DynamicLevelPoc","DynamicLevelExp"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetTag() const;

                    /**
                     * 设置漏洞标签:"CanBeFixed","DynamicLevelPoc","DynamicLevelExp"
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tag 漏洞标签:"CanBeFixed","DynamicLevelPoc","DynamicLevelExp"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTag(const std::vector<std::string>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取组件名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Component 组件名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetComponent() const;

                    /**
                     * 设置组件名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Component 组件名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetComponent(const std::string& _component);

                    /**
                     * 判断参数 Component 是否已赋值
                     * @return Component 是否已赋值
                     */
                    bool ComponentHasBeenSet() const;

                    /**
                     * 获取组件版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version 组件版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置组件版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Version 组件版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     */
                    bool VersionHasBeenSet() const;

                private:

                    /**
                     * 漏洞id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cVEID;
                    bool m_cVEIDHasBeenSet;

                    /**
                     * 观点验证程序id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pOCID;
                    bool m_pOCIDHasBeenSet;

                    /**
                     * 漏洞名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 涉及组件信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ComponentsInfo> m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * 分类
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 分类2
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_categoryType;
                    bool m_categoryTypeHasBeenSet;

                    /**
                     * 风险等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_des;
                    bool m_desHasBeenSet;

                    /**
                     * 解决方案
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_officialSolution;
                    bool m_officialSolutionHasBeenSet;

                    /**
                     * 引用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reference;
                    bool m_referenceHasBeenSet;

                    /**
                     * 防御方案
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_defenseSolution;
                    bool m_defenseSolutionHasBeenSet;

                    /**
                     * 提交时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_submitTime;
                    bool m_submitTimeHasBeenSet;

                    /**
                     * Cvss分数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cvssScore;
                    bool m_cvssScoreHasBeenSet;

                    /**
                     * Cvss信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cvssVector;
                    bool m_cvssVectorHasBeenSet;

                    /**
                     * 是否建议修复
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isSuggest;
                    bool m_isSuggestHasBeenSet;

                    /**
                     * 修复版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fixedVersions;
                    bool m_fixedVersionsHasBeenSet;

                    /**
                     * 漏洞标签:"CanBeFixed","DynamicLevelPoc","DynamicLevelExp"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 组件名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_component;
                    bool m_componentHasBeenSet;

                    /**
                     * 组件版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEVUL_H_
