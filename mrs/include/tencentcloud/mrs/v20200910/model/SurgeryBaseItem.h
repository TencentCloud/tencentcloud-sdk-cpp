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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_SURGERYBASEITEM_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_SURGERYBASEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/SurgeryHeadNeck.h>
#include <tencentcloud/mrs/v20200910/model/SurgeryThyroid.h>
#include <tencentcloud/mrs/v20200910/model/SurgeryBreast.h>
#include <tencentcloud/mrs/v20200910/model/SurgeryLymphNode.h>
#include <tencentcloud/mrs/v20200910/model/SurgerySpinalExtremities.h>
#include <tencentcloud/mrs/v20200910/model/SurgerySkin.h>
#include <tencentcloud/mrs/v20200910/model/SurgeryAnorectal.h>
#include <tencentcloud/mrs/v20200910/model/SurgeryUrogenitalSystem.h>
#include <tencentcloud/mrs/v20200910/model/KeyValueItem.h>
#include <tencentcloud/mrs/v20200910/model/SurgeryBriefSummary.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 体检报告-外科
                */
                class SurgeryBaseItem : public AbstractModel
                {
                public:
                    SurgeryBaseItem();
                    ~SurgeryBaseItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取体检报告-外科-头颈部
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HeadNeck 体检报告-外科-头颈部
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SurgeryHeadNeck GetHeadNeck() const;

                    /**
                     * 设置体检报告-外科-头颈部
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _headNeck 体检报告-外科-头颈部
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeadNeck(const SurgeryHeadNeck& _headNeck);

                    /**
                     * 判断参数 HeadNeck 是否已赋值
                     * @return HeadNeck 是否已赋值
                     * 
                     */
                    bool HeadNeckHasBeenSet() const;

                    /**
                     * 获取体检报告-外科-甲状腺
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Thyroid 体检报告-外科-甲状腺
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SurgeryThyroid GetThyroid() const;

                    /**
                     * 设置体检报告-外科-甲状腺
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _thyroid 体检报告-外科-甲状腺
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetThyroid(const SurgeryThyroid& _thyroid);

                    /**
                     * 判断参数 Thyroid 是否已赋值
                     * @return Thyroid 是否已赋值
                     * 
                     */
                    bool ThyroidHasBeenSet() const;

                    /**
                     * 获取体检报告-外科-乳房
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Breast 体检报告-外科-乳房
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SurgeryBreast GetBreast() const;

                    /**
                     * 设置体检报告-外科-乳房
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _breast 体检报告-外科-乳房
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBreast(const SurgeryBreast& _breast);

                    /**
                     * 判断参数 Breast 是否已赋值
                     * @return Breast 是否已赋值
                     * 
                     */
                    bool BreastHasBeenSet() const;

                    /**
                     * 获取体检报告-外科-浅表淋巴结
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LymphNode 体检报告-外科-浅表淋巴结
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SurgeryLymphNode GetLymphNode() const;

                    /**
                     * 设置体检报告-外科-浅表淋巴结
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lymphNode 体检报告-外科-浅表淋巴结
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLymphNode(const SurgeryLymphNode& _lymphNode);

                    /**
                     * 判断参数 LymphNode 是否已赋值
                     * @return LymphNode 是否已赋值
                     * 
                     */
                    bool LymphNodeHasBeenSet() const;

                    /**
                     * 获取体检报告-外科-脊柱
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpinalExtremities 体检报告-外科-脊柱
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SurgerySpinalExtremities GetSpinalExtremities() const;

                    /**
                     * 设置体检报告-外科-脊柱
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _spinalExtremities 体检报告-外科-脊柱
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpinalExtremities(const SurgerySpinalExtremities& _spinalExtremities);

                    /**
                     * 判断参数 SpinalExtremities 是否已赋值
                     * @return SpinalExtremities 是否已赋值
                     * 
                     */
                    bool SpinalExtremitiesHasBeenSet() const;

                    /**
                     * 获取体检报告-外科-皮肤
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Skin 体检报告-外科-皮肤
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SurgerySkin GetSkin() const;

                    /**
                     * 设置体检报告-外科-皮肤
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _skin 体检报告-外科-皮肤
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSkin(const SurgerySkin& _skin);

                    /**
                     * 判断参数 Skin 是否已赋值
                     * @return Skin 是否已赋值
                     * 
                     */
                    bool SkinHasBeenSet() const;

                    /**
                     * 获取体检报告-外科-肛门直肠
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Anorectal 体检报告-外科-肛门直肠
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SurgeryAnorectal GetAnorectal() const;

                    /**
                     * 设置体检报告-外科-肛门直肠
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _anorectal 体检报告-外科-肛门直肠
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAnorectal(const SurgeryAnorectal& _anorectal);

                    /**
                     * 判断参数 Anorectal 是否已赋值
                     * @return Anorectal 是否已赋值
                     * 
                     */
                    bool AnorectalHasBeenSet() const;

                    /**
                     * 获取体检报告-外科-泌尿生殖系统
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UrogenitalSystem 体检报告-外科-泌尿生殖系统
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SurgeryUrogenitalSystem GetUrogenitalSystem() const;

                    /**
                     * 设置体检报告-外科-泌尿生殖系统
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _urogenitalSystem 体检报告-外科-泌尿生殖系统
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUrogenitalSystem(const SurgeryUrogenitalSystem& _urogenitalSystem);

                    /**
                     * 判断参数 UrogenitalSystem 是否已赋值
                     * @return UrogenitalSystem 是否已赋值
                     * 
                     */
                    bool UrogenitalSystemHasBeenSet() const;

                    /**
                     * 获取体检报告-外科-外科其他
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Others 体检报告-外科-外科其他
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KeyValueItem> GetOthers() const;

                    /**
                     * 设置体检报告-外科-外科其他
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _others 体检报告-外科-外科其他
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOthers(const std::vector<KeyValueItem>& _others);

                    /**
                     * 判断参数 Others 是否已赋值
                     * @return Others 是否已赋值
                     * 
                     */
                    bool OthersHasBeenSet() const;

                    /**
                     * 获取体检报告-外科-小结
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BriefSummary 体检报告-外科-小结
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SurgeryBriefSummary GetBriefSummary() const;

                    /**
                     * 设置体检报告-外科-小结
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _briefSummary 体检报告-外科-小结
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBriefSummary(const SurgeryBriefSummary& _briefSummary);

                    /**
                     * 判断参数 BriefSummary 是否已赋值
                     * @return BriefSummary 是否已赋值
                     * 
                     */
                    bool BriefSummaryHasBeenSet() const;

                private:

                    /**
                     * 体检报告-外科-头颈部
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SurgeryHeadNeck m_headNeck;
                    bool m_headNeckHasBeenSet;

                    /**
                     * 体检报告-外科-甲状腺
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SurgeryThyroid m_thyroid;
                    bool m_thyroidHasBeenSet;

                    /**
                     * 体检报告-外科-乳房
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SurgeryBreast m_breast;
                    bool m_breastHasBeenSet;

                    /**
                     * 体检报告-外科-浅表淋巴结
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SurgeryLymphNode m_lymphNode;
                    bool m_lymphNodeHasBeenSet;

                    /**
                     * 体检报告-外科-脊柱
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SurgerySpinalExtremities m_spinalExtremities;
                    bool m_spinalExtremitiesHasBeenSet;

                    /**
                     * 体检报告-外科-皮肤
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SurgerySkin m_skin;
                    bool m_skinHasBeenSet;

                    /**
                     * 体检报告-外科-肛门直肠
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SurgeryAnorectal m_anorectal;
                    bool m_anorectalHasBeenSet;

                    /**
                     * 体检报告-外科-泌尿生殖系统
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SurgeryUrogenitalSystem m_urogenitalSystem;
                    bool m_urogenitalSystemHasBeenSet;

                    /**
                     * 体检报告-外科-外科其他
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KeyValueItem> m_others;
                    bool m_othersHasBeenSet;

                    /**
                     * 体检报告-外科-小结
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SurgeryBriefSummary m_briefSummary;
                    bool m_briefSummaryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_SURGERYBASEITEM_H_
