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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_PATIENTFAMILYHISTORY_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_PATIENTFAMILYHISTORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Aca
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 患者家族病史
                */
                class PatientFamilyHistory : public AbstractModel
                {
                public:
                    PatientFamilyHistory();
                    ~PatientFamilyHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取家族病史 如家族病史不能分开，可传入此字段
                     * @return FamilyDiseaseHistory 家族病史 如家族病史不能分开，可传入此字段
                     * 
                     */
                    std::string GetFamilyDiseaseHistory() const;

                    /**
                     * 设置家族病史 如家族病史不能分开，可传入此字段
                     * @param _familyDiseaseHistory 家族病史 如家族病史不能分开，可传入此字段
                     * 
                     */
                    void SetFamilyDiseaseHistory(const std::string& _familyDiseaseHistory);

                    /**
                     * 判断参数 FamilyDiseaseHistory 是否已赋值
                     * @return FamilyDiseaseHistory 是否已赋值
                     * 
                     */
                    bool FamilyDiseaseHistoryHasBeenSet() const;

                    /**
                     * 获取关系
                     * @return Relation 关系
                     * 
                     */
                    std::string GetRelation() const;

                    /**
                     * 设置关系
                     * @param _relation 关系
                     * 
                     */
                    void SetRelation(const std::string& _relation);

                    /**
                     * 判断参数 Relation 是否已赋值
                     * @return Relation 是否已赋值
                     * 
                     */
                    bool RelationHasBeenSet() const;

                    /**
                     * 获取当前情况
                     * @return CurrentSituation 当前情况
                     * 
                     */
                    std::string GetCurrentSituation() const;

                    /**
                     * 设置当前情况
                     * @param _currentSituation 当前情况
                     * 
                     */
                    void SetCurrentSituation(const std::string& _currentSituation);

                    /**
                     * 判断参数 CurrentSituation 是否已赋值
                     * @return CurrentSituation 是否已赋值
                     * 
                     */
                    bool CurrentSituationHasBeenSet() const;

                private:

                    /**
                     * 家族病史 如家族病史不能分开，可传入此字段
                     */
                    std::string m_familyDiseaseHistory;
                    bool m_familyDiseaseHistoryHasBeenSet;

                    /**
                     * 关系
                     */
                    std::string m_relation;
                    bool m_relationHasBeenSet;

                    /**
                     * 当前情况
                     */
                    std::string m_currentSituation;
                    bool m_currentSituationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_PATIENTFAMILYHISTORY_H_
