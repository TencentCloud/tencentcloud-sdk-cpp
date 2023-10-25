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

#ifndef TENCENTCLOUD_TMS_V20201229_MODEL_HITINFO_H_
#define TENCENTCLOUD_TMS_V20201229_MODEL_HITINFO_H_

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
                * 关键词命中位置信息
                */
                class HitInfo : public AbstractModel
                {
                public:
                    HitInfo();
                    ~HitInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标识模型命中还是关键词命中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 标识模型命中还是关键词命中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置标识模型命中还是关键词命中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 标识模型命中还是关键词命中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取命中关键词
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Keyword 命中关键词
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置命中关键词
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keyword 命中关键词
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
                     * 获取自定义词库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LibName 自定义词库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLibName() const;

                    /**
                     * 设置自定义词库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _libName 自定义词库名称
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
                     * 获取位置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Positions 位置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Positions> GetPositions() const;

                    /**
                     * 设置位置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _positions 位置信息
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
                     * 标识模型命中还是关键词命中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 命中关键词
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 自定义词库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_libName;
                    bool m_libNameHasBeenSet;

                    /**
                     * 位置信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Positions> m_positions;
                    bool m_positionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20201229_MODEL_HITINFO_H_
