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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_PATHOLOGY_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_PATHOLOGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/Invasive.h>
#include <tencentcloud/mrs/v20200910/model/Metastasis.h>
#include <tencentcloud/mrs/v20200910/model/IHC.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 病理内容
                */
                class Pathology : public AbstractModel
                {
                public:
                    Pathology();
                    ~Pathology() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取病理类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PathologicalType 病理类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPathologicalType() const;

                    /**
                     * 设置病理类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PathologicalType 病理类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPathologicalType(const std::string& _pathologicalType);

                    /**
                     * 判断参数 PathologicalType 是否已赋值
                     * @return PathologicalType 是否已赋值
                     */
                    bool PathologicalTypeHasBeenSet() const;

                    /**
                     * 获取侵润深度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InfiltrationDepth 侵润深度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInfiltrationDepth() const;

                    /**
                     * 设置侵润深度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InfiltrationDepth 侵润深度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInfiltrationDepth(const std::string& _infiltrationDepth);

                    /**
                     * 判断参数 InfiltrationDepth 是否已赋值
                     * @return InfiltrationDepth 是否已赋值
                     */
                    bool InfiltrationDepthHasBeenSet() const;

                    /**
                     * 获取PTNM分期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PTNM PTNM分期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPTNM() const;

                    /**
                     * 设置PTNM分期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PTNM PTNM分期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPTNM(const std::string& _pTNM);

                    /**
                     * 判断参数 PTNM 是否已赋值
                     * @return PTNM 是否已赋值
                     */
                    bool PTNMHasBeenSet() const;

                    /**
                     * 获取远处转移
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DistanceMetastasis 远处转移
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDistanceMetastasis() const;

                    /**
                     * 设置远处转移
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DistanceMetastasis 远处转移
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDistanceMetastasis(const std::string& _distanceMetastasis);

                    /**
                     * 判断参数 DistanceMetastasis 是否已赋值
                     * @return DistanceMetastasis 是否已赋值
                     */
                    bool DistanceMetastasisHasBeenSet() const;

                    /**
                     * 获取影像诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SummaryText 影像诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSummaryText() const;

                    /**
                     * 设置影像诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SummaryText 影像诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSummaryText(const std::string& _summaryText);

                    /**
                     * 判断参数 SummaryText 是否已赋值
                     * @return SummaryText 是否已赋值
                     */
                    bool SummaryTextHasBeenSet() const;

                    /**
                     * 获取影像所见
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DescText 影像所见
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDescText() const;

                    /**
                     * 设置影像所见
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DescText 影像所见
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDescText(const std::string& _descText);

                    /**
                     * 判断参数 DescText 是否已赋值
                     * @return DescText 是否已赋值
                     */
                    bool DescTextHasBeenSet() const;

                    /**
                     * 获取组织学类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HistologyType 组织学类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHistologyType() const;

                    /**
                     * 设置组织学类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HistologyType 组织学类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHistologyType(const std::string& _histologyType);

                    /**
                     * 判断参数 HistologyType 是否已赋值
                     * @return HistologyType 是否已赋值
                     */
                    bool HistologyTypeHasBeenSet() const;

                    /**
                     * 获取组织学等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HistologyLevel 组织学等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHistologyLevel() const;

                    /**
                     * 设置组织学等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HistologyLevel 组织学等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHistologyLevel(const std::string& _histologyLevel);

                    /**
                     * 判断参数 HistologyLevel 是否已赋值
                     * @return HistologyLevel 是否已赋值
                     */
                    bool HistologyLevelHasBeenSet() const;

                    /**
                     * 获取标本类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SampleType 标本类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSampleType() const;

                    /**
                     * 设置标本类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SampleType 标本类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSampleType(const std::string& _sampleType);

                    /**
                     * 判断参数 SampleType 是否已赋值
                     * @return SampleType 是否已赋值
                     */
                    bool SampleTypeHasBeenSet() const;

                    /**
                     * 获取标本部位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SamplePart 标本部位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSamplePart() const;

                    /**
                     * 设置标本部位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SamplePart 标本部位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSamplePart(const std::string& _samplePart);

                    /**
                     * 判断参数 SamplePart 是否已赋值
                     * @return SamplePart 是否已赋值
                     */
                    bool SamplePartHasBeenSet() const;

                    /**
                     * 获取标本大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SampleSize 标本大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSampleSize() const;

                    /**
                     * 设置标本大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SampleSize 标本大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSampleSize(const std::string& _sampleSize);

                    /**
                     * 判断参数 SampleSize 是否已赋值
                     * @return SampleSize 是否已赋值
                     */
                    bool SampleSizeHasBeenSet() const;

                    /**
                     * 获取肿瘤扩散
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InvasiveList 肿瘤扩散
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Invasive> GetInvasiveList() const;

                    /**
                     * 设置肿瘤扩散
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InvasiveList 肿瘤扩散
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInvasiveList(const std::vector<Invasive>& _invasiveList);

                    /**
                     * 判断参数 InvasiveList 是否已赋值
                     * @return InvasiveList 是否已赋值
                     */
                    bool InvasiveListHasBeenSet() const;

                    /**
                     * 获取肿瘤转移
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetastasisList 肿瘤转移
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Metastasis> GetMetastasisList() const;

                    /**
                     * 设置肿瘤转移
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MetastasisList 肿瘤转移
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMetastasisList(const std::vector<Metastasis>& _metastasisList);

                    /**
                     * 判断参数 MetastasisList 是否已赋值
                     * @return MetastasisList 是否已赋值
                     */
                    bool MetastasisListHasBeenSet() const;

                    /**
                     * 获取免疫组化信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IHCList 免疫组化信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IHC> GetIHCList() const;

                    /**
                     * 设置免疫组化信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IHCList 免疫组化信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIHCList(const std::vector<IHC>& _iHCList);

                    /**
                     * 判断参数 IHCList 是否已赋值
                     * @return IHCList 是否已赋值
                     */
                    bool IHCListHasBeenSet() const;

                private:

                    /**
                     * 病理类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pathologicalType;
                    bool m_pathologicalTypeHasBeenSet;

                    /**
                     * 侵润深度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_infiltrationDepth;
                    bool m_infiltrationDepthHasBeenSet;

                    /**
                     * PTNM分期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pTNM;
                    bool m_pTNMHasBeenSet;

                    /**
                     * 远处转移
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_distanceMetastasis;
                    bool m_distanceMetastasisHasBeenSet;

                    /**
                     * 影像诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_summaryText;
                    bool m_summaryTextHasBeenSet;

                    /**
                     * 影像所见
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_descText;
                    bool m_descTextHasBeenSet;

                    /**
                     * 组织学类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_histologyType;
                    bool m_histologyTypeHasBeenSet;

                    /**
                     * 组织学等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_histologyLevel;
                    bool m_histologyLevelHasBeenSet;

                    /**
                     * 标本类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sampleType;
                    bool m_sampleTypeHasBeenSet;

                    /**
                     * 标本部位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_samplePart;
                    bool m_samplePartHasBeenSet;

                    /**
                     * 标本大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sampleSize;
                    bool m_sampleSizeHasBeenSet;

                    /**
                     * 肿瘤扩散
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Invasive> m_invasiveList;
                    bool m_invasiveListHasBeenSet;

                    /**
                     * 肿瘤转移
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Metastasis> m_metastasisList;
                    bool m_metastasisListHasBeenSet;

                    /**
                     * 免疫组化信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IHC> m_iHCList;
                    bool m_iHCListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_PATHOLOGY_H_
