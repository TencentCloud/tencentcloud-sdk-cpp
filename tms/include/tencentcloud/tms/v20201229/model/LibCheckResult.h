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

#ifndef TENCENTCLOUD_TMS_V20201229_MODEL_LIBCHECKRESULT_H_
#define TENCENTCLOUD_TMS_V20201229_MODEL_LIBCHECKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tms/v20201229/model/Positions.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * 库检测结果
                */
                class LibCheckResult : public AbstractModel
                {
                public:
                    LibCheckResult();
                    ~LibCheckResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取库ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LibId 库ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLibId() const;

                    /**
                     * 设置库ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _libId 库ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLibId(const std::string& _libId);

                    /**
                     * 判断参数 LibId 是否已赋值
                     * @return LibId 是否已赋值
                     * 
                     */
                    bool LibIdHasBeenSet() const;

                    /**
                     * 获取库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LibName 库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLibName() const;

                    /**
                     * 设置库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _libName 库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLibName(const std::string& _libName);

                    /**
                     * 判断参数 LibName 是否已赋值
                     * @return LibName 是否已赋值
                     * 
                     */
                    bool LibNameHasBeenSet() const;

                    /**
                     * 获取库类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LibType 库类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLibType() const;

                    /**
                     * 设置库类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _libType 库类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLibType(const uint64_t& _libType);

                    /**
                     * 判断参数 LibType 是否已赋值
                     * @return LibType 是否已赋值
                     * 
                     */
                    bool LibTypeHasBeenSet() const;

                    /**
                     * 获取命中的关键词
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Keyword 命中的关键词
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置命中的关键词
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keyword 命中的关键词
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取命中的关键词在送审文本的位置，可能存在多个位置，每个位置显示开始位置和结束位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Positions 命中的关键词在送审文本的位置，可能存在多个位置，每个位置显示开始位置和结束位置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Positions> GetPositions() const;

                    /**
                     * 设置命中的关键词在送审文本的位置，可能存在多个位置，每个位置显示开始位置和结束位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _positions 命中的关键词在送审文本的位置，可能存在多个位置，每个位置显示开始位置和结束位置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPositions(const std::vector<Positions>& _positions);

                    /**
                     * 判断参数 Positions 是否已赋值
                     * @return Positions 是否已赋值
                     * 
                     */
                    bool PositionsHasBeenSet() const;

                private:

                    /**
                     * 库ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_libId;
                    bool m_libIdHasBeenSet;

                    /**
                     * 库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_libName;
                    bool m_libNameHasBeenSet;

                    /**
                     * 库类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_libType;
                    bool m_libTypeHasBeenSet;

                    /**
                     * 命中的关键词
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 命中的关键词在送审文本的位置，可能存在多个位置，每个位置显示开始位置和结束位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Positions> m_positions;
                    bool m_positionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20201229_MODEL_LIBCHECKRESULT_H_
