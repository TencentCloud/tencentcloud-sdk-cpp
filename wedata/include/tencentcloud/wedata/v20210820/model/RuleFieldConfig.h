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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEFIELDCONFIG_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEFIELDCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/FieldConfig.h>
#include <tencentcloud/wedata/v20210820/model/TableConfig.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 规则变量替换
                */
                class RuleFieldConfig : public AbstractModel
                {
                public:
                    RuleFieldConfig();
                    ~RuleFieldConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取where变量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WhereConfig where变量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FieldConfig> GetWhereConfig() const;

                    /**
                     * 设置where变量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _whereConfig where变量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWhereConfig(const std::vector<FieldConfig>& _whereConfig);

                    /**
                     * 判断参数 WhereConfig 是否已赋值
                     * @return WhereConfig 是否已赋值
                     * 
                     */
                    bool WhereConfigHasBeenSet() const;

                    /**
                     * 获取库表变量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableConfig 库表变量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TableConfig> GetTableConfig() const;

                    /**
                     * 设置库表变量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableConfig 库表变量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableConfig(const std::vector<TableConfig>& _tableConfig);

                    /**
                     * 判断参数 TableConfig 是否已赋值
                     * @return TableConfig 是否已赋值
                     * 
                     */
                    bool TableConfigHasBeenSet() const;

                private:

                    /**
                     * where变量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FieldConfig> m_whereConfig;
                    bool m_whereConfigHasBeenSet;

                    /**
                     * 库表变量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TableConfig> m_tableConfig;
                    bool m_tableConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEFIELDCONFIG_H_
