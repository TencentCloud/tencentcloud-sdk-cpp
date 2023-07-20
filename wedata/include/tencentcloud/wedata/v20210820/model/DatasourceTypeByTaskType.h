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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DATASOURCETYPEBYTASKTYPE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DATASOURCETYPEBYTASKTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 任务运维数据源类型信息
                */
                class DatasourceTypeByTaskType : public AbstractModel
                {
                public:
                    DatasourceTypeByTaskType();
                    ~DatasourceTypeByTaskType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取类型id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TypeId 类型id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTypeId() const;

                    /**
                     * 设置类型id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _typeId 类型id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTypeId(const int64_t& _typeId);

                    /**
                     * 判断参数 TypeId 是否已赋值
                     * @return TypeId 是否已赋值
                     * 
                     */
                    bool TypeIdHasBeenSet() const;

                    /**
                     * 获取可选数据源列表文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CandidateTexts 可选数据源列表文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCandidateTexts() const;

                    /**
                     * 设置可选数据源列表文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _candidateTexts 可选数据源列表文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCandidateTexts(const std::string& _candidateTexts);

                    /**
                     * 判断参数 CandidateTexts 是否已赋值
                     * @return CandidateTexts 是否已赋值
                     * 
                     */
                    bool CandidateTextsHasBeenSet() const;

                    /**
                     * 获取可选数据源列表取值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CandidateValues 可选数据源列表取值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCandidateValues() const;

                    /**
                     * 设置可选数据源列表取值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _candidateValues 可选数据源列表取值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCandidateValues(const std::string& _candidateValues);

                    /**
                     * 判断参数 CandidateValues 是否已赋值
                     * @return CandidateValues 是否已赋值
                     * 
                     */
                    bool CandidateValuesHasBeenSet() const;

                private:

                    /**
                     * 类型id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_typeId;
                    bool m_typeIdHasBeenSet;

                    /**
                     * 可选数据源列表文本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_candidateTexts;
                    bool m_candidateTextsHasBeenSet;

                    /**
                     * 可选数据源列表取值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_candidateValues;
                    bool m_candidateValuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DATASOURCETYPEBYTASKTYPE_H_
