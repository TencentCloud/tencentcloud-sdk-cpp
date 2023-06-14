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

#ifndef TENCENTCLOUD_CII_V20210408_MODEL_MACHINEPREDICT_H_
#define TENCENTCLOUD_CII_V20210408_MODEL_MACHINEPREDICT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cii/v20210408/model/UnderwriteItem.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * 机器核保预测结果
                */
                class MachinePredict : public AbstractModel
                {
                public:
                    MachinePredict();
                    ~MachinePredict() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取核保引擎名称
                     * @return Title 核保引擎名称
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置核保引擎名称
                     * @param _title 核保引擎名称
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取核保结论：加费、承保、拒保、延期、除外、加费+除外
                     * @return Conclusion 核保结论：加费、承保、拒保、延期、除外、加费+除外
                     * 
                     */
                    std::string GetConclusion() const;

                    /**
                     * 设置核保结论：加费、承保、拒保、延期、除外、加费+除外
                     * @param _conclusion 核保结论：加费、承保、拒保、延期、除外、加费+除外
                     * 
                     */
                    void SetConclusion(const std::string& _conclusion);

                    /**
                     * 判断参数 Conclusion 是否已赋值
                     * @return Conclusion 是否已赋值
                     * 
                     */
                    bool ConclusionHasBeenSet() const;

                    /**
                     * 获取AI决策树解释
                     * @return Explanation AI决策树解释
                     * 
                     */
                    std::vector<UnderwriteItem> GetExplanation() const;

                    /**
                     * 设置AI决策树解释
                     * @param _explanation AI决策树解释
                     * 
                     */
                    void SetExplanation(const std::vector<UnderwriteItem>& _explanation);

                    /**
                     * 判断参数 Explanation 是否已赋值
                     * @return Explanation 是否已赋值
                     * 
                     */
                    bool ExplanationHasBeenSet() const;

                    /**
                     * 获取疾病指标
                     * @return Disease 疾病指标
                     * 
                     */
                    std::vector<UnderwriteItem> GetDisease() const;

                    /**
                     * 设置疾病指标
                     * @param _disease 疾病指标
                     * 
                     */
                    void SetDisease(const std::vector<UnderwriteItem>& _disease);

                    /**
                     * 判断参数 Disease 是否已赋值
                     * @return Disease 是否已赋值
                     * 
                     */
                    bool DiseaseHasBeenSet() const;

                    /**
                     * 获取检查异常
                     * @return Laboratory 检查异常
                     * 
                     */
                    std::vector<UnderwriteItem> GetLaboratory() const;

                    /**
                     * 设置检查异常
                     * @param _laboratory 检查异常
                     * 
                     */
                    void SetLaboratory(const std::vector<UnderwriteItem>& _laboratory);

                    /**
                     * 判断参数 Laboratory 是否已赋值
                     * @return Laboratory 是否已赋值
                     * 
                     */
                    bool LaboratoryHasBeenSet() const;

                private:

                    /**
                     * 核保引擎名称
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 核保结论：加费、承保、拒保、延期、除外、加费+除外
                     */
                    std::string m_conclusion;
                    bool m_conclusionHasBeenSet;

                    /**
                     * AI决策树解释
                     */
                    std::vector<UnderwriteItem> m_explanation;
                    bool m_explanationHasBeenSet;

                    /**
                     * 疾病指标
                     */
                    std::vector<UnderwriteItem> m_disease;
                    bool m_diseaseHasBeenSet;

                    /**
                     * 检查异常
                     */
                    std::vector<UnderwriteItem> m_laboratory;
                    bool m_laboratoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20210408_MODEL_MACHINEPREDICT_H_
