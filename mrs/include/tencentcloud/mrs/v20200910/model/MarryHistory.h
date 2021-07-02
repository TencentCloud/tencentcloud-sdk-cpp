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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_MARRYHISTORY_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_MARRYHISTORY_H_

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
                * 婚育史
                */
                class MarryHistory : public AbstractModel
                {
                public:
                    MarryHistory();
                    ~MarryHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取结婚史
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Marriage 结婚史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMarriage() const;

                    /**
                     * 设置结婚史
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Marriage 结婚史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMarriage(const std::string& _marriage);

                    /**
                     * 判断参数 Marriage 是否已赋值
                     * @return Marriage 是否已赋值
                     */
                    bool MarriageHasBeenSet() const;

                    /**
                     * 获取生育史
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Fertility 生育史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFertility() const;

                    /**
                     * 设置生育史
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Fertility 生育史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFertility(const std::string& _fertility);

                    /**
                     * 判断参数 Fertility 是否已赋值
                     * @return Fertility 是否已赋值
                     */
                    bool FertilityHasBeenSet() const;

                private:

                    /**
                     * 结婚史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_marriage;
                    bool m_marriageHasBeenSet;

                    /**
                     * 生育史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fertility;
                    bool m_fertilityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_MARRYHISTORY_H_
