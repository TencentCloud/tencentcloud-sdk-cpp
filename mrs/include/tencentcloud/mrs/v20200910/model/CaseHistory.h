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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_CASEHISTORY_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_CASEHISTORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/Treatment.h>
#include <tencentcloud/mrs/v20200910/model/HealthHistory.h>
#include <tencentcloud/mrs/v20200910/model/Case.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 病历资料
                */
                class CaseHistory : public AbstractModel
                {
                public:
                    CaseHistory();
                    ~CaseHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取诊治信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Treatment 诊治信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Treatment GetTreatment() const;

                    /**
                     * 设置诊治信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Treatment 诊治信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTreatment(const Treatment& _treatment);

                    /**
                     * 判断参数 Treatment 是否已赋值
                     * @return Treatment 是否已赋值
                     */
                    bool TreatmentHasBeenSet() const;

                    /**
                     * 获取健康史信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthHistory 健康史信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HealthHistory GetHealthHistory() const;

                    /**
                     * 设置健康史信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HealthHistory 健康史信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHealthHistory(const HealthHistory& _healthHistory);

                    /**
                     * 判断参数 HealthHistory 是否已赋值
                     * @return HealthHistory 是否已赋值
                     */
                    bool HealthHistoryHasBeenSet() const;

                    /**
                     * 获取病例时间轴
                     * @return CaseHistoryList 病例时间轴
                     */
                    std::vector<Case> GetCaseHistoryList() const;

                    /**
                     * 设置病例时间轴
                     * @param CaseHistoryList 病例时间轴
                     */
                    void SetCaseHistoryList(const std::vector<Case>& _caseHistoryList);

                    /**
                     * 判断参数 CaseHistoryList 是否已赋值
                     * @return CaseHistoryList 是否已赋值
                     */
                    bool CaseHistoryListHasBeenSet() const;

                private:

                    /**
                     * 诊治信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Treatment m_treatment;
                    bool m_treatmentHasBeenSet;

                    /**
                     * 健康史信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HealthHistory m_healthHistory;
                    bool m_healthHistoryHasBeenSet;

                    /**
                     * 病例时间轴
                     */
                    std::vector<Case> m_caseHistoryList;
                    bool m_caseHistoryListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_CASEHISTORY_H_
