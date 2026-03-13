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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_ASSETDIMSIMPLEVO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_ASSETDIMSIMPLEVO_H_

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
                * 维度简化对象
                */
                class AssetDimSimpleVO : public AbstractModel
                {
                public:
                    AssetDimSimpleVO();
                    ~AssetDimSimpleVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DimName 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDimName() const;

                    /**
                     * 设置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dimName 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDimName(const std::string& _dimName);

                    /**
                     * 判断参数 DimName 是否已赋值
                     * @return DimName 是否已赋值
                     * 
                     */
                    bool DimNameHasBeenSet() const;

                    /**
                     * 获取编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DimCode 编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDimCode() const;

                    /**
                     * 设置编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dimCode 编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDimCode(const std::string& _dimCode);

                    /**
                     * 判断参数 DimCode 是否已赋值
                     * @return DimCode 是否已赋值
                     * 
                     */
                    bool DimCodeHasBeenSet() const;

                private:

                    /**
                     * ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dimName;
                    bool m_dimNameHasBeenSet;

                    /**
                     * 编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dimCode;
                    bool m_dimCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_ASSETDIMSIMPLEVO_H_
