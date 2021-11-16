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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_ENDOSCOPYORGAN_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_ENDOSCOPYORGAN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/Part.h>
#include <tencentcloud/mrs/v20200910/model/BlockInfo.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 内窥部位
                */
                class EndoscopyOrgan : public AbstractModel
                {
                public:
                    EndoscopyOrgan();
                    ~EndoscopyOrgan() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取部位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Part 部位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Part GetPart() const;

                    /**
                     * 设置部位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Part 部位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPart(const Part& _part);

                    /**
                     * 判断参数 Part 是否已赋值
                     * @return Part 是否已赋值
                     */
                    bool PartHasBeenSet() const;

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
                     * 获取部位别名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PartAlias 部位别名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPartAlias() const;

                    /**
                     * 设置部位别名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PartAlias 部位别名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPartAlias(const std::string& _partAlias);

                    /**
                     * 判断参数 PartAlias 是否已赋值
                     * @return PartAlias 是否已赋值
                     */
                    bool PartAliasHasBeenSet() const;

                    /**
                     * 获取症状描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SymDescList 症状描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BlockInfo> GetSymDescList() const;

                    /**
                     * 设置症状描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SymDescList 症状描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSymDescList(const std::vector<BlockInfo>& _symDescList);

                    /**
                     * 判断参数 SymDescList 是否已赋值
                     * @return SymDescList 是否已赋值
                     */
                    bool SymDescListHasBeenSet() const;

                private:

                    /**
                     * 部位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Part m_part;
                    bool m_partHasBeenSet;

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
                     * 部位别名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_partAlias;
                    bool m_partAliasHasBeenSet;

                    /**
                     * 症状描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BlockInfo> m_symDescList;
                    bool m_symDescListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_ENDOSCOPYORGAN_H_
