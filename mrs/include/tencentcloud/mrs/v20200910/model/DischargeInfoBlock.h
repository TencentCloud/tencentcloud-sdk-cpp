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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_DISCHARGEINFOBLOCK_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_DISCHARGEINFOBLOCK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/DiseaseHistoryBlock.h>
#include <tencentcloud/mrs/v20200910/model/PersonalHistoryBlock.h>
#include <tencentcloud/mrs/v20200910/model/DrugHistoryBlock.h>
#include <tencentcloud/mrs/v20200910/model/TreatmentRecordBlock.h>
#include <tencentcloud/mrs/v20200910/model/ParagraphBlock.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 出入院结构体
                */
                class DischargeInfoBlock : public AbstractModel
                {
                public:
                    DischargeInfoBlock();
                    ~DischargeInfoBlock() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取疾病史
                     * @return DiseaseHistory 疾病史
                     * 
                     */
                    DiseaseHistoryBlock GetDiseaseHistory() const;

                    /**
                     * 设置疾病史
                     * @param _diseaseHistory 疾病史
                     * 
                     */
                    void SetDiseaseHistory(const DiseaseHistoryBlock& _diseaseHistory);

                    /**
                     * 判断参数 DiseaseHistory 是否已赋值
                     * @return DiseaseHistory 是否已赋值
                     * 
                     */
                    bool DiseaseHistoryHasBeenSet() const;

                    /**
                     * 获取个人史
                     * @return PersonalHistory 个人史
                     * 
                     */
                    PersonalHistoryBlock GetPersonalHistory() const;

                    /**
                     * 设置个人史
                     * @param _personalHistory 个人史
                     * 
                     */
                    void SetPersonalHistory(const PersonalHistoryBlock& _personalHistory);

                    /**
                     * 判断参数 PersonalHistory 是否已赋值
                     * @return PersonalHistory 是否已赋值
                     * 
                     */
                    bool PersonalHistoryHasBeenSet() const;

                    /**
                     * 获取药物史
                     * @return DrugHistory 药物史
                     * 
                     */
                    DrugHistoryBlock GetDrugHistory() const;

                    /**
                     * 设置药物史
                     * @param _drugHistory 药物史
                     * 
                     */
                    void SetDrugHistory(const DrugHistoryBlock& _drugHistory);

                    /**
                     * 判断参数 DrugHistory 是否已赋值
                     * @return DrugHistory 是否已赋值
                     * 
                     */
                    bool DrugHistoryHasBeenSet() const;

                    /**
                     * 获取治疗相关
                     * @return TreatmentRecord 治疗相关
                     * 
                     */
                    TreatmentRecordBlock GetTreatmentRecord() const;

                    /**
                     * 设置治疗相关
                     * @param _treatmentRecord 治疗相关
                     * 
                     */
                    void SetTreatmentRecord(const TreatmentRecordBlock& _treatmentRecord);

                    /**
                     * 判断参数 TreatmentRecord 是否已赋值
                     * @return TreatmentRecord 是否已赋值
                     * 
                     */
                    bool TreatmentRecordHasBeenSet() const;

                    /**
                     * 获取文本段落
                     * @return ParagraphBlock 文本段落
                     * 
                     */
                    ParagraphBlock GetParagraphBlock() const;

                    /**
                     * 设置文本段落
                     * @param _paragraphBlock 文本段落
                     * 
                     */
                    void SetParagraphBlock(const ParagraphBlock& _paragraphBlock);

                    /**
                     * 判断参数 ParagraphBlock 是否已赋值
                     * @return ParagraphBlock 是否已赋值
                     * 
                     */
                    bool ParagraphBlockHasBeenSet() const;

                    /**
                     * 获取数据在原PDF文件中的第几页
                     * @return Page 数据在原PDF文件中的第几页
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置数据在原PDF文件中的第几页
                     * @param _page 数据在原PDF文件中的第几页
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                private:

                    /**
                     * 疾病史
                     */
                    DiseaseHistoryBlock m_diseaseHistory;
                    bool m_diseaseHistoryHasBeenSet;

                    /**
                     * 个人史
                     */
                    PersonalHistoryBlock m_personalHistory;
                    bool m_personalHistoryHasBeenSet;

                    /**
                     * 药物史
                     */
                    DrugHistoryBlock m_drugHistory;
                    bool m_drugHistoryHasBeenSet;

                    /**
                     * 治疗相关
                     */
                    TreatmentRecordBlock m_treatmentRecord;
                    bool m_treatmentRecordHasBeenSet;

                    /**
                     * 文本段落
                     */
                    ParagraphBlock m_paragraphBlock;
                    bool m_paragraphBlockHasBeenSet;

                    /**
                     * 数据在原PDF文件中的第几页
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_DISCHARGEINFOBLOCK_H_
