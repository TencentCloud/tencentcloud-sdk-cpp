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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_HISTOLOGYTYPE_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_HISTOLOGYTYPE_H_

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
                * 类型
                */
                class HistologyType : public AbstractModel
                {
                public:
                    HistologyType();
                    ~HistologyType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取浸润
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Infiltration 浸润
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInfiltration() const;

                    /**
                     * 设置浸润
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Infiltration 浸润
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInfiltration(const std::string& _infiltration);

                    /**
                     * 判断参数 Infiltration 是否已赋值
                     * @return Infiltration 是否已赋值
                     */
                    bool InfiltrationHasBeenSet() const;

                    /**
                     * 获取原文位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Index 原文位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> GetIndex() const;

                    /**
                     * 设置原文位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Index 原文位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIndex(const std::vector<int64_t>& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取原文
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Src 原文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSrc() const;

                    /**
                     * 设置原文
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Src 原文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSrc(const std::string& _src);

                    /**
                     * 判断参数 Src 是否已赋值
                     * @return Src 是否已赋值
                     */
                    bool SrcHasBeenSet() const;

                    /**
                     * 获取类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Type 类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 浸润
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_infiltration;
                    bool m_infiltrationHasBeenSet;

                    /**
                     * 原文位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 原文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_src;
                    bool m_srcHasBeenSet;

                    /**
                     * 类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_HISTOLOGYTYPE_H_
