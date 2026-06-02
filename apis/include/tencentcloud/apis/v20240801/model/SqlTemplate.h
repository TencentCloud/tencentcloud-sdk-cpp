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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_SQLTEMPLATE_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_SQLTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apis/v20240801/model/WizardConfig.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * SqlTemplate SQL模板
                */
                class SqlTemplate : public AbstractModel
                {
                public:
                    SqlTemplate();
                    ~SqlTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>配置方式  script  脚本 wizard 向导</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbConfigMode <p>配置方式  script  脚本 wizard 向导</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDbConfigMode() const;

                    /**
                     * 设置<p>配置方式  script  脚本 wizard 向导</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dbConfigMode <p>配置方式  script  脚本 wizard 向导</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDbConfigMode(const std::string& _dbConfigMode);

                    /**
                     * 判断参数 DbConfigMode 是否已赋值
                     * @return DbConfigMode 是否已赋值
                     * 
                     */
                    bool DbConfigModeHasBeenSet() const;

                    /**
                     * 获取<p>数据源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataSourceID <p>数据源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataSourceID() const;

                    /**
                     * 设置<p>数据源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataSourceID <p>数据源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataSourceID(const std::string& _dataSourceID);

                    /**
                     * 判断参数 DataSourceID 是否已赋值
                     * @return DataSourceID 是否已赋值
                     * 
                     */
                    bool DataSourceIDHasBeenSet() const;

                    /**
                     * 获取<p>Sql代码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Sql <p>Sql代码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSql() const;

                    /**
                     * 设置<p>Sql代码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sql <p>Sql代码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSql(const std::string& _sql);

                    /**
                     * 判断参数 Sql 是否已赋值
                     * @return Sql 是否已赋值
                     * 
                     */
                    bool SqlHasBeenSet() const;

                    /**
                     * 获取<p>向导模式配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WizardConfig <p>向导模式配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WizardConfig GetWizardConfig() const;

                    /**
                     * 设置<p>向导模式配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wizardConfig <p>向导模式配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWizardConfig(const WizardConfig& _wizardConfig);

                    /**
                     * 判断参数 WizardConfig 是否已赋值
                     * @return WizardConfig 是否已赋值
                     * 
                     */
                    bool WizardConfigHasBeenSet() const;

                private:

                    /**
                     * <p>配置方式  script  脚本 wizard 向导</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dbConfigMode;
                    bool m_dbConfigModeHasBeenSet;

                    /**
                     * <p>数据源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataSourceID;
                    bool m_dataSourceIDHasBeenSet;

                    /**
                     * <p>Sql代码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sql;
                    bool m_sqlHasBeenSet;

                    /**
                     * <p>向导模式配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WizardConfig m_wizardConfig;
                    bool m_wizardConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_SQLTEMPLATE_H_
