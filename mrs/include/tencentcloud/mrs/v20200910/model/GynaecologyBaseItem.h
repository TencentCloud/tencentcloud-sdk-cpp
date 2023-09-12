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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_GYNAECOLOGYBASEITEM_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_GYNAECOLOGYBASEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/GynaecologyVulva.h>
#include <tencentcloud/mrs/v20200910/model/GynaecologyVagina.h>
#include <tencentcloud/mrs/v20200910/model/GynaecologyCervix.h>
#include <tencentcloud/mrs/v20200910/model/GynaecologyUterus.h>
#include <tencentcloud/mrs/v20200910/model/GynaecologyAdnexal.h>
#include <tencentcloud/mrs/v20200910/model/GynaecologyPelvicCavity.h>
#include <tencentcloud/mrs/v20200910/model/KeyValueItem.h>
#include <tencentcloud/mrs/v20200910/model/GynaecologyMenstrualHistory.h>
#include <tencentcloud/mrs/v20200910/model/GynaecologyBriefSummary.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 体检报告-妇科
                */
                class GynaecologyBaseItem : public AbstractModel
                {
                public:
                    GynaecologyBaseItem();
                    ~GynaecologyBaseItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取外阴
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Vulva 外阴
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GynaecologyVulva GetVulva() const;

                    /**
                     * 设置外阴
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vulva 外阴
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVulva(const GynaecologyVulva& _vulva);

                    /**
                     * 判断参数 Vulva 是否已赋值
                     * @return Vulva 是否已赋值
                     * 
                     */
                    bool VulvaHasBeenSet() const;

                    /**
                     * 获取阴道
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Vagina 阴道
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GynaecologyVagina GetVagina() const;

                    /**
                     * 设置阴道
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vagina 阴道
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVagina(const GynaecologyVagina& _vagina);

                    /**
                     * 判断参数 Vagina 是否已赋值
                     * @return Vagina 是否已赋值
                     * 
                     */
                    bool VaginaHasBeenSet() const;

                    /**
                     * 获取子宫颈
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cervix 子宫颈
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GynaecologyCervix GetCervix() const;

                    /**
                     * 设置子宫颈
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cervix 子宫颈
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCervix(const GynaecologyCervix& _cervix);

                    /**
                     * 判断参数 Cervix 是否已赋值
                     * @return Cervix 是否已赋值
                     * 
                     */
                    bool CervixHasBeenSet() const;

                    /**
                     * 获取子宫
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uterus 子宫
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GynaecologyUterus GetUterus() const;

                    /**
                     * 设置子宫
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uterus 子宫
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUterus(const GynaecologyUterus& _uterus);

                    /**
                     * 判断参数 Uterus 是否已赋值
                     * @return Uterus 是否已赋值
                     * 
                     */
                    bool UterusHasBeenSet() const;

                    /**
                     * 获取子宫附件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Adnexal 子宫附件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GynaecologyAdnexal GetAdnexal() const;

                    /**
                     * 设置子宫附件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _adnexal 子宫附件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdnexal(const GynaecologyAdnexal& _adnexal);

                    /**
                     * 判断参数 Adnexal 是否已赋值
                     * @return Adnexal 是否已赋值
                     * 
                     */
                    bool AdnexalHasBeenSet() const;

                    /**
                     * 获取盆腔
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PelvicCavity 盆腔
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GynaecologyPelvicCavity GetPelvicCavity() const;

                    /**
                     * 设置盆腔
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pelvicCavity 盆腔
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPelvicCavity(const GynaecologyPelvicCavity& _pelvicCavity);

                    /**
                     * 判断参数 PelvicCavity 是否已赋值
                     * @return PelvicCavity 是否已赋值
                     * 
                     */
                    bool PelvicCavityHasBeenSet() const;

                    /**
                     * 获取妇科其他
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Others 妇科其他
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KeyValueItem> GetOthers() const;

                    /**
                     * 设置妇科其他
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _others 妇科其他
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
                     * 获取月经史
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MenstrualHistory 月经史
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GynaecologyMenstrualHistory GetMenstrualHistory() const;

                    /**
                     * 设置月经史
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _menstrualHistory 月经史
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMenstrualHistory(const GynaecologyMenstrualHistory& _menstrualHistory);

                    /**
                     * 判断参数 MenstrualHistory 是否已赋值
                     * @return MenstrualHistory 是否已赋值
                     * 
                     */
                    bool MenstrualHistoryHasBeenSet() const;

                    /**
                     * 获取小结
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BriefSummary 小结
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GynaecologyBriefSummary GetBriefSummary() const;

                    /**
                     * 设置小结
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _briefSummary 小结
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBriefSummary(const GynaecologyBriefSummary& _briefSummary);

                    /**
                     * 判断参数 BriefSummary 是否已赋值
                     * @return BriefSummary 是否已赋值
                     * 
                     */
                    bool BriefSummaryHasBeenSet() const;

                private:

                    /**
                     * 外阴
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GynaecologyVulva m_vulva;
                    bool m_vulvaHasBeenSet;

                    /**
                     * 阴道
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GynaecologyVagina m_vagina;
                    bool m_vaginaHasBeenSet;

                    /**
                     * 子宫颈
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GynaecologyCervix m_cervix;
                    bool m_cervixHasBeenSet;

                    /**
                     * 子宫
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GynaecologyUterus m_uterus;
                    bool m_uterusHasBeenSet;

                    /**
                     * 子宫附件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GynaecologyAdnexal m_adnexal;
                    bool m_adnexalHasBeenSet;

                    /**
                     * 盆腔
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GynaecologyPelvicCavity m_pelvicCavity;
                    bool m_pelvicCavityHasBeenSet;

                    /**
                     * 妇科其他
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KeyValueItem> m_others;
                    bool m_othersHasBeenSet;

                    /**
                     * 月经史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GynaecologyMenstrualHistory m_menstrualHistory;
                    bool m_menstrualHistoryHasBeenSet;

                    /**
                     * 小结
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GynaecologyBriefSummary m_briefSummary;
                    bool m_briefSummaryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_GYNAECOLOGYBASEITEM_H_
