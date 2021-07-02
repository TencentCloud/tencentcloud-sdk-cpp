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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_IMAGEREPORT_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_IMAGEREPORT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/ImageText.h>
#include <tencentcloud/mrs/v20200910/model/KindItem.h>
#include <tencentcloud/mrs/v20200910/model/BasicInfo.h>
#include <tencentcloud/mrs/v20200910/model/PersonalInfo.h>
#include <tencentcloud/mrs/v20200910/model/TestItem.h>
#include <tencentcloud/mrs/v20200910/model/Inspection.h>
#include <tencentcloud/mrs/v20200910/model/CaseHistory.h>
#include <tencentcloud/mrs/v20200910/model/Pathology.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 报告内容
                */
                class ImageReport : public AbstractModel
                {
                public:
                    ImageReport();
                    ~ImageReport() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取报告文本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageText 报告文本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageText GetImageText() const;

                    /**
                     * 设置报告文本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ImageText 报告文本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetImageText(const ImageText& _imageText);

                    /**
                     * 判断参数 ImageText 是否已赋值
                     * @return ImageText 是否已赋值
                     */
                    bool ImageTextHasBeenSet() const;

                    /**
                     * 获取报告类别信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KindSet 报告类别信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KindItem> GetKindSet() const;

                    /**
                     * 设置报告类别信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param KindSet 报告类别信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetKindSet(const std::vector<KindItem>& _kindSet);

                    /**
                     * 判断参数 KindSet 是否已赋值
                     * @return KindSet 是否已赋值
                     */
                    bool KindSetHasBeenSet() const;

                    /**
                     * 获取基本信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BasicInfo 基本信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BasicInfo GetBasicInfo() const;

                    /**
                     * 设置基本信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BasicInfo 基本信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBasicInfo(const BasicInfo& _basicInfo);

                    /**
                     * 判断参数 BasicInfo 是否已赋值
                     * @return BasicInfo 是否已赋值
                     */
                    bool BasicInfoHasBeenSet() const;

                    /**
                     * 获取个人隐私信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PersonalInfo 个人隐私信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PersonalInfo GetPersonalInfo() const;

                    /**
                     * 设置个人隐私信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PersonalInfo 个人隐私信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPersonalInfo(const PersonalInfo& _personalInfo);

                    /**
                     * 判断参数 PersonalInfo 是否已赋值
                     * @return PersonalInfo 是否已赋值
                     */
                    bool PersonalInfoHasBeenSet() const;

                    /**
                     * 获取检验指标内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TestList 检验指标内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TestItem> GetTestList() const;

                    /**
                     * 设置检验指标内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TestList 检验指标内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTestList(const std::vector<TestItem>& _testList);

                    /**
                     * 判断参数 TestList 是否已赋值
                     * @return TestList 是否已赋值
                     */
                    bool TestListHasBeenSet() const;

                    /**
                     * 获取检查报告内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Inspection 检查报告内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Inspection GetInspection() const;

                    /**
                     * 设置检查报告内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Inspection 检查报告内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInspection(const Inspection& _inspection);

                    /**
                     * 判断参数 Inspection 是否已赋值
                     * @return Inspection 是否已赋值
                     */
                    bool InspectionHasBeenSet() const;

                    /**
                     * 获取病历资料内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CaseHistory 病历资料内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CaseHistory GetCaseHistory() const;

                    /**
                     * 设置病历资料内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CaseHistory 病历资料内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCaseHistory(const CaseHistory& _caseHistory);

                    /**
                     * 判断参数 CaseHistory 是否已赋值
                     * @return CaseHistory 是否已赋值
                     */
                    bool CaseHistoryHasBeenSet() const;

                    /**
                     * 获取病理报告内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Pathology 病理报告内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Pathology GetPathology() const;

                    /**
                     * 设置病理报告内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Pathology 病理报告内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPathology(const Pathology& _pathology);

                    /**
                     * 判断参数 Pathology 是否已赋值
                     * @return Pathology 是否已赋值
                     */
                    bool PathologyHasBeenSet() const;

                private:

                    /**
                     * 报告文本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageText m_imageText;
                    bool m_imageTextHasBeenSet;

                    /**
                     * 报告类别信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KindItem> m_kindSet;
                    bool m_kindSetHasBeenSet;

                    /**
                     * 基本信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BasicInfo m_basicInfo;
                    bool m_basicInfoHasBeenSet;

                    /**
                     * 个人隐私信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PersonalInfo m_personalInfo;
                    bool m_personalInfoHasBeenSet;

                    /**
                     * 检验指标内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TestItem> m_testList;
                    bool m_testListHasBeenSet;

                    /**
                     * 检查报告内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Inspection m_inspection;
                    bool m_inspectionHasBeenSet;

                    /**
                     * 病历资料内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CaseHistory m_caseHistory;
                    bool m_caseHistoryHasBeenSet;

                    /**
                     * 病理报告内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Pathology m_pathology;
                    bool m_pathologyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_IMAGEREPORT_H_
