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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_PATHOLOGYV2_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_PATHOLOGYV2_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/Report.h>
#include <tencentcloud/mrs/v20200910/model/DescInfo.h>
#include <tencentcloud/mrs/v20200910/model/SummaryInfo.h>
#include <tencentcloud/mrs/v20200910/model/LymphTotal.h>
#include <tencentcloud/mrs/v20200910/model/LymphNode.h>
#include <tencentcloud/mrs/v20200910/model/IHCV2.h>
#include <tencentcloud/mrs/v20200910/model/BaseInfo.h>
#include <tencentcloud/mrs/v20200910/model/HistologyClass.h>
#include <tencentcloud/mrs/v20200910/model/Size.h>
#include <tencentcloud/mrs/v20200910/model/Molecular.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 病理报告v2
                */
                class PathologyV2 : public AbstractModel
                {
                public:
                    PathologyV2();
                    ~PathologyV2() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取报告类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PathologicalReportType 报告类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Report GetPathologicalReportType() const;

                    /**
                     * 设置报告类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PathologicalReportType 报告类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPathologicalReportType(const Report& _pathologicalReportType);

                    /**
                     * 判断参数 PathologicalReportType 是否已赋值
                     * @return PathologicalReportType 是否已赋值
                     */
                    bool PathologicalReportTypeHasBeenSet() const;

                    /**
                     * 获取描述段落
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Desc 描述段落
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescInfo GetDesc() const;

                    /**
                     * 设置描述段落
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Desc 描述段落
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDesc(const DescInfo& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取诊断结论
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Summary 诊断结论
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SummaryInfo GetSummary() const;

                    /**
                     * 设置诊断结论
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Summary 诊断结论
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSummary(const SummaryInfo& _summary);

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     */
                    bool SummaryHasBeenSet() const;

                    /**
                     * 获取报告全文
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReportText 报告全文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetReportText() const;

                    /**
                     * 设置报告全文
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ReportText 报告全文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetReportText(const std::string& _reportText);

                    /**
                     * 判断参数 ReportText 是否已赋值
                     * @return ReportText 是否已赋值
                     */
                    bool ReportTextHasBeenSet() const;

                    /**
                     * 获取淋巴结总计转移信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LymphTotal 淋巴结总计转移信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LymphTotal> GetLymphTotal() const;

                    /**
                     * 设置淋巴结总计转移信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LymphTotal 淋巴结总计转移信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLymphTotal(const std::vector<LymphTotal>& _lymphTotal);

                    /**
                     * 判断参数 LymphTotal 是否已赋值
                     * @return LymphTotal 是否已赋值
                     */
                    bool LymphTotalHasBeenSet() const;

                    /**
                     * 获取单淋巴结转移信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LymphNodes 单淋巴结转移信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LymphNode> GetLymphNodes() const;

                    /**
                     * 设置单淋巴结转移信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LymphNodes 单淋巴结转移信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLymphNodes(const std::vector<LymphNode>& _lymphNodes);

                    /**
                     * 判断参数 LymphNodes 是否已赋值
                     * @return LymphNodes 是否已赋值
                     */
                    bool LymphNodesHasBeenSet() const;

                    /**
                     * 获取ihc信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ihc ihc信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IHCV2> GetIhc() const;

                    /**
                     * 设置ihc信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Ihc ihc信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIhc(const std::vector<IHCV2>& _ihc);

                    /**
                     * 判断参数 Ihc 是否已赋值
                     * @return Ihc 是否已赋值
                     */
                    bool IhcHasBeenSet() const;

                    /**
                     * 获取临床诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Clinical 临床诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaseInfo GetClinical() const;

                    /**
                     * 设置临床诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Clinical 临床诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClinical(const BaseInfo& _clinical);

                    /**
                     * 判断参数 Clinical 是否已赋值
                     * @return Clinical 是否已赋值
                     */
                    bool ClinicalHasBeenSet() const;

                    /**
                     * 获取是否癌前病变
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Precancer 是否癌前病变
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HistologyClass GetPrecancer() const;

                    /**
                     * 设置是否癌前病变
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Precancer 是否癌前病变
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPrecancer(const HistologyClass& _precancer);

                    /**
                     * 判断参数 Precancer 是否已赋值
                     * @return Precancer 是否已赋值
                     */
                    bool PrecancerHasBeenSet() const;

                    /**
                     * 获取是否恶性肿瘤
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Malignant 是否恶性肿瘤
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HistologyClass GetMalignant() const;

                    /**
                     * 设置是否恶性肿瘤
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Malignant 是否恶性肿瘤
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMalignant(const HistologyClass& _malignant);

                    /**
                     * 判断参数 Malignant 是否已赋值
                     * @return Malignant 是否已赋值
                     */
                    bool MalignantHasBeenSet() const;

                    /**
                     * 获取是否良性肿瘤
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Benigntumor 是否良性肿瘤
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HistologyClass GetBenigntumor() const;

                    /**
                     * 设置是否良性肿瘤
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Benigntumor 是否良性肿瘤
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBenigntumor(const HistologyClass& _benigntumor);

                    /**
                     * 判断参数 Benigntumor 是否已赋值
                     * @return Benigntumor 是否已赋值
                     */
                    bool BenigntumorHasBeenSet() const;

                    /**
                     * 获取送检材料
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SampleType 送检材料
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaseInfo GetSampleType() const;

                    /**
                     * 设置送检材料
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SampleType 送检材料
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSampleType(const BaseInfo& _sampleType);

                    /**
                     * 判断参数 SampleType 是否已赋值
                     * @return SampleType 是否已赋值
                     */
                    bool SampleTypeHasBeenSet() const;

                    /**
                     * 获取淋巴结大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LymphSize 淋巴结大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Size> GetLymphSize() const;

                    /**
                     * 设置淋巴结大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LymphSize 淋巴结大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLymphSize(const std::vector<Size>& _lymphSize);

                    /**
                     * 判断参数 LymphSize 是否已赋值
                     * @return LymphSize 是否已赋值
                     */
                    bool LymphSizeHasBeenSet() const;

                    /**
                     * 获取分子病理
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Molecular 分子病理
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Molecular> GetMolecular() const;

                    /**
                     * 设置分子病理
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Molecular 分子病理
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMolecular(const std::vector<Molecular>& _molecular);

                    /**
                     * 判断参数 Molecular 是否已赋值
                     * @return Molecular 是否已赋值
                     */
                    bool MolecularHasBeenSet() const;

                private:

                    /**
                     * 报告类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Report m_pathologicalReportType;
                    bool m_pathologicalReportTypeHasBeenSet;

                    /**
                     * 描述段落
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescInfo m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 诊断结论
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SummaryInfo m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * 报告全文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reportText;
                    bool m_reportTextHasBeenSet;

                    /**
                     * 淋巴结总计转移信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LymphTotal> m_lymphTotal;
                    bool m_lymphTotalHasBeenSet;

                    /**
                     * 单淋巴结转移信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LymphNode> m_lymphNodes;
                    bool m_lymphNodesHasBeenSet;

                    /**
                     * ihc信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IHCV2> m_ihc;
                    bool m_ihcHasBeenSet;

                    /**
                     * 临床诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaseInfo m_clinical;
                    bool m_clinicalHasBeenSet;

                    /**
                     * 是否癌前病变
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HistologyClass m_precancer;
                    bool m_precancerHasBeenSet;

                    /**
                     * 是否恶性肿瘤
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HistologyClass m_malignant;
                    bool m_malignantHasBeenSet;

                    /**
                     * 是否良性肿瘤
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HistologyClass m_benigntumor;
                    bool m_benigntumorHasBeenSet;

                    /**
                     * 送检材料
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaseInfo m_sampleType;
                    bool m_sampleTypeHasBeenSet;

                    /**
                     * 淋巴结大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Size> m_lymphSize;
                    bool m_lymphSizeHasBeenSet;

                    /**
                     * 分子病理
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Molecular> m_molecular;
                    bool m_molecularHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_PATHOLOGYV2_H_
