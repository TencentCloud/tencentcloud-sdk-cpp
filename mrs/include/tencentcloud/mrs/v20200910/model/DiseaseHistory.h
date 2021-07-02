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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_DISEASEHISTORY_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_DISEASEHISTORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 病史
                */
                class DiseaseHistory : public AbstractModel
                {
                public:
                    DiseaseHistory();
                    ~DiseaseHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取过敏史
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Allergy 过敏史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAllergy() const;

                    /**
                     * 设置过敏史
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Allergy 过敏史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAllergy(const std::string& _allergy);

                    /**
                     * 判断参数 Allergy 是否已赋值
                     * @return Allergy 是否已赋值
                     */
                    bool AllergyHasBeenSet() const;

                    /**
                     * 获取传染疾病史
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Infect 传染疾病史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInfect() const;

                    /**
                     * 设置传染疾病史
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Infect 传染疾病史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInfect(const std::string& _infect);

                    /**
                     * 判断参数 Infect 是否已赋值
                     * @return Infect 是否已赋值
                     */
                    bool InfectHasBeenSet() const;

                    /**
                     * 获取主要病史
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MainDisease 主要病史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMainDisease() const;

                    /**
                     * 设置主要病史
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MainDisease 主要病史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMainDisease(const std::string& _mainDisease);

                    /**
                     * 判断参数 MainDisease 是否已赋值
                     * @return MainDisease 是否已赋值
                     */
                    bool MainDiseaseHasBeenSet() const;

                    /**
                     * 获取手术外伤史
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Operation 手术外伤史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置手术外伤史
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Operation 手术外伤史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取输血史
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Transfusion 输血史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTransfusion() const;

                    /**
                     * 设置输血史
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Transfusion 输血史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTransfusion(const std::string& _transfusion);

                    /**
                     * 判断参数 Transfusion 是否已赋值
                     * @return Transfusion 是否已赋值
                     */
                    bool TransfusionHasBeenSet() const;

                    /**
                     * 获取疾病史
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Disease 疾病史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDisease() const;

                    /**
                     * 设置疾病史
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Disease 疾病史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDisease(const std::string& _disease);

                    /**
                     * 判断参数 Disease 是否已赋值
                     * @return Disease 是否已赋值
                     */
                    bool DiseaseHasBeenSet() const;

                private:

                    /**
                     * 过敏史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_allergy;
                    bool m_allergyHasBeenSet;

                    /**
                     * 传染疾病史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_infect;
                    bool m_infectHasBeenSet;

                    /**
                     * 主要病史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mainDisease;
                    bool m_mainDiseaseHasBeenSet;

                    /**
                     * 手术外伤史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 输血史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_transfusion;
                    bool m_transfusionHasBeenSet;

                    /**
                     * 疾病史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_disease;
                    bool m_diseaseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_DISEASEHISTORY_H_
