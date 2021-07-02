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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_FAMILYHISTORY_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_FAMILYHISTORY_H_

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
                * 家族史
                */
                class FamilyHistory : public AbstractModel
                {
                public:
                    FamilyHistory();
                    ~FamilyHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取家族成员
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelativeMember 家族成员
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRelativeMember() const;

                    /**
                     * 设置家族成员
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RelativeMember 家族成员
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRelativeMember(const std::string& _relativeMember);

                    /**
                     * 判断参数 RelativeMember 是否已赋值
                     * @return RelativeMember 是否已赋值
                     */
                    bool RelativeMemberHasBeenSet() const;

                    /**
                     * 获取家族肿瘤史
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelativeCancer 家族肿瘤史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRelativeCancer() const;

                    /**
                     * 设置家族肿瘤史
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RelativeCancer 家族肿瘤史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRelativeCancer(const std::string& _relativeCancer);

                    /**
                     * 判断参数 RelativeCancer 是否已赋值
                     * @return RelativeCancer 是否已赋值
                     */
                    bool RelativeCancerHasBeenSet() const;

                    /**
                     * 获取家族遗传史
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Genetic 家族遗传史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGenetic() const;

                    /**
                     * 设置家族遗传史
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Genetic 家族遗传史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGenetic(const std::string& _genetic);

                    /**
                     * 判断参数 Genetic 是否已赋值
                     * @return Genetic 是否已赋值
                     */
                    bool GeneticHasBeenSet() const;

                private:

                    /**
                     * 家族成员
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_relativeMember;
                    bool m_relativeMemberHasBeenSet;

                    /**
                     * 家族肿瘤史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_relativeCancer;
                    bool m_relativeCancerHasBeenSet;

                    /**
                     * 家族遗传史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_genetic;
                    bool m_geneticHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_FAMILYHISTORY_H_
