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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_DISEASEHISTORYBLOCK_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_DISEASEHISTORYBLOCK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/MainDiseaseHistoryBlock.h>
#include <tencentcloud/mrs/v20200910/model/SurgeryHistoryBlock.h>
#include <tencentcloud/mrs/v20200910/model/TransfusionHistoryBlock.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 疾病史
                */
                class DiseaseHistoryBlock : public AbstractModel
                {
                public:
                    DiseaseHistoryBlock();
                    ~DiseaseHistoryBlock() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主要病史
                     * @return MainDiseaseHistory 主要病史
                     * 
                     */
                    MainDiseaseHistoryBlock GetMainDiseaseHistory() const;

                    /**
                     * 设置主要病史
                     * @param _mainDiseaseHistory 主要病史
                     * 
                     */
                    void SetMainDiseaseHistory(const MainDiseaseHistoryBlock& _mainDiseaseHistory);

                    /**
                     * 判断参数 MainDiseaseHistory 是否已赋值
                     * @return MainDiseaseHistory 是否已赋值
                     * 
                     */
                    bool MainDiseaseHistoryHasBeenSet() const;

                    /**
                     * 获取过敏史
                     * @return AllergyHistory 过敏史
                     * 
                     */
                    MainDiseaseHistoryBlock GetAllergyHistory() const;

                    /**
                     * 设置过敏史
                     * @param _allergyHistory 过敏史
                     * 
                     */
                    void SetAllergyHistory(const MainDiseaseHistoryBlock& _allergyHistory);

                    /**
                     * 判断参数 AllergyHistory 是否已赋值
                     * @return AllergyHistory 是否已赋值
                     * 
                     */
                    bool AllergyHistoryHasBeenSet() const;

                    /**
                     * 获取注射史
                     * @return InfectHistory 注射史
                     * 
                     */
                    MainDiseaseHistoryBlock GetInfectHistory() const;

                    /**
                     * 设置注射史
                     * @param _infectHistory 注射史
                     * 
                     */
                    void SetInfectHistory(const MainDiseaseHistoryBlock& _infectHistory);

                    /**
                     * 判断参数 InfectHistory 是否已赋值
                     * @return InfectHistory 是否已赋值
                     * 
                     */
                    bool InfectHistoryHasBeenSet() const;

                    /**
                     * 获取手术史
                     * @return SurgeryHistory 手术史
                     * 
                     */
                    SurgeryHistoryBlock GetSurgeryHistory() const;

                    /**
                     * 设置手术史
                     * @param _surgeryHistory 手术史
                     * 
                     */
                    void SetSurgeryHistory(const SurgeryHistoryBlock& _surgeryHistory);

                    /**
                     * 判断参数 SurgeryHistory 是否已赋值
                     * @return SurgeryHistory 是否已赋值
                     * 
                     */
                    bool SurgeryHistoryHasBeenSet() const;

                    /**
                     * 获取输血史
                     * @return TransfusionHistory 输血史
                     * 
                     */
                    TransfusionHistoryBlock GetTransfusionHistory() const;

                    /**
                     * 设置输血史
                     * @param _transfusionHistory 输血史
                     * 
                     */
                    void SetTransfusionHistory(const TransfusionHistoryBlock& _transfusionHistory);

                    /**
                     * 判断参数 TransfusionHistory 是否已赋值
                     * @return TransfusionHistory 是否已赋值
                     * 
                     */
                    bool TransfusionHistoryHasBeenSet() const;

                private:

                    /**
                     * 主要病史
                     */
                    MainDiseaseHistoryBlock m_mainDiseaseHistory;
                    bool m_mainDiseaseHistoryHasBeenSet;

                    /**
                     * 过敏史
                     */
                    MainDiseaseHistoryBlock m_allergyHistory;
                    bool m_allergyHistoryHasBeenSet;

                    /**
                     * 注射史
                     */
                    MainDiseaseHistoryBlock m_infectHistory;
                    bool m_infectHistoryHasBeenSet;

                    /**
                     * 手术史
                     */
                    SurgeryHistoryBlock m_surgeryHistory;
                    bool m_surgeryHistoryHasBeenSet;

                    /**
                     * 输血史
                     */
                    TransfusionHistoryBlock m_transfusionHistory;
                    bool m_transfusionHistoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_DISEASEHISTORYBLOCK_H_
