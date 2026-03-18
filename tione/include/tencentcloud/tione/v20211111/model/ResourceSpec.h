/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_RESOURCESPEC_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_RESOURCESPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * TI资源规格
                */
                class ResourceSpec : public AbstractModel
                {
                public:
                    ResourceSpec();
                    ~ResourceSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规格简称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpecAlias 规格简称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSpecAlias() const;

                    /**
                     * 设置规格简称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _specAlias 规格简称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpecAlias(const std::string& _specAlias);

                    /**
                     * 判断参数 SpecAlias 是否已赋值
                     * @return SpecAlias 是否已赋值
                     * 
                     */
                    bool SpecAliasHasBeenSet() const;

                    /**
                     * 获取规格Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpecId 规格Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSpecId() const;

                    /**
                     * 设置规格Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _specId 规格Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpecId(const std::string& _specId);

                    /**
                     * 判断参数 SpecId 是否已赋值
                     * @return SpecId 是否已赋值
                     * 
                     */
                    bool SpecIdHasBeenSet() const;

                    /**
                     * 获取规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpecName 规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _specName 规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpecName(const std::string& _specName);

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     * 
                     */
                    bool SpecNameHasBeenSet() const;

                private:

                    /**
                     * 规格简称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_specAlias;
                    bool m_specAliasHasBeenSet;

                    /**
                     * 规格Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_specId;
                    bool m_specIdHasBeenSet;

                    /**
                     * 规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_RESOURCESPEC_H_
