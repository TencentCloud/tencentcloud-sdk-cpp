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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_METASTASIS_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_METASTASIS_H_

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
                * 转移
                */
                class Metastasis : public AbstractModel
                {
                public:
                    Metastasis();
                    ~Metastasis() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取索引位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Index 索引位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置索引位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Index 索引位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取原文
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Text 原文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetText() const;

                    /**
                     * 设置原文
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Text 原文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取部位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Part 部位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPart() const;

                    /**
                     * 设置部位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Part 部位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPart(const std::string& _part);

                    /**
                     * 判断参数 Part 是否已赋值
                     * @return Part 是否已赋值
                     */
                    bool PartHasBeenSet() const;

                    /**
                     * 获取局部总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalNum 局部总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTotalNum() const;

                    /**
                     * 设置局部总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TotalNum 局部总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTotalNum(const std::string& _totalNum);

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     */
                    bool TotalNumHasBeenSet() const;

                    /**
                     * 获取转移数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransferNum 转移数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTransferNum() const;

                    /**
                     * 设置转移数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TransferNum 转移数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTransferNum(const std::string& _transferNum);

                    /**
                     * 判断参数 TransferNum 是否已赋值
                     * @return TransferNum 是否已赋值
                     */
                    bool TransferNumHasBeenSet() const;

                private:

                    /**
                     * 索引位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 原文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 部位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_part;
                    bool m_partHasBeenSet;

                    /**
                     * 局部总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_totalNum;
                    bool m_totalNumHasBeenSet;

                    /**
                     * 转移数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_transferNum;
                    bool m_transferNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_METASTASIS_H_
