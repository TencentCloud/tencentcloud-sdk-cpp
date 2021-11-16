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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_PRESCRIPTION_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_PRESCRIPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/Medicine.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 处方单
                */
                class Prescription : public AbstractModel
                {
                public:
                    Prescription();
                    ~Prescription() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取药品列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MedicineList 药品列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Medicine> GetMedicineList() const;

                    /**
                     * 设置药品列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MedicineList 药品列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMedicineList(const std::vector<Medicine>& _medicineList);

                    /**
                     * 判断参数 MedicineList 是否已赋值
                     * @return MedicineList 是否已赋值
                     */
                    bool MedicineListHasBeenSet() const;

                private:

                    /**
                     * 药品列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Medicine> m_medicineList;
                    bool m_medicineListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_PRESCRIPTION_H_
