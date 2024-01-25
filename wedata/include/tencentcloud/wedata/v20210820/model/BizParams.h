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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BIZPARAMS_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BIZPARAMS_H_

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
                * 业务额外属性
                */
                class BizParams : public AbstractModel
                {
                public:
                    BizParams();
                    ~BizParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字段中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NameCn 字段中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNameCn() const;

                    /**
                     * 设置字段中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nameCn 字段中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNameCn(const std::string& _nameCn);

                    /**
                     * 判断参数 NameCn 是否已赋值
                     * @return NameCn 是否已赋值
                     * 
                     */
                    bool NameCnHasBeenSet() const;

                    /**
                     * 获取字段英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NameEn 字段英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNameEn() const;

                    /**
                     * 设置字段英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nameEn 字段英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNameEn(const std::string& _nameEn);

                    /**
                     * 判断参数 NameEn 是否已赋值
                     * @return NameEn 是否已赋值
                     * 
                     */
                    bool NameEnHasBeenSet() const;

                    /**
                     * 获取iceberg表是否启用高级配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HasAdvancedConfig iceberg表是否启用高级配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHasAdvancedConfig() const;

                    /**
                     * 设置iceberg表是否启用高级配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hasAdvancedConfig iceberg表是否启用高级配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHasAdvancedConfig(const std::string& _hasAdvancedConfig);

                    /**
                     * 判断参数 HasAdvancedConfig 是否已赋值
                     * @return HasAdvancedConfig 是否已赋值
                     * 
                     */
                    bool HasAdvancedConfigHasBeenSet() const;

                private:

                    /**
                     * 字段中文名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nameCn;
                    bool m_nameCnHasBeenSet;

                    /**
                     * 字段英文名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nameEn;
                    bool m_nameEnHasBeenSet;

                    /**
                     * iceberg表是否启用高级配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hasAdvancedConfig;
                    bool m_hasAdvancedConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BIZPARAMS_H_
